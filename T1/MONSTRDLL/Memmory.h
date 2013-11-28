/* ��������� � ������ ��������� �������� �� ��������� ������� */
struct CHARSTRUCT
{
       char  c_SoundName [5];     /* ������ ������ ����� ������� */
       char  c_DefName [512];     /* ��� ������� */
       char  c_Name [128];        /* ��� ������� */
       char  c_PluralName [128];  /* ������������� ��� ������� */
       char  c_Features [512];   /* �������� ������������ */    
};

struct STRUCTOFMEM
{  
    void* p_NewCrAnim;       /* ��������� �� ����� ��������� CrAnim */
    void* p_NewAtack;        /* ��������� �� ����� ��������� ������� �������� ��� ����� */
    void* p_NewDefend;       /* ��������� �� ����� ��������� ������� �������� ��� ������ */
    void* p_NewMonstrStruct; /* ��������� �� ����� ��������� �������� */
    void* p_NewOption;       /* ��������� �� ����� ��������� ... ������� �������� */
    void* p_CharStruct;      /* ��������� �� ������ ���������� ������ �� ��������� �������� */
    void* p_NewShell;        // ��������� �� ����� ��������� ��������
    void* p_ShellDefs;       // ��������� �� �������� ����� �������� ����� ��������
    
    void* p_WogMonSName;     // ��������� �� ��� ������ � ����
    void* p_WogMonPName;     // ��������� �� ��� ������ � ����
    void* p_WogMonSpec;      // ��������� �� �������� ��-� �������
    
    void* p_NewSpriteCprsm;  // ��������� �� ��������� �����
    void* p_NewSpriteMem;    // ��������� � ����
    void* p_NewCadreCprsm;   // ��������� �� ��������� �������
    void* p_NewPaleate;      // ��������� �� ������� �������� 
    
    void* p_NewSpriteTWC;  // ��������� �� ��������� �����
    void* p_NewSpriteMemTWC;    // ��������� � ����
    void* p_NewCadreTWC;   // ��������� �� ��������� �������
    void* p_NewPaleateTWC;      // ��������� �� ������� �������� 
    
    void* p_NewSpriteMemAVW; 
    
    void* p_NewSpriteAVW1;  // ��������� �� ��������� �����
    void* p_NewCadreAVW1;   // ��������� �� ��������� �������
    void* p_NewPaleateAVW1;      // ��������� �� ������� �������� 
    
    void* p_NewSpriteAVW2;  // ��������� �� ��������� �����
    void* p_NewCadreAVW2;   // ��������� �� ��������� �������
    void* p_NewPaleateAVW2;      // ��������� �� ������� ��������
    
    void* p_DevPalette;      // ��������� �� ����������� ������ �������
    
};

extern STRUCTOFMEM TStructOfMem;

struct STRUCTOFMONSTR
{
       int   i_Town;        /* ����� ������ � �������� ����������� ������*/
       int   i_Level;       /* ������� ������� � ����� */
       char* pc_SoundName;   /* ������ ������ ����� ������� */
       char* pc_DefName;     /* ��������� �� ��� ������� */
       int   i_Flags;       /* ����� ������� */
       char* pc_Name;        /* ��������� �� ��� ������� */
       char* pc_PluralName;  /* ��������� �� ������������� ��� ������� */
       char* pc_Features;    /* ��������� �� �������� ������������ */
       int   i_CostWood;    /* ��������� ������� - ������ */ 
       int   i_CostMercury; /* ... ����� */
       int   i_CostOre;     /* ... ������ */ 
       int   i_CostSulfor;  /* ... ���� */
       int   i_CostCrystal; /* ... �������� */
       int   i_CostGems;    /* ... ����� */
       int   i_CostGold;    /* ... ������ */
       int   i_FightValue;  
       int   i_AiValue;
       int   i_Growth;      /* ������� */
       int   i_HordeGrowth;
       int   i_HitPoints;   /* ������� */
       int   i_Speed;       /* �������� */
       int   i_Attack;      /* ����� */
       int   i_Defence;     /* ������ */
       int   i_DamageLow;   /* ���� ����������� */
       int   i_DamageHigh;  /* ���� ������������ */
       int   i_Shots;       /* ���-�� ��������� */
       int   i_Spells;      /* ���-�� ����� */
       int   i_AdvLow;      
       int   i_AdvHigh;
}; 

/* ��������� cranim � ����� */
struct CRANIM
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

struct LOADDEF
{
    BYTE jmp;
    char Adr [4];    
};

struct SPRITEINMEM
{
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
    void* pv_CadreData;
};

struct GROUPS
{
    int i_Count;
    int i_Count1;
    void* T_Sprite;
};

struct DEF
{
    void* p_Class;
    char c_Name [16];
    int i_Type;
    int i_RefCount;
    GROUPS** T_Group;
    void* p_PaleteDev;
    void* p_Palette;
    int i_GroupsCount;
    void* p_ActiveGroup;
    int i_Width;
    int i_Height;    
};

bool AllocateMemmory(int MaxMonstr, STRUCTOFMEM* p_StructOfMem);
bool CopyOldMonstrsStruct(STRUCTOFMEM* P_StructOfMem);
bool PatchExe (int MaxMonstr, STRUCTOFMEM* P_StructOfMem);
bool LoadNewMonstrs(STRUCTOFMEM* P_StructOfMem);
void LoadSnar (int NumMonstr, int TypeSnar, char* &p_NameSnar);
void LoadPortrets (DEF* TDef);
void _Hook (int* p_DevicePal, SPRITEINMEM* p_sprite);