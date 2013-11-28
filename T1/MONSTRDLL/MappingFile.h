#include <windows.h>
#include "..\structs.h"

struct MEMVIEWOFFILE
{
       void* hFile;
       void* hMap;
       void* MapView;
};//T_ViewFile;

/* ������� ������� � ����� */
struct STRUCTOFMONSTRINFILE
{
       int   i_Town;              /* ����� ������ � �������� ����������� ������*/
       int   i_Level;             /* ������� ������� � ����� */
       char  c_SoundName [5];     /* ������ ������ ����� ������� */
       char  c_DefName [512];     /* ��� ������� */
       int   i_Flags;             /* ����� ������� */
       char  c_Name [128];        /* ��� ������� */
       char  c_PluralName [128];  /* ������������� ��� ������� */
       char  c_Features [512];   /* �������� ������������ */
       int   i_CostWood;          /* ��������� ������� - ������ */ 
       int   i_CostMercury;       /* ... ����� */
       int   i_CostOre;           /* ... ������ */ 
       int   i_CostSulfor;        /* ... ���� */
       int   i_CostCrystal;       /* ... �������� */
       int   i_CostGems;          /* ... ����� */
       int   i_CostGold;          /* ... ������ */
       int   i_FightValue;  
       int   i_AiValue;
       int   i_Growth;             /* ������� */
       int   i_HordeGrowth;
       int   i_HitPoints;         /* ������� */
       int   i_Speed;             /* �������� */
       int   i_Attack;            /* ����� */
       int   i_Defence;           /* ������ */
       int   i_DamageLow;         /* ���� ����������� */
       int   i_DamageHigh;        /* ���� ������������ */
       int   i_Shots;             /* ���-�� ��������� */
       int   i_Spells;            /* ������ */
       int   i_AdvLow;      
       int   i_AdvHigh;
};   

/* ��������� cranim � ����� */
struct CRANIMINFILE
{
    WORD w_anim1;
    WORD w_anim2;
    WORD w_anim3;
    WORD w_anim4;
    WORD w_anim5;
    WORD w_anim6;
    float f_anim7;
    float f_anim8;
    float f_anim9;
    float f_anim10;
    float f_anim11;
    float f_anim12;
    float f_anim13;
    float f_anim14;
    float f_anim15;
    float f_anim16;
    float f_anim17;
    float f_anim18;
    int i_anim19;
    int i_anim20;
    int i_anim21;
    int i_anim22;
    int i_anim23;
    int i_anim24;    
};


/* ��������� ��-� �������� � ����� */
struct FUTURES
{
    BYTE b_atack_fut;
    BYTE b_defend_fut;
    BYTE b_option_fut;
    BYTE random;
    BYTE garpy;
    BYTE b_option_3;
    BYTE b_option_4;
    BYTE b_option_5;
    BYTE b_option_6;
    BYTE b_option_7;
    BYTE b_option_8;
    BYTE b_option_9;
    BYTE b_option_10;
	RESISTSTRUCT StrResist;
	CASTMAGIC StrMagicCast;
};

struct SHELL
{
    BYTE b_type_of_shell;
    char c_name_def_of_shell [32];
};

struct SPRITE
{
    char c_NameDef [512];   
    void* p_Class;
    char c_Name[12];
    int i_Unk;
    int i_Unk1;
    int i_RefCount;
    int i_DataSize;
    int i_CadreSize;
    int i_CompressionType;
    int i_Width;
    int i_Height;
    int i_FrameWidth;
    int i_FrameHeight;
    int i_FrameLeft;
    int i_FrameTop;
    int i_Unk2;
    BYTE b_CadreData [0x3000]; 
    BYTE b_Paleate [768];  
};

bool GetMemViewOfFile(char* FileName, MEMVIEWOFFILE* p_ViewFile);
void CleanMemView (MEMVIEWOFFILE* p_ViewFile);

