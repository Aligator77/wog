#define NUMBULDINGS 44
#define NUMCASTLE 20

struct BULDINGSCOORD{
	unsigned short XCoordinate;
	unsigned short YCoordinate;
};

struct BULDINGSCOST{
	int wood;
	int mercury;
	int ore;
	int sulfor;
	int crystal;
	int gems;
	int gold;
};

struct CASTLEBULDINGS{
	char* BuldingName;        // �������� ��������
	char* BuldingFutures;     // �������� ��������
	char* BuldingDefName;     // ��� ��������
	char* BorderDefName;      // ��� ���������
	BULDINGSCOORD Coordinats; // ���������� ������
	BULDINGSCOST  CostBuld;   // ��������� ������ 
	bool IsBuld;              // ����������� ��� ��������
	int TypeMonstr;           // ��� ��������� ��� �������
	int TypeResource;         // ��� ��������� ��� �������
	int WarMashine;           // ��� ������� ��� ������
	int BuldForDecor;         // ����������� ������
};

struct CASTELS{
	char SIGNATURE [4];
	CASTLEBULDINGS Buldings[NUMBULDINGS];
};

extern CASTELS Castels [NUMCASTLE];

// ��������� ��� ������ � ������///////////////////////////

struct BUILDNAME{
	char* BuldingName;
};

struct BORDNAME{
	char* BorderName;
};

struct CASTELSINMEMORY{
	BUILDNAME     DefNameBuild[NUMCASTLE][NUMBULDINGS];   // ������ ��� �������� ����� ������
    BORDNAME      DefBorderName[NUMCASTLE][NUMBULDINGS];  // ������ ��� ��������� ������
	BULDINGSCOORD Coordinate[NUMCASTLE][NUMBULDINGS*6/4];     // ���������� ������ � ������ ������

};

extern CASTELSINMEMORY CastInMem;


