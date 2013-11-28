#include "dll.h"


/*---------------------------------------------------------------------------------*/     
// ������� ����������� ����� � ������ ��� ������� ������ � ���
// ���������� ��������� � �������� ��� ������� ����      
bool GetMemViewOfFile(char* FileName, MEMVIEWOFFILE* p_ViewFile)
{
OFSTRUCT offStruct;
                     
    p_ViewFile->hFile = (void*)OpenFile(FileName, &offStruct, OF_READ);
        if ((int)p_ViewFile->hFile == HFILE_ERROR)
        return FALSE;
                    
    p_ViewFile->hMap = CreateFileMapping(p_ViewFile->hFile, 0, PAGE_READONLY, 0, 0, 0);
        if (p_ViewFile->hMap == NULL)                    
        {
           CloseHandle(p_ViewFile->hFile);                           
           return FALSE;
        }
                                    
    p_ViewFile->MapView  =  MapViewOfFile(p_ViewFile->hMap, FILE_MAP_READ, 0, 0, 0);
        if (p_ViewFile->MapView == NULL)
        {
           CloseHandle(p_ViewFile->hMap);
           CloseHandle(p_ViewFile->hFile);
           return FALSE;
        }  
        
return TRUE; 
}  
 /*----------------------------------------------------------------------------------*/  
 
 /*----------------------------------------------------------------------------------*/
 // ��������� ������� ����������� ����� ������� ����������� ����� � ������
 
void CleanMemView (MEMVIEWOFFILE* p_ViewFile)
{
    UnmapViewOfFile(p_ViewFile->MapView);
    CloseHandle(p_ViewFile->hMap);
    CloseHandle(p_ViewFile->hFile);
}  
 /*----------------------------------------------------------------------------------*/
