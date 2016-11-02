FILE * fopen_path ( char * , char * , char * ) ;
void zero_data(void);
void read_datafiles(char *);
void readpid(char *);
void readmmxdata(char *);
void torphase(int, float *, int *);
void read_parameterfile(char *);
void numeral(int, char *, int);
void message_alert(char *, char *);
int FetchRecord(FILE *, char *);
void read_added_const(void);
int check_dipoleconst(int,int,float);
int check_torsionconst(int,int,int,int,float,float,float,int,int,int);
int check_torsion4const(int,int,int,int,float,float,float,int,int,int);
int check_torsion5const(int,int,int,int,float,float,float,int,int,int);
int check_angleconst(int,int,int,float,float,float,float);
int check_angle5const(int,int,int,float,float,float,float);
int check_angle4const(int,int,int,float,float,float,float);
int check_angle3const(int,int,int,float,float,float,float);
int check_bondconst(int,int,float,float);
int check_bond5const(int,int,float,float);
int check_bond4const(int,int,float,float);
int check_bond3const(int,int,float,float);
int check_opbend(int,int,int,int,float);
int check_strbnd(int,int,int,float,float,float);
int check_vdwpr(int,int,float,float);
int check_bndchrg(int,int,float);
int check_bndchrgdel(int,int,float);
int check_charge(int,float);
void get_added_const(void);