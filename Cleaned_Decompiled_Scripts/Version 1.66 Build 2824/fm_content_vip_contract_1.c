//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
char* sLocal_18=NULL;
var uLocal_19=0;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
float fLocal_28=0f;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
float fLocal_62=0f;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=-1;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
struct<25> Local_114={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_115=0;
bool bLocal_116=0;
bool bLocal_117=0;
int iLocal_118=0;
int iLocal_119=0;
int iLocal_120=0;
int iLocal_121=0;
float fLocal_122=0f;
int iLocal_123[5]={
0, 0, 0, 0, 0 
};
float fLocal_124=0f;
float fLocal_125=0f;
float fLocal_126=0f;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
int iLocal_130=0;
int iLocal_131=0;
int iLocal_132=0;
int iLocal_133=0;
struct<2> Local_134={
0, 0 
};
struct<2> Local_135[8];
struct<2> Local_136={
0, 0 
};
struct<4> Local_137[8];
float fLocal_138=0f;
float fLocal_139=0f;
float fLocal_140=0f;
float fLocal_141=0f;
float fLocal_142=0f;
int iLocal_143=0;
int iLocal_144[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_145=0;
int iLocal_146=0;
int iLocal_147=0;
float fLocal_148=0f;
float fLocal_149=0f;
struct<3> Local_150={
0, 0, 0 
};
float fLocal_151=0f;
float fLocal_152=0f;
var uLocal_153=0;
struct<16> Local_154={
0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0 
};
var uLocal_155=0;
var uLocal_156=0;
struct<46> Local_157={
-1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0 
};
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=-1;
var uLocal_164=-1;
var uLocal_165=-1;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
struct<3016> Local_171={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 30, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 22, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 0, 19, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 30, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 4, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 4, -1, -1, -1, -1, 3, 15000, 5000, 1128792064, 0, 0, 2, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 2, 0, 1, 0, 0, 5, 1, -1, 12, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 1, 0, 0, 5, 1, -1, 12, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1065353216, 1, 0, 0, 0, 0, 0, 8, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 3, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, 0, 6, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1123680256, 0, 800, 800, 0, 1, 0, 0, 0, 0, 0, 0, 1112014848, 1056964608, 0, 4, 0, 0, 0, 0, 0, 0, 8192, 0, 0, 0, 0, 0, 0, 8192, 0, 0, 0, 0, 0, 0, 8192, 0, 0, 0, 0, 0, 0, 8192, 0, 1, -1, 0, 0, 0, 0, 0, 261, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1123680256, 0, 800, 800, 0, 1, 0, 0, 0, 0, 0, 0, 1112014848, 1056964608, 0, 4, 0, 0, 0, 0, 0, 0, 8192, 0, 0, 0, 0, 0, 0, 8192, 0, 0, 0, 0, 0, 0, 8192, 0, 0, 0, 0, 0, 0, 8192, 0, 1, -1, 0, 0, 0, 0, 0, 261, 2, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, -1, 1090728755, 1077936128, 1052266988, -1, 12, 1065353216, 0, 1, 0, -1, 1090728755, 1077936128, 1052266988, -1, 12, 1065353216, 0, 4, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 
};
var uLocal_172=20;
var uLocal_173=0;
var uLocal_174=-1;
var uLocal_175=0;
var uLocal_176=-1;
var uLocal_177=0;
var uLocal_178=-1;
var uLocal_179=0;
var uLocal_180=-1;
var uLocal_181=0;
var uLocal_182=-1;
var uLocal_183=0;
var uLocal_184=-1;
var uLocal_185=0;
var uLocal_186=-1;
var uLocal_187=0;
var uLocal_188=-1;
var uLocal_189=0;
var uLocal_190=-1;
var uLocal_191=0;
var uLocal_192=-1;
var uLocal_193=0;
var uLocal_194=-1;
var uLocal_195=0;
var uLocal_196=-1;
var uLocal_197=0;
var uLocal_198=-1;
var uLocal_199=0;
var uLocal_200=-1;
var uLocal_201=0;
var uLocal_202=-1;
var uLocal_203=0;
var uLocal_204=-1;
var uLocal_205=0;
var uLocal_206=-1;
var uLocal_207=0;
var uLocal_208=-1;
var uLocal_209=0;
var uLocal_210=-1;
var uLocal_211=0;
var uLocal_212=-1;
struct<847> Local_213={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<20> Local_214={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<29> Local_215[13];
struct<30> Local_216[17];
struct<21> Local_217={
30, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_218=0;
var uLocal_219=1;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
var uLocal_223=0;
var uLocal_224=0;
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=7;
var uLocal_230=0;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
var uLocal_236=0;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=1;
var uLocal_241=0;
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=7;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=1;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=0;
var uLocal_267=0;
var uLocal_268=0;
var uLocal_269=0;
var uLocal_270=0;
var uLocal_271=7;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=0;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=0;
var uLocal_278=0;
var uLocal_279=0;
var uLocal_280=0;
var uLocal_281=0;
var uLocal_282=1;
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
var uLocal_286=0;
var uLocal_287=0;
var uLocal_288=0;
var uLocal_289=0;
var uLocal_290=0;
var uLocal_291=0;
var uLocal_292=7;
var uLocal_293=0;
var uLocal_294=0;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=1;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=7;
var uLocal_314=0;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=0;
var uLocal_318=0;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=1;
var uLocal_325=0;
var uLocal_326=0;
var uLocal_327=0;
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=7;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
var uLocal_338=0;
var uLocal_339=0;
var uLocal_340=0;
var uLocal_341=0;
var uLocal_342=0;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=1;
var uLocal_346=0;
var uLocal_347=0;
var uLocal_348=0;
var uLocal_349=0;
var uLocal_350=0;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=0;
var uLocal_354=0;
var uLocal_355=7;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=0;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=0;
var uLocal_363=0;
var uLocal_364=0;
var uLocal_365=0;
var uLocal_366=1;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
var uLocal_371=0;
var uLocal_372=0;
var uLocal_373=0;
var uLocal_374=0;
var uLocal_375=0;
var uLocal_376=7;
var uLocal_377=0;
var uLocal_378=0;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=0;
var uLocal_383=0;
var uLocal_384=0;
var uLocal_385=0;
var uLocal_386=0;
var uLocal_387=1;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=0;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=0;
var uLocal_394=0;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=7;
var uLocal_398=0;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=0;
var uLocal_403=0;
var uLocal_404=0;
var uLocal_405=0;
var uLocal_406=0;
var uLocal_407=0;
var uLocal_408=1;
var uLocal_409=0;
var uLocal_410=0;
var uLocal_411=0;
var uLocal_412=0;
var uLocal_413=0;
var uLocal_414=0;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=7;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=0;
var uLocal_422=0;
var uLocal_423=0;
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=1;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=0;
var uLocal_434=0;
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=0;
var uLocal_439=7;
var uLocal_440=0;
var uLocal_441=0;
var uLocal_442=0;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
var uLocal_447=0;
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=1;
var uLocal_451=0;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=0;
var uLocal_455=0;
var uLocal_456=0;
var uLocal_457=0;
var uLocal_458=0;
var uLocal_459=0;
var uLocal_460=7;
var uLocal_461=0;
var uLocal_462=0;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=0;
var uLocal_467=0;
var uLocal_468=0;
var uLocal_469=0;
var uLocal_470=0;
var uLocal_471=1;
var uLocal_472=0;
var uLocal_473=0;
var uLocal_474=0;
var uLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=0;
var uLocal_479=0;
var uLocal_480=0;
var uLocal_481=7;
var uLocal_482=0;
var uLocal_483=0;
var uLocal_484=0;
var uLocal_485=0;
var uLocal_486=0;
var uLocal_487=0;
var uLocal_488=0;
var uLocal_489=0;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=1;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=0;
var uLocal_498=0;
var uLocal_499=0;
var uLocal_500=0;
var uLocal_501=0;
var uLocal_502=7;
var uLocal_503=0;
var uLocal_504=0;
var uLocal_505=0;
var uLocal_506=0;
var uLocal_507=0;
var uLocal_508=0;
var uLocal_509=0;
var uLocal_510=0;
var uLocal_511=0;
var uLocal_512=0;
var uLocal_513=1;
var uLocal_514=0;
var uLocal_515=0;
var uLocal_516=0;
var uLocal_517=0;
var uLocal_518=0;
var uLocal_519=0;
var uLocal_520=0;
var uLocal_521=0;
var uLocal_522=0;
var uLocal_523=7;
var uLocal_524=0;
var uLocal_525=0;
var uLocal_526=0;
var uLocal_527=0;
var uLocal_528=0;
var uLocal_529=0;
var uLocal_530=0;
var uLocal_531=0;
var uLocal_532=0;
var uLocal_533=0;
var uLocal_534=1;
var uLocal_535=0;
var uLocal_536=0;
var uLocal_537=0;
var uLocal_538=0;
var uLocal_539=0;
var uLocal_540=0;
var uLocal_541=0;
var uLocal_542=0;
var uLocal_543=0;
var uLocal_544=7;
var uLocal_545=0;
var uLocal_546=0;
var uLocal_547=0;
var uLocal_548=0;
var uLocal_549=0;
var uLocal_550=0;
var uLocal_551=0;
var uLocal_552=0;
var uLocal_553=0;
var uLocal_554=0;
var uLocal_555=1;
var uLocal_556=0;
var uLocal_557=0;
var uLocal_558=0;
var uLocal_559=0;
var uLocal_560=0;
var uLocal_561=0;
var uLocal_562=0;
var uLocal_563=0;
var uLocal_564=0;
var uLocal_565=7;
var uLocal_566=0;
var uLocal_567=0;
var uLocal_568=0;
var uLocal_569=0;
var uLocal_570=0;
var uLocal_571=0;
var uLocal_572=0;
var uLocal_573=0;
var uLocal_574=0;
var uLocal_575=0;
var uLocal_576=1;
var uLocal_577=0;
var uLocal_578=0;
var uLocal_579=0;
var uLocal_580=0;
var uLocal_581=0;
var uLocal_582=0;
var uLocal_583=0;
var uLocal_584=0;
var uLocal_585=0;
var uLocal_586=7;
var uLocal_587=0;
var uLocal_588=0;
var uLocal_589=0;
var uLocal_590=0;
var uLocal_591=0;
var uLocal_592=0;
var uLocal_593=0;
var uLocal_594=0;
var uLocal_595=0;
var uLocal_596=0;
var uLocal_597=1;
var uLocal_598=0;
var uLocal_599=0;
var uLocal_600=0;
var uLocal_601=0;
var uLocal_602=0;
var uLocal_603=0;
var uLocal_604=0;
var uLocal_605=0;
var uLocal_606=0;
var uLocal_607=7;
var uLocal_608=0;
var uLocal_609=0;
var uLocal_610=0;
var uLocal_611=0;
var uLocal_612=0;
var uLocal_613=0;
var uLocal_614=0;
var uLocal_615=0;
var uLocal_616=0;
var uLocal_617=0;
var uLocal_618=1;
var uLocal_619=0;
var uLocal_620=0;
var uLocal_621=0;
var uLocal_622=0;
var uLocal_623=0;
var uLocal_624=0;
var uLocal_625=0;
var uLocal_626=0;
var uLocal_627=0;
var uLocal_628=7;
var uLocal_629=0;
var uLocal_630=0;
var uLocal_631=0;
var uLocal_632=0;
var uLocal_633=0;
var uLocal_634=0;
var uLocal_635=0;
var uLocal_636=0;
var uLocal_637=0;
var uLocal_638=0;
var uLocal_639=1;
var uLocal_640=0;
var uLocal_641=0;
var uLocal_642=0;
var uLocal_643=0;
var uLocal_644=0;
var uLocal_645=0;
var uLocal_646=0;
var uLocal_647=0;
var uLocal_648=0;
var uLocal_649=7;
var uLocal_650=0;
var uLocal_651=0;
var uLocal_652=0;
var uLocal_653=0;
var uLocal_654=0;
var uLocal_655=0;
var uLocal_656=0;
var uLocal_657=0;
var uLocal_658=0;
var uLocal_659=0;
var uLocal_660=1;
var uLocal_661=0;
var uLocal_662=0;
var uLocal_663=0;
var uLocal_664=0;
var uLocal_665=0;
var uLocal_666=0;
var uLocal_667=0;
var uLocal_668=0;
var uLocal_669=0;
var uLocal_670=7;
var uLocal_671=0;
var uLocal_672=0;
var uLocal_673=0;
var uLocal_674=0;
var uLocal_675=0;
var uLocal_676=0;
var uLocal_677=0;
var uLocal_678=0;
var uLocal_679=0;
var uLocal_680=0;
var uLocal_681=1;
var uLocal_682=0;
var uLocal_683=0;
var uLocal_684=0;
var uLocal_685=0;
var uLocal_686=0;
var uLocal_687=0;
var uLocal_688=0;
var uLocal_689=0;
var uLocal_690=0;
var uLocal_691=7;
var uLocal_692=0;
var uLocal_693=0;
var uLocal_694=0;
var uLocal_695=0;
var uLocal_696=0;
var uLocal_697=0;
var uLocal_698=0;
var uLocal_699=0;
var uLocal_700=0;
var uLocal_701=0;
var uLocal_702=1;
var uLocal_703=0;
var uLocal_704=0;
var uLocal_705=0;
var uLocal_706=0;
var uLocal_707=0;
var uLocal_708=0;
var uLocal_709=0;
var uLocal_710=0;
var uLocal_711=0;
var uLocal_712=7;
var uLocal_713=0;
var uLocal_714=0;
var uLocal_715=0;
var uLocal_716=0;
var uLocal_717=0;
var uLocal_718=0;
var uLocal_719=0;
var uLocal_720=0;
var uLocal_721=0;
var uLocal_722=0;
var uLocal_723=1;
var uLocal_724=0;
var uLocal_725=0;
var uLocal_726=0;
var uLocal_727=0;
var uLocal_728=0;
var uLocal_729=0;
var uLocal_730=0;
var uLocal_731=0;
var uLocal_732=0;
var uLocal_733=7;
var uLocal_734=0;
var uLocal_735=0;
var uLocal_736=0;
var uLocal_737=0;
var uLocal_738=0;
var uLocal_739=0;
var uLocal_740=0;
var uLocal_741=0;
var uLocal_742=0;
var uLocal_743=0;
var uLocal_744=1;
var uLocal_745=0;
var uLocal_746=0;
var uLocal_747=0;
var uLocal_748=0;
var uLocal_749=0;
var uLocal_750=0;
var uLocal_751=0;
var uLocal_752=0;
var uLocal_753=0;
var uLocal_754=7;
var uLocal_755=0;
var uLocal_756=0;
var uLocal_757=0;
var uLocal_758=0;
var uLocal_759=0;
var uLocal_760=0;
var uLocal_761=0;
var uLocal_762=0;
var uLocal_763=0;
var uLocal_764=0;
var uLocal_765=1;
var uLocal_766=0;
var uLocal_767=0;
var uLocal_768=0;
var uLocal_769=0;
var uLocal_770=0;
var uLocal_771=0;
var uLocal_772=0;
var uLocal_773=0;
var uLocal_774=0;
var uLocal_775=7;
var uLocal_776=0;
var uLocal_777=0;
var uLocal_778=0;
var uLocal_779=0;
var uLocal_780=0;
var uLocal_781=0;
var uLocal_782=0;
var uLocal_783=0;
var uLocal_784=0;
var uLocal_785=0;
var uLocal_786=1;
var uLocal_787=0;
var uLocal_788=0;
var uLocal_789=0;
var uLocal_790=0;
var uLocal_791=0;
var uLocal_792=0;
var uLocal_793=0;
var uLocal_794=0;
var uLocal_795=0;
var uLocal_796=7;
var uLocal_797=0;
var uLocal_798=0;
var uLocal_799=0;
var uLocal_800=0;
var uLocal_801=0;
var uLocal_802=0;
var uLocal_803=0;
var uLocal_804=0;
var uLocal_805=0;
var uLocal_806=0;
var uLocal_807=1;
var uLocal_808=0;
var uLocal_809=0;
var uLocal_810=0;
var uLocal_811=0;
var uLocal_812=0;
var uLocal_813=0;
var uLocal_814=0;
var uLocal_815=0;
var uLocal_816=0;
var uLocal_817=7;
var uLocal_818=0;
var uLocal_819=0;
var uLocal_820=0;
var uLocal_821=0;
var uLocal_822=0;
var uLocal_823=0;
var uLocal_824=0;
var uLocal_825=0;
var uLocal_826=0;
var uLocal_827=0;
var uLocal_828=0;
var uLocal_829=0;
var uLocal_830=0;
var uLocal_831=7;
var uLocal_832=0;
var uLocal_833=8;
var uLocal_834=-1;
var uLocal_835=6;
var uLocal_836=-1;
var uLocal_837=0;
var uLocal_838=-1;
var uLocal_839=0;
var uLocal_840=-1;
var uLocal_841=0;
var uLocal_842=-1;
var uLocal_843=0;
var uLocal_844=-1;
var uLocal_845=0;
var uLocal_846=-1;
var uLocal_847=0;
var uLocal_848=0;
var uLocal_849=0;
var uLocal_850=0;
var uLocal_851=0;
var uLocal_852=0;
var uLocal_853=-1;
var uLocal_854=6;
var uLocal_855=-1;
var uLocal_856=0;
var uLocal_857=-1;
var uLocal_858=0;
var uLocal_859=-1;
var uLocal_860=0;
var uLocal_861=-1;
var uLocal_862=0;
var uLocal_863=-1;
var uLocal_864=0;
var uLocal_865=-1;
var uLocal_866=0;
var uLocal_867=0;
var uLocal_868=0;
var uLocal_869=0;
var uLocal_870=0;
var uLocal_871=0;
var uLocal_872=-1;
var uLocal_873=6;
var uLocal_874=-1;
var uLocal_875=0;
var uLocal_876=-1;
var uLocal_877=0;
var uLocal_878=-1;
var uLocal_879=0;
var uLocal_880=-1;
var uLocal_881=0;
var uLocal_882=-1;
var uLocal_883=0;
var uLocal_884=-1;
var uLocal_885=0;
var uLocal_886=0;
var uLocal_887=0;
var uLocal_888=0;
var uLocal_889=0;
var uLocal_890=0;
var uLocal_891=-1;
var uLocal_892=6;
var uLocal_893=-1;
var uLocal_894=0;
var uLocal_895=-1;
var uLocal_896=0;
var uLocal_897=-1;
var uLocal_898=0;
var uLocal_899=-1;
var uLocal_900=0;
var uLocal_901=-1;
var uLocal_902=0;
var uLocal_903=-1;
var uLocal_904=0;
var uLocal_905=0;
var uLocal_906=0;
var uLocal_907=0;
var uLocal_908=0;
var uLocal_909=0;
var uLocal_910=-1;
var uLocal_911=6;
var uLocal_912=-1;
var uLocal_913=0;
var uLocal_914=-1;
var uLocal_915=0;
var uLocal_916=-1;
var uLocal_917=0;
var uLocal_918=-1;
var uLocal_919=0;
var uLocal_920=-1;
var uLocal_921=0;
var uLocal_922=-1;
var uLocal_923=0;
var uLocal_924=0;
var uLocal_925=0;
var uLocal_926=0;
var uLocal_927=0;
var uLocal_928=0;
var uLocal_929=-1;
var uLocal_930=6;
var uLocal_931=-1;
var uLocal_932=0;
var uLocal_933=-1;
var uLocal_934=0;
var uLocal_935=-1;
var uLocal_936=0;
var uLocal_937=-1;
var uLocal_938=0;
var uLocal_939=-1;
var uLocal_940=0;
var uLocal_941=-1;
var uLocal_942=0;
var uLocal_943=0;
var uLocal_944=0;
var uLocal_945=0;
var uLocal_946=0;
var uLocal_947=0;
var uLocal_948=-1;
var uLocal_949=6;
var uLocal_950=-1;
var uLocal_951=0;
var uLocal_952=-1;
var uLocal_953=0;
var uLocal_954=-1;
var uLocal_955=0;
var uLocal_956=-1;
var uLocal_957=0;
var uLocal_958=-1;
var uLocal_959=0;
var uLocal_960=-1;
var uLocal_961=0;
var uLocal_962=0;
var uLocal_963=0;
var uLocal_964=0;
var uLocal_965=0;
var uLocal_966=0;
var uLocal_967=-1;
var uLocal_968=6;
var uLocal_969=-1;
var uLocal_970=0;
var uLocal_971=-1;
var uLocal_972=0;
var uLocal_973=-1;
var uLocal_974=0;
var uLocal_975=-1;
var uLocal_976=0;
var uLocal_977=-1;
var uLocal_978=0;
var uLocal_979=-1;
var uLocal_980=0;
var uLocal_981=0;
var uLocal_982=0;
var uLocal_983=0;
var uLocal_984=0;
var uLocal_985=0;
var uLocal_986=0;
var uLocal_987=8;
var uLocal_988=-1;
var uLocal_989=6;
var uLocal_990=-1;
var uLocal_991=0;
var uLocal_992=-1;
var uLocal_993=0;
var uLocal_994=-1;
var uLocal_995=0;
var uLocal_996=-1;
var uLocal_997=0;
var uLocal_998=-1;
var uLocal_999=0;
var uLocal_1000=-1;
var uLocal_1001=0;
var uLocal_1002=0;
var uLocal_1003=0;
var uLocal_1004=0;
var uLocal_1005=0;
var uLocal_1006=0;
var uLocal_1007=-1;
var uLocal_1008=6;
var uLocal_1009=-1;
var uLocal_1010=0;
var uLocal_1011=-1;
var uLocal_1012=0;
var uLocal_1013=-1;
var uLocal_1014=0;
var uLocal_1015=-1;
var uLocal_1016=0;
var uLocal_1017=-1;
var uLocal_1018=0;
var uLocal_1019=-1;
var uLocal_1020=0;
var uLocal_1021=0;
var uLocal_1022=0;
var uLocal_1023=0;
var uLocal_1024=0;
var uLocal_1025=0;
var uLocal_1026=-1;
var uLocal_1027=6;
var uLocal_1028=-1;
var uLocal_1029=0;
var uLocal_1030=-1;
var uLocal_1031=0;
var uLocal_1032=-1;
var uLocal_1033=0;
var uLocal_1034=-1;
var uLocal_1035=0;
var uLocal_1036=-1;
var uLocal_1037=0;
var uLocal_1038=-1;
var uLocal_1039=0;
var uLocal_1040=0;
var uLocal_1041=0;
var uLocal_1042=0;
var uLocal_1043=0;
var uLocal_1044=0;
var uLocal_1045=-1;
var uLocal_1046=6;
var uLocal_1047=-1;
var uLocal_1048=0;
var uLocal_1049=-1;
var uLocal_1050=0;
var uLocal_1051=-1;
var uLocal_1052=0;
var uLocal_1053=-1;
var uLocal_1054=0;
var uLocal_1055=-1;
var uLocal_1056=0;
var uLocal_1057=-1;
var uLocal_1058=0;
var uLocal_1059=0;
var uLocal_1060=0;
var uLocal_1061=0;
var uLocal_1062=0;
var uLocal_1063=0;
var uLocal_1064=-1;
var uLocal_1065=6;
var uLocal_1066=-1;
var uLocal_1067=0;
var uLocal_1068=-1;
var uLocal_1069=0;
var uLocal_1070=-1;
var uLocal_1071=0;
var uLocal_1072=-1;
var uLocal_1073=0;
var uLocal_1074=-1;
var uLocal_1075=0;
var uLocal_1076=-1;
var uLocal_1077=0;
var uLocal_1078=0;
var uLocal_1079=0;
var uLocal_1080=0;
var uLocal_1081=0;
var uLocal_1082=0;
var uLocal_1083=-1;
var uLocal_1084=6;
var uLocal_1085=-1;
var uLocal_1086=0;
var uLocal_1087=-1;
var uLocal_1088=0;
var uLocal_1089=-1;
var uLocal_1090=0;
var uLocal_1091=-1;
var uLocal_1092=0;
var uLocal_1093=-1;
var uLocal_1094=0;
var uLocal_1095=-1;
var uLocal_1096=0;
var uLocal_1097=0;
var uLocal_1098=0;
var uLocal_1099=0;
var uLocal_1100=0;
var uLocal_1101=0;
var uLocal_1102=-1;
var uLocal_1103=6;
var uLocal_1104=-1;
var uLocal_1105=0;
var uLocal_1106=-1;
var uLocal_1107=0;
var uLocal_1108=-1;
var uLocal_1109=0;
var uLocal_1110=-1;
var uLocal_1111=0;
var uLocal_1112=-1;
var uLocal_1113=0;
var uLocal_1114=-1;
var uLocal_1115=0;
var uLocal_1116=0;
var uLocal_1117=0;
var uLocal_1118=0;
var uLocal_1119=0;
var uLocal_1120=0;
var uLocal_1121=-1;
var uLocal_1122=6;
var uLocal_1123=-1;
var uLocal_1124=0;
var uLocal_1125=-1;
var uLocal_1126=0;
var uLocal_1127=-1;
var uLocal_1128=0;
var uLocal_1129=-1;
var uLocal_1130=0;
var uLocal_1131=-1;
var uLocal_1132=0;
var uLocal_1133=-1;
var uLocal_1134=0;
var uLocal_1135=0;
var uLocal_1136=0;
var uLocal_1137=0;
var uLocal_1138=0;
var uLocal_1139=0;
var uLocal_1140=0;
var uLocal_1141=8;
var uLocal_1142=-1;
var uLocal_1143=6;
var uLocal_1144=-1;
var uLocal_1145=0;
var uLocal_1146=-1;
var uLocal_1147=0;
var uLocal_1148=-1;
var uLocal_1149=0;
var uLocal_1150=-1;
var uLocal_1151=0;
var uLocal_1152=-1;
var uLocal_1153=0;
var uLocal_1154=-1;
var uLocal_1155=0;
var uLocal_1156=0;
var uLocal_1157=0;
var uLocal_1158=0;
var uLocal_1159=0;
var uLocal_1160=0;
var uLocal_1161=-1;
var uLocal_1162=6;
var uLocal_1163=-1;
var uLocal_1164=0;
var uLocal_1165=-1;
var uLocal_1166=0;
var uLocal_1167=-1;
var uLocal_1168=0;
var uLocal_1169=-1;
var uLocal_1170=0;
var uLocal_1171=-1;
var uLocal_1172=0;
var uLocal_1173=-1;
var uLocal_1174=0;
var uLocal_1175=0;
var uLocal_1176=0;
var uLocal_1177=0;
var uLocal_1178=0;
var uLocal_1179=0;
var uLocal_1180=-1;
var uLocal_1181=6;
var uLocal_1182=-1;
var uLocal_1183=0;
var uLocal_1184=-1;
var uLocal_1185=0;
var uLocal_1186=-1;
var uLocal_1187=0;
var uLocal_1188=-1;
var uLocal_1189=0;
var uLocal_1190=-1;
var uLocal_1191=0;
var uLocal_1192=-1;
var uLocal_1193=0;
var uLocal_1194=0;
var uLocal_1195=0;
var uLocal_1196=0;
var uLocal_1197=0;
var uLocal_1198=0;
var uLocal_1199=-1;
var uLocal_1200=6;
var uLocal_1201=-1;
var uLocal_1202=0;
var uLocal_1203=-1;
var uLocal_1204=0;
var uLocal_1205=-1;
var uLocal_1206=0;
var uLocal_1207=-1;
var uLocal_1208=0;
var uLocal_1209=-1;
var uLocal_1210=0;
var uLocal_1211=-1;
var uLocal_1212=0;
var uLocal_1213=0;
var uLocal_1214=0;
var uLocal_1215=0;
var uLocal_1216=0;
var uLocal_1217=0;
var uLocal_1218=-1;
var uLocal_1219=6;
var uLocal_1220=-1;
var uLocal_1221=0;
var uLocal_1222=-1;
var uLocal_1223=0;
var uLocal_1224=-1;
var uLocal_1225=0;
var uLocal_1226=-1;
var uLocal_1227=0;
var uLocal_1228=-1;
var uLocal_1229=0;
var uLocal_1230=-1;
var uLocal_1231=0;
var uLocal_1232=0;
var uLocal_1233=0;
var uLocal_1234=0;
var uLocal_1235=0;
var uLocal_1236=0;
var uLocal_1237=-1;
var uLocal_1238=6;
var uLocal_1239=-1;
var uLocal_1240=0;
var uLocal_1241=-1;
var uLocal_1242=0;
var uLocal_1243=-1;
var uLocal_1244=0;
var uLocal_1245=-1;
var uLocal_1246=0;
var uLocal_1247=-1;
var uLocal_1248=0;
var uLocal_1249=-1;
var uLocal_1250=0;
var uLocal_1251=0;
var uLocal_1252=0;
var uLocal_1253=0;
var uLocal_1254=0;
var uLocal_1255=0;
var uLocal_1256=-1;
var uLocal_1257=6;
var uLocal_1258=-1;
var uLocal_1259=0;
var uLocal_1260=-1;
var uLocal_1261=0;
var uLocal_1262=-1;
var uLocal_1263=0;
var uLocal_1264=-1;
var uLocal_1265=0;
var uLocal_1266=-1;
var uLocal_1267=0;
var uLocal_1268=-1;
var uLocal_1269=0;
var uLocal_1270=0;
var uLocal_1271=0;
var uLocal_1272=0;
var uLocal_1273=0;
var uLocal_1274=0;
var uLocal_1275=-1;
var uLocal_1276=6;
var uLocal_1277=-1;
var uLocal_1278=0;
var uLocal_1279=-1;
var uLocal_1280=0;
var uLocal_1281=-1;
var uLocal_1282=0;
var uLocal_1283=-1;
var uLocal_1284=0;
var uLocal_1285=-1;
var uLocal_1286=0;
var uLocal_1287=-1;
var uLocal_1288=0;
var uLocal_1289=0;
var uLocal_1290=0;
var uLocal_1291=0;
var uLocal_1292=0;
var uLocal_1293=0;
var uLocal_1294=0;
var uLocal_1295=8;
var uLocal_1296=-1;
var uLocal_1297=6;
var uLocal_1298=-1;
var uLocal_1299=0;
var uLocal_1300=-1;
var uLocal_1301=0;
var uLocal_1302=-1;
var uLocal_1303=0;
var uLocal_1304=-1;
var uLocal_1305=0;
var uLocal_1306=-1;
var uLocal_1307=0;
var uLocal_1308=-1;
var uLocal_1309=0;
var uLocal_1310=0;
var uLocal_1311=0;
var uLocal_1312=0;
var uLocal_1313=0;
var uLocal_1314=0;
var uLocal_1315=-1;
var uLocal_1316=6;
var uLocal_1317=-1;
var uLocal_1318=0;
var uLocal_1319=-1;
var uLocal_1320=0;
var uLocal_1321=-1;
var uLocal_1322=0;
var uLocal_1323=-1;
var uLocal_1324=0;
var uLocal_1325=-1;
var uLocal_1326=0;
var uLocal_1327=-1;
var uLocal_1328=0;
var uLocal_1329=0;
var uLocal_1330=0;
var uLocal_1331=0;
var uLocal_1332=0;
var uLocal_1333=0;
var uLocal_1334=-1;
var uLocal_1335=6;
var uLocal_1336=-1;
var uLocal_1337=0;
var uLocal_1338=-1;
var uLocal_1339=0;
var uLocal_1340=-1;
var uLocal_1341=0;
var uLocal_1342=-1;
var uLocal_1343=0;
var uLocal_1344=-1;
var uLocal_1345=0;
var uLocal_1346=-1;
var uLocal_1347=0;
var uLocal_1348=0;
var uLocal_1349=0;
var uLocal_1350=0;
var uLocal_1351=0;
var uLocal_1352=0;
var uLocal_1353=-1;
var uLocal_1354=6;
var uLocal_1355=-1;
var uLocal_1356=0;
var uLocal_1357=-1;
var uLocal_1358=0;
var uLocal_1359=-1;
var uLocal_1360=0;
var uLocal_1361=-1;
var uLocal_1362=0;
var uLocal_1363=-1;
var uLocal_1364=0;
var uLocal_1365=-1;
var uLocal_1366=0;
var uLocal_1367=0;
var uLocal_1368=0;
var uLocal_1369=0;
var uLocal_1370=0;
var uLocal_1371=0;
var uLocal_1372=-1;
var uLocal_1373=6;
var uLocal_1374=-1;
var uLocal_1375=0;
var uLocal_1376=-1;
var uLocal_1377=0;
var uLocal_1378=-1;
var uLocal_1379=0;
var uLocal_1380=-1;
var uLocal_1381=0;
var uLocal_1382=-1;
var uLocal_1383=0;
var uLocal_1384=-1;
var uLocal_1385=0;
var uLocal_1386=0;
var uLocal_1387=0;
var uLocal_1388=0;
var uLocal_1389=0;
var uLocal_1390=0;
var uLocal_1391=-1;
var uLocal_1392=6;
var uLocal_1393=-1;
var uLocal_1394=0;
var uLocal_1395=-1;
var uLocal_1396=0;
var uLocal_1397=-1;
var uLocal_1398=0;
var uLocal_1399=-1;
var uLocal_1400=0;
var uLocal_1401=-1;
var uLocal_1402=0;
var uLocal_1403=-1;
var uLocal_1404=0;
var uLocal_1405=0;
var uLocal_1406=0;
var uLocal_1407=0;
var uLocal_1408=0;
var uLocal_1409=0;
var uLocal_1410=-1;
var uLocal_1411=6;
var uLocal_1412=-1;
var uLocal_1413=0;
var uLocal_1414=-1;
var uLocal_1415=0;
var uLocal_1416=-1;
var uLocal_1417=0;
var uLocal_1418=-1;
var uLocal_1419=0;
var uLocal_1420=-1;
var uLocal_1421=0;
var uLocal_1422=-1;
var uLocal_1423=0;
var uLocal_1424=0;
var uLocal_1425=0;
var uLocal_1426=0;
var uLocal_1427=0;
var uLocal_1428=0;
var uLocal_1429=-1;
var uLocal_1430=6;
var uLocal_1431=-1;
var uLocal_1432=0;
var uLocal_1433=-1;
var uLocal_1434=0;
var uLocal_1435=-1;
var uLocal_1436=0;
var uLocal_1437=-1;
var uLocal_1438=0;
var uLocal_1439=-1;
var uLocal_1440=0;
var uLocal_1441=-1;
var uLocal_1442=0;
var uLocal_1443=0;
var uLocal_1444=0;
var uLocal_1445=0;
var uLocal_1446=0;
var uLocal_1447=0;
var uLocal_1448=0;
var uLocal_1449=8;
var uLocal_1450=-1;
var uLocal_1451=6;
var uLocal_1452=-1;
var uLocal_1453=0;
var uLocal_1454=-1;
var uLocal_1455=0;
var uLocal_1456=-1;
var uLocal_1457=0;
var uLocal_1458=-1;
var uLocal_1459=0;
var uLocal_1460=-1;
var uLocal_1461=0;
var uLocal_1462=-1;
var uLocal_1463=0;
var uLocal_1464=0;
var uLocal_1465=0;
var uLocal_1466=0;
var uLocal_1467=0;
var uLocal_1468=0;
var uLocal_1469=-1;
var uLocal_1470=6;
var uLocal_1471=-1;
var uLocal_1472=0;
var uLocal_1473=-1;
var uLocal_1474=0;
var uLocal_1475=-1;
var uLocal_1476=0;
var uLocal_1477=-1;
var uLocal_1478=0;
var uLocal_1479=-1;
var uLocal_1480=0;
var uLocal_1481=-1;
var uLocal_1482=0;
var uLocal_1483=0;
var uLocal_1484=0;
var uLocal_1485=0;
var uLocal_1486=0;
var uLocal_1487=0;
var uLocal_1488=-1;
var uLocal_1489=6;
var uLocal_1490=-1;
var uLocal_1491=0;
var uLocal_1492=-1;
var uLocal_1493=0;
var uLocal_1494=-1;
var uLocal_1495=0;
var uLocal_1496=-1;
var uLocal_1497=0;
var uLocal_1498=-1;
var uLocal_1499=0;
var uLocal_1500=-1;
var uLocal_1501=0;
var uLocal_1502=0;
var uLocal_1503=0;
var uLocal_1504=0;
var uLocal_1505=0;
var uLocal_1506=0;
var uLocal_1507=-1;
var uLocal_1508=6;
var uLocal_1509=-1;
var uLocal_1510=0;
var uLocal_1511=-1;
var uLocal_1512=0;
var uLocal_1513=-1;
var uLocal_1514=0;
var uLocal_1515=-1;
var uLocal_1516=0;
var uLocal_1517=-1;
var uLocal_1518=0;
var uLocal_1519=-1;
var uLocal_1520=0;
var uLocal_1521=0;
var uLocal_1522=0;
var uLocal_1523=0;
var uLocal_1524=0;
var uLocal_1525=0;
var uLocal_1526=-1;
var uLocal_1527=6;
var uLocal_1528=-1;
var uLocal_1529=0;
var uLocal_1530=-1;
var uLocal_1531=0;
var uLocal_1532=-1;
var uLocal_1533=0;
var uLocal_1534=-1;
var uLocal_1535=0;
var uLocal_1536=-1;
var uLocal_1537=0;
var uLocal_1538=-1;
var uLocal_1539=0;
var uLocal_1540=0;
var uLocal_1541=0;
var uLocal_1542=0;
var uLocal_1543=0;
var uLocal_1544=0;
var uLocal_1545=-1;
var uLocal_1546=6;
var uLocal_1547=-1;
var uLocal_1548=0;
var uLocal_1549=-1;
var uLocal_1550=0;
var uLocal_1551=-1;
var uLocal_1552=0;
var uLocal_1553=-1;
var uLocal_1554=0;
var uLocal_1555=-1;
var uLocal_1556=0;
var uLocal_1557=-1;
var uLocal_1558=0;
var uLocal_1559=0;
var uLocal_1560=0;
var uLocal_1561=0;
var uLocal_1562=0;
var uLocal_1563=0;
var uLocal_1564=-1;
var uLocal_1565=6;
var uLocal_1566=-1;
var uLocal_1567=0;
var uLocal_1568=-1;
var uLocal_1569=0;
var uLocal_1570=-1;
var uLocal_1571=0;
var uLocal_1572=-1;
var uLocal_1573=0;
var uLocal_1574=-1;
var uLocal_1575=0;
var uLocal_1576=-1;
var uLocal_1577=0;
var uLocal_1578=0;
var uLocal_1579=0;
var uLocal_1580=0;
var uLocal_1581=0;
var uLocal_1582=0;
var uLocal_1583=-1;
var uLocal_1584=6;
var uLocal_1585=-1;
var uLocal_1586=0;
var uLocal_1587=-1;
var uLocal_1588=0;
var uLocal_1589=-1;
var uLocal_1590=0;
var uLocal_1591=-1;
var uLocal_1592=0;
var uLocal_1593=-1;
var uLocal_1594=0;
var uLocal_1595=-1;
var uLocal_1596=0;
var uLocal_1597=0;
var uLocal_1598=0;
var uLocal_1599=0;
var uLocal_1600=0;
var uLocal_1601=0;
var uLocal_1602=0;
var uLocal_1603=8;
var uLocal_1604=-1;
var uLocal_1605=6;
var uLocal_1606=-1;
var uLocal_1607=0;
var uLocal_1608=-1;
var uLocal_1609=0;
var uLocal_1610=-1;
var uLocal_1611=0;
var uLocal_1612=-1;
var uLocal_1613=0;
var uLocal_1614=-1;
var uLocal_1615=0;
var uLocal_1616=-1;
var uLocal_1617=0;
var uLocal_1618=0;
var uLocal_1619=0;
var uLocal_1620=0;
var uLocal_1621=0;
var uLocal_1622=0;
var uLocal_1623=-1;
var uLocal_1624=6;
var uLocal_1625=-1;
var uLocal_1626=0;
var uLocal_1627=-1;
var uLocal_1628=0;
var uLocal_1629=-1;
var uLocal_1630=0;
var uLocal_1631=-1;
var uLocal_1632=0;
var uLocal_1633=-1;
var uLocal_1634=0;
var uLocal_1635=-1;
var uLocal_1636=0;
var uLocal_1637=0;
var uLocal_1638=0;
var uLocal_1639=0;
var uLocal_1640=0;
var uLocal_1641=0;
var uLocal_1642=-1;
var uLocal_1643=6;
var uLocal_1644=-1;
var uLocal_1645=0;
var uLocal_1646=-1;
var uLocal_1647=0;
var uLocal_1648=-1;
var uLocal_1649=0;
var uLocal_1650=-1;
var uLocal_1651=0;
var uLocal_1652=-1;
var uLocal_1653=0;
var uLocal_1654=-1;
var uLocal_1655=0;
var uLocal_1656=0;
var uLocal_1657=0;
var uLocal_1658=0;
var uLocal_1659=0;
var uLocal_1660=0;
var uLocal_1661=-1;
var uLocal_1662=6;
var uLocal_1663=-1;
var uLocal_1664=0;
var uLocal_1665=-1;
var uLocal_1666=0;
var uLocal_1667=-1;
var uLocal_1668=0;
var uLocal_1669=-1;
var uLocal_1670=0;
var uLocal_1671=-1;
var uLocal_1672=0;
var uLocal_1673=-1;
var uLocal_1674=0;
var uLocal_1675=0;
var uLocal_1676=0;
var uLocal_1677=0;
var uLocal_1678=0;
var uLocal_1679=0;
var uLocal_1680=-1;
var uLocal_1681=6;
var uLocal_1682=-1;
var uLocal_1683=0;
var uLocal_1684=-1;
var uLocal_1685=0;
var uLocal_1686=-1;
var uLocal_1687=0;
var uLocal_1688=-1;
var uLocal_1689=0;
var uLocal_1690=-1;
var uLocal_1691=0;
var uLocal_1692=-1;
var uLocal_1693=0;
var uLocal_1694=0;
var uLocal_1695=0;
var uLocal_1696=0;
var uLocal_1697=0;
var uLocal_1698=0;
var uLocal_1699=-1;
var uLocal_1700=6;
var uLocal_1701=-1;
var uLocal_1702=0;
var uLocal_1703=-1;
var uLocal_1704=0;
var uLocal_1705=-1;
var uLocal_1706=0;
var uLocal_1707=-1;
var uLocal_1708=0;
var uLocal_1709=-1;
var uLocal_1710=0;
var uLocal_1711=-1;
var uLocal_1712=0;
var uLocal_1713=0;
var uLocal_1714=0;
var uLocal_1715=0;
var uLocal_1716=0;
var uLocal_1717=0;
var uLocal_1718=-1;
var uLocal_1719=6;
var uLocal_1720=-1;
var uLocal_1721=0;
var uLocal_1722=-1;
var uLocal_1723=0;
var uLocal_1724=-1;
var uLocal_1725=0;
var uLocal_1726=-1;
var uLocal_1727=0;
var uLocal_1728=-1;
var uLocal_1729=0;
var uLocal_1730=-1;
var uLocal_1731=0;
var uLocal_1732=0;
var uLocal_1733=0;
var uLocal_1734=0;
var uLocal_1735=0;
var uLocal_1736=0;
var uLocal_1737=-1;
var uLocal_1738=6;
var uLocal_1739=-1;
var uLocal_1740=0;
var uLocal_1741=-1;
var uLocal_1742=0;
var uLocal_1743=-1;
var uLocal_1744=0;
var uLocal_1745=-1;
var uLocal_1746=0;
var uLocal_1747=-1;
var uLocal_1748=0;
var uLocal_1749=-1;
var uLocal_1750=0;
var uLocal_1751=0;
var uLocal_1752=0;
var uLocal_1753=0;
var uLocal_1754=0;
var uLocal_1755=0;
var uLocal_1756=0;
var uLocal_1757=8;
var uLocal_1758=-1;
var uLocal_1759=6;
var uLocal_1760=-1;
var uLocal_1761=0;
var uLocal_1762=-1;
var uLocal_1763=0;
var uLocal_1764=-1;
var uLocal_1765=0;
var uLocal_1766=-1;
var uLocal_1767=0;
var uLocal_1768=-1;
var uLocal_1769=0;
var uLocal_1770=-1;
var uLocal_1771=0;
var uLocal_1772=0;
var uLocal_1773=0;
var uLocal_1774=0;
var uLocal_1775=0;
var uLocal_1776=0;
var uLocal_1777=-1;
var uLocal_1778=6;
var uLocal_1779=-1;
var uLocal_1780=0;
var uLocal_1781=-1;
var uLocal_1782=0;
var uLocal_1783=-1;
var uLocal_1784=0;
var uLocal_1785=-1;
var uLocal_1786=0;
var uLocal_1787=-1;
var uLocal_1788=0;
var uLocal_1789=-1;
var uLocal_1790=0;
var uLocal_1791=0;
var uLocal_1792=0;
var uLocal_1793=0;
var uLocal_1794=0;
var uLocal_1795=0;
var uLocal_1796=-1;
var uLocal_1797=6;
var uLocal_1798=-1;
var uLocal_1799=0;
var uLocal_1800=-1;
var uLocal_1801=0;
var uLocal_1802=-1;
var uLocal_1803=0;
var uLocal_1804=-1;
var uLocal_1805=0;
var uLocal_1806=-1;
var uLocal_1807=0;
var uLocal_1808=-1;
var uLocal_1809=0;
var uLocal_1810=0;
var uLocal_1811=0;
var uLocal_1812=0;
var uLocal_1813=0;
var uLocal_1814=0;
var uLocal_1815=-1;
var uLocal_1816=6;
var uLocal_1817=-1;
var uLocal_1818=0;
var uLocal_1819=-1;
var uLocal_1820=0;
var uLocal_1821=-1;
var uLocal_1822=0;
var uLocal_1823=-1;
var uLocal_1824=0;
var uLocal_1825=-1;
var uLocal_1826=0;
var uLocal_1827=-1;
var uLocal_1828=0;
var uLocal_1829=0;
var uLocal_1830=0;
var uLocal_1831=0;
var uLocal_1832=0;
var uLocal_1833=0;
var uLocal_1834=-1;
var uLocal_1835=6;
var uLocal_1836=-1;
var uLocal_1837=0;
var uLocal_1838=-1;
var uLocal_1839=0;
var uLocal_1840=-1;
var uLocal_1841=0;
var uLocal_1842=-1;
var uLocal_1843=0;
var uLocal_1844=-1;
var uLocal_1845=0;
var uLocal_1846=-1;
var uLocal_1847=0;
var uLocal_1848=0;
var uLocal_1849=0;
var uLocal_1850=0;
var uLocal_1851=0;
var uLocal_1852=0;
var uLocal_1853=-1;
var uLocal_1854=6;
var uLocal_1855=-1;
var uLocal_1856=0;
var uLocal_1857=-1;
var uLocal_1858=0;
var uLocal_1859=-1;
var uLocal_1860=0;
var uLocal_1861=-1;
var uLocal_1862=0;
var uLocal_1863=-1;
var uLocal_1864=0;
var uLocal_1865=-1;
var uLocal_1866=0;
var uLocal_1867=0;
var uLocal_1868=0;
var uLocal_1869=0;
var uLocal_1870=0;
var uLocal_1871=0;
var uLocal_1872=-1;
var uLocal_1873=6;
var uLocal_1874=-1;
var uLocal_1875=0;
var uLocal_1876=-1;
var uLocal_1877=0;
var uLocal_1878=-1;
var uLocal_1879=0;
var uLocal_1880=-1;
var uLocal_1881=0;
var uLocal_1882=-1;
var uLocal_1883=0;
var uLocal_1884=-1;
var uLocal_1885=0;
var uLocal_1886=0;
var uLocal_1887=0;
var uLocal_1888=0;
var uLocal_1889=0;
var uLocal_1890=0;
var uLocal_1891=-1;
var uLocal_1892=6;
var uLocal_1893=-1;
var uLocal_1894=0;
var uLocal_1895=-1;
var uLocal_1896=0;
var uLocal_1897=-1;
var uLocal_1898=0;
var uLocal_1899=-1;
var uLocal_1900=0;
var uLocal_1901=-1;
var uLocal_1902=0;
var uLocal_1903=-1;
var uLocal_1904=0;
var uLocal_1905=0;
var uLocal_1906=0;
var uLocal_1907=0;
var uLocal_1908=0;
var uLocal_1909=0;
var uLocal_1910=1203982208;
var uLocal_1911=-1;
var uLocal_1912=19;
var uLocal_1913=0;
var uLocal_1914=0;
var uLocal_1915=0;
var uLocal_1916=0;
var uLocal_1917=0;
var uLocal_1918=0;
var uLocal_1919=0;
var uLocal_1920=0;
var uLocal_1921=0;
var uLocal_1922=0;
var uLocal_1923=0;
var uLocal_1924=0;
var uLocal_1925=0;
var uLocal_1926=0;
var uLocal_1927=0;
var uLocal_1928=0;
var uLocal_1929=0;
var uLocal_1930=0;
var uLocal_1931=0;
var uLocal_1932=-1;
struct<7> Local_1933={
1, 0, 1203982208, 1203982208, 1203982208, 0, 0 
};
var uLocal_1934=0;
var uLocal_1935=0;
var uLocal_1936=0;
var uLocal_1937=0;
var uLocal_1938=-1;
var uLocal_1939=0;
var uLocal_1940=0;
var uLocal_1941=0;
var uLocal_1942=0;
var uLocal_1943[30]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<2> Local_1944[22];
struct<3> Local_1945={
0, 0, 0 
};
var uLocal_1946=0;
struct<6> Local_1947={
0, 0, 0, 0, 0, 0 
};
var uLocal_1948=0;
var uLocal_1949=0;
struct<8> Local_1950={
0, -1, -1, 0, 0, 0, 0, 0 
};
int iLocal_1951=0;
struct<2> Local_1952={
-1, -1 
};
struct<12> Local_1953={
0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 
};
int iLocal_1954[2]={
-1, -1 
};
struct<3> Local_1955={
-1, -1082130432, 3 
};
var uLocal_1956=-1082130432;
var uLocal_1957=0;
var uLocal_1958=0;
var uLocal_1959=-1082130432;
var uLocal_1960=0;
var uLocal_1961=0;
var uLocal_1962=-1082130432;
var uLocal_1963=0;
var uLocal_1964=0;
struct<10> Local_1965={
1, 0, -1, -1, -1, 0, 1203982208, 0, 0, 1 
};
var uLocal_1966=0;
struct<21> Local_1967={
1, 0, 1, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_1968={
1, 0, 2 
};
var uLocal_1969=0;
var uLocal_1970=-1;
var uLocal_1971=0;
var uLocal_1972=0;
var uLocal_1973=0;
var uLocal_1974=4;
var uLocal_1975=0;
var uLocal_1976=0;
var uLocal_1977=0;
var uLocal_1978=0;
var uLocal_1979=1;
var uLocal_1980=0;
var uLocal_1981=10;
var uLocal_1982=0;
var uLocal_1983=0;
var uLocal_1984=0;
var uLocal_1985=0;
var uLocal_1986=0;
var uLocal_1987=0;
var uLocal_1988=0;
var uLocal_1989=0;
var uLocal_1990=0;
var uLocal_1991=0;
var uLocal_1992=0;
var uLocal_1993=0;
var uLocal_1994=0;
var uLocal_1995=-1;
var uLocal_1996=0;
var uLocal_1997=0;
var uLocal_1998=0;
var uLocal_1999=4;
var uLocal_2000=0;
var uLocal_2001=0;
var uLocal_2002=0;
var uLocal_2003=0;
var uLocal_2004=1;
var uLocal_2005=0;
var uLocal_2006=10;
var uLocal_2007=0;
var uLocal_2008=0;
var uLocal_2009=0;
var uLocal_2010=0;
var uLocal_2011=0;
var uLocal_2012=0;
var uLocal_2013=0;
var uLocal_2014=0;
var uLocal_2015=0;
var uLocal_2016=0;
var uLocal_2017=0;
var uLocal_2018=0;
struct<996> Local_2019={
0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1015222895, 1021665346, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, -1, 996499522, 1002740646, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1016296636, 220, 255, 255, 255, 255, 255, 255, 4096, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1056964608, 1056964608, -1, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0 
};
var uLocal_2020=1;
var uLocal_2021=0;
var uLocal_2022=0;
var uLocal_2023=0;
struct<174> Local_2024={
1, 0, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 
};
var uLocal_2025=1;
var uLocal_2026=0;
var uLocal_2027[6]={
-1, -1, -1, -1, -1, -1 
};
struct<4> Local_2028[8];
struct<3> Local_2029={
1, 0, 2 
};
var uLocal_2030=0;
var uLocal_2031=0;
int iLocal_2032=-1;
struct<19> Local_2033={
2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1 
};
var uLocal_2034=0;
struct<10> Local_2035={
-1, -1, -1, 0, 4, 0, 0, 0, 0, 1 
};
var uLocal_2036=0;
struct<3> Local_2037={
1, 0, 1 
};
var uLocal_2038=0;
var uLocal_2039=-1;
struct<2> Local_2040={
0, 0 
};
var uLocal_2041=0;
bool bLocal_2042=0;
bool bLocal_2043=0;
bool bLocal_2044=0;
bool bLocal_2045=0;
bool bLocal_2046=0;
int iLocal_2047=0;
int iLocal_2048=0;
int iLocal_2049=0;
int iLocal_2050=0;
struct<3> Local_2051={
0, 0, 0 
};
int iLocal_2052=0;
int iLocal_2053=0;
bool bLocal_2054=0;
bool bLocal_2055=0;
struct<2> Local_2056={
-1, -1 
};
int iLocal_2057=0;
int iLocal_2058=0;
var uLocal_2059=3;
var uLocal_2060=0;
var uLocal_2061=0;
var uLocal_2062=0;
int iLocal_2063=0;
int iLocal_2064=0;
var uLocal_2065=0;
bool bLocal_2066=0;
int iLocal_2067=0;
var uLocal_2068=0;
var uLocal_2069=0;
var uLocal_2070=1;
var uLocal_2071=0;
int iLocal_2072[2]={
0, 0 
};
int iLocal_2073=0;
float fLocal_2074=0f;
float fLocal_2075=0f;
float fLocal_2076=0f;
float fLocal_2077=0f;
float fLocal_2078=0f;
int iLocal_2079=0;
int iLocal_2080[1]={
0 
};
var uLocal_2081[1]={
0 
};
var uLocal_2082=0;
var uLocal_2083=0;
var uLocal_2084=0;
var uLocal_2085=0;
var uLocal_2086=0;
var uLocal_2087=0;
var uLocal_2088=0;
var uLocal_2089=0;
var uLocal_2090=0;
struct<16> Local_2091={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_2092=0;
var uLocal_2093=0;
var uLocal_2094=-1;
var uLocal_2095=0;
var uLocal_2096=0;
var uLocal_2097=0;
var uLocal_2098=0;
var uLocal_2099=0;
var uLocal_2100=0;
var uLocal_2101=1000;
var uLocal_2102=1000;
var uLocal_2103=0;
struct<1296> Local_2104={
0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 30, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 30, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 4, 0, -1, -1, 1232348144, 1232348144, 0, -1, -1, 1232348144, 1232348144, 0, -1, -1, 1232348144, 1232348144, 0, -1, -1, 1232348144, 1232348144, 0, 0, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 2, 0, 0, 2, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 2, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 1 
};
var uLocal_2105=1;
var uLocal_2106=0;
var uLocal_2107=-1;
var uLocal_2108=0;
struct<229> Local_2109[8];
var uLocal_2110=0;
var uLocal_2111=0;
var uLocal_2112=0;
var uLocal_2113=0;
struct<2> Local_2114={
0, 0 
};
var uLocal_2115=0;
var uLocal_2116=0;
var uLocal_2117=0;
var uLocal_2118=0;
var uLocal_2119=0;
var uLocal_2120=0;
var uLocal_2121=0;
var uLocal_2122=0;
var uLocal_2123=0;
var uLocal_2124=0;
var uLocal_2125=0;
var uLocal_2126=0;
var uLocal_2127=0;
var uLocal_2128=0;
var uLocal_2129=0;
var uLocal_2130=0;
bool bLocal_2131=0;
var uLocal_2132=0;
var uLocal_2133[7]={
0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_2134=0;
int iLocal_2135=0;
var uLocal_2136=0;
int iLocal_2137=0;
bool bLocal_2138=0;
var uLocal_2139=0;
var uLocal_2140=0;
struct<3> Local_2141={
0, 0, 0 
};
int iLocal_2142=0;
int iLocal_2143=0;
int iLocal_2144=0;
int iLocal_2145=0;
int iLocal_2146=0;
int iLocal_2147=0;
var uLocal_2148=0;
var uLocal_2149=0;
struct<21> Local_2150={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
};
#endregion

void __EntryFunction__(){
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_18="NULL";
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
fLocal_28=0f;
fLocal_32=-0.0375f;
fLocal_33=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
fLocal_122=0f;
fLocal_124=0f;
fLocal_125=0f;
fLocal_126=0f;
fLocal_139=0.62f;
fLocal_140=0.51f;
fLocal_141=0.55f;
fLocal_142=25f;
fLocal_149=-4.84f;
fLocal_151=3.5f;
fLocal_152=4.5f;
iLocal_2063=-1;
iLocal_2064=-1;
iLocal_2067=-1;
fLocal_2074=-1f;
fLocal_2075=99999f;
fLocal_2076=99999f;
fLocal_2077=99999f;
fLocal_2078=999999f;
StringCopy(&Local_2091, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
Local_2091={
Local_2091 
};
Local_214={
Local_214 
};
func_5557(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(bLocal_2042){
if(!func_5500(ScriptParam_2150)){
func_5414(0, 1);
func_5302();
}}else{
func_5302();
}}else{
func_5414(0, 1);
func_5302();
}
func_5301(&(Local_2104.f_1255));
func_5131();
while (true){
func_5130();
if(func_5125()){
func_5414(0, 1);
func_5302();
}
if(func_5119()){
func_5414(0, 1);
func_5302();
}
if(Local_213.f_112.f_4 !=0){
Call_Loc(Local_213.f_112.f_4);
if(StackVal){
func_5414(0, 1);
func_5302();
}}
func_5557(1);
switch (func_5118()){
case 0:
switch (func_5117()){
case 1:
if(func_4803()){
func_4802(1);
}
break;
case 2:
case 3:
func_4802(3);
break;
}
break;
case 1:
func_4744();
func_3667();
func_3666();
if(func_5117() !=1){
func_3663();
if(Local_213.f_112.f_5 !=0){
Call_Loc(Local_213.f_112.f_5);
}
func_4802(func_5117());
}
break;
case 2:
func_4744();
func_3369();
func_2498();
if(func_5117() > 2){
func_5414(func_2497(11), 0);
func_4802(3);
}
break;
case 3:
func_5302();
break;
}
if(bLocal_2044){
switch (func_5117()){
case 0:
if(func_587()){
func_586(1);
}
break;
case 1:
if(func_585()==0){
func_6();
}else{
func_586(2);
}
break;
case 2:
if(func_2()){
func_586(3);
}
break;
case 3:
func_5302();
break;
}}
func_1();
}}


void func_1(){
Local_217.f_633++;
if(Local_217.f_633 >=Local_171.f_38){
Local_217.f_633=0;
}}

int func_2(){
if(Local_213.f_3.f_2 !=0){
Call_Loc(Local_213.f_3.f_2);
}
if(!func_5()){
return 0;
}
if(!func_3(0)){
return 0;
}
return 1;
}


bool func_3(int iParam0){
return func_4(&(Local_2104.f_1165), iParam0);
}


bool func_4(var uParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=iParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}


bool func_5(){
return func_3(21);
}


void func_6(){
func_584();
if(Local_213.f_3 !=0){
Call_Loc(Local_213.f_3);
}
func_555();
func_523();
func_513();
func_212();
func_191();
func_54();
func_45();
func_41();
func_34();
func_24();
func_23();
func_20();
func_12();
func_7();
}


void func_7(){
if(!func_11()){
return;
}
if(!func_9(func_10(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_10())){
func_8(2);
}}


void func_8(int iParam0){
if(!bLocal_2044){
return;
}
Local_2104.f_1157=iParam0;
}

int func_9(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(bParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2672505.f_3){
return Global_2672505.f_2;
}elseif(Global_2657589[iVar0 /*466*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}


bool func_10(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35;
}

int func_11(){
return 1;
}


void func_12(){
if(func_19()==-1){
return;
}
if(Local_213.f_92==0){
return;
}
Call_Loc(Local_213.f_92);
if(!StackVal){
return;
}
if(!func_3(5) && Local_213.f_92.f_1 !=0){
Call_Loc(Local_213.f_92.f_1);
if(StackVal){
func_18(&(Local_2104.f_1215), 0, 0);
func_16(5);
}}
if(!func_15(&(Local_2104.f_1215))){
func_14(&(Local_2104.f_1215), 0, 0);
}elseif(func_15(&(Local_2104.f_1215))){
if(func_13(&(Local_2104.f_1215), func_19(), 0)){
if(Local_213.f_92.f_3 !=0){
Call_Loc(Local_213.f_92.f_3);
}
func_8(1);
}}}

int func_13(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_14(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_14(var uParam0, bool bParam1, bool bParam2){
if(uParam0->f_1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}}


bool func_15(var uParam0){
return uParam0->f_1;
}


void func_16(int iParam0){
if(func_17(&(Local_2104.f_1165), iParam0)){}}

int func_17(var uParam0, var uParam1){
int iVar0;
int iVar1;
bool bVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
bVar2=(iVar0 % 32);
if(!MISC::IS_BIT_SET((*uParam0)[iVar1], bVar2)){
MISC::SET_BIT(uParam0[iVar1], bVar2);
return 1;
}
return 0;
}


void func_18(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
*uParam0=NETWORK::GET_NETWORK_TIME();
}else{
*uParam0=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
*uParam0=MISC::GET_GAME_TIMER();
}
uParam0->f_1=1;
}

int func_19(){
if(Local_171.f_1569 !=-1){
return Local_171.f_1569 * 60 * 1000;
}
return Local_171.f_1569;
}


void func_20(){
int iVar0;
if(func_22()==-1){
func_21(0);
Call_Loc(Local_215[func_22() /*29*/].f_26);
return;
}
while ((func_22() < iLocal_2057 && iVar0 < Local_215[func_22() /*29*/].f_28) && Local_215[func_22() /*29*/].f_1[iVar0 /*3*/] !=-1){
Call_Loc(Local_215[func_22() /*29*/].f_1[iVar0 /*3*/].f_1);
if(StackVal){
if(func_22() !=Local_215[func_22() /*29*/].f_1[iVar0 /*3*/]){
Call_Loc(Local_215[func_22() /*29*/].f_27);
Local_2104.f_1163=func_22();
func_21(Local_215[func_22() /*29*/].f_1[iVar0 /*3*/]);
MISC::SET_BIT(&(Local_2104.f_1164), func_22());
Call_Loc(Local_215[func_22() /*29*/].f_26);
}
return;
}
iVar0++;
}}


void func_21(int iParam0){
if(!bLocal_2044){
return;
}
Local_2104.f_1162=iParam0;
}

int func_22(){
return Local_2104.f_1162;
}


void func_23(){
}


void func_24(){
bool bVar0;
if(func_32()){
if(func_29()){
if(func_15(&(Local_2104.f_1087.f_21))){
func_28(&(Local_2104.f_1087.f_21));
func_27();
Local_2104.f_1087.f_23++;
}}}else{
bVar0=false;
while (bVar0 < 4){
if(func_26(bVar0) && Local_2104.f_1087[bVar0 /*5*/].f_1 !=-1){
func_25(bVar0);
Local_2104.f_1087.f_23++;
}
bVar0++;
}}}


void func_25(bool bParam0){
Local_2104.f_1087[bParam0 /*5*/].f_3=999999f;
Local_2104.f_1087[bParam0 /*5*/].f_4=999999f;
Local_2104.f_1087[bParam0 /*5*/].f_1=-1;
}

int func_26(bool bParam0){
if(!MISC::IS_BIT_SET(Local_2104.f_1087.f_25, bParam0)){
return 0;
}
return 1;
}


void func_27(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
func_25(iVar0);
iVar0++;
}}


void func_28(var uParam0){
uParam0->f_1=0;
}


bool func_29(){
return (func_31() && func_30());
}

int func_30(){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
if(!MISC::IS_BIT_SET(Local_2104.f_1087.f_25, bVar0)){
return 0;
}
bVar0++;
}
return 1;
}


var func__31(){
return Local_2104.f_1087.f_26;
}

int func_32(){
if(func_33(13)){
return 0;
}
return 1;
}


bool func_33(int iParam0){
return func_4(&(Local_171.f_16), iParam0);
}


void func_34(){
if(!func_40()){
return;
}
if(!func_3(2)){
if(func_35(&(Local_2104.f_1078), &(Local_2104.f_1078.f_3))){
func_16(2);
}}}

int func_35(var uParam0, var uParam1){
int iVar0[1];
int iVar1;
int iVar2;
int iVar3;
iVar2=0;
while (iVar2 < 1){
if(func_39(iVar2)){
iVar0[iVar1]=iVar2;
iVar1++;
}
iVar2++;
}
if(iVar1 < func_38()){
return 0;
}
iVar2=0;
while (iVar2 < func_38()){
if(func_37()){
if(iVar2 > 0){
(*uParam0)[iVar2]=(*uParam0)[(iVar2 - 1)];
}else{
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
(*uParam0)[iVar2]=iVar0[iVar3];
if(iVar0[iVar3] < 32){
MISC::SET_BIT(uParam1, iVar0[iVar3]);
}
if(iVar2 < (func_38() - 1)){
func_36(&(iVar0[iVar3]), &(iVar0[(iVar1 - 1)]));
iVar1=(iVar1 - 1);
}}
iVar2++;
return 1;
}


void func_36(var uParam0, var uParam1){
var uVar0;
uVar0=*uParam0;
*uParam0=*uParam1;
*uParam1=uVar0;
}

int func_37(){
return 0;
}

int func_38(){
return Local_171.f_19;
}

int func_39(int iParam0){
return 0;
}

int func_40(){
return 0;
}


void func_41(){
if(!func_43()){
return;
}
Stack.Push(Local_2104.f_1207);
Call_Loc(Local_213.f_823.f_2);
if(func_42(StackVal, StackVal, StackVal, 0)){
func_16(17);
}
Stack.Push(Local_2104.f_1207.f_4);
Call_Loc(Local_213.f_823.f_4);
if(func_42(StackVal, StackVal, StackVal, 0)){
func_16(18);
}}

int func_42(var uParam0, var uParam1, int iParam2, bool bParam3){
if(!func_15(&uParam0)){
return 0;
}
if(iParam2==-1){
return 1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >=iParam2){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0)) >=iParam2){
return 1;
}
return 0;
}


bool func_43(){
if(Local_213.f_823.f_1==0){
return 0;
}
if(Local_213.f_823 !=0){
Call_Loc(Local_213.f_823);
return StackVal;
}
return func_44()==14;
}

int func_44(){
if(func_22() !=-1){
return Local_215[func_22() /*29*/];
}
return -1;
}


void func_45(){
int iVar0;
iVar0=0;
while (iVar0 < Local_171.f_2824){
func_46(iVar0);
iVar0++;
}}


void func_46(int iParam0){
if(!func_51(iParam0)){
return;
}
switch (func_50(iParam0)){
case 0:
if(func_13(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), func_49(iParam0), 0)){
func_18(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), 0, 0);
func_48(iParam0, 1);
}
break;
case 1:
if(func_13(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), func_47(iParam0), 0)){
func_18(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), 0, 0);
func_48(iParam0, 2);
}
break;
case 2:
if(func_13(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), func_49(iParam0), 0)){
func_18(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), 0, 0);
func_48(iParam0, 3);
}
break;
case 3:
if(func_13(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), func_47(iParam0), 0)){
func_18(&(Local_2104.f_1193.f_3[iParam0 /*2*/]), 0, 0);
func_48(iParam0, 0);
}
break;
}}

int func_47(int iParam0){
if(Local_213.f_724.f_44.f_1 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_724.f_44.f_1);
return StackVal;
}
return 10000;
}


void func_48(int iParam0, int iParam1){
if(Local_2104.f_1193[iParam0] !=iParam1){
Local_2104.f_1193[iParam0]=iParam1;
}}

int func_49(int iParam0){
if(Local_213.f_724.f_44.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_724.f_44.f_2);
return StackVal;
}
return 1000;
}

int func_50(int iParam0){
return Local_2104.f_1193[iParam0];
}


bool func_51(int iParam0){
if(Local_213.f_724.f_44 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_724.f_44);
return StackVal;
}
return !func_52(func_53(iParam0));
}

int func_52(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


Vector3 func__53(var uParam0){
if(Local_213.f_724.f_44.f_3 !=0){
Stack.Push(uParam0);
Call_Loc(Local_213.f_724.f_44.f_3);
return StackVal, StackVal, StackVal;
}
return 0f, 0f, 0f;
}


void func_54(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
func_190(&uVar5);
iVar7=0;
while (iVar7 < Local_171.f_38){
func_189(iVar7, &bVar2, &bVar3, &iVar0, &iVar4);
if(bVar2){
if(Local_213.f_166.f_194 !=0){
Stack.Push(iVar7);
Stack.Push(iVar0);
Stack.Push(bVar3);
Call_Loc(Local_213.f_166.f_194);
}}
if(iVar4 > 2){
if(iVar4 !=6 && iVar4 !=4){
if(!bVar2){
func_188(iVar7, 6);
}elseif(bVar3){
func_188(iVar7, 6);
}elseif(func_164(iVar7, iVar0)){
func_188(iVar7, 6);
}else{
func_163(&uVar5, iVar7);
}}}else{
func_163(&uVar5, iVar7);
}
switch (iVar4){
case 0:
if(func_159(iVar7)){
func_188(iVar7, 2);
}
break;
case 1:
if(!bVar2){
if(func_157(iVar7)){
func_156(iVar7);
func_188(iVar7, 2);
}}elseif(func_155(iVar7)){
func_154(&(Local_2104.f_22[iVar7 /*25*/]));
}
break;
case 2:
if(!bVar1){
if(func_144(iVar7)){
if(func_95(iVar7)){
func_188(iVar7, 3);
if(func_94(iVar7, 8)){
func_93(iVar7, 31);
}
func_92(iVar7);
bVar1=true;
}}}
break;
case 3:
if(bVar2){
if(func_89(iVar7, iVar0)){
func_188(iVar7, 6);
break;
}
if(!bVar3){
func_71(iVar7);
func_66(iVar7, iVar0, 1);
if(func_65(iVar7)){
func_188(iVar7, 4);
}}}
break;
case 6:
if(!func_94(iVar7, 19)){
iVar6++;
}
func_93(iVar7, 8);
if(bVar2){
if(func_89(iVar7, iVar0)){
break;
}
if(func_65(iVar7)){
func_188(iVar7, 4);
}}
if(func_94(iVar7, 19) && func_64()){
func_154(&(Local_2104.f_22[iVar7 /*25*/]));
}
if(func_57(iVar7)){
if(func_155(iVar7)){
func_154(&(Local_2104.f_22[iVar7 /*25*/]));
}
func_188(iVar7, 1);
}
if(func_585()==0){
if(func_56(iVar7, 0)){
func_8(9);
}}
break;
case 4:
if(!func_56(iVar7, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0)){
func_93(iVar7, 26);
func_188(iVar7, 5);
}
break;
case 5:
break;
}
iVar7++;
}
if(Local_2104.f_1181 !=iVar6){
Local_2104.f_1181=iVar6;
}
func_55(&uVar5);
iVar7=Local_217.f_633;
func_189(iVar7, &bVar2, &bVar3, &iVar0, &iVar4);
switch (iVar4){
case 3:
if(bVar2){
if(!bVar3){
func_66(iVar7, iVar0, 0);
}}
break;
}}


void func_55(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
if(MISC::IS_BIT_SET(*uParam0, bVar0)){
if(!MISC::IS_BIT_SET(Local_2104.f_1087.f_25, bVar0)){
MISC::SET_BIT(&(Local_2104.f_1087.f_25), bVar0);
}}elseif(MISC::IS_BIT_SET(Local_2104.f_1087.f_25, bVar0)){
MISC::CLEAR_BIT(&(Local_2104.f_1087.f_25), bVar0);
}
bVar0++;
}}


bool func_56(int iParam0, int iParam1){
return func_4(&(Local_171.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_57(int iParam0){
if(func_585() !=0){
return 0;
}
if(func_94(iParam0, 19)){
return func_58(Local_171.f_38.f_1[iParam0 /*21*/].f_8);
}
if(func_56(iParam0, 10)){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_181);
return StackVal;
}
return 0;
}

int func_58(int iParam0){
if(!func_63()){
return 0;
}
if(func_64()){
return 0;
}
if(func_32() && func_61()){
return 0;
}
if(!func_59(iParam0)){
return 0;
}
if(func_32() && !func_29()){
return 0;
}
return 1;
}

int func_59(int iParam0){
int iVar0;
iVar0=func_60(1, iParam0);
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Local_2104.f_1087.f_25, iVar0);
}
return 0;
}

int func_60(int iParam0, bool bParam1){
int iVar0;
switch (iParam0){
case 1:
iVar0=0;
while (iVar0 < 4){
if(Local_171.f_1578[iVar0]==bParam1){
return iVar0;
}
iVar0++;
}
break;
case 0:
iVar0=0;
while (iVar0 < 4){
if(Local_171.f_1578[iVar0]==Local_171.f_38.f_1[bParam1 /*21*/].f_8){
return iVar0;
}
iVar0++;
}
break;
}
return -1;
}


bool func_61(){
return Local_2104.f_1087.f_23 >=func_62();
}

int func_62(){
return Local_2104.f_1087.f_24;
}

int func_63(){
if(func_2497(58)){
if(Local_213.f_661.f_9==0){
return 1;
}
Call_Loc(Local_213.f_661.f_9);
return StackVal;
}
return 0;
}

int func_64(){
if(func_2497(58)){
Stack.Push(Local_213.f_661.f_8 !=0);
Call_Loc(Local_213.f_661.f_8);
if(StackVal && StackVal){
return 1;
}}
return 0;
}

int func_65(int iParam0){
if(Local_213.f_166.f_178 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_178);
return StackVal;
}
return 0;
}


void func_66(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_70(iParam0);
if(func_69(iParam0)==-1){
func_68(iParam0, 0);
if(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_14 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_14);
}
return;
}
if(func_67(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/]) !=iParam2){
return;
}
if(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_17 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_17);
}
while ((func_69(iParam0) < Local_217.f_634[iVar0 /*154*/] && iVar1 < Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_18) && Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_1[iVar1 /*2*/] !=-1){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_1[iVar1 /*2*/].f_1);
if(StackVal){
if(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_15 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_15);
}
func_68(iParam0, Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_1[iVar1 /*2*/]);
if(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_14 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_217.f_634[iVar0 /*154*/].f_1[func_69(iParam0) /*19*/].f_14);
}
return;
}
iVar1++;
}}

int func_67(int iParam0){
switch (iParam0){
case 12:
case 26:
return 1;
default:
}
return 0;
}


void func_68(int iParam0, int iParam1){
if(!bLocal_2044){
return;
}
Local_2104.f_22[iParam0 /*25*/].f_2=iParam1;
}

int func_69(bool bParam0){
return Local_2104.f_22[bParam0 /*25*/].f_2;
}

int func_70(int iParam0){
if(func_4(&(Local_2104.f_22[iParam0 /*25*/].f_3), 19)){
return 6;
}
if(Local_213.f_166.f_1 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_1);
return StackVal;
}
return 0;
}


void func_71(int iParam0){
bool bVar0;
int iVar1;
bVar0=Local_171.f_38.f_1[iParam0 /*21*/].f_14;
if(func_88(bVar0)){
return;
}
iVar1=0;
while (iVar1 < Local_217[iParam0 /*21*/].f_18){
if(Local_217[iParam0 /*21*/].f_10[iVar1] !=0){
Stack.Push(iParam0);
Call_Loc(Local_217[iParam0 /*21*/].f_10[iVar1]);
if(StackVal){
if(!MISC::IS_BIT_SET(Local_2104.f_1077, bVar0)){
func_72(iParam0);
}
MISC::SET_BIT(&(Local_2104.f_1077), bVar0);
if(Local_213.f_166.f_186 !=0){
Stack.Push(iParam0);
Stack.Push(bVar0);
Stack.Push(iVar1);
Call_Loc(Local_213.f_166.f_186);
}}}
iVar1++;
}}


void func_72(int iParam0){
if(func_33(28)){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[iParam0 /*25*/])){
if(func_87(NETWORK::NET_TO_PED(Local_2104.f_22[iParam0 /*25*/]))){
func_73(func_85(), 1, 0);
}}}


void func_73(int iParam0, int iParam1, int iParam2){
if(func_83(1)){
func_75(Local_2056.f_0, func_76(1), iParam0, iParam1, iParam2);
}else{
func_75(Local_2056.f_0, func_74(bLocal_2046), iParam0, iParam1, iParam2);
}}

int func_74(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}


void func_75(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
struct<7> Var0;
Var0.f_0=-1324781468;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=uParam2;
Var0.f_4=NETWORK::GET_CLOUD_TIME_AS_INT();
Var0.f_6=uParam3;
Var0.f_5=uParam4;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 7, iParam1);
}}

int func_76(bool bParam0){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
if(func_83(1)){
iVar1=0;
while (iVar1 < 32){
iVar3=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_9(iVar3, 0, 0)){
if(func_81()){
if(func_79(iVar3, PLAYER::PLAYER_ID(), bParam0)){
MISC::SET_BIT(&uVar0, iVar3);
}}else{
iVar2=func_78();
if(iVar2 !=func_77()){
if(func_79(bVar3, iVar2, bParam0)){
MISC::SET_BIT(&uVar0, bVar3);
}}}}
bVar1++;
}}
return uVar0;
}

int func_77(){
return -1;
}


bool func_78(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

int func_79(bool bParam0, bool bParam1, bool bParam2){
if(bParam1 !=func_77()){
if(!bParam2){
if(func_80(bParam0, bParam1)){
return 0;
}}
if(Global_1894573[bParam0 /*608*/].f_10 !=func_77()){
return bParam1==Global_1894573[bParam0 /*608*/].f_10;
}}
return 0;
}

int func_80(int iParam0, int iParam1){
if(iParam1 !=func_77()){
if(iParam0 !=func_77()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_77()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


bool func_81(){
return func_82(PLAYER::PLAYER_ID());
}

int func_82(bool bParam0){
if(bParam0 !=func_77()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_77()){
return Global_1894573[bParam0 /*608*/].f_10==bParam0;
}}
return 0;
}


bool func_83(bool bParam0){
return func_84(PLAYER::PLAYER_ID(), bParam0);
}


bool func_84(bool bParam0, bool bParam1){
if(!bParam1){
if(func_82(bParam0)){
return 0;
}}
return Global_1894573[bParam0 /*608*/].f_10 !=func_77();
}

int func_85(){
int iVar0;
iVar0=func_86();
if(iVar0==0){
iVar0=3;
}
return iVar0;
}

int func_86(){
Call_Loc(Local_213.f_74);
return StackVal;
}

int func_87(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if((PED::GET_PED_TYPE(iParam0)==6 || PED::GET_PED_TYPE(iParam0)==29) || PED::GET_PED_TYPE(iParam0)==27){
return 1;
}}
return 0;
}


bool func_88(int iParam0){
return MISC::IS_BIT_SET(Local_2104.f_1077, iParam0);
}

int func_89(int iParam0, int iParam1){
Stack.Push(Local_213.f_166.f_205 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_213.f_166.f_205);
if(StackVal && StackVal){
if(Local_213.f_166.f_204 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_204);
}
if(func_91(iParam0)){
func_90(&(Local_2104.f_22[iParam0 /*25*/]));
}else{
func_154(&(Local_2104.f_22[iParam0 /*25*/]));
}
return 1;
}
return 0;
}


void func_90(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0)){
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&uVar0);
}}

int func_91(int iParam0){
if(func_56(iParam0, 18)){
return 1;
}
Stack.Push(Local_213.f_166.f_208 !=0);
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_208);
if(StackVal && StackVal){
return 1;
}
return 0;
}


void func_92(int iParam0){
}


void func_93(bool bParam0, int iParam1){
if(func_17(&(Local_2104.f_22[bParam0 /*25*/].f_3), iParam1)){}}


bool func_94(bool bParam0, int iParam1){
return func_4(&(Local_2104.f_22[bParam0 /*25*/].f_3), iParam1);
}

int func_95(int iParam0){
int iVar0;
int iVar1;
struct<3> Var2;
var uVar3;
func_143(0, iParam0);
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_188);
iVar0=StackVal;
if(func_142(iVar0)){
iVar1=Local_171.f_38.f_1[iParam0 /*21*/].f_8;
if(iVar1 !=-1){
if(func_141(Local_2104.f_773[iVar1 /*8*/])){
if(func_140(&(Local_2104.f_22[iParam0 /*25*/]), Local_2104.f_773[iVar1 /*8*/], 26, iVar0, Local_171.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1)){
func_114(iParam0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
func_113();
return 1;
}}}else{
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_189);
Var2={
StackVal, StackVal, StackVal 
};
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_190);
uVar3=StackVal;
if(!func_52(Var2)){
if(!func_112(iParam0) || func_97(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
if(func_96(&(Local_2104.f_22[iParam0 /*25*/]), 26, iVar0, Var2, uVar3, 1, 1, 1)){
func_114(iParam0);
func_113();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
return 1;
}}else{
func_113();
return 0;
}}}}
return 0;
}

int func_96(var uParam0, int iParam1, int iParam2, struct<3> Param3, int iParam4, bool bParam5, int iParam6, int iParam7){
int iVar0;
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
iVar0=PED::CREATE_PED(iParam1, iParam2, Param3, uParam4, iParam6, bParam5);
*uParam0=NETWORK::PED_TO_NET(iVar0);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, iParam7);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0)){
if(bParam5){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_97(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
Global_2635559.f_2=0;
if(fParam1 > 0f){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1)){
return 0;
}}
if(fParam2 > 0f){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2)){
return 0;
}}
if(fParam3 > 0f){
if(OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, iParam16)){
return 0;
}}
Global_2635559.f_2++;
if(bParam11){
if(FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0){
return 0;
}}
Global_2635559.f_2++;
if(fParam12 > 0f){
if(func_106(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_98(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}

int func_98(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
bool bVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_9(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_103(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_9(bVar1, 1, 1)){
if(!func_100(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_99(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_103(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_103(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_99(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}


bool func_100(bool bParam0, int iParam1){
bool bVar0;
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_101(-1, 0)==8;
}else{
bVar0=Global_1853910[bParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_101(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_102();
}
if(Global_1575040[iVar1]==1){
if(bParam1){
}
iVar0=8;
}else{
iVar0=Global_1574912[iVar1];
if(bParam1){
}}
return iVar0;
}

int func_102(){
return Global_1574918;
}


Vector3 func__103(bool bParam0){
int iVar0;
iVar0=bParam0;
if((func_105() && Global_1853910[iVar0 /*862*/].f_832) && !func_52(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_104(bParam0);
}


Vector3 func__104(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}


bool func_105(){
return Global_2683864.f_19;
}

int func_106(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam6==0){
if(func_9(bVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_99(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam7) && bParam4) && func_107(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_104(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_107(bool bParam0){
if(func_111(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
Global_2764203={
func_110(bParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_108(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
return 0;
}

int func_108(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_109(bParam0);
if(!iVar0==func_77()){
if(iVar0==func_109(bParam1)){
return 1;
}}
return 0;
}

int func_109(bool bParam0){
if(bParam0 !=func_77()){
return Global_1894573[bParam0 /*608*/].f_10;
}
return func_77();
}
struct<13> func_110(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}

int func_111(bool bParam0, bool bParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_110(bParam0) 
};
Global_2764216={
func_110(bParam1) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764203)){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764216)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764133, 35, &Global_2764203);
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764168, 35, &Global_2764216);
if(Global_2764133==Global_2764168){
return 1;
}}}}
return 0;
}

int func_112(int iParam0){
if((func_56(iParam0, 10) && func_94(iParam0, 8)) && !func_56(iParam0, 19)){
return 1;
}
return 0;
}


void func_113(){
if(Local_2104.f_1176 !=-1){
Local_2104.f_1221={
0f, 0f, 0f 
};
Local_2104.f_1230=0f;
iLocal_2066=0;
Local_2104.f_1159=-1;
Local_2104.f_1176=-1;
}}


void func_114(int iParam0){
int iVar0;
bool bVar1;
iVar0=NETWORK::NET_TO_PED(Local_2104.f_22[iParam0 /*25*/]);
bVar1=func_94(iParam0, 19);
func_134(iParam0, iVar0);
if(bVar1){
func_131(iParam0, iVar0);
}else{
func_121(iParam0, iVar0);
}
if(func_120(iParam0, iVar0)){
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, 1);
PED::SET_PED_FIRING_PATTERN(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
}
if(Local_213.f_166.f_192 !=0){
Stack.Push(iParam0);
Stack.Push(iVar0);
Stack.Push(bVar1);
Call_Loc(Local_213.f_166.f_192);
}
if(func_56(iParam0, 5)){
if(!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
}
ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
func_115(iVar0, iParam0, 1, 0, 1, 1);
}}


void func_115(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(Local_171.f_38.f_1[iParam1 /*21*/].f_8 !=-1){
if(bParam5){
Var0={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) 
};
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var1, 25, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, Var0, 25, 1, joaat("weapon_assaultshotgun"), 0, 1, 1, -1082130432);
}
if(bParam3){
PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
}
PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
}else{
Var2={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
func_118(Var2, &Var3, &Var4, 0);
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var4, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
if(bParam3){
PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
}
PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
}
if(bParam4){
func_116(iParam0, -1, 0);
}}}


void func_116(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
if(iParam1 !=-1){
iVar0=iParam1;
}
if(bParam2){
iVar1=0;
while (iVar1 < 11){
func_117(iVar1, iParam0);
iVar1++;
}}else{
func_117(iVar0, iParam0);
}}


void func_117(int iParam0, var uParam1){
switch (iParam0){
case 0:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
break;
case 1:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
break;
case 2:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
break;
case 3:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
break;
case 4:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
break;
case 5:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
break;
case 6:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
break;
case 7:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
break;
case 8:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
break;
case 9:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
break;
case 10:
PED::APPLY_PED_BLOOD_BY_ZONE(uParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
break;
case 11:
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 1, 0.49f, 0.5f, 0f, 0.025f, 0, 0f, "BulletLarge");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 1, 0.48f, 0.55f, 0f, 0.025f, 0, 0f, "BulletLarge");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 1, 0.5f, 0.56f, 0f, 0.025f, 0, 0f, "BulletLarge");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.726f, 0.789f, 0f, 0.019f, 0, 140f, "BulletSmall");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.724f, 0.799f, 0f, 0.019f, 0, 140f, "BulletSmall");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.737f, 0.723f, 0f, 0.019f, 0, 140f, "BulletSmall");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.726f, 0.753f, 0f, 0.019f, 0, 140f, "BulletSmall");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.726f, 0.76f, 0f, 0.019f, 0, 140f, "BulletSmall");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.736f, 0.802f, 0f, 0.019f, 0, 140f, "BulletSmall");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.715f, 0.806f, 0f, 0.019f, 0, 140f, "BulletSmall");
break;
case 12:
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 3, 0.401f, 0.1f, 0f, 1f, 0, 0f, "BulletLarge");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 3, 0.514f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 3, 0.62f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
break;
case 13:
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 2, 0.41f, 0.229f, 0f, 1f, 13, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 4, 0.21f, 0.305f, 0f, 1f, 14, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 3, 0.495f, 0.124f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 0, 0.37f, 1f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 1, 0.667f, 0.571f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
PED::APPLY_PED_BLOOD_SPECIFIC(uParam1, 1, 0.343f, 0.79f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
break;
}}


void func_118(struct<3> Param0, var uParam1, var uParam2, bool bParam3){
float fVar0;
int iVar1;
float fVar2;
float fVar3;
float fVar4;
bool bVar5;
fVar0=0.1f;
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
fVar2=0.5f;
fVar3=0.1f;
fVar4=0.4f;
if(bParam3){
bVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
fVar2=(to_float(bVar5) / 10f);
if(func_119()){
fVar2=(fVar2 * -1f);
}
bVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
fVar3=(to_float(bVar5) / 15f);
if(func_119()){
fVar3=(fVar3 * -1f);
}
bVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
fVar4=(to_float(bVar5) / 10f);
if(func_119()){
fVar4=(fVar4 * -1f);
}}
switch (iVar1){
case 0:
*uParam1={
(Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) 
};
*uParam2={
(Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) 
};
break;
case 1:
*uParam1={
(Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) 
};
*uParam2={
(Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) 
};
break;
case 2:
*uParam1={
(Param0.f_0 - fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) 
};
*uParam2={
(Param0.f_0 + fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) 
};
break;
case 3:
*uParam1={
(Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) 
};
*uParam2={
(Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) 
};
break;
case 4:
*uParam1={
(Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) 
};
*uParam2={
(Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) 
};
break;
case 5:
*uParam1={
(Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) 
};
*uParam2={
(Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) 
};
break;
}}

int func_119(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_120(int iParam0, int iParam1){
if(func_56(iParam0, 9)){
return 1;
}
return 0;
}


void func_121(int iParam0, int iParam1){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
PED::SET_PED_KEEP_TASK(iParam1, 1);
if(func_56(iParam0, 21)){
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, 1);
}else{
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, 0);
}
if(func_56(iParam0, 6)){
PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 1);
}else{
PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, 1);
PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_171.f_38.f_1[iParam0 /*21*/].f_15);
PED::SET_PED_COMBAT_ABILITY(iParam1, func_130());
PED::SET_PED_ACCURACY(iParam1, func_129(iParam0));
PED::SET_PED_SHOOT_RATE(iParam1, func_128());
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, 0);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_127());
ENTITY::SET_ENTITY_HEALTH(iParam1, func_127(), 0);
PED::SET_PED_DIES_WHEN_INJURED(iParam1, 1);
if(func_126(iParam0)){
AUDIO::STOP_PED_SPEAKING_SYNCED(iParam1, 1);
}
func_122(iParam0, iParam1);
}


void func_122(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
struct<9> Var3;
if(func_94(iParam0, 19)){
return;
}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_20 >=0.75f){
PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, 0), Local_171.f_38.f_1[iParam0 /*21*/].f_20, false, 0);
return;
}elseif(Local_171.f_38.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_171.f_38.f_1[iParam0 /*21*/].f_20 > -1f){}
iVar0=Local_171.f_38.f_1[iParam0 /*21*/].f_14;
iVar1=0;
while (iVar1 < 6){
iVar2=Local_171.f_38.f_632[iVar0 /*10*/].f_1[iVar1];
if(iVar2 !=-1){
if(func_124(iVar2, 4)){
Var3={
func_123(iVar2) 
};
PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, 0, 0);
}}
iVar1++;
}}


struct<9> func_123(int iParam0){
struct<9> Var0;
Var0=1;
if(Local_213.f_672.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_672.f_2);
Var0={
StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal 
};
}else{
Var0={
Local_171.f_1752.f_1[iParam0 /*9*/] 
};
Var0.f_2={
Local_171.f_1752.f_1[iParam0 /*9*/].f_2 
};
Var0.f_5={
Local_171.f_1752.f_1[iParam0 /*9*/].f_5 
};
Var0.f_8=Local_171.f_1752.f_1[iParam0 /*9*/].f_8;
}
return Var0;
}


bool func_124(int iParam0, int iParam1){
struct<9> Var0;
Var0={
func_125(iParam0) 
};
return func_4(&Var0, iParam1);
}


struct<9> func_125(int iParam0){
return Local_171.f_1752.f_1[iParam0 /*9*/];
}

int func_126(int iParam0){
if(func_33(35)){
return (iParam0 % 2)==0;
}
return 0;
}

int func_127(){
switch (Local_2104.f_1158){
case 2:
return 200;
case 3:
return 300;
case 4:
return 300;
default:
}
return 200;
}

int func_128(){
switch (Local_2104.f_1158){
case 2:
return 60;
case 3:
return 80;
case 4:
return 100;
default:
}
return 60;
}

int func_129(int iParam0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_191);
Stack.Push(StackVal==joaat("weapon_rpg"));
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_191);
if(StackVal || StackVal==joaat("weapon_railgun")){
return 2;
}
switch (Local_2104.f_1158){
case 2:
return 10;
case 3:
return 25;
case 4:
return 40;
default:
}
return 10;
}

int func_130(){
switch (Local_2104.f_1158){
case 2:
return 1;
case 3:
return 2;
case 4:
return 2;
default:
}
return 1;
}


void func_131(int iParam0, int iParam1){
func_132(iParam0, 32);
PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
PED::SET_PED_KEEP_TASK(iParam1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 1);
PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, 1);
PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
PED::SET_DRIVER_ABILITY(iParam1, 1f);
PED::SET_PED_ACCURACY(iParam1, func_129(iParam0));
PED::SET_PED_SHOOT_RATE(iParam1, func_128());
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_127());
ENTITY::SET_ENTITY_HEALTH(iParam1, func_127(), 0);
PED::SET_PED_COMBAT_ABILITY(iParam1, func_130());
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}


void func_132(int iParam0, int iParam1){
if(func_133(&(Local_2104.f_22[iParam0 /*25*/].f_3), iParam1)){}}

int func_133(var uParam0, var uParam1){
int iVar0;
int iVar1;
bool bVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
bVar2=(iVar0 % 32);
if(MISC::IS_BIT_SET((*uParam0)[iVar1], bVar2)){
MISC::CLEAR_BIT(uParam0[iVar1], bVar2);
return 1;
}
return 0;
}


void func_134(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(func_137(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_2104.f_22[iParam0 /*25*/]), 1);
}
if(!func_87(iParam1)){
PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_2==joaat("mp_g_m_pros_01")){
switch (PED::GET_PED_DRAWABLE_VARIATION(iParam1, 0)){
case 0:
AUDIO::SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_black_pvg"));
break;
case 1:
AUDIO::SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_white_pvg"));
break;
case 2:
AUDIO::SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_latino_pvg"));
break;
}}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_12 !=-1){
func_93(iParam0, 2);
PHYSICS::ACTIVATE_PHYSICS(iParam1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam1, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 1, 1);
}
if(func_56(iParam0, 11)){
NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, 1, 1);
}
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_191);
iVar0=StackVal;
if(iVar0 !=0){
if(iVar0==joaat("weapon_unarmed")){
WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, 1);
}else{
WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_136(iParam0), 1);
}}
PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
PED::SET_PED_SEEING_RANGE(iParam1, Local_171.f_38.f_1[iParam0 /*21*/].f_17);
PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_171.f_38.f_1[iParam0 /*21*/].f_18);
PED::SET_PED_HEARING_RANGE(iParam1, Local_171.f_38.f_1[iParam0 /*21*/].f_19);
PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
iVar1=func_135(iParam0);
if(iVar1 !=joaat("COP")){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
}}


var func__135(int iParam0){
return Local_171.f_38.f_632[Local_171.f_38.f_1[iParam0 /*21*/].f_14 /*10*/];
}

int func_136(int iParam0){
if(Local_213.f_166.f_206 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_206);
return StackVal;
}
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_2);
Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_2);
if(StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H")){
return 1;
}
if(func_94(iParam0, 21)){
return 1;
}
return 0;
}

int func_137(int iParam0){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_12 !=-1){
if(func_138(Local_171.f_1748.f_1[Local_171.f_38.f_1[iParam0 /*21*/].f_12 /*2*/])){
return 1;
}}
if(func_33(22)){
return 1;
}
return 0;
}


bool func_138(int iParam0){
return func_139(iParam0)==-1;
}

int func_139(int iParam0){
switch (iParam0){
case 3:
return 16;
case 1:
return 10;
case 2:
return 34;
case 0:
return 36;
case 4:
return 42;
case 14:
return 14;
case 24:
return 9;
case 25:
return 1;
case 45:
return 0;
case 35:
return 17;
case 37:
return 24;
case 49:
return 25;
case 50:
return 6;
default:
}
return -1;
}

int func_140(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7){
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0)){
return 0;
}
*uParam0=NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), iParam7);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0))){
if(bParam5){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_141(int iParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
}
return 0;
}


bool func_142(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}


void func_143(int iParam0, var uParam1){
if(Local_2104.f_1176==-1){
Local_2104.f_1159=iParam0;
Local_2104.f_1176=uParam1;
}}

int func_144(int iParam0){
int iVar0;
if(!func_153(0, iParam0)){
return 0;
}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_8 !=-1){
if(func_152(Local_171.f_38.f_1[iParam0 /*21*/].f_8) !=4){
return 0;
}}
iVar0=Local_171.f_38.f_1[iParam0 /*21*/].f_12;
if(iVar0 !=-1){
if(!func_145(Local_171.f_1748.f_1[iVar0 /*2*/]) || !func_13(&(Local_2104.f_1213), 2000, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_2046)){
return 0;
}
Stack.Push(Local_213.f_166.f_207 !=0);
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_207);
if(StackVal && !StackVal){
return 0;
}
return 1;
}

int func_145(int iParam0){
int iVar0;
if(func_151(iParam0)){
return func_146(func_139(iParam0));
}else{
iVar0=0;
while (iVar0 < Local_171.f_1748){
if(Local_171.f_1748.f_1[iVar0 /*2*/]==iParam0){
if(INTERIOR::IS_VALID_INTERIOR(Local_2037[iVar0 /*3*/]) && !INTERIOR::IS_INTERIOR_CAPPED(Local_2037[iVar0 /*3*/])){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_146(int iParam0){
if(iParam0==28){
return func_150(&(Global_1955050.f_54), iParam0);
}
if(iParam0 !=-1){
func_147(iParam0);
return (func_150(&(Global_1955050.f_54), iParam0) && INTERIOR::IS_INTERIOR_READY(Global_1955050[iParam0]));
}
return 0;
}


void func_147(int iParam0){
int iVar0;
iVar0=iParam0;
if(Global_1955050[iVar0]==0){
Global_1955050[iVar0]=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_149(iParam0), func_148(iParam0));
}}


char* func_148(int iParam0){
switch (iParam0){
case 1:
return "bkr_biker_dlc_int_03";
case 0:
return "hei_heist_police_dlc";
case 2:
return "v_genbank";
case 3:
return "v_genbank";
case 4:
return "v_genbank";
case 5:
return "v_genbank";
case 6:
return "v_bank4";
case 7:
return "v_genbank";
case 8:
return "hei_generic_bank_dlc";
case 9:
return "v_rockclub";
case 10:
return "v_factory1";
case 11:
return "v_factory2";
case 12:
return "v_factory3";
case 13:
return "v_factory4";
case 14:
return "v_farmhouse";
case 15:
return "gr_gta_milo_bridge";
case 16:
return "v_recycle";
case 17:
return "v_lab";
case 18:
return "v_garagem";
case 19:
return "v_studio_lo";
case 20:
return "v_apart_midspaz";
case 21:
return "v_sheriff";
case 22:
return "v_sheriff2";
case 23:
return "dt1_03_carpark";
case 24:
return "v_carshowroom";
case 27:
return "v_faceoffice";
case 25:
return "v_abattoir";
case 26:
return "V_JEWEL2";
case 28:
return "smboat";
case 29:
return "vb_33_garage";
case 30:
return "v_chopshop";
case 31:
return "v_methlab";
case 32:
return "v_office_lobby";
case 33:
return "v_lab";
case 34:
return "v_foundry";
case 35:
return "v_refit";
case 36:
return "hei_int_mph_carrierhang3";
case 37:
return "hei_int_mph_carrierhang2";
case 38:
return "hei_int_mph_carrierhang1";
case 39:
return "hei_int_mph_carrierupper";
case 40:
return "hei_int_mph_carriercontrol1";
case 41:
return "hei_int_mph_carriercontrol2";
case 42:
return "ch3_01_trlr_int";
default:
}
return "";
}


Vector3 func__149(int iParam0){
switch (iParam0){
case 1:
return 983.2747f, -99.3188f, 73.8454f;
case 0:
return 443.2281f, -984.0744f, 29.6896f;
case 2:
return -1216.762f, -333.0008f, 36.8508f;
case 3:
return 145.4168f, -1039.277f, 28.4379f;
case 4:
return 309.7465f, -277.6442f, 53.2346f;
case 5:
return -355.4359f, -48.5326f, 48.1064f;
case 6:
return -109.4503f, 6467.768f, 30.4388f;
case 7:
return 1179.745f, 2706.985f, 37.1578f;
case 8:
return -2962.591f, 478.238f, 14.7669f;
case 9:
return -556.5089f, 286.3181f, 81.1763f;
case 10:
return -76.6618f, 6222.191f, 32.2412f;
case 11:
return -100.7106f, 6205.7f, 30.0499f;
case 12:
return -125.6972f, 6172.923f, 30.0499f;
case 13:
return -162.4785f, 6155.384f, 30.0499f;
case 14:
return 2449.785f, 4983.825f, 45.8106f;
case 15:
return -1426.362f, 6754.506f, 11.7821f;
case 16:
return -583.2097f, -1599.302f, 26.3052f;
case 17:
return 3522.845f, 3707.965f, 19.9918f;
case 18:
return 630f, 4750f, -60f;
case 19:
return 600f, 4750f, -60f;
case 20:
return 575f, 4750f, -60f;
case 21:
return 1853.625f, 3687.826f, 33.2671f;
case 22:
return -447.5651f, 6013.988f, 30.7164f;
case 23:
return -28.1023f, -688.8687f, 34.4437f;
case 24:
return -40.2938f, -1097.321f, 25.4223f;
case 27:
return -1074.853f, -250.3996f, 36.7388f;
case 25:
return 982.233f, -2160.382f, 28.4761f;
case 26:
return -630.4205f, -236.7843f, 37.057f;
case 28:
return -2032f, -1035f, 5f;
case 29:
return -1078.561f, -1678.615f, 3.5752f;
case 30:
return 479.88f, -1318.57f, 28.2f;
case 31:
return 1392.512f, 3603.185f, 38.5f;
case 32:
return 105.4557f, -745.4835f, 44.7548f;
case 33:
return 3522.845f, 3707.965f, 19.9918f;
case 34:
return 1087.195f, -1988.445f, 28.649f;
case 35:
return -583.1606f, -282.3967f, 35.394f;
case 36:
return 3053.565f, -4653.67f, 5.0773f;
case 37:
return 3058.002f, -4700.8f, 5.0773f;
case 38:
return 3080.619f, -4772.69f, 5.0773f;
case 39:
return 3088.469f, -4708.33f, 20.567f;
case 40:
return 3085.222f, -4690.66f, 26.2522f;
case 41:
return 3092.459f, -4711.389f, 26.2657f;
case 42:
return 2329.242f, 2571.494f, 45.6772f;
default:
}
return 0f, 0f, 0f;
}


bool func_150(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}


bool func_151(int iParam0){
return func_139(iParam0) !=-1;
}

int func_152(bool bParam0){
return Local_2104.f_773[bParam0 /*8*/].f_1;
}

int func_153(int iParam0, int iParam1){
if(Local_2104.f_1159==-1){
return 1;
}
if(Local_2104.f_1159==iParam0){
if(Local_2104.f_1176==iParam1){
return 1;
}}
return 0;
}


void func_154(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_155(int iParam0){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_12 !=-1 && func_138(Local_171.f_1748.f_1[Local_171.f_38.f_1[iParam0 /*21*/].f_12 /*2*/])){
return 0;
}
return 1;
}


void func_156(int iParam0){
func_68(iParam0, 0);
if(Local_213.f_166.f_181.f_3 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_181.f_3);
}}

int func_157(int iParam0){
int iVar0;
if(func_94(iParam0, 19)){
if(!func_42(Local_2104.f_1087.f_21, func_158(), 0)){
return 0;
}}
if(Local_213.f_166.f_181.f_4 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_181.f_4);
iVar0=StackVal;
if(iVar0 !=-1){
if(!func_13(&(Local_2104.f_22[iParam0 /*25*/].f_23), iVar0, 0)){
return 0;
}else{
func_28(&(Local_2104.f_22[iParam0 /*25*/].f_23));
}}}
return 1;
}

int func_158(){
return Local_171.f_1578.f_7;
}

int func_159(int iParam0){
if(func_94(iParam0, 19)){
return func_160();
}
if(Local_213.f_166.f_187 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_187);
return StackVal;
}
return 1;
}

int func_160(){
Call_Loc(Local_213.f_661);
if(StackVal){
if(func_13(&(Local_2104.f_1087.f_21), func_162(), 0)){
func_161(58);
return 1;
}}
return 0;
}


void func_161(int iParam0){
if(func_17(&uLocal_2059, iParam0)){}}

int func_162(){
return Local_171.f_1578.f_6;
}


void func_163(var uParam0, int iParam1){
bool bVar0;
if(func_94(iParam1, 19)){
bVar0=func_60(0, iParam1);
if(bVar0 !=-1){
MISC::CLEAR_BIT(uParam0, bVar0);
}}}

int func_164(int iParam0, int iParam1){
int iVar0;
if(func_94(iParam0, 19)){
iVar0=func_60(0, iParam0);
if(iVar0 !=-1){
if(func_186(iVar0)){
if((Local_2104.f_1087[iVar0 /*5*/].f_2 !=-1 && func_185(Local_2104.f_1087[iVar0 /*5*/].f_2)==6) && Local_2104.f_1087[iVar0 /*5*/].f_3 >=299f){
return 1;
}
if(func_152(Local_171.f_38.f_1[iParam0 /*21*/].f_8) !=4){
return 1;
}
if(Local_2104.f_1087[iVar0 /*5*/].f_3 !=999999f && Local_2104.f_1087[iVar0 /*5*/].f_3 > func_184()){
return 1;
}
if(Local_2104.f_1087[iVar0 /*5*/].f_4 !=999999f && Local_2104.f_1087[iVar0 /*5*/].f_4 < func_183()){
func_93(iParam0, 32);
return 1;
}}
if(func_165(iVar0)){
return 1;
}
if(func_64()){
func_93(iParam0, 32);
return 1;
}}}
return 0;
}

int func_165(int iParam0){
if(!func_166(func_176(iParam0, 1), func_173(iParam0))){
return 1;
}
return 0;
}

int func_166(bool bParam0, int iParam1){
bool bVar0;
int iVar1;
if(Local_213.f_661.f_1 !=0){
Stack.Push(bParam0);
Stack.Push(iParam1);
Call_Loc(Local_213.f_661.f_1);
return StackVal;
}
if(bParam0==-1){
return 0;
}
switch (func_172()){
case 3:
if(func_171(bParam0, 23)){
return 0;
}
if(func_183()==-1f || Local_1933[bParam0 /*7*/].f_2 > func_183()){
if(Local_1933[bParam0 /*7*/].f_4 !=func_77()){
if(func_169(Local_1933[bParam0 /*7*/].f_4)){
return 0;
}}}
break;
case 4:
bVar0=bParam0;
if(func_9(bVar0, 0, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0)){
iVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
if(func_168(iVar1, 2) || func_168(iVar1, 8)){
return 0;
}}else{
return 0;
}
break;
case 0:
if(func_94(bParam0, 2)){
return 0;
}
break;
case 1:
if(func_167(bParam0, 2)){
return 0;
}
break;
}
return 1;
}


bool func_167(bool bParam0, int iParam1){
return func_4(&(Local_2104.f_773[bParam0 /*8*/].f_2), iParam1);
}


bool func_168(int iParam0, int iParam1){
return func_4(&(Local_2109[iParam0 /*229*/].f_1), iParam1);
}

int func_169(int iParam0){
if(iParam0 > -1){
if(Global_2657589[iParam0 /*466*/].f_246 > -1){
if(func_170(Global_2657589[iParam0 /*466*/].f_246)==4){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 4)){
return 1;
}}
return 0;
}

int func_170(int iParam0){
switch (iParam0){
case -1:
return 6;
break;
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
case 4:
return 0;
break;
case 5:
return 0;
break;
case 6:
return 0;
break;
case 50:
return 0;
break;
case 7:
return 1;
break;
case 8:
return 1;
break;
case 9:
return 1;
break;
case 10:
return 1;
break;
case 11:
return 1;
break;
case 12:
return 1;
break;
case 13:
return 1;
break;
case 14:
return 1;
break;
case 15:
return 1;
break;
case 16:
return 1;
break;
case 17:
return 1;
break;
case 18:
return 1;
break;
case 19:
return 1;
break;
case 20:
return 1;
break;
case 21:
return 1;
break;
case 22:
return 2;
break;
case 23:
return 2;
break;
case 24:
return 2;
break;
case 25:
return 2;
break;
case 26:
return 2;
break;
case 27:
return 2;
break;
case 28:
return 3;
break;
case 29:
return 3;
break;
case 30:
return 3;
break;
case 31:
return 3;
break;
case 32:
return 3;
break;
case 33:
return 3;
break;
case 34:
return 3;
break;
case 35:
return 3;
break;
case 36:
return 3;
break;
case 37:
return 3;
break;
case 38:
return 3;
break;
case 39:
return 4;
break;
case 40:
return 4;
break;
case 41:
return 4;
break;
case 42:
return 4;
break;
case 43:
return 4;
break;
case 44:
return 4;
break;
case 45:
return 5;
break;
case 46:
return 3;
break;
case 47:
return 3;
break;
case 48:
return 3;
break;
case 49:
return 3;
break;
case 52:
return 3;
break;
case 51:
return 1;
break;
case 53:
return 3;
break;
case 54:
return 2;
break;
case 55:
return 1;
break;
case 56:
return 3;
break;
case 57:
return 1;
break;
case 58:
return 3;
break;
case 59:
return 3;
break;
}
return 6;
}


bool func_171(int iParam0, int iParam1){
return func_4(&(Local_2104.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_172(){
if(Local_213.f_661.f_3 !=0){
Call_Loc(Local_213.f_661.f_3);
return StackVal;
}
return 3;
}

int func_173(int iParam0){
return func_174(func_176(iParam0, 0));
}

int func_174(bool bParam0){
return func_175(func_172(), bParam0);
}

int func_175(int iParam0, bool bParam1){
int iVar0;
if(bParam1==-1){
return iVar0;
}
switch (iParam0){
case 3:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_2[bParam1])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_2104.f_2[bParam1]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_2104.f_2[bParam1]);
}}
break;
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[bParam1 /*25*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_2104.f_22[bParam1 /*25*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_2104.f_22[bParam1 /*25*/]);
}}
break;
case 1:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[bParam1 /*8*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_2104.f_773[bParam1 /*8*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_2104.f_773[bParam1 /*8*/]);
}}
break;
case 2:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_926[bParam1 /*5*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_2104.f_926[bParam1 /*5*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_2104.f_926[bParam1 /*5*/]);
}}
break;
case 4:
if(func_9(bParam1, 0, 1)){
iVar0=PLAYER::GET_PLAYER_PED(bParam1);
}
break;
}
return iVar0;
}

int func_176(int iParam0, bool bParam1){
if(iParam0 !=-1){
if(!bParam1){
if(!ENTITY::DOES_ENTITY_EXIST(func_174(Local_2104.f_1087[iParam0 /*5*/].f_1))){
Local_2104.f_1087[iParam0 /*5*/].f_1=func_177(iParam0);
}}
return Local_2104.f_1087[iParam0 /*5*/].f_1;
}
return -1;
}


bool func_177(int iParam0){
bool bVar0[32];
bool bVar1[32];
bool bVar2;
int iVar3;
int iVar4;
bool bVar5;
bool bVar6;
int iVar7;
bVar6=-1;
bVar2=false;
while (bVar2 < func_182()){
if(func_179(bVar2)){
iVar7=func_174(bVar2);
if(ENTITY::DOES_ENTITY_EXIST(iVar7)){
if(func_166(bVar2, iVar7)){
if(func_178(bVar2, iVar7)){
bVar1[iVar4]=bVar2;
iVar4++;
}
bVar0[iVar3]=bVar2;
iVar3++;
}
bVar5=bVar2;
}}
bVar2++;
}
if(iVar4 > 0){
bVar6=bVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4)];
}elseif(iVar3 > 0){
bVar6=bVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3)];
}else{
bVar6=bVar5;
}
return bVar6;
}

int func_178(bool bParam0, int iParam1){
if(Local_213.f_661.f_2 !=0){
Stack.Push(bParam0);
Stack.Push(iParam1);
Call_Loc(Local_213.f_661.f_2);
return StackVal;
}
switch (func_172()){
case 3:
if(Local_1933[bParam0 /*7*/].f_4 !=func_77()){
return 1;
}
break;
}
return 0;
}

int func_179(int iParam0){
switch (func_172()){
case 3:
return 1;
case 0:
return func_56(iParam0, 2);
case 2:
return func_181(iParam0, 24);
case 1:
return func_180(iParam0, 2);
case 4:
return 1;
default:
}
return 0;
}


bool func_180(int iParam0, int iParam1){
return func_4(&(Local_171.f_891.f_1[iParam0 /*15*/]), iParam1);
}


bool func_181(int iParam0, int iParam1){
return func_4(&(Local_171.f_1179.f_1[iParam0 /*12*/]), iParam1);
}

int func_182(){
switch (func_172()){
case 3:
return Local_171.f_19;
case 0:
return Local_171.f_38;
case 2:
return Local_171.f_1179;
case 1:
return Local_171.f_891;
case 4:
return 32;
default:
}
return 0;
}


float func_183(){
if(Local_213.f_661.f_4 !=0){
Call_Loc(Local_213.f_661.f_4);
return StackVal;
}
return 200f;
}


float func_184(){
if(Local_213.f_661.f_7 !=0){
Call_Loc(Local_213.f_661.f_7);
return StackVal;
}
return 400f;
}

int func_185(bool bParam0){
return Local_2104.f_22[bParam0 /*25*/].f_1;
}

int func_186(int iParam0){
bool bVar0;
bool bVar1;
if(func_172()==4){
bVar0=func_176(iParam0, 1);
if(bVar0 !=-1){
bVar1=bVar0;
if(!func_9(bVar1, 1, 1) || func_187(bVar1, 0, 0)){
return 0;
}}}
return 1;
}

int func_187(bool bParam0, bool bParam1, int iParam2){
if(Global_2657589[bParam0 /*466*/].f_232==99){
if((iParam2 && Global_2657589[bParam0 /*466*/].f_235==0) || iParam2==0){
return 0;
}}
if(bParam1){
if(Global_2657589[bParam0 /*466*/].f_232==13){
return 0;
}}
return 1;
}


void func_188(int iParam0, int iParam1){
if(!bLocal_2044){
return;
}
Local_2104.f_22[iParam0 /*25*/].f_1=iParam1;
}


void func_189(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4){
*iParam4=func_185(iParam0);
*bParam1=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[iParam0 /*25*/]);
if(*bParam1){
*iParam3=NETWORK::NET_TO_PED(Local_2104.f_22[iParam0 /*25*/]);
*bParam2=PED::IS_PED_INJURED(*iParam3);
}}


void func_190(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 4){
MISC::SET_BIT(uParam0, bVar0);
bVar0++;
}}


void func_191(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
iVar4=0;
while (iVar4 < Local_171.f_1179){
bVar3=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_926[iVar4 /*5*/]);
if(bVar3){
iVar0=NETWORK::NET_TO_ENT(Local_2104.f_926[iVar4 /*5*/]);
bVar2=ENTITY::IS_ENTITY_DEAD(iVar0, 0);
if(Local_213.f_432.f_36 !=0){
Stack.Push(iVar4);
Stack.Push(iVar0);
Stack.Push(bVar2);
Call_Loc(Local_213.f_432.f_36);
}}
if(func_211(iVar4) > 1 && func_211(iVar4) !=3){
if(bVar3){
if(bVar2){
func_210(iVar4, 3);
}elseif(func_209(iVar4)){
func_210(iVar4, 3);
}}else{
func_210(iVar4, 3);
}}
func_206(iVar4, iVar0);
switch (func_211(iVar4)){
case 0:
if(func_205(iVar4)){
func_210(iVar4, 1);
}
break;
case 1:
if((!bVar1 && func_204(iVar4)) && func_192(iVar4)){
func_210(iVar4, 2);
bVar1=true;
}
break;
case 2:
break;
case 3:
break;
}
iVar4++;
}}

int func_192(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
int iVar3;
int iVar4;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_926[iParam0 /*5*/])){
Var1={
func_203(iParam0) 
};
Var2={
func_202(iParam0) 
};
if(func_52(Var1)){
return 0;
}
iVar3=Local_171.f_1179.f_1[iParam0 /*12*/].f_3;
if(!func_142(iVar3)){
return 0;
}
if(func_201(&(Local_2104.f_926[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, func_181(iParam0, 22), 1, 0, 0)){
iVar0=NETWORK::NET_TO_OBJ(Local_2104.f_926[iParam0 /*5*/]);
ENTITY::SET_ENTITY_ROTATION(iVar0, Var2, 2, 1);
func_197(iParam0, iVar0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_926[iParam0 /*5*/])){
iVar4=func_196(iParam0);
if(iVar4 !=-1 && Local_171.f_1179.f_362[iVar4 /*6*/].f_2 !=-1){
iVar0=NETWORK::NET_TO_OBJ(Local_2104.f_926[iParam0 /*5*/]);
return func_193(iParam0, iVar0, iVar4);
}
return 1;
}
return 0;
}

int func_193(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=func_195(iParam2);
if(ENTITY::DOES_ENTITY_EXIST(iParam1) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0)){
if(func_194(iParam1)){
if(func_141(iVar0)){
iVar1=NETWORK::NET_TO_ENT(iVar0);
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam1, iVar1)){
Var2={
func_202(iParam0) 
};
Stack.Push(iParam1);
Stack.Push(iVar1);
Stack.Push(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, "chassis_dummy"));
Stack.Push(Local_171.f_1179.f_362[iParam2 /*6*/].f_3);
Stack.Push(Var2);
Stack.Push(iParam2);
Call_Loc(Local_213.f_432.f_25);
Stack.Push(0);
Stack.Push(iParam0);
Call_Loc(Local_213.f_432.f_26);
ENTITY::ATTACH_ENTITY_TO_ENTITY(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 2, 1, 0);
}else{
return 1;
}}}}else{
if(!ENTITY::DOES_ENTITY_EXIST(iParam1)){
}
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0)){
}}
return 0;
}

int func_194(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
}}
return 0;
}

int func_195(int iParam0){
switch (Local_171.f_1179.f_362[iParam0 /*6*/].f_1){
case 2:
return Local_2104.f_773[Local_171.f_1179.f_362[iParam0 /*6*/].f_2 /*8*/];
case 3:
return Local_2104.f_926[Local_171.f_1179.f_362[iParam0 /*6*/].f_2 /*5*/];
case 1:
return Local_2104.f_22[Local_171.f_1179.f_362[iParam0 /*6*/].f_2 /*25*/];
default:
}
return -1;
}

int func_196(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Local_171.f_1179.f_362[iVar0 /*6*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_197(int iParam0, int iParam1){
var uVar0;
var uVar1;
NETWORK::NETWORK_SET_OBJECT_SCOPE_DISTANCE(NETWORK::NET_TO_OBJ(Local_2104.f_926[iParam0 /*5*/]), 300);
ENTITY::SET_ENTITY_PROOFS(iParam1, func_181(iParam0, 17), func_181(iParam0, 18), func_181(iParam0, 19), func_181(iParam0, 20), func_181(iParam0, 21), 0, 0, 0);
func_200(iParam0, 0);
if(Local_171.f_1179.f_1[iParam0 /*12*/].f_11 !=-1 && func_138(Local_171.f_1748.f_1[Local_171.f_1179.f_1[iParam0 /*12*/].f_11 /*2*/])){
func_199(iParam0, 8);
}
if(func_181(iParam0, 32)){
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
}
if(!func_181(iParam0, 1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_2104.f_926[iParam0 /*5*/]));
}
if(func_181(iParam0, 2)){
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_2104.f_926[iParam0 /*5*/], 1, 1);
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Local_2104.f_926[iParam0 /*5*/], 1);
NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, 1, 1);
}
if(func_181(iParam0, 3)){
ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
}
if(func_181(iParam0, 4)){
ENTITY::SET_ENTITY_LIGHTS(iParam1, 1);
}
if(func_181(iParam0, 5)){
ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, 0);
}
if(func_181(iParam0, 6)){
ENTITY::SET_ENTITY_DYNAMIC(iParam1, 1);
}
if(func_181(iParam0, 7)){
ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
}
if(func_181(iParam0, 15)){
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_2104.f_926[iParam0 /*5*/]), 1200);
}
if(func_181(iParam0, 8)){
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
}
if(func_181(iParam0, 9)){
ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_2104.f_926[iParam0 /*5*/]), 1);
}
if(func_181(iParam0, 34)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, func_203(iParam0), 0, 0, 1);
}elseif(func_181(iParam0, 16)){
ENTITY::SET_ENTITY_COORDS(iParam1, func_203(iParam0), 1, 0, 0, 1);
}
if(func_181(iParam0, 33)){
ENTITY::SET_ENTITY_ROTATION(iParam1, func_202(iParam0), 2, 1);
}
if(func_181(iParam0, 10)){
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
}
if(func_181(iParam0, 11)){
ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLE(iParam1, 1);
}
if(func_198(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, 1);
}
if(func_181(iParam0, 13)){
ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
}
if(func_181(iParam0, 14)){
Stack.Push(Local_213.f_432.f_24 !=0);
Stack.Push(iParam0);
Stack.Push(&uVar0);
Stack.Push(&uVar1);
Call_Loc(Local_213.f_432.f_24);
if(StackVal && StackVal){
AUDIO::LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, 1);
AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar1, 0);
}}
if(Local_213.f_432.f_33 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_213.f_432.f_33);
}}

int func_198(int iParam0){
if(func_181(iParam0, 12)){
return 1;
}
if(Local_171.f_1179.f_1[iParam0 /*12*/].f_11 !=-1 && func_138(Local_171.f_1748.f_1[Local_171.f_1179.f_1[iParam0 /*12*/].f_11 /*2*/])){
return 1;
}
if(func_33(22)){
return 1;
}
return 0;
}


void func_199(int iParam0, int iParam1){
if(func_17(&(Local_2104.f_926[iParam0 /*5*/].f_2), iParam1)){}}


void func_200(int iParam0, int iParam1){
if(func_133(&(Local_2104.f_926[iParam0 /*5*/].f_2), iParam1)){}}

int func_201(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9){
if(!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
return 0;
}
if(bParam7){
*uParam0=NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, iParam4, bParam3, iParam5));
}else{
*uParam0=NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, iParam4, bParam3, iParam5));
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam6);
if(bParam8){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), 1);
}
if(bParam9){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
}
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0))){
if(bParam3){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}


Vector3 func__202(int iParam0){
struct<3> Var0;
if(Local_213.f_432.f_38 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_432.f_38);
Var0={
StackVal, StackVal, StackVal 
};
}
if(func_52(Var0)){
Var0={
Local_171.f_1179.f_1[iParam0 /*12*/].f_8 
};
}
return Var0;
}


Vector3 func__203(int iParam0){
struct<3> Var0;
if(Local_213.f_432.f_37 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_432.f_37);
Var0={
StackVal, StackVal, StackVal 
};
}
if(func_52(Var0)){
Var0={
Local_171.f_1179.f_1[iParam0 /*12*/].f_4 
};
}
return Var0;
}

int func_204(int iParam0){
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_2046)){
return 0;
}
return 1;
}

int func_205(int iParam0){
int iVar0;
if(Local_171.f_1179.f_1[iParam0 /*12*/].f_11 !=-1){
iVar0=Local_171.f_1179.f_1[iParam0 /*12*/].f_11;
if(!func_145(Local_171.f_1748.f_1[iVar0 /*2*/])){
return 0;
}}
if(Local_213.f_432.f_23 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_432.f_23);
return StackVal;
}
return 1;
}


void func_206(int iParam0, int iParam1){
if(Local_171.f_1179.f_1[iParam0 /*12*/].f_11==-1){
return;
}
if(func_211(iParam0) > 1 && func_211(iParam0) < 3){
if(func_207(iParam0, iParam1)){
func_199(iParam0, 8);
}else{
func_200(iParam0, 8);
}}}


bool func_207(int iParam0, int iParam1){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
iVar0=func_196(iParam0);
if(iVar0 !=-1 && Local_171.f_1179.f_362[iVar0 /*6*/].f_2 !=-1){
switch (Local_171.f_1179.f_362[iVar0 /*6*/].f_1){
case 2:
return func_167(Local_171.f_1179.f_362[iVar0 /*6*/].f_2, 2);
case 1:
return func_94(Local_171.f_1179.f_362[iVar0 /*6*/].f_2, 2);
}}
default:
}
return func_208(iParam0, 8);
}


bool func_208(bool bParam0, int iParam1){
return func_4(&(Local_2104.f_926[bParam0 /*5*/].f_2), iParam1);
}

int func_209(int iParam0){
if(Local_213.f_432.f_27 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_432.f_27);
return StackVal;
}
return 0;
}


void func_210(int iParam0, int iParam1){
Local_2104.f_926[iParam0 /*5*/].f_1=iParam1;
}

int func_211(int iParam0){
return Local_2104.f_926[iParam0 /*5*/].f_1;
}


void func_212(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
bool bVar5;
bool bVar6;
bool bVar7;
iVar1=-1;
iVar2=1;
iVar0=0;
while (iVar0 < Local_171.f_891){
bVar6=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[iVar0 /*8*/]);
if(bVar6){
iVar3=NETWORK::NET_TO_VEH(Local_2104.f_773[iVar0 /*8*/]);
bVar5=func_511(Local_2104.f_773[iVar0 /*8*/]);
bVar7=func_509(iVar3, 1, 1, 0, 0, 0, 1, 0, 0);
if(bVar5){
iVar1=func_506(iVar0, 2);
}}
if(func_152(iVar0) > 2){
if(func_152(iVar0) !=5 && func_152(iVar0) !=3){
if(!bVar6){
func_505(iVar0, 5);
}elseif(!bVar5){
func_505(iVar0, 5);
}elseif(func_504(iVar0, iVar3, bVar7)){
func_505(iVar0, 5);
}else{
func_503(iVar0, &iVar2);
}}}else{
func_503(iVar0, &iVar2);
}
if(Local_213.f_377.f_46 !=0){
Stack.Push(iVar0);
Stack.Push(iVar3);
Stack.Push(bVar5);
Stack.Push(iVar1);
Call_Loc(Local_213.f_377.f_46);
}
func_500(iVar0, iVar3);
switch (func_152(iVar0)){
case 0:
if(func_499(iVar0)){
func_505(iVar0, 2);
}
break;
case 1:
if(!bVar6){
if(func_498(iVar0)){
func_505(iVar0, 2);
}}else{
func_154(&(Local_2104.f_773[iVar0 /*8*/]));
}
break;
case 2:
if(!bVar4){
if(func_497(iVar0)){
if(func_229(iVar0)){
func_505(iVar0, 4);
bVar4=true;
}}}
break;
case 4:
if(bVar6){
if(func_228(iVar0, iVar3)){
func_505(iVar0, 5);
}else{
if(bVar5){
func_227(iVar0, iVar3);
func_218(iVar0, iVar3);
}
break;
case 5:
if(func_180(iVar0, 0)){
func_8(10);
}
if(bVar6){
if(func_228(iVar0, iVar3)){
}else{
if(func_180(iVar0, 23)){
if(bVar6){
func_154(&(Local_2104.f_773[iVar0 /*8*/]));
}}
if(func_217(iVar0)){
func_154(&(Local_2104.f_773[iVar0 /*8*/]));
func_505(iVar0, 1);
}
break;
case 3:
break;
case 6:
if(bVar6 && func_216(iVar0, iVar3)){
func_154(&(Local_2104.f_773[iVar0 /*8*/]));
}
break;
case 7:
break;
}
if(bVar7){
func_215(iVar0, 13);
}
else{
func_214(iVar0, 13);
}}
iVar0++;
func_213(&iVar2);
}


void func_213(int iParam0){
if(Local_2104.f_1087.f_26 !=*iParam0){
Local_2104.f_1087.f_26=*iParam0;
}
if(func_13(&uLocal_2088, 3000, 0)){
func_28(&uLocal_2088);
}}


void func_214(int iParam0, int iParam1){
if(func_133(&(Local_2104.f_773[iParam0 /*8*/].f_2), iParam1)){}}


void func_215(int iParam0, int iParam1){
if(func_17(&(Local_2104.f_773[iParam0 /*8*/].f_2), iParam1)){}}

int func_216(int iParam0, int iParam1){
if(func_180(iParam0, 23) || func_167(iParam0, 15)){
return 1;
}
Stack.Push(Local_213.f_377.f_52 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_213.f_377.f_52);
if(StackVal && StackVal){
return 1;
}
return 0;
}

int func_217(int iParam0){
if(func_585() !=0){
return 0;
}
if(func_167(iParam0, 15)){
return func_58(iParam0);
}
if(func_180(iParam0, 13)){
if(Local_213.f_377.f_33 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_33);
return StackVal;
}
return 1;
}
return 0;
}


void func_218(int iParam0, int iParam1){
int iVar0;
struct<3> Var1;
int iVar2;
if(!func_167(iParam0, 15)){
return;
}
iVar0=func_60(1, iParam0);
if(iVar0==-1){
return;
}
if(!func_13(&uLocal_2088, 3000, 0)){
return;
}
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
Local_2104.f_1087[iVar0 /*5*/].f_4=vdist(Var1, func_219());
iVar2=func_173(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
Local_2104.f_1087[iVar0 /*5*/].f_3=vdist(Var1, ENTITY::GET_ENTITY_COORDS(iVar2, 0));
}}


Vector3 func__219(){
if(Local_213.f_716.f_4.f_2 !=0){
Call_Loc(Local_213.f_716.f_4.f_2);
return StackVal, StackVal, StackVal;
}
return func_220(func_226());
}


Vector3 func__220(int iParam0){
struct<3> Var0;
struct<3> Var1;
if(bLocal_2043 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_2048, 0)){
if(VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_2053)){
Var0={
func_223(iParam0) 
};
if(!func_52(Var0)){
return Var0;
}}
Var1={
func_222(iParam0) 
};
if(!func_52(Var1)){
return Var1;
}}
return func_221(iParam0);
}


Vector3 func__221(int iParam0){
if(iParam0 !=0){
return Global_1956139.f_1[iParam0 /*6*/];
}
return 0f, 0f, 0f;
}


Vector3 func__222(int iParam0){
if(iParam0 !=0){
return Global_1956139.f_1[iParam0 /*6*/].f_3;
}
return 0f, 0f, 0f;
}


Vector3 func__223(int iParam0){
switch (iParam0){
case 795:
case 796:
case 797:
case 798:
case 799:
case 800:
case 801:
case 802:
return func_224(func_225(iParam0));
default:
}
return 0f, 0f, 0f;
}


Vector3 func__224(int iParam0){
switch (iParam0){
case 155:
return 394.2626f, -64.7225f, 123.3813f;
case 156:
return -1007.682f, -415.8003f, 79.1788f;
case 157:
return -597.309f, -717.4868f, 130.0455f;
case 158:
return -1012.96f, -757.0606f, 80.7534f;
default:
}
return 0f, 0f, 0f;
}

int func_225(int iParam0){
switch (iParam0){
case 930:
return 145;
break;
case 757:
return 147;
break;
case 756:
return 146;
break;
case 765:
return 149;
break;
case 766:
return 150;
break;
case 767:
return 151;
break;
case 768:
return 152;
break;
case 769:
return 153;
break;
case 795:
return 155;
break;
case 797:
return 156;
break;
case 799:
return 157;
break;
case 801:
return 158;
break;
case 796:
return 155;
break;
case 798:
return 156;
break;
case 800:
return 157;
break;
case 802:
return 158;
break;
case 845:
return 0;
break;
case 846:
return 1;
break;
case 847:
return 2;
break;
case 848:
return 3;
break;
case 849:
return 4;
break;
case 850:
return 5;
break;
case 851:
return 6;
break;
case 852:
return 7;
break;
case 853:
return 8;
break;
case 854:
return 9;
break;
case 855:
return 10;
break;
case 856:
return 11;
break;
case 857:
return 12;
break;
case 858:
return 13;
break;
case 859:
return 14;
break;
case 860:
return 15;
break;
case 861:
return 16;
break;
case 862:
return 17;
break;
case 863:
return 18;
break;
case 864:
return 19;
break;
case 865:
return 20;
break;
case 866:
return 21;
break;
case 884:
return 22;
break;
case 885:
return 23;
break;
case 886:
return 24;
break;
case 887:
return 25;
break;
case 888:
return 26;
break;
case 889:
return 27;
break;
case 890:
return 28;
break;
case 891:
return 29;
break;
case 892:
return 30;
break;
case 893:
return 31;
break;
case 894:
return 32;
break;
case 895:
return 33;
break;
case 896:
return 34;
break;
case 897:
return 35;
break;
case 898:
return 36;
break;
case 899:
return 37;
break;
case 900:
return 38;
break;
case 901:
return 39;
break;
case 902:
return 40;
break;
case 903:
return 41;
break;
case 904:
return 159;
break;
case 905:
return 160;
break;
}
return -1;
}

int func_226(){
if(Local_213.f_716.f_4.f_1 !=0){
Call_Loc(Local_213.f_716.f_4.f_1);
return StackVal;
}
if(iLocal_2049 !=-1){
return Local_1953.f_1[Local_2109[iLocal_2049 /*229*/].f_130 /*4*/];
}
return 0;
}


void func_227(int iParam0, int iParam1){
struct<3> Var0;
float fVar1;
if(iParam0 !=Local_171.f_891.f_287){
return;
}
Var0={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
fVar1=500f;
if(func_52(Local_2104.f_1227)){
Local_2104.f_1227={
5000f, 8500f, 0f 
};
}
if(vdist2(Var0, Local_2104.f_1227) > (550f * 550f)){
if(Local_2104.f_1180 !=-1){
MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_2104.f_1180, 0);
}
Local_2104.f_1227={
Var0 
};
Local_2104.f_1180=MISC::ADD_POP_MULTIPLIER_SPHERE(Local_2104.f_1227, fVar1, 1f, 0.02f, 0, 1);
}}

int func_228(int iParam0, int iParam1){
Stack.Push(Local_213.f_377.f_52 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_213.f_377.f_52);
if(StackVal && StackVal){
func_154(&(Local_2104.f_773[iParam0 /*8*/]));
return 1;
}
return 0;
}

int func_229(int iParam0){
int iVar0;
bool bVar1;
int iVar2;
func_143(1, iParam0);
iVar0=Local_171.f_891.f_1[iParam0 /*15*/].f_3;
func_496(&iVar0, iParam0);
if(!func_142(iVar0)){
return 0;
}
bVar1=true;
if(func_52(Local_2104.f_1221)){
if(func_167(iParam0, 15)){
func_494(1);
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
if(!func_489(iParam0)){
bVar1=false;
}}elseif(!func_481(iParam0)){
bVar1=false;
}}else{
if(func_180(iParam0, 35) && !func_167(iParam0, 24)){
if(!func_97(Local_171.f_891.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1)){
func_215(iParam0, 24);
}}
if(func_180(iParam0, 17) || func_167(iParam0, 24)){
if(!func_353(iParam0, &(Local_2104.f_1221), &(Local_2104.f_1230))){
bVar1=false;
}}elseif(func_180(iParam0, 25)){
Stack.Push(iParam0);
Stack.Push(&(Local_2104.f_1221));
Stack.Push(&(Local_2104.f_1230));
Call_Loc(Local_213.f_377.f_37);
if(!StackVal){
bVar1=false;
}}elseif(func_180(iParam0, 18)){
if(!func_481(iParam0)){
bVar1=false;
}}elseif(func_180(iParam0, 19)){
if(!func_489(iParam0)){
bVar1=false;
}}else{
Local_2104.f_1221={
Local_171.f_891.f_1[iParam0 /*15*/].f_4 
};
Local_2104.f_1230=Local_171.f_891.f_1[iParam0 /*15*/].f_7;
}}}
if(bVar1){
if(!func_180(iParam0, 30)){
func_330(Local_2104.f_1221, 30f, 0);
MISC::CLEAR_AREA(Local_2104.f_1221, 30f, 0, 0, 0, 1);
}
if(func_327(&(Local_2104.f_773[iParam0 /*8*/]), iVar0, Local_2104.f_1221, Local_2104.f_1230, 1, 1, 1, 0, 1, 1, 0, 0, Local_2104.f_1221.f_2 <=-100f, 0)){
iVar2=NETWORK::NET_TO_VEH(Local_2104.f_773[iParam0 /*8*/]);
func_494(0);
func_230(iParam0, iVar2);
func_113();
return 1;
}}else{
func_113();
}
return 0;
}


void func_230(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam1);
if(!func_250(iParam0, iParam1)){
func_249(iParam0, iParam1);
}
if(Local_171.f_891.f_1[iParam0 /*15*/].f_9 !=-1 && func_138(Local_171.f_1748.f_1[Local_171.f_891.f_1[iParam0 /*15*/].f_9 /*2*/])){
func_215(iParam0, 2);
}
if(func_248(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, 1);
}
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_180(iParam0, 10));
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_180(iParam0, 3));
VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, func_180(iParam0, 6));
VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_180(iParam0, 5));
if(VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0)){
VEHICLE::ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(iParam1);
}
if(func_180(iParam0, 4)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
}
if(func_180(iParam0, 25)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_2104.f_1221, 0, 0, 1);
}
if(func_180(iParam0, 8)){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam1, 0);
}
if(func_180(iParam0, 28)){
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_2104.f_773[iParam0 /*8*/], 1, 1);
NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, 1, 1);
}
if(func_167(iParam0, 14)){
ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam1, 1);
VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(iParam1, 0);
if(func_247(iParam0, iVar0)){
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, func_246(iParam0, iVar0));
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, 0);
VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
}
func_244(iParam1, iVar0);
func_243(iParam1, 1);
VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, 0);
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, func_180(iParam0, 7), 0);
func_242(iParam0, iParam1);
iVar1=func_241(iParam0);
if(iVar1 !=-1 && func_240(iVar1) !=-1){
func_239(NETWORK::NET_TO_ENT(Local_2104.f_773[iParam0 /*8*/]), Local_2104.f_1283.f_1[func_240(iVar1) /*5*/].f_1);
}}
if(func_180(iParam0, 11)){
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
}
if(func_180(iParam0, 32)){
VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, 1);
}
if(func_180(iParam0, 33)){
VEHICLE::SET_VEHICLE_SIREN(iParam1, 1);
}
if(func_238(iParam1)){
if(func_180(iParam0, 34)){
VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, 1, 1);
}else{
VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, 0, 1);
}}
if(func_167(iParam0, 15)){
iVar2=func_237(iParam0);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam1, ENTITY::GET_ENTITY_SPEED(iVar2));
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(iParam1, 1);
}
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam1, 0);
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 1, 1, 0);
if(VEHICLE::GET_NUM_MOD_KITS(iParam1) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam1, 0);
if(!VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)){
VEHICLE::TOGGLE_VEHICLE_MOD(iParam1, 18, true);
}}}else{
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
if(func_180(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1)){
VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam1, 2);
}}
if(VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)){
VEHICLE::SET_BOAT_ANCHOR(iParam1, 1);
}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iParam1, 1);
}
if(func_167(iParam0, 15) || func_180(iParam0, 19)){
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)){
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 1, 1, 0);
PHYSICS::ACTIVATE_PHYSICS(iParam1);
ENTITY::SET_ENTITY_DYNAMIC(iParam1, 1);
}}
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam1, 1);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam1, 1);
if(!func_236() || func_235()){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, 1);
}
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_171.f_891.f_1[iParam0 /*15*/].f_3)){
func_233(iParam0, iParam1);
}
ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(iParam1, 1);
func_231(iParam1);
NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_2104.f_773[iParam0 /*8*/], 1);
if(Local_213.f_377.f_43 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_213.f_377.f_43);
}}


void func_231(int iParam0){
int iVar0;
func_232(iParam0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 11);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
}}


void func_232(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh")){
DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", 1);
}}}


void func_233(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 6){
if(VEHICLE::GET_IS_DOOR_VALID(iParam1, iVar0)){
iVar1=func_234(iParam0, iVar0);
if(iVar1 !=-1){
switch (iVar1){
case 0:
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 0f);
VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, 1, 1, 1);
break;
case 1:
VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, 0, 0, 1);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 5, 1f);
break;
case 2:
VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam1, iVar0, 0, 0, 1);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, iVar0, 1, 0.3f);
break;
case 3:
VEHICLE::SET_VEHICLE_DOOR_BROKEN(iParam1, iVar0, 1);
break;
}}}
iVar0++;
}}

int func_234(int iParam0, int iParam1){
int iVar0;
int iVar1;
switch (iParam1){
case 0:
iVar0=0;
break;
case 1:
iVar0=4;
break;
case 2:
iVar0=8;
break;
case 3:
iVar0=12;
break;
case 4:
iVar0=16;
break;
case 5:
iVar0=20;
break;
}
iVar1=0;
while (iVar1 < 4){
if(MISC::IS_BIT_SET(Local_171.f_891.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1))){
return iVar1;
}
iVar1++;
}
return -1;
}

int func_235(){
return 0;
}

int func_236(){
return 0;
}

int func_237(int iParam0){
return func_174(func_176(func_60(1, iParam0), 0));
}

int func_238(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("akula") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("annihilator2")){
return 1;
}else{
return 0;
}}
return 0;
}


void func_239(int iParam0, int iParam1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
}}

int func_240(int iParam0){
return Local_2104.f_2.f_13[iParam0];
}

int func_241(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(Local_2104.f_2.f_9[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_242(int iParam0, int iParam1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2)){
DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", 1);
}}


void func_243(int iParam0, bool bParam1){
int iVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
if(bParam1){
MISC::SET_BIT(&iVar0, 13);
}else{
MISC::CLEAR_BIT(&iVar0, 13);
}
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
}}


void func_244(int iParam0, int iParam1){
switch (iParam1){
case joaat("phantom2"):
case joaat("dune5"):
VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(iParam0, 0);
break;
}
func_245(iParam0);
}


void func_245(int iParam0){
if(!Global_262145.f_4712){
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
}}


float func_246(int iParam0, int iParam1){
if(Local_213.f_377.f_36 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_36);
return StackVal;
}
switch (iParam1){
case joaat("insurgent3"):
return 1f;
default:
}
return 0.2f;
}


bool func_247(int iParam0, int iParam1){
return func_246(iParam0, iParam1) !=1f;
}

int func_248(int iParam0){
if(Local_171.f_891.f_1[iParam0 /*15*/].f_9 !=-1){
if(func_138(Local_171.f_1748.f_1[Local_171.f_891.f_1[iParam0 /*15*/].f_9 /*2*/])){
return 1;
}}
if(func_33(22)){
return 1;
}
return 0;
}


void func_249(int iParam0, int iParam1){
if(Local_171.f_891.f_1[iParam0 /*15*/].f_8 !=-1){
VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_171.f_891.f_1[iParam0 /*15*/].f_8, Local_171.f_891.f_1[iParam0 /*15*/].f_8);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_171.f_891.f_1[iParam0 /*15*/].f_8, Local_171.f_891.f_1[iParam0 /*15*/].f_8);
}}

int func_250(var uParam0, int iParam1){
struct<101> Var0;
if(Local_213.f_377.f_44 !=0){
Var0.f_9=49;
Var0.f_59=2;
Var0.f_78=-1;
Var0.f_79=-1;
Var0.f_96=-1;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_100=-1;
Stack.Push(uParam0);
Stack.Push(&Var0);
Call_Loc(Local_213.f_377.f_44);
if(StackVal){
func_251(iParam1, &Var0, 0, 1, 1);
return 1;
}}
return 0;
}


void func_251(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(PLAYER::PLAYER_ID() !=func_77()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_304(iParam0, uParam1, bParam2, bParam3);
if(uParam1->f_102 !=0){
if(uParam1->f_102==2){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 1);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}elseif(uParam1->f_102==1){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}elseif(uParam1->f_102==3){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 1);
VEHICLE::SET_DRIFT_TYRES(iParam0, 1);
}}
if(func_303(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(uParam1->f_9[44]==2){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, 1);
}else{
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, 1);
}}
if(!uParam1->f_78==-1 && uParam1->f_9[14]==-1){
AUDIO::OVERRIDE_VEH_HORN(iParam0, 1, uParam1->f_78);
}
if(!uParam1->f_79==-1){
AUDIO::SET_VEHICLE_HORN_SOUND_INDE(iParam0, uParam1->f_79);
}
if(func_302(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
}
if(func_301(iParam0)){
func_295(iParam0, func_298(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
}
if(MISC::IS_BIT_SET(uParam1->f_95, 0)){
func_266(iParam0, &(uParam1->f_81));
}
if((!func_258(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_255(iParam0);
}
if(func_254(iVar0)){
switch (uParam1->f_9[5]){
case 0:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
break;
case 1:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}
break;
case 2:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
}
break;
case 3:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
}
break;
default:
if(uParam1->f_9[5] !=-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
}
}
break;
}}
if(func_253(ENTITY::GET_ENTITY_MODEL(iParam0))){
switch (uParam1->f_9[5]){
case 1:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam0, 1);
if(uParam1->f_9[16]==5){
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21747 + 0.05f));
}
else{
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21747);
}
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, 1);
break;
default:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, 1);
break;
}}
switch (uParam1->f_94){
case 0:
break;
case 1:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(MISC::IS_BIT_SET(uParam1->f_95, 3)){
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
}
break;
case 2:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
if(func_252(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
}
else{
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
}}
break;
case 3:
break;
case 4:
break;
}}}}


bool func_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_253(int iParam0){
return func_303(iParam0);
}

int func_254(int iParam0){
switch (iParam0){
case joaat("pounder2"):
case joaat("mule4"):
case joaat("speedo4"):
case joaat("imperator"):
case joaat("deathbike"):
case joaat("cerberus"):
case joaat("bruiser"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("issi4"):
case joaat("imperator2"):
case joaat("deathbike2"):
case joaat("cerberus2"):
case joaat("bruiser2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("issi5"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("cerberus3"):
case joaat("bruiser3"):
case joaat("dominator6"):
case joaat("zr3803"):
case joaat("issi6"):
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
return 1;
break;
}
return 0;
}


void func_255(int iParam0){
struct<3> Var0;
if(Global_262145.f_20156){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0)){
Var0.f_0=ENTITY::GET_ENTITY_MODEL(iParam0);
Var0.f_1=MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID")){
Var0.f_2=MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
}else{
Var0.f_2=DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
}}
func_256(Var0);
}}}}


void func_256(struct<3> Param0){
struct<3> Var0;
Var0.f_0=-1745262668;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=Param0.f_0;
Var0.f_2.f_1=Param0.f_1;
Var0.f_2.f_2=Param0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_257(1, 1));
}

int func_257(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_9(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_100(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}

int func_258(int iParam0){
int iVar0;
if(func_265()){
iVar0=0;
while (iVar0 < 60){
if(func_170(iVar0)==iParam0){
if(func_259(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_259(int iParam0){
return func_260(iParam0, 6, 1);
}

int func_260(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_264()==0){
return MISC::IS_BIT_SET(func_261(func_263(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_261(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_262(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_262(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_102();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_263(int iParam0){
switch (iParam0){
case 0:
return 828;
break;
case 1:
return 829;
break;
case 2:
return 830;
break;
case 3:
return 831;
break;
case 4:
return 832;
break;
case 5:
return 833;
break;
case 6:
return 834;
break;
case 7:
return 835;
break;
case 8:
return 836;
break;
case 9:
return 837;
break;
case 10:
return 838;
break;
case 11:
return 839;
break;
case 12:
return 840;
break;
case 13:
return 841;
break;
case 14:
return 842;
break;
case 15:
return 844;
break;
case 16:
return 845;
break;
case 17:
return 846;
break;
case 18:
return 847;
break;
case 19:
return 848;
break;
case 20:
return 849;
break;
case 21:
return 850;
break;
case 22:
return 851;
break;
case 23:
return 852;
break;
case 24:
return 853;
break;
case 25:
return 854;
break;
case 26:
return 855;
break;
case 27:
return 856;
break;
case 28:
return 857;
break;
case 29:
return 858;
break;
case 30:
return 859;
break;
case 31:
return 860;
break;
case 32:
return 861;
break;
case 33:
return 862;
break;
case 34:
return 863;
break;
case 35:
return 864;
break;
case 36:
return 865;
break;
case 37:
return 866;
break;
case 38:
return 867;
break;
case 39:
return 868;
break;
case 40:
return 872;
break;
case 41:
return 873;
break;
case 42:
return 874;
break;
case 43:
return 875;
break;
case 44:
return 12385;
break;
case 45:
return 3811;
break;
case 46:
return 5386;
break;
case 47:
return 6158;
break;
case 48:
return 7235;
break;
case 49:
return 7881;
break;
case 52:
return 8917;
break;
case 50:
return 8268;
break;
case 51:
return 8270;
break;
case 53:
return 9557;
break;
case 54:
return 9633;
break;
case 55:
return 9848;
break;
case 56:
return 9916;
break;
case 57:
return 9918;
break;
case 58:
return 11433;
break;
case 59:
return 11844;
break;
default:
break;
}
return 14192;
}

int func_264(){
return Global_32163;
}


bool func_265(){
return Global_100733.f_388 > 0;
}

int func_266(int iParam0, var uParam1){
int iVar0;
bool bVar1;
if(!func_276(iParam0, uParam1)){
return 1;
}
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==0){
if(!func_274(iParam0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
if(func_269(&iParam0, bVar1)){
}else{
return 1;
}}else{
return 1;
}}elseif(iVar0 >=3){
return 1;
}elseif(func_267(iParam0)){}
return 0;
}

int func_267(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==1 || iVar0==2){
if(iVar0==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar1=NETWORK::GET_NETWORK_TIME();
}else{
iVar1=MISC::GET_GAME_TIMER();
}
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577913));
iVar3=20000;
if(Global_1836597){
iVar3=2000;
}
if(iVar2 > iVar3){
GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iParam0);
func_268(iParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_268(int iParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}}}
if(!MISC::IS_BIT_SET(uVar0, 16)){
MISC::SET_BIT(&uVar0, 16);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", uVar0);
}}

int func_269(int iParam0, bool bParam1){
func_273();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0)){
Global_1949998.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
if(Global_1949998.f_11 < 0f){
Global_1949998.f_11=0f;
}}
func_271(*iParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
Global_1949998.f_1.f_2=(Global_1949998.f_1.f_2 - Global_1949998.f_11);
if(Global_1949998.f_4.f_2 < 0f){
Global_1949998.f_12=1;
}
Global_1949998.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("comet4")){
Global_1949998.f_13=255;
}
if(Global_1949998.f_12){
if(func_270(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577913=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577913=MISC::GET_GAME_TIMER();
}
return 1;
}}else{
Global_1949998.f_14={
Global_1949998.f_1 
};
Global_1949998.f_14=(Global_1949998.f_14 * -1f);
Global_1949998.f_17={
Global_1949998.f_4 
};
Global_1949998.f_17=(Global_1949998.f_17 * -1f);
Global_1949998.f_20={
Global_1949998.f_7 
};
Global_1949998.f_20.f_1=(Global_1949998.f_20.f_1 * -1f);
Global_1949998.f_20.f_2=(Global_1949998.f_20.f_2 * -1f);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0)){
Global_1949998.f_23=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
}else{
Global_1949998.f_23=3;
}
Global_1949998.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1)){
Global_1949998.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
}else{
Global_1949998.f_24=3;
}
if(((Global_1949998.f_23==0 && func_270(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)) || Global_1949998.f_23 !=0) && ((Global_1949998.f_24==0 && func_270(iParam0, bParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13)) || Global_1949998.f_24 !=0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577913=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577913=MISC::GET_GAME_TIMER();
}
return 1;
}}
return 0;
}


bool func_270(var uParam0, bool bParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8){
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(bParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_271(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
if(((!func_272(Global_1950024, 0f, 0f, 0f, 0) && !func_272(Global_1950027, 0f, 0f, 0f, 0)) && !func_272(Global_1950030, 0f, 0f, 0f, 0)) && !Global_1950033==0f){
*uParam2={
Global_1950024 
};
*uParam3={
Global_1950027 
};
*uParam4={
Global_1950030 
};
*uParam5=Global_1950033;
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("dominator"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("feltzer2"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("adder"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("akuma"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("asea"):
*uParam2={
0f, 1.5f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("asterope"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bagger"):
*uParam2={
-1f, 0.16f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.09f;
break;
case joaat("baller"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller2"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("banshee"):
*uParam2={
0f, 0.94f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("bati"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("bati2"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("bfinjection"):
*uParam2={
-1f, 0.08f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bison"):
*uParam2={
0f, 1.99f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bjxl"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("blista"):
*uParam2={
0f, 1.49f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("bobcatxl"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.65f;
break;
case joaat("bodhi2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buccaneer"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("buffalo"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buffalo2"):
*uParam2={
0f, 2.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("bullet"):
*uParam2={
-1.57f, 0.07f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("carbonrs"):
*uParam2={
0f, 0.09f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("carbonizzare"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, -0.11f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cavalcade"):
*uParam2={
0f, 1.51f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.55f;
break;
case joaat("cavalcade2"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cheetah"):
*uParam2={
-1.61f, 0.26f, 0.17f 
};
*uParam3={
0.9f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("cogcabrio"):
*uParam2={
0f, 1.42f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("comet2"):
*uParam2={
0f, 1.35f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("coquette"):
*uParam2={
0f, 0.96f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.22f;
break;
case joaat("daemon"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("dilettante"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dloader"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("double"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("dubsta"):
*uParam2={
-1.71f, 0.31f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dubsta2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.75f;
break;
case joaat("elegy2"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("emperor"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("emperor2"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("entityxf"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("exemplar"):
*uParam2={
0f, 1.32f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("f620"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("faggio2"):
*uParam2={
-1f, -0.48f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("felon"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("felon2"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fq2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("fugitive"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("fusilade"):
*uParam2={
0f, 0.98f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("futo"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("gauntlet"):
*uParam2={
0f, 1.735f, 1.05f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("granger"):
*uParam2={
0f, 2.07f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("gresley"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("habanero"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("hexer"):
*uParam2={
0f, -0.46f, 1f 
};
*uParam3={
0f, 1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.14f;
break;
case joaat("hotknife"):
*uParam2={
-1.43f, -0.14f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("infernus"):
*uParam2={
-1f, 0.33f, 0.08f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*uParam5=0.25f;
break;
case joaat("ingot"):
*uParam2={
0f, 1.58f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("intruder"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("issi2"):
*uParam2={
0f, 1.21f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jackal"):
*uParam2={
0f, 1.36f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("jb700"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("khamelion"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.475f;
break;
case joaat("landstalker"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("manana"):
*uParam2={
0f, 0.86f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("mesa"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("mesa3"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("minivan"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("monroe"):
*uParam2={
0f, 1.23f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.43f;
break;
case joaat("nemesis"):
*uParam2={
0f, 0.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.1f;
break;
case joaat("ninef"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ninef2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("oracle"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("oracle2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("patriot"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("pcj"):
*uParam2={
0f, 0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("penumbra"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("peyote"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("phoenix"):
*uParam2={
0f, 1.833f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.44f;
break;
case joaat("picador"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.425f;
break;
case joaat("prairie"):
*uParam2={
0f, 1.41f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.31f;
break;
case joaat("premier"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("primo"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("radi"):
*uParam2={
0f, 1.74f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rancherxl"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rapidgt"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rapidgt2"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ratloader"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("rebel"):
*uParam2={
-1.22f, 0.6f, 0.44f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rebel2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("regina"):
*uParam2={
0f, 1.473f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rocoto"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("romero"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ruffian"):
*uParam2={
0f, -0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.19f;
break;
case joaat("ruiner"):
*uParam2={
0f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sabregt"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*uParam5=0.35f;
break;
case joaat("sadler"):
*uParam2={
0f, 2.26f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sandking"):
*uParam2={
0f, 2.496f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sandking2"):
*uParam2={
0f, 2.286f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("schafter2"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schwarzer"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("seminole"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sentinel"):
*uParam2={
0f, 1.18f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sentinel2"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("serrano"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.49f;
break;
case joaat("stanier"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("stinger"):
*uParam2={
0f, 1.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("stingergt"):
*uParam2={
-1f, -0.17f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("stratum"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sultan"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("superd"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("surano"):
*uParam2={
0f, 1.38f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("surfer"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.32f;
break;
case joaat("surfer2"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.32f;
break;
case joaat("surge"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tailgater"):
*uParam2={
0f, 1.783f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tornado"):
*uParam2={
-1.23f, 0.11f, -0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tornado2"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tornado3"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("vacca"):
*uParam2={
0f, 1.76f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vader"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("vigero"):
*uParam2={
-1f, 0.11f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("voltic"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("voodoo2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("washington"):
*uParam2={
0f, 1.61f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("youga"):
*uParam2={
0f, 2.352f, 1.003f 
};
*uParam3={
0f, -1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.175f;
break;
case joaat("zion"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zion2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("ztype"):
*uParam2={
-0.96f, -0.69f, 0.35f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
default:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, 0f, -1f 
};
*uParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("kalahari"):
*uParam2={
-1f, 0.18f, 0.1f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("paradise"):
*uParam2={
0f, 2.23f, 1f 
};
*uParam3={
0f, -0.22f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("alpha"):
*uParam2={
-1f, 0.18f, -0.05f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("huntley"):
*uParam2={
0f, 1.52f, 0.99f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("zentorno"):
*uParam2={
-1.24f, 0.3f, -0.07f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester"):
*uParam2={
-1f, 0.17f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.05f 
};
*uParam5=0.33f;
break;
case joaat("massacro"):
*uParam2={
0f, 1.37f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("turismor"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("thrust"):
*uParam2={
-1f, 0.405f, 0.4625f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1625f;
break;
case joaat("btype"):
*uParam2={
0f, 1.143f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.7125f;
break;
case joaat("rhapsody"):
*uParam2={
-1f, -0.47f, -0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2625f;
break;
case joaat("glendale"):
*uParam2={
0f, 1.683f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.775f;
break;
case joaat("warrener"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.775f;
break;
case joaat("blade"):
*uParam2={
-1f, 0.445f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.325f;
break;
case joaat("panto"):
*uParam2={
-1f, 0f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dubsta3"):
*uParam2={
-1f, 0.34f, 0.2975f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("pigalle"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("coquette2"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("innovation"):
*uParam2={
0f, 0.15f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("hakuchou"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.16f;
break;
case joaat("furoregt"):
*uParam2={
-1f, 0f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("ratloader2"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("slamvan"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dukes2"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("dukes"):
*uParam2={
-1f, 0f, 0.0375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3875f;
break;
case joaat("stalion"):
*uParam2={
-1f, 0f, 0.0925f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4375f;
break;
case joaat("blista2"):
*uParam2={
-1f, 0.5325f, 0.245f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2875f;
break;
case joaat("casco"):
*uParam2={
0f, 0.94f, 1.03f 
};
*uParam3={
0f, -0.03f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("enduro"):
*uParam2={
0f, -0.17f, 1f 
};
*uParam3={
0f, 0.34f, -0.786f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("gburrito2"):
*uParam2={
0f, 2.32f, 0.94f 
};
*uParam3={
0f, -0.182f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("guardian"):
*uParam2={
-1.94f, 1.07f, 0.38f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("kuruma"):
case joaat("kuruma2"):
*uParam2={
-1f, 0.2475f, -0.175f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.435f;
break;
case joaat("lectro"):
*uParam2={
0f, 0.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.09f;
break;
case joaat("feltzer3"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.597f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("osiris"):
*uParam2={
-1f, 0.27f, -0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("virgo"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("windsor"):
*uParam2={
-1.2f, -0.39f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.55f;
break;
case joaat("brawler"):
*uParam2={
-1f, -0.21f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("chino"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("coquette3"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("t20"):
*uParam2={
-1f, 0.4f, -0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("vindicator"):
*uParam2={
-1f, 0.21f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("faction"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("faction2"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buccaneer2"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("chino2"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("moonbeam"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("moonbeam2"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("primo2"):
*uParam2={
-1f, 0.42f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("voodoo"):
*uParam2={
-1.12f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("faction3"):
*uParam2={
-1f, 0f, 0.5f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sabregt2"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*uParam5=0.35f;
break;
case joaat("tornado5"):
*uParam2={
-1f, 0.15f, -0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("virgo2"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("virgo3"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("minivan2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan3"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("btype2"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("lurcher"):
*uParam2={
-1f, 0f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("baller3"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller4"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller5"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller6"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cog55"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cog552"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cognoscenti"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cognoscenti2"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("mamba"):
*uParam2={
-1f, -0.18f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("nightshade"):
*uParam2={
-1f, -0.2f, 0.17f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("schafter3"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter4"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter5"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter6"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("verlierer2"):
*uParam2={
-1f, -0.21f, 0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tampa"):
*uParam2={
-1f, 0f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("banshee2"):
*uParam2={
-1f, -0.4f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sultanrs"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("btype3"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bestiagts"):
*uParam2={
-1f, -0.06f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("seven70"):
*uParam2={
-1f, -0.21f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fmj"):
*uParam2={
-1f, -0.06f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("pfister811"):
*uParam2={
-1f, 0.06f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("prototipo"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("reaper"):
*uParam2={
-1f, 0.48f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rumpo3"):
*uParam2={
0f, 2.103f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("windsor2"):
*uParam2={
-1.2f, 0.03f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.55f;
break;
case joaat("xls"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("xls2"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("brioso"):
*uParam2={
-1f, -0.06f, 0.565f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("contender"):
*uParam2={
0f, 2.33f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("le7b"):
*uParam2={
-1f, -0.12f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("omnis"):
*uParam2={
-1f, 0.03f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("tropos"):
*uParam2={
-1f, 0f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("avarus"):
*uParam2={
-1f, 0.27f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("daemon2"):
*uParam2={
-1f, 0.27f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("defiler"):
*uParam2={
-1f, 0f, 0.34f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.125f;
break;
case joaat("esskey"):
*uParam2={
-1f, 0.335f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.09f;
break;
case joaat("hakuchou2"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("nightblade"):
*uParam2={
0f, -0.133f, 0.61f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.125f;
break;
case joaat("ratbike"):
*uParam2={
-1f, 0.31f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("shotaro"):
*uParam2={
-1f, 0.06f, 0.325f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("zombiea"):
*uParam2={
-1f, 0.3f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("zombieb"):
*uParam2={
-1f, 0.2f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("vortex"):
*uParam2={
-1f, 0.18f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.095f;
break;
case joaat("tornado6"):
*uParam2={
-1f, -0.03f, -0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("youga2"):
*uParam2={
0f, 2.352f, 0.253f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.175f;
break;
case joaat("wolfsbane"):
*uParam2={
-1f, 0.33f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("faggio3"):
*uParam2={
-1f, -0.54f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("faggio"):
*uParam2={
-0.9875f, -0.0175f, -0.01f 
};
*uParam3={
0.8975f, -0.26f, -0.0725f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1625f;
break;
case joaat("comet3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("diablous"):
*uParam2={
-1f, 0.006f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("diablous2"):
*uParam2={
-1f, 0.225f, 0.541f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("elegy"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fcr"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("fcr2"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("italigtb"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("italigtb2"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("nero"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("nero2"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("penetrator"):
*uParam2={
-1f, 0.153f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("ruiner2"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("ruiner3"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("specter"):
*uParam2={
-1f, -0.273f, -0.02f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("specter2"):
*uParam2={
-1f, -0.273f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("technical2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tempesta"):
*uParam2={
-1f, 0f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("voltic2"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("infernus2"):
*uParam2={
-1f, 0.33f, 0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*uParam5=0.2f;
break;
case joaat("ruston"):
*uParam2={
-1f, -0.273f, 0.084f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("turismo2"):
*uParam2={
-1f, 0.159f, -0.193f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("ardent"):
*uParam2={
-1f, 0.309f, 0.276f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("cheetah2"):
*uParam2={
-1f, 0.159f, -0.127f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("halftrack"):
*uParam2={
-1f, 0.501f, 0.531f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("nightshark"):
*uParam2={
-1.5f, 0.42f, 0.584f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("oppressor"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.08f;
break;
case joaat("tampa3"):
*uParam2={
0f, 1.515f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.275f;
break;
case joaat("technical3"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.43f;
break;
case joaat("torero"):
*uParam2={
-1f, 0.201f, 0.114f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("vagner"):
*uParam2={
-1.5f, 0.906f, 0.071f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("xa21"):
*uParam2={
-1f, 0.441f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("phantom3"):
*uParam2={
-1.3f, 2.045f, 0.802f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("hauler2"):
*uParam2={
-1.627f, 2.456f, 0.745f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cyclone"):
*uParam2={
-1f, 0.186f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("visione"):
*uParam2={
-1f, 0.432f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("vigilante"):
*uParam2={
-1f, 0.232f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.175f;
break;
case joaat("retinue"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rapidgt3"):
*uParam2={
0f, 1.972f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("avenger"):
*uParam2={
-2.02f, 6.45f, -0.716f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("deluxo"):
*uParam2={
-1f, -0.291f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("stromberg"):
*uParam2={
-1f, 0.23f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("riot2"):
*uParam2={
-1.891f, 2.144f, 0.657f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("chernobog"):
*uParam2={
-2.127f, 5.413f, 1.132f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.34f;
break;
case joaat("khanjali"):
*uParam2={
-0.897f, 1.391f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("barrage"):
*uParam2={
-1.51f, 0.71f, 0.451f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("comet4"):
*uParam2={
-1f, 0.298f, 0.257f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.36f;
break;
case joaat("neon"):
*uParam2={
-1f, 0.181f, -0.066f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("streiter"):
*uParam2={
-1f, 0.301f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sentinel3"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("yosemite"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("sc1"):
*uParam2={
-1f, 0.616f, -0.131f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("autarch"):
*uParam2={
-1f, 0f, 0.116f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("gt500"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("hustler"):
*uParam2={
-1f, -0.228f, 0.321f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("revolter"):
*uParam2={
-1f, 0.203f, 0.126f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("pariah"):
*uParam2={
-1f, -0.126f, 0.208f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("raiden"):
*uParam2={
-1f, 0.252f, -0.095f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("savestra"):
*uParam2={
-1f, 0f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("riata"):
*uParam2={
-1.3f, 0.18f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("hermes"):
*uParam2={
-1f, -0.134f, 0.158f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("comet5"):
*uParam2={
-1f, 0.002f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("z190"):
*uParam2={
-1f, -0.175f, 0.242f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("viseris"):
*uParam2={
-1f, 0f, 0.244f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.275f;
break;
case joaat("kamacho"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("gb200"):
*uParam2={
-1f, 0f, 0.407f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.225f;
break;
case joaat("fagaloa"):
*uParam2={
-1f, 0f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("ellie"):
*uParam2={
-1f, 0.441f, -0.128f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi3"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("michelli"):
*uParam2={
-1f, 0f, 0.0805f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("flashgt"):
*uParam2={
0f, 1.592f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case joaat("hotring"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tezeract"):
*uParam2={
-1f, 0.679f, 0.514f 
};
*uParam3={
1f, 0f, -0.75f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.175f;
break;
case joaat("tyrant"):
*uParam2={
-1.588f, 0.315f, 0.337f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("dominator3"):
*uParam2={
-1f, 0f, 0.221f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("taipan"):
*uParam2={
-1f, 0f, 0.219f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("entity2"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester3"):
*uParam2={
-1f, 0f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("cheburek"):
*uParam2={
-1f, 0.393f, 0.162f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("caracara"):
*uParam2={
-1f, 1.266f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("speedo4"):
*uParam2={
-1.5f, 0.833f, 0.391f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("mule4"):
*uParam2={
-1.125f, 2.691f, 0.318f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("pounder2"):
*uParam2={
-1.5f, 1.853f, 0.779f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.38f;
break;
case joaat("swinger"):
*uParam2={
-1f, 0.195f, 0.105f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("menacer"):
*uParam2={
-1.73f, 0.159f, 0.61f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("scramjet"):
*uParam2={
-1f, -0.188f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("patriot2"):
*uParam2={
-1.213f, 1.546f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("stafford"):
*uParam2={
-1f, 0.036f, 0.096f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("freecrawler"):
*uParam2={
-1f, 0.249f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("oppressor2"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.08f;
break;
case joaat("terbyte"):
*uParam2={
-1.73f, 3.397f, 0.724f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("bruiser"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("bruiser2"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("bruiser3"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("brutus"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("brutus2"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("brutus3"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("cerberus"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cerberus2"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cerberus3"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("clique"):
*uParam2={
-1f, 0.167f, 0.159f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("deveste"):
*uParam2={
-1.5f, 1.066f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("deviant"):
*uParam2={
-1f, 0.111f, 0.123f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("dominator4"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dominator5"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dominator6"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("impaler"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler2"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler3"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler4"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("imperator"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("imperator2"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("imperator3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi4"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi5"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi6"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("italigto"):
*uParam2={
-1f, -0.091f, 0.207f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("monster3"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("monster4"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("monster5"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("schlagen"):
*uParam2={
-1f, -0.105f, 0.262f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("slamvan4"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan5"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan6"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("toros"):
*uParam2={
-1f, 0.415f, 0.394f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tulip"):
*uParam2={
-1f, 0.171f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vamos"):
*uParam2={
-1f, 0f, 0.163f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("zr380"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zr3802"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zr3803"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("caracara2"):
*uParam2={
-1f, 0.687f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("drafter"):
*uParam2={
-1.045f, 0.15f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dynasty"):
*uParam2={
-1f, 0.12f, 0.334f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("emerus"):
*uParam2={
-1f, 0.372f, 0.439f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("gauntlet3"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.33f;
break;
case joaat("gauntlet4"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.33f;
break;
case joaat("hellion"):
*uParam2={
-1f, 0.27f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi7"):
*uParam2={
-1f, 0.195f, -0.063f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("jugular"):
*uParam2={
-1f, 0.213f, 0.213f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("krieger"):
*uParam2={
-1f, 0.576f, -0.123f 
};
*uParam3={
0.997f, -0.105f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("locust"):
*uParam2={
-1f, -0.207f, 0.042f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("nebula"):
*uParam2={
-1f, 0.012f, 0.147f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("neo"):
*uParam2={
-1f, 0.216f, 0.216f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("novak"):
*uParam2={
-1f, 0.24f, 0.255f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("paragon"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("paragon2"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("peyote2"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("s80"):
*uParam2={
-1f, 0.357f, 0.256f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("thrax"):
*uParam2={
-1f, 0.426f, 0.339f 
};
*uParam3={
1f, 0.06f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("zion3"):
*uParam2={
-1f, 0.108f, 0.234f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("zorrusso"):
*uParam2={
-1f, 0.273f, -0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("slamvan2"):
*uParam2={
-1f, 0.35f, 0.456f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("rebla"):
*uParam2={
0f, 1.9002f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("asbo"):
*uParam2={
-1f, 0.104f, 0.339f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("sugoi"):
*uParam2={
-1f, 0.104f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("komoda"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("vstr"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sultan2"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("kanjo"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("jb7002"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("yosemite2"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("retinue2"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("furia"):
*uParam2={
-1f, 0.0965f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("everon"):
*uParam2={
0f, 2.019f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("imorgon"):
*uParam2={
-1.5f, 0.42f, -0.2f 
};
*uParam3={
1f, -0.0997f, 0.0415f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zhaba"):
*uParam2={
-1.202f, 0.034f, 0.6635f 
};
*uParam3={
1f, -0.002f, 0f 
};
*uParam4={
0f, -0.7398f, 0f 
};
*uParam5=0.4f;
break;
case joaat("gauntlet5"):
*uParam2={
-1.5f, 0.379f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.24f;
break;
case joaat("dukes3"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("manana2"):
*uParam2={
-1.76f, 0.105f, 0.009f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.22f;
break;
case joaat("club"):
*uParam2={
0f, 1.252f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.31f;
break;
case joaat("glendale2"):
*uParam2={
0f, 2.135f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.205f;
break;
case joaat("youga3"):
*uParam2={
0f, 2.352f, 0.3f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.135f;
break;
case joaat("yosemite3"):
*uParam2={
-1f, 0.252f, 0.203f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.21f;
break;
case joaat("seminole2"):
*uParam2={
0f, 1.654f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case joaat("penumbra2"):
*uParam2={
-1.08f, 0.28f, -0.093f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("landstalker2"):
*uParam2={
-1.64f, 0.7f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("coquette4"):
*uParam2={
-1f, -0.021f, 0.273f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("tigon"):
*uParam2={
-1f, 0.156f, 0.099f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("peyote3"):
*uParam2={
-1.5f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("brioso2"):
*uParam2={
-1f, 0.275f, 0.215f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("slamtruck"):
*uParam2={
-1f, 1.454f, 0.485f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("italirsx"):
*uParam2={
-1f, 0.109f, 0.129f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("toreador"):
*uParam2={
-1f, 0.194f, 0.342f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("weevil"):
*uParam2={
-1f, 0.111f, 0.168f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("zr350"):
*uParam2={
0f, 1.632f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.19f;
break;
case joaat("calico"):
*uParam2={
-1f, 0.497f, 0.212f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester4"):
*uParam2={
-1f, 0f, 0.181f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("comet6"):
*uParam2={
-1f, 0.205f, 0.074f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("warrener2"):
*uParam2={
-1f, 0.408f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("remus"):
*uParam2={
-1f, 0.204f, 0.357f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vectre"):
*uParam2={
-1f, 0.249f, 0.164f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("dominator7"):
*uParam2={
-1f, 0.253f, 0.142f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("cypher"):
*uParam2={
-1f, 0.223f, 0.185f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("rt3000"):
*uParam2={
-1f, 0f, 0.189f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("sultan3"):
*uParam2={
-1f, 0.42f, 0.309f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.23f;
break;
case joaat("tailgater2"):
*uParam2={
-1f, 0.337f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("previon"):
*uParam2={
-1f, 0.14f, -0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("dominator8"):
*uParam2={
-1f, 0.153f, -0.006f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("futo2"):
*uParam2={
-1f, 0.318f, -0.013f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("euros"):
*uParam2={
-1f, 0.101f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("growler"):
*uParam2={
-1f, 0.151f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("cinquemila"):
*uParam2={
-1f, 0.533f, 0.197f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("champion"):
*uParam2={
-1f, 0.076f, 0.122f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("granger2"):
*uParam2={
-1f, 0.461f, 0.264f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("deity"):
*uParam2={
-1f, 0.279f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("buffalo4"):
*uParam2={
-1f, 0.251f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("baller7"):
*uParam2={
-1.194f, 0.182f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("zeno"):
*uParam2={
-1.194f, 0.409f, 0.199f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.22f;
break;
case joaat("comet7"):
*uParam2={
-1f, 0.05f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("astron"):
*uParam2={
-1f, 0.249f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("patriot3"):
*uParam2={
-1.2f, 0.474f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.23f;
break;
case joaat("jubilee"):
*uParam2={
-1.037f, 0.438f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("shinobi"):
*uParam2={
0f, 0.306f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.045f;
break;
case joaat("reever"):
*uParam2={
-1f, 0.292f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("iwagen"):
*uParam2={
-1f, 0.387f, 0.209f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("brioso3"):
*uParam2={
-1f, 0.15f, 0.2f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("corsita"):
*uParam2={
-1f, 0.1f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("greenwood"):
*uParam2={
-1f, 0.2f, 0.138f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("kanjosj"):
*uParam2={
-1f, 0.1f, 0.26f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("postlude"):
*uParam2={
-1f, 0f, 0.28f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rhinehart"):
*uParam2={
0f, 1.317f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("tenf"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("tenf2"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("torero2"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("vigero2"):
*uParam2={
-1f, -0.07f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("weevil2"):
*uParam2={
-1f, 0.07f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("draugur"):
*uParam2={
-1f, 0.5f, 0.48f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("ruiner4"):
*uParam2={
-1f, 0.5f, 0.182f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("sentinel4"):
*uParam2={
-1f, 0.147f, 0.239f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sm722"):
*uParam2={
-1f, -0.4f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("omnisegt"):
*uParam2={
0f, 1.462f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("powersurge"):
*uParam2={
-1f, 0.3f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("entity3"):
*uParam2={
-1f, 0.5f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("manchez3"):
*uParam2={
-1f, 0.066f, 0.329f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("surfer3"):
*uParam2={
-1f, 1.19f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("boor"):
*uParam2={
-1f, 0.25f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("eudora"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.7f;
break;
case joaat("tulip2"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("r300"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("virtue"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi8"):
*uParam2={
-1f, 0.3f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("broadway"):
*uParam2={
-1f, -0.4f, 0.375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("panthere"):
*uParam2={
-1f, 0.069f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("tahoma"):
*uParam2={
-1f, -0.253f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("everon2"):
*uParam2={
-1f, 0.101f, 0.227f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.6f;
break;
}
return 1;
}


bool func_272(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_273(){
Global_1949998=0;
Global_1949998.f_1={
0f, 0f, 0f 
};
Global_1949998.f_4={
0f, 0f, 0f 
};
Global_1949998.f_7={
0f, 0f, 0f 
};
Global_1949998.f_10=0f;
Global_1949998.f_11=0f;
Global_1949998.f_12=0;
Global_1949998.f_13=0;
Global_1949998.f_14={
0f, 0f, 0f 
};
Global_1949998.f_17={
0f, 0f, 0f 
};
Global_1949998.f_20={
0f, 0f, 0f 
};
Global_1949998.f_23=0;
Global_1949998.f_24=0;
}

int func_274(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_275(iParam0)){
return 1;
}}
return 0;
}

int func_275(int iParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
return MISC::IS_BIT_SET(uVar0, 16);
}}}
return 0;
}

int func_276(int iParam0, var uParam1){
bool bVar0;
bool bVar1;
if(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
bVar0=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
}else{
bVar0=func_77();
}
bVar1=false;
if(bVar0==PLAYER::PLAYER_ID()){
if(func_287(15, 0)){
bVar1=true;
}elseif(func_283(1)){
bVar1=true;
}}else{
bVar1=true;
}
if(((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || bVar0==func_77()) || !func_9(bVar0, 0, 0)) || !bVar1) || func_277(iParam0)){
return 0;
}
return 1;
}

int func_277(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
if(func_279(PLAYER::PLAYER_ID())==3){
if(func_278(iParam0) !=-1){
return 1;
}}
if(Global_1950023){
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("sanchez"):
case joaat("sanchez2"):
case joaat("blazer"):
case joaat("blazer3"):
case joaat("surfer"):
case joaat("surfer2"):
case joaat("bifta"):
case joaat("sovereign"):
case joaat("hexer"):
case joaat("dune"):
case joaat("dune2"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("insurgent"):
case joaat("insurgent2"):
case joaat("blista3"):
case joaat("stalion2"):
case joaat("gauntlet2"):
case joaat("dominator2"):
case joaat("buffalo3"):
case joaat("massacro2"):
case joaat("jester2"):
case joaat("omnis"):
case joaat("bf400"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("le7b"):
case joaat("tyrus"):
case joaat("lynx"):
case joaat("sheava"):
case joaat("chimera"):
case joaat("sanctus"):
case joaat("blazer4"):
case joaat("manchez"):
case joaat("raptor"):
case joaat("blazer5"):
case joaat("stryder"):
case joaat("formula"):
case joaat("formula2"):
case joaat("minitank"):
case joaat("outlaw"):
case joaat("vagrant"):
case joaat("openwheel1"):
case joaat("openwheel2"):
case joaat("manchez2"):
case joaat("squaddie"):
case joaat("winky"):
case joaat("veto"):
case joaat("veto2"):
case joaat("verus"):
case joaat("lm87"):
return 1;
break;
case joaat("youga"):
case joaat("youga2"):
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 7) !=-1){
return 1;
}
break;
case joaat("surano"):
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5)==1){
return 1;
}
break;
case joaat("gp1"):
return 1;
break;
case joaat("apc"):
case joaat("dune3"):
case joaat("insurgent3"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("phantom3"):
case joaat("hauler2"):
return 1;
break;
case joaat("thruster"):
return 1;
break;
case joaat("terbyte"):
return 1;
break;
case joaat("rcbandito"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("rrocket"):
case joaat("blazer2"):
case joaat("burrito2"):
case joaat("ignus"):
case joaat("draugur"):
case joaat("brickade2"):
case joaat("journey2"):
return 1;
break;
case joaat("club"):
if((VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==7){
return 1;
}
break;
case joaat("yosemite3"):
if((VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==6){
return 1;
}
break;
}
return 0;
}

int func_278(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_279(bool bParam0){
if(func_282(bParam0)==233){
return func_280(bParam0);
}
return -1;
}

int func_280(bool bParam0){
if(func_281(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_281(bool bParam0, int iParam1){
if(Global_1894573[bParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_282(bool bParam0){
if(func_281(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_33;
}
return -1;
}


bool func_283(bool bParam0){
return func_284(PLAYER::PLAYER_ID(), bParam0);
}


bool func_284(bool bParam0, bool bParam1){
return func_285(bParam0, bParam1, 1);
}

int func_285(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_77()){
return 0;
}
if(!bParam1){
if(func_286(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_77() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_286(bool bParam0, int iParam1){
if(bParam0 !=func_77()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_77()){
if(Global_1894573[bParam0 /*608*/].f_10==bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_287(int iParam0, bool bParam1){
var uVar0;
int iVar1;
if(bParam1){
if(iParam0==15){
return 1;
}}
if(func_292(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return 1;
break;
}}
uVar0=func_289(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_288(iVar1));
}

int func_288(int iParam0){
return (iParam0 % 32);
}

int func_289(int iParam0){
int iVar0;
iVar0=func_261(func_290(iParam0), -1, 0);
return iVar0;
}

int func_290(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_291(iVar0);
switch (iVar1){
case 0:
return 1291;
break;
}
return 1291;
}

int func_291(int iParam0){
return (iParam0 / 32);
}

int func_292(bool bParam0){
if(bParam0 !=func_77()){
if(func_293(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10==bParam0){
return 1;
}}
return 0;
}

int func_293(int iParam0){
if(iParam0 !=func_77()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_294(Global_2657589[iParam0 /*466*/].f_321.f_7)==22;
}}}
return 0;
}

int func_294(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
break;
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return 1;
break;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
break;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
break;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
break;
case 81:
return 5;
break;
case 82:
return 6;
break;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
break;
case 88:
return 8;
break;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
break;
case 101:
return 10;
break;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
break;
case 117:
return 12;
break;
case 122:
return 13;
break;
case 123:
return 14;
break;
case 124:
return 15;
break;
case 125:
return 16;
break;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
break;
case 145:
return 18;
break;
case 146:
return 19;
break;
case 147:
return 20;
break;
case 148:
return 21;
break;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
break;
case 154:
return 23;
break;
case 155:
case 156:
case 157:
case 158:
return 24;
break;
case 159:
return 25;
break;
case 160:
return 26;
break;
case 161:
return 27;
break;
}
return -1;
}


void func_295(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_297(iParam1);
func_296(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uVar0);
}


bool func_296(int iParam0, var uParam1){
*uParam1=-1;
switch (iParam0){
case 0:
*uParam1=4;
break;
case 1:
*uParam1=5;
break;
case 2:
*uParam1=6;
break;
case 3:
*uParam1=7;
break;
case 4:
*uParam1=111;
break;
case 5:
*uParam1=112;
break;
case 6:
*uParam1=107;
break;
case 7:
*uParam1=104;
break;
case 8:
*uParam1=98;
break;
case 9:
*uParam1=100;
break;
case 10:
*uParam1=102;
break;
case 11:
*uParam1=99;
break;
case 12:
*uParam1=105;
break;
case 13:
*uParam1=106;
break;
case 14:
*uParam1=37;
break;
case 15:
*uParam1=90;
break;
case 16:
*uParam1=88;
break;
case 17:
*uParam1=89;
break;
case 18:
*uParam1=91;
break;
case 19:
*uParam1=38;
break;
case 20:
*uParam1=138;
break;
case 21:
*uParam1=36;
break;
case 22:
*uParam1=27;
break;
case 23:
*uParam1=28;
break;
case 24:
*uParam1=29;
break;
case 25:
*uParam1=150;
break;
case 26:
*uParam1=30;
break;
case 27:
*uParam1=31;
break;
case 28:
*uParam1=32;
break;
case 29:
*uParam1=35;
break;
case 30:
*uParam1=135;
break;
case 31:
*uParam1=137;
break;
case 32:
*uParam1=136;
break;
case 33:
*uParam1=71;
break;
case 34:
*uParam1=145;
break;
case 35:
*uParam1=63;
break;
case 36:
*uParam1=64;
break;
case 37:
*uParam1=65;
break;
case 38:
*uParam1=66;
break;
case 39:
*uParam1=67;
break;
case 40:
*uParam1=68;
break;
case 41:
*uParam1=69;
break;
case 42:
*uParam1=73;
break;
case 43:
*uParam1=70;
break;
case 44:
*uParam1=74;
break;
case 45:
*uParam1=51;
break;
case 46:
*uParam1=53;
break;
case 47:
*uParam1=54;
break;
case 48:
*uParam1=92;
break;
}
return *uParam1 !=-1;
}

int func_297(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return 36;
case 2:
return 35;
case 3:
return 46;
case 4:
return 48;
case 5:
return 16;
case 6:
return 14;
case 7:
return 19;
case 8:
return 22;
case 9:
return 31;
case 10:
return 30;
case 11:
return 33;
case 12:
return 34;
default:
}
return 0;
}

int func_298(int iParam0, int iParam1, int iParam2){
if((iParam0==222 && iParam1==222) && iParam2==255){
return 0;
}
if((iParam0==2 && iParam1==21) && iParam2==255){
return 1;
}
if((iParam0==3 && iParam1==83) && iParam2==255){
return 2;
}
if((iParam0==0 && iParam1==255) && iParam2==140){
return 3;
}
if((iParam0==94 && iParam1==255) && iParam2==1){
return 4;
}
if((iParam0==255 && iParam1==255) && iParam2==0){
return 5;
}
if((iParam0==255 && iParam1==150) && iParam2==5){
return 6;
}
if((iParam0==255 && iParam1==62) && iParam2==0){
return 7;
}
if((iParam0==255 && iParam1==1) && iParam2==1){
return 8;
}
if((iParam0==255 && iParam1==50) && iParam2==100){
return 9;
}
if((iParam0==255 && iParam1==5) && iParam2==190){
return 10;
}
if((iParam0==35 && iParam1==1) && iParam2==255){
return 11;
}
if((iParam0==15 && iParam1==3) && iParam2==255){
return 12;
}
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_299()) && Global_1576216){
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 13;
}}
return 0;
}

int func_299(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_300() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_300(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_301(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_302(int iParam0, var uParam1){
*uParam1=-1f;
switch (iParam0){
case joaat("dune5"):
*uParam1=1f;
break;
case joaat("boxville5"):
*uParam1=1f;
break;
case joaat("wastelander"):
*uParam1=1f;
break;
case joaat("alphaz1"):
*uParam1=0.2f;
break;
case joaat("bombushka"):
*uParam1=0.15f;
break;
case joaat("howard"):
*uParam1=0.3f;
break;
case joaat("hunter"):
*uParam1=0.5f;
break;
case joaat("microlight"):
*uParam1=0.3f;
break;
case joaat("mogul"):
*uParam1=0.4f;
break;
case joaat("molotok"):
*uParam1=0.3f;
break;
case joaat("nokota"):
*uParam1=0.4f;
break;
case joaat("pyro"):
*uParam1=0.4f;
break;
case joaat("rogue"):
*uParam1=0.4f;
break;
case joaat("seabreeze"):
*uParam1=0.3f;
break;
case joaat("starling"):
*uParam1=0.5f;
break;
case joaat("tula"):
*uParam1=0.15f;
break;
case joaat("khanjali"):
*uParam1=0.6f;
break;
case joaat("bruiser"):
*uParam1=1f;
break;
case joaat("bruiser2"):
*uParam1=1f;
break;
case joaat("bruiser3"):
*uParam1=1f;
break;
case joaat("brutus"):
*uParam1=1f;
break;
case joaat("brutus2"):
*uParam1=1f;
break;
case joaat("brutus3"):
*uParam1=1f;
break;
case joaat("cerberus"):
*uParam1=1f;
break;
case joaat("cerberus2"):
*uParam1=1f;
break;
case joaat("cerberus3"):
*uParam1=1f;
break;
case joaat("deathbike"):
*uParam1=1f;
break;
case joaat("deathbike2"):
*uParam1=1f;
break;
case joaat("deathbike3"):
*uParam1=1f;
break;
case joaat("dominator4"):
*uParam1=1f;
break;
case joaat("dominator5"):
*uParam1=1f;
break;
case joaat("dominator6"):
*uParam1=1f;
break;
case joaat("impaler2"):
*uParam1=1f;
break;
case joaat("impaler3"):
*uParam1=1f;
break;
case joaat("impaler4"):
*uParam1=1f;
break;
case joaat("imperator"):
*uParam1=1f;
break;
case joaat("imperator2"):
*uParam1=1f;
break;
case joaat("imperator3"):
*uParam1=1f;
break;
case joaat("issi4"):
*uParam1=1f;
break;
case joaat("issi5"):
*uParam1=1f;
break;
case joaat("issi6"):
*uParam1=1f;
break;
case joaat("monster3"):
*uParam1=1f;
break;
case joaat("monster4"):
*uParam1=1f;
break;
case joaat("monster5"):
*uParam1=1f;
break;
case joaat("scarab"):
*uParam1=1f;
break;
case joaat("scarab2"):
*uParam1=1f;
break;
case joaat("scarab3"):
*uParam1=1f;
break;
case joaat("slamvan4"):
*uParam1=1f;
break;
case joaat("slamvan5"):
*uParam1=1f;
break;
case joaat("slamvan6"):
*uParam1=1f;
break;
case joaat("zr380"):
*uParam1=1f;
break;
case joaat("zr3802"):
*uParam1=1f;
break;
case joaat("zr3803"):
*uParam1=1f;
break;
}
return *uParam1 !=-1f;
}

int func_303(int iParam0){
switch (iParam0){
case joaat("deity"):
case joaat("granger2"):
case joaat("buffalo4"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("greenwood"):
case joaat("omnisegt"):
case joaat("virtue"):
case joaat("r300"):
return 1;
break;
}
return 0;
}


void func_304(int iParam0, var uParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(uParam1->f_66 !=0){
}
if(!func_325(iParam0)){
if(MISC::GET_HASH_KEY(&(uParam1->f_1)) !=0){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
}
if(*uParam1 >=0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
}}
if(uParam1->f_66==joaat("sovereign")){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
}elseif(uParam1->f_66==joaat("casco")){
iVar0=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_324(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_324(iVar6));
}
iVar6++;
}}
if(uParam1->f_66==joaat("nightshark")){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 0);
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5) !=-1){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 1);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 13)){
VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 12)){
VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
}
if(uParam1->f_5 !=-1 && uParam1->f_6 !=-1){
if(func_322(uParam1->f_5) || func_322(uParam1->f_6)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
}}
if(uParam1->f_7 < 0){
uParam1->f_7=0;
}
if(uParam1->f_8 < 0){
uParam1->f_8=0;
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_321(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_320()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_319(uParam1->f_66)){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
}else{
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 9)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}
if(bParam2){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
}
VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >=0){
VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
}
if(uParam1->f_69 > -1 && uParam1->f_69 < 255){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(uParam1->f_69==6){
func_318(iParam0, uParam1->f_69);
}}else{
func_318(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_310(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_324(iVar7 + 1))){
if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
}}elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
}
iVar7++;
}}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("le7b")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0)==-1){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
}}
if(((func_305() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
if(!MISC::IS_BIT_SET(uParam1->f_77, 23)){
if(MISC::IS_BIT_SET(uParam1->f_77, 22)){
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
}}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 27)){
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
}else{
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
}}}

int func_305(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_309(7)){
if(func_307(Global_2672505.f_4.f_16) || func_306(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_306(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_307(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_308(iParam0, 9);
}
return 0;
}


bool func_308(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_309(int iParam0){
return func_4(&(Global_2672505.f_184), iParam0);
}

int func_310(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
}elseif(iVar1==22){
if((*uParam1)[iVar0] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
if((*uParam1)[iVar0]==1){
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
}else{
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
}}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) !=((*uParam1)[iVar0] - 1)){
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
if((*uParam1)[iVar0] > 0){
if(iVar1==23){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
}elseif(iVar1==24){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
}elseif(func_316(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_315(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_313(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_313(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_312(iParam0);
if(func_311(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_311(int iParam0){
int iVar0;
int iVar1;
int iVar2;
char cVar3[32];
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=0;
while (iVar0 < 49){
iVar1=iVar0;
if(((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21) || iVar1==22){
}elseif(VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) !=-1){
StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
iVar2=MISC::GET_HASH_KEY(&cVar3);
if(iVar2 !=0){
if(iVar2==MISC::GET_HASH_KEY("MNU_CAGE") || iVar2==MISC::GET_HASH_KEY("SABRE_CAG")){
return 1;
}}}
iVar0++;
}}
return 0;
}


void func_312(var uParam0){
switch (ENTITY::GET_ENTITY_MODEL(*uParam0)){
case joaat("starling"):
if(VEHICLE::GET_VEHICLE_MOD(*uParam0, 4)==0){
VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
}else{
VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
}
break;
case joaat("slamtruck"):
VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
break;
default:
break;
}}

int func_313(int iParam0, int iParam1){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("tornado5"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 4;
break;
}
break;
case joaat("faction3"):
return 3;
break;
}
iVar0=func_314(iParam0, 38) + 1;
iVar1=func_314(iParam0, 24) + 1;
fVar2=(to_float(iParam1 + 1) / to_float(iVar0));
iVar3=(floor((to_float(iVar1) * fVar2)) - 1);
if(iVar3 < 0){
iVar3=0;
}
if(iVar3 >=bVar0){
iVar3=(bVar0 - 1);
}
return iVar3;
}
return 0;
}

int func_314(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_316(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_315(int iParam0, int iParam1){
switch (iParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return 1;
break;
case joaat("tenf2"):
case joaat("weevil2"):
case joaat("brioso3"):
case joaat("sentinel4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("sabregt2"):
if(!Global_262145.f_14734){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14735){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14733){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14736){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14738){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14737){
return 0;
}else{
return 1;
}
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("comet3"):
if(Global_262145.f_19141){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19143){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19147){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19144){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19151){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19149){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19154){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21100){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21101){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return 1;
break;
}
return 0;
}

int func_316(int iParam0, int iParam1, int iParam2){
if(!func_317() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_317(){
return 0;
}


void func_318(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
iVar1=VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1);
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("peyote2")){
return;
}
if(iVar0==-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1==1);
}}}

int func_319(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


bool func_320(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_321(int iParam0){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(uVar0, 4);
}}}
return 0;
}

int func_322(int iParam0){
if(!func_317() && func_323(iParam0)){
return 1;
}
return 0;
}

int func_323(int iParam0){
switch (iParam0){
case 161:
case 164:
case 170:
case 171:
case 183:
case 191:
case 199:
case 209:
case 216:
case 218:
return 1;
break;
}
return 0;
}

int func_324(int iParam0){
switch (iParam0){
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 2;
break;
case 4:
return 3;
break;
case 5:
return 4;
break;
case 6:
return 5;
break;
case 7:
return 6;
break;
case 8:
return 7;
break;
case 9:
return 8;
break;
case 10:
return 24;
break;
case 11:
return 25;
break;
case 12:
return 26;
break;
}
return 0;
}

int func_325(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_326(PLAYER::PLAYER_ID(), -1)){
iParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
if(func_279(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_278(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_326(bool bParam0, int iParam1){
int iVar0;
if(func_9(bParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bParam0), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_327(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13){
float fVar0;
int iVar1;
if(!STREAMING::IS_MODEL_VALID(iParam1)){
return 0;
}
if(!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1)){
return 0;
}
fVar0=1.5f;
if(iParam1==joaat("bombushka")){
fVar0=20f;
}
if(bParam9){
MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
}
iVar1=VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, iParam5, iParam4, bParam12);
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
*uParam0=NETWORK::VEH_TO_NET(iVar1);
Global_2793046.f_6736=iVar1;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(bParam13){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, 1);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, iParam8);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1)){
if(bParam6){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}else{
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
}
if(bParam11){
NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
}}
VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, iParam7);
VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, 1);
if(bParam10){
VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
}
func_328(Param2, fParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_328(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_329(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
if((Global_2635559.f_2921[1 /*6*/].f_5==iParam3 && Global_2635559.f_2921[1 /*6*/].f_4==iParam2) && vdist(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f){
return;
}
iVar0=0;
while (iVar0 < 2){
if(iVar0 < 1){
Global_2635559.f_2921[iVar0 /*6*/]={
Global_2635559.f_2921[iVar0 + 1 /*6*/] 
};
}
iVar0++;
}
Global_2635559.f_2921[1 /*6*/]={
Param0 
};
Global_2635559.f_2921[1 /*6*/].f_3=uParam1;
Global_2635559.f_2921[1 /*6*/].f_4=iParam2;
Global_2635559.f_2921[1 /*6*/].f_5=iParam3;
}}

int func_329(bool bParam0, struct<3> Param1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=bParam0;
if(iVar0 > -1){
iVar1=0;
while (iVar1 < 2){
if(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==iParam2){
Var2={
Param1 
};
if(MISC::ABSF((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f){
Var2.f_2=Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
}
if(vdist(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f){
return iVar1;
}}
iVar1++;
}}
return -1;
}


void func_330(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_349(&(Global_77348.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77348.f_555[0 /*21*/], iParam2) <=fParam1){
func_331(iVar0);
}}
iVar0++;
}}


void func_331(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_349(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
bVar0=true;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_139[iParam0], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77348.f_139[iParam0], 0)){
bVar0=false;
}}}
if(bVar0){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], 1, 1);
VEHICLE::DELETE_VEHICLE(&(Global_77348.f_139[iParam0]));
}}
Global_77348[iParam0]=1;
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)){
if(((((iParam0==24 && func_348(iParam0, 0)) && Global_78257.f_66==0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] !=0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3) && (!func_335(0, Global_77348.f_555[0 /*21*/].f_12) || !func_335(1, Global_77348.f_555[0 /*21*/].f_12))){
func_334(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), &Global_78257);
Global_78335=Global_113648.f_32751.f_5591;
}
func_332(iParam0, 0);
}}}


void func_332(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_348(iParam0, 0)){
func_333(iParam0, 1, 0);
func_333(iParam0, 2, 0);
func_333(iParam0, 3, 0);
func_333(iParam0, 4, 0);
func_333(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_333(iParam0, 0, 0);
}}


void func_333(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}}


void func_334(var uParam0, var uParam1){
uParam1->f_66=uParam0->f_66;
*uParam1=*uParam0;
uParam1->f_1={
uParam0->f_1 
};
uParam1->f_5=uParam0->f_5;
uParam1->f_6=uParam0->f_6;
uParam1->f_7=uParam0->f_7;
uParam1->f_8=uParam0->f_8;
uParam1->f_9={
uParam0->f_9 
};
uParam1->f_59={
uParam0->f_59 
};
uParam1->f_62=uParam0->f_62;
uParam1->f_63=uParam0->f_63;
uParam1->f_64=uParam0->f_64;
uParam1->f_65=uParam0->f_65;
uParam1->f_77=uParam0->f_77;
uParam1->f_67=uParam0->f_67;
uParam1->f_69=uParam0->f_69;
uParam1->f_68=uParam0->f_68;
uParam1->f_71=uParam0->f_71;
uParam1->f_72=uParam0->f_72;
uParam1->f_73=uParam0->f_73;
uParam1->f_74=uParam0->f_74;
uParam1->f_75=uParam0->f_75;
uParam1->f_76=uParam0->f_76;
}

int func_335(int iParam0, int iParam1){
int iVar0;
switch (iParam1){
case 0:
iVar0=0;
break;
case 1:
iVar0=1;
break;
case 2:
iVar0=2;
break;
}
if(iParam0 < 0 || iParam0 >=func_347(&(Global_113648.f_32751.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_336(Global_113648.f_32751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_336(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_346()){
return 0;
}}else{
iVar0=0;
while (iVar0 < FILES::GET_NUM_DLC_VEHICLES()){
if(FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1)){
if(iParam0==Var1.f_1){
if(FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
return 0;
}}}
iVar0++;
}}
if(iParam0==joaat("blimp")){
if((((!func_345() && !func_344()) && !func_343()) && !func_342()) && !func_346()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_341() || MISC::IS_PC_VERSION()) || func_340()){
}elseif(!func_343()){
return 0;
}}
if(bParam1){
if(!func_339(iParam0, iParam2)){
return 0;
}}
if(!func_337(iParam0)){
return 0;
}
return 1;
}

int func_337(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_338()){
return 1;
}
NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
if(iVar0==4){
return 1;
}
switch (iParam0){
case joaat("dune4"):
StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
break;
case joaat("voltic2"):
StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
break;
case joaat("ruiner2"):
StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
break;
case joaat("phantom2"):
StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
break;
case joaat("technical2"):
StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
break;
case joaat("boxville5"):
StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
break;
case joaat("wastelander"):
StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
break;
case joaat("blazer5"):
StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
break;
default:
return 1;
break;
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2)){
return 0;
}
return 1;
}

int func_338(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_339(int iParam0, int iParam1){
int iVar0;
int iVar1;
if((!Global_2764244 && iParam1 >=0) && iParam1 <=415){
if(MISC::IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2)){
return 1;
}}
if(Global_2764243){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14737 && iVar1 < Global_262145.f_14749){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14733 && iVar1 < Global_262145.f_14745){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14734 && iVar1 < Global_262145.f_14746){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14735 && iVar1 < Global_262145.f_14747){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14736 && iVar1 < Global_262145.f_14748){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14738 && iVar1 < Global_262145.f_14750){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14739 && iVar1 < Global_262145.f_14742){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14740 && iVar1 < Global_262145.f_14743){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14741 && iVar1 < Global_262145.f_14744){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17313 && iVar1 < Global_262145.f_17278){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17308 && iVar1 < Global_262145.f_17273){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17312 && iVar1 < Global_262145.f_17277){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17311 && iVar1 < Global_262145.f_17276){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17305 && iVar1 < Global_262145.f_17270){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17306 && iVar1 < Global_262145.f_17271){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17309 && iVar1 < Global_262145.f_17274){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17310 && iVar1 < Global_262145.f_17275){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17307 && iVar1 < Global_262145.f_17272){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17315 && iVar1 < Global_262145.f_17280){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17316 && iVar1 < Global_262145.f_17281){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17304 && iVar1 < Global_262145.f_17269){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17303 && iVar1 < Global_262145.f_17268){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17302 && iVar1 < Global_262145.f_17267){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17314 && iVar1 < Global_262145.f_17279){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17317 && iVar1 < Global_262145.f_17282){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17318 && iVar1 < Global_262145.f_17283){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17319 && iVar1 < Global_262145.f_17284){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17320 && iVar1 < Global_262145.f_17285){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17474 && iVar1 < Global_262145.f_17496){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17475 && iVar1 < Global_262145.f_17497){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17476 && iVar1 < Global_262145.f_17498){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17477 && iVar1 < Global_262145.f_17499){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17478 && iVar1 < Global_262145.f_17500){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17479 && iVar1 < Global_262145.f_17501){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17481 && iVar1 < Global_262145.f_17502){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17482 && iVar1 < Global_262145.f_17503){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17483 && iVar1 < Global_262145.f_17504){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17484 && iVar1 < Global_262145.f_17505){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17485 && iVar1 < Global_262145.f_17506){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17486 && iVar1 < Global_262145.f_17507){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17487 && iVar1 < Global_262145.f_17508){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17493 && iVar1 < Global_262145.f_17515){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17490 && iVar1 < Global_262145.f_17511){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17491 && iVar1 < Global_262145.f_17512){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17492 && iVar1 < Global_262145.f_17513){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17480 && iVar1 < Global_262145.f_17514){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17494 && iVar1 < Global_262145.f_17516){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17488 && iVar1 < Global_262145.f_17509){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17489 && iVar1 < Global_262145.f_17510){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17495 && iVar1 < Global_262145.f_17517){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19131 && iVar1 < Global_262145.f_19228){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19132 && iVar1 < Global_262145.f_19229){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19133 && iVar1 < Global_262145.f_19230){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19134 && iVar1 < Global_262145.f_19231){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19135 && iVar1 < Global_262145.f_19232){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19136 && iVar1 < Global_262145.f_19233){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19137 && iVar1 < Global_262145.f_19234){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19138 && iVar1 < Global_262145.f_19235){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19139 && iVar1 < Global_262145.f_19236){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19140 && iVar1 < Global_262145.f_19237){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19141 && iVar1 < Global_262145.f_19238){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19142 && iVar1 < Global_262145.f_19239){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19143 && iVar1 < Global_262145.f_19240){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19144 && iVar1 < Global_262145.f_19241){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19145 && iVar1 < Global_262145.f_19242){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19146 && iVar1 < Global_262145.f_19243){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19147 && iVar1 < Global_262145.f_19244){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19148 && iVar1 < Global_262145.f_19245){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19149 && iVar1 < Global_262145.f_19246){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19150 && iVar1 < Global_262145.f_19247){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19151 && iVar1 < Global_262145.f_19248){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19152 && iVar1 < Global_262145.f_19249){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19153 && iVar1 < Global_262145.f_19250){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19154 && iVar1 < Global_262145.f_19251){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19155 && iVar1 < Global_262145.f_19252){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20212 && iVar1 < Global_262145.f_20208){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20213 && iVar1 < Global_262145.f_20209){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20214 && iVar1 < Global_262145.f_20210){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20215 && iVar1 < Global_262145.f_20211){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21094 && iVar1 < Global_262145.f_21102){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21095 && iVar1 < Global_262145.f_21103){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21096 && iVar1 < Global_262145.f_21104){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21097 && iVar1 < Global_262145.f_21105){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21098 && iVar1 < Global_262145.f_21106){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21099 && iVar1 < Global_262145.f_21107){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_21893 && iVar1 < Global_262145.f_21913){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_21905 && iVar1 < Global_262145.f_21925){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_21896 && iVar1 < Global_262145.f_21916){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_21906 && iVar1 < Global_262145.f_21926){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_21894 && iVar1 < Global_262145.f_21914){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_21910 && iVar1 < Global_262145.f_21930){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_21908 && iVar1 < Global_262145.f_21928){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_21909 && iVar1 < Global_262145.f_21929){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_21904 && iVar1 < Global_262145.f_21924){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_21911 && iVar1 < Global_262145.f_21931){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_21907 && iVar1 < Global_262145.f_21927){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_21903 && iVar1 < Global_262145.f_21923){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_21895 && iVar1 < Global_262145.f_21915){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_21897 && iVar1 < Global_262145.f_21917){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_21898 && iVar1 < Global_262145.f_21918){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_21899 && iVar1 < Global_262145.f_21919){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_21900 && iVar1 < Global_262145.f_21920){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_21901 && iVar1 < Global_262145.f_21921){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_21902 && iVar1 < Global_262145.f_21922){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_22861 && iVar1 < Global_262145.f_22889){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_22862 && iVar1 < Global_262145.f_22890){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_22863 && iVar1 < Global_262145.f_22891){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_22864 && iVar1 < Global_262145.f_22892){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_22865 && iVar1 < Global_262145.f_22893){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_22866 && iVar1 < Global_262145.f_22894){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_22867 && iVar1 < Global_262145.f_22895){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_22868 && iVar1 < Global_262145.f_22896){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_22869 && iVar1 < Global_262145.f_22897){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_22870 && iVar1 < Global_262145.f_22898){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_22871 && iVar1 < Global_262145.f_22899){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_22872 && iVar1 < Global_262145.f_22900){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_22873 && iVar1 < Global_262145.f_22901){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_22874 && iVar1 < Global_262145.f_22902){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_22875 && iVar1 < Global_262145.f_22903){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_22876 && iVar1 < Global_262145.f_22904){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_22877 && iVar1 < Global_262145.f_22905){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_22878 && iVar1 < Global_262145.f_22906){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_22879 && iVar1 < Global_262145.f_22907){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_22880 && iVar1 < Global_262145.f_22908){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_22881 && iVar1 < Global_262145.f_22909){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_22882 && iVar1 < Global_262145.f_22910){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_22883 && iVar1 < Global_262145.f_22911){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_22884 && iVar1 < Global_262145.f_22912){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_22885 && iVar1 < Global_262145.f_22913){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_22886 && iVar1 < Global_262145.f_22914){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_22887 && iVar1 < Global_262145.f_22915){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_22888 && iVar1 < Global_262145.f_22916){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24081 && iVar1 < Global_262145.f_24097){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24082 && iVar1 < Global_262145.f_24098){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24086 && iVar1 < Global_262145.f_24102){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24089 && iVar1 < Global_262145.f_24105){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24094 && iVar1 < Global_262145.f_24110){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24088 && iVar1 < Global_262145.f_24104){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24080 && iVar1 < Global_262145.f_24096){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24087 && iVar1 < Global_262145.f_24103){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24093 && iVar1 < Global_262145.f_24109){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24092 && iVar1 < Global_262145.f_24108){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24083 && iVar1 < Global_262145.f_24099){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24085 && iVar1 < Global_262145.f_24101){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24095 && iVar1 < Global_262145.f_24111){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24091 && iVar1 < Global_262145.f_24107){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24084 && iVar1 < Global_262145.f_24100){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24090 && iVar1 < Global_262145.f_24106){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24171 && iVar1 < Global_262145.f_24158){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24172 && iVar1 < Global_262145.f_24159){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24177 && iVar1 < Global_262145.f_24164){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24176 && iVar1 < Global_262145.f_24163){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24174 && iVar1 < Global_262145.f_24161){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24180 && iVar1 < Global_262145.f_24167){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24182 && iVar1 < Global_262145.f_24169){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24183 && iVar1 < Global_262145.f_24170){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24181 && iVar1 < Global_262145.f_24168){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24173 && iVar1 < Global_262145.f_24160){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24175 && iVar1 < Global_262145.f_24162){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24179 && iVar1 < Global_262145.f_24166){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24178 && iVar1 < Global_262145.f_24165){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26768 && iVar1 < Global_262145.f_26770){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25781 && iVar1 < Global_262145.f_25774){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25782 && iVar1 < Global_262145.f_25775){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25783 && iVar1 < Global_262145.f_25776){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25784 && iVar1 < Global_262145.f_25777){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26769 && iVar1 < Global_262145.f_26771){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25785 && iVar1 < Global_262145.f_25778){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25786 && iVar1 < Global_262145.f_25779){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25787 && iVar1 < Global_262145.f_25780){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25792 && iVar1 < Global_262145.f_25813){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25793 && iVar1 < Global_262145.f_25814){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25794 && iVar1 < Global_262145.f_25815){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25795 && iVar1 < Global_262145.f_25816){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25796 && iVar1 < Global_262145.f_25817){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25797 && iVar1 < Global_262145.f_25818){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25798 && iVar1 < Global_262145.f_25819){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25799 && iVar1 < Global_262145.f_25820){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25800 && iVar1 < Global_262145.f_25821){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25801 && iVar1 < Global_262145.f_25822){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25802 && iVar1 < Global_262145.f_25823){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25803 && iVar1 < Global_262145.f_25824){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25804 && iVar1 < Global_262145.f_25825){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25805 && iVar1 < Global_262145.f_25826){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25806 && iVar1 < Global_262145.f_25827){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25807 && iVar1 < Global_262145.f_25828){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25808 && iVar1 < Global_262145.f_25829){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25809 && iVar1 < Global_262145.f_25830){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25810 && iVar1 < Global_262145.f_25831){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25811 && iVar1 < Global_262145.f_25832){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_25812 && iVar1 < Global_262145.f_25833){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28613 && iVar1 < Global_262145.f_28634){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28614 && iVar1 < Global_262145.f_28635){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28615 && iVar1 < Global_262145.f_28636){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28616 && iVar1 < Global_262145.f_28637){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28617 && iVar1 < Global_262145.f_28638){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28618 && iVar1 < Global_262145.f_28639){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28619 && iVar1 < Global_262145.f_28640){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28620 && iVar1 < Global_262145.f_28641){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28621 && iVar1 < Global_262145.f_28642){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28622 && iVar1 < Global_262145.f_28643){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28623 && iVar1 < Global_262145.f_28644){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28624 && iVar1 < Global_262145.f_28645){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28625 && iVar1 < Global_262145.f_28646){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28626 && iVar1 < Global_262145.f_28647){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28627 && iVar1 < Global_262145.f_28648){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28628 && iVar1 < Global_262145.f_28649){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28629 && iVar1 < Global_262145.f_28650){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28630 && iVar1 < Global_262145.f_28651){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28631 && iVar1 < Global_262145.f_28652){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28632 && iVar1 < Global_262145.f_28653){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28633 && iVar1 < Global_262145.f_28654){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28664 && iVar1 < Global_262145.f_28667){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28665 && iVar1 < Global_262145.f_28668){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28666 && iVar1 < Global_262145.f_28669){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29682 && iVar1 < Global_262145.f_29347){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29333 && iVar1 < Global_262145.f_29354){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29334 && iVar1 < Global_262145.f_29340){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29680 && iVar1 < Global_262145.f_29348){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29681 && iVar1 < Global_262145.f_29349){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29327 && iVar1 < Global_262145.f_29346){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29328 && iVar1 < Global_262145.f_29355){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29329 && iVar1 < Global_262145.f_29345){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29330 && iVar1 < Global_262145.f_29343){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29676 && iVar1 < Global_262145.f_29350){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29677 && iVar1 < Global_262145.f_29351){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29678 && iVar1 < Global_262145.f_29352){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29679 && iVar1 < Global_262145.f_29353){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29331 && iVar1 < Global_262145.f_29342){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29332 && iVar1 < Global_262145.f_29344){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30141 && iVar1 < Global_262145.f_30124){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30142 && iVar1 < Global_262145.f_30125){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30143 && iVar1 < Global_262145.f_30126){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30144 && iVar1 < Global_262145.f_30127){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30145 && iVar1 < Global_262145.f_30128){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30146 && iVar1 < Global_262145.f_30129){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30147 && iVar1 < Global_262145.f_30130){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30148 && iVar1 < Global_262145.f_30131){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30149 && iVar1 < Global_262145.f_30132){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30158){
}elseif(!Global_262145.f_30150 && iVar1 < Global_262145.f_30133){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30151 && iVar1 < Global_262145.f_30134){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30152 && iVar1 < Global_262145.f_30135){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30153 && iVar1 < Global_262145.f_30136){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30154 && iVar1 < Global_262145.f_30137){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30159){
}elseif(!Global_262145.f_30155 && iVar1 < Global_262145.f_30138){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30156 && iVar1 < Global_262145.f_30139){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30157 && iVar1 < Global_262145.f_30140){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_31009 && iVar1 < Global_262145.f_30992){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_31010 && iVar1 < Global_262145.f_30993){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_31011 && iVar1 < Global_262145.f_30994){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31012 && iVar1 < Global_262145.f_30995){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31013 && iVar1 < Global_262145.f_30996){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31014 && iVar1 < Global_262145.f_30997){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31015 && iVar1 < Global_262145.f_30998){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31016 && iVar1 < Global_262145.f_30999){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31017 && iVar1 < Global_262145.f_31000){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31018 && iVar1 < Global_262145.f_31001){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31019 && iVar1 < Global_262145.f_31002){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31020 && iVar1 < Global_262145.f_31003){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31021 && iVar1 < Global_262145.f_31004){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31022 && iVar1 < Global_262145.f_31005){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31023 && iVar1 < Global_262145.f_31006){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31024 && iVar1 < Global_262145.f_31007){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31025 && iVar1 < Global_262145.f_31008){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_31889 && iVar1 < Global_262145.f_31874){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_31890 && iVar1 < Global_262145.f_31875){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_31891 && iVar1 < Global_262145.f_31876){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_31892 && iVar1 < Global_262145.f_31877){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_31893 && iVar1 < Global_262145.f_31878){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_31894 && iVar1 < Global_262145.f_31879){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_31895 && iVar1 < Global_262145.f_31880){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_31896 && iVar1 < Global_262145.f_31881){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_31897 && iVar1 < Global_262145.f_31882){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_31898 && iVar1 < Global_262145.f_31883){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_31899 && iVar1 < Global_262145.f_31884){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_31900 && iVar1 < Global_262145.f_31885){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_31901 && iVar1 < Global_262145.f_31886){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_31902 && iVar1 < Global_262145.f_31887){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_31967){
}elseif(!Global_262145.f_31903 && iVar1 < Global_262145.f_31888){
iVar0=0;
}}elseif(iParam0==joaat("brioso3")){
if(!Global_262145.f_33131 && iVar1 < Global_262145.f_33112){
iVar0=0;
}}elseif(iParam0==joaat("corsita")){
if(!Global_262145.f_33125 && iVar1 < Global_262145.f_33106){
iVar0=0;
}}elseif(iParam0==joaat("draugur")){
if(!Global_262145.f_33129 && iVar1 < Global_262145.f_33110){
iVar0=0;
}}elseif(iParam0==joaat("greenwood")){
if(!Global_262145.f_33123 && iVar1 < Global_262145.f_33104){
iVar0=0;
}}elseif(iParam0==joaat("kanjosj")){
if(!Global_262145.f_33134 && iVar1 < Global_262145.f_33115){
iVar0=0;
}}elseif(iParam0==joaat("lm87")){
if(!Global_262145.f_33126 && iVar1 < Global_262145.f_33107){
iVar0=0;
}}elseif(iParam0==joaat("postlude")){
if(!Global_262145.f_33135 && iVar1 < Global_262145.f_33116){
iVar0=0;
}}elseif(iParam0==joaat("rhinehart")){
if(!Global_262145.f_33137 && iVar1 < Global_262145.f_33118){
iVar0=0;
}}elseif(iParam0==joaat("sm722")){
if(!Global_262145.f_33128 && iVar1 < Global_262145.f_33109){
iVar0=0;
}}elseif(iParam0==joaat("tenf")){
if(!Global_262145.f_33136 && iVar1 < Global_262145.f_33117){
iVar0=0;
}}elseif(iParam0==joaat("tenf2")){
if(!Global_262145.f_33139 && iVar1 < Global_262145.f_33120){
iVar0=0;
}}elseif(iParam0==joaat("torero2")){
if(!Global_262145.f_33124 && iVar1 < Global_262145.f_33105){
iVar0=0;
}}elseif(iParam0==joaat("vigero2")){
if(!Global_262145.f_33132 && iVar1 < Global_262145.f_33113){
iVar0=0;
}}elseif(iParam0==joaat("weevil2")){
if(!Global_262145.f_33138 && iVar1 < Global_262145.f_33119){
iVar0=0;
}}elseif(iParam0==joaat("ruiner4")){
if(!Global_262145.f_33130 && iVar1 < Global_262145.f_33111){
iVar0=0;
}}elseif(iParam0==joaat("sentinel4")){
if(!Global_262145.f_33140 && iVar1 < Global_262145.f_33121){
iVar0=0;
}}elseif(iParam0==joaat("conada")){
if(!Global_262145.f_33127 && iVar1 < Global_262145.f_33108){
iVar0=0;
}}elseif(iParam0==joaat("omnisegt")){
if(!Global_262145.f_33122 && iVar1 < Global_262145.f_33103){
iVar0=0;
}}elseif(iParam0==joaat("manchez3")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_33971 && iVar1 < Global_262145.f_33954){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_33965 && iVar1 < Global_262145.f_33949){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_33959 && iVar1 < Global_262145.f_33943){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_33960 && iVar1 < Global_262145.f_33944){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_33957 && iVar1 < Global_262145.f_33941){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_33968 && iVar1 < Global_262145.f_33952){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_33972 && iVar1 < Global_262145.f_33956){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_33969 && iVar1 < Global_262145.f_33953){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_33958 && iVar1 < Global_262145.f_33942){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_33961 && iVar1 < Global_262145.f_33945){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_33970 && iVar1 < Global_262145.f_33955){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_33966 && iVar1 < Global_262145.f_33950){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_33967 && iVar1 < Global_262145.f_33951){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_33964 && iVar1 < Global_262145.f_33948){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_33963 && iVar1 < Global_262145.f_33947){
iVar0=0;
}}
return iVar0;
}


bool func_340(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


bool func_341(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_342(){
return 0;
}

int func_343(){
return 1;
}

int func_344(){
return 1;
}

int func_345(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_346(){
var uVar0;
if(Global_152523==2){
return 1;
}elseif(Global_152523==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
MISC::SET_BIT(&uVar0, 2);
MISC::SET_BIT(&uVar0, 4);
MISC::SET_BIT(&uVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar0, false);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}

int func_347(var uParam0){
return *uParam0;
}

int func_348(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

int func_349(var uParam0, int iParam1){
int iVar0;
int iVar1;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
StringCopy(&(uParam0->f_5), "", 16);
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=145;
uParam0->f_13=-1;
uParam0->f_14=0;
uParam0->f_15={
0f, 0f, 0f 
};
uParam0->f_18={
0f, 0f, 0f 
};
switch (iParam1){
case 0:
*uParam0={
-831.8538f, 172.1154f, 69.9058f 
};
uParam0->f_3=157.5705f;
uParam0->f_4=func_350(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 1:
*uParam0={
1970.943f, 3801.684f, 31.1396f 
};
uParam0->f_3=301.3964f;
uParam0->f_4=func_350(0, 1);
uParam0->f_12=0;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 2:
*uParam0={
-22.6297f, -1439.137f, 29.6549f 
};
uParam0->f_3=180.0808f;
uParam0->f_4=func_350(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 3:
*uParam0={
-22.5229f, -1434.699f, 29.6552f 
};
uParam0->f_3=141.6114f;
uParam0->f_4=func_350(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 4:
*uParam0={
10.9281f, 545.669f, 174.7951f 
};
uParam0->f_3=61.392f;
uParam0->f_4=func_350(1, 1);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 5:
*uParam0={
6.1093f, 544.9742f, 174.2835f 
};
uParam0->f_3=92.1548f;
uParam0->f_4=func_350(1, 2);
uParam0->f_12=1;
MISC::SET_BIT(&(uParam0->f_9), 19);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 6:
*uParam0={
1981.416f, 3808.131f, 31.1384f 
};
uParam0->f_3=117.2557f;
uParam0->f_4=func_350(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 7:
*uParam0={
-1158.488f, -1529.367f, 3.8995f 
};
uParam0->f_3=35.7505f;
uParam0->f_4=func_350(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 8:
*uParam0={
148.2868f, -1270.569f, 28.2252f 
};
uParam0->f_3=208.4685f;
uParam0->f_4=func_350(2, 1);
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 20);
MISC::SET_BIT(&(uParam0->f_9), 7);
iVar0=1;
break;
case 9:
*uParam0={
1459.509f, -1380.45f, 78.3259f 
};
uParam0->f_3=99.6211f;
uParam0->f_4=joaat("scorcher");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 10:
*uParam0={
-1518.947f, -1387.865f, -0.5134f 
};
uParam0->f_3=98.3867f;
uParam0->f_4=joaat("seashark");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 11:
*uParam0={
353.0926f, 3577.593f, 32.351f 
};
uParam0->f_3=16.6205f;
uParam0->f_4=joaat("duster");
iVar0=1;
MISC::SET_BIT(&(uParam0->f_9), 6);
break;
case 12:
uParam0->f_14=0;
*uParam0={
-1652.004f, -3142.348f, 12.9921f 
};
uParam0->f_3=329.1082f;
uParam0->f_12=0;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 13:
uParam0->f_14=1;
*uParam0={
-1271.649f, -3380.685f, 12.9451f 
};
uParam0->f_3=329.5137f;
uParam0->f_12=1;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 14:
uParam0->f_14=2;
*uParam0={
1735.586f, 3294.531f, 40.1651f 
};
uParam0->f_3=194.9525f;
uParam0->f_12=2;
uParam0->f_13=359;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 15:
uParam0->f_14=3;
*uParam0={
-846.27f, -1363.19f, 0.22f 
};
uParam0->f_3=108.78f;
uParam0->f_12=0;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 16:
uParam0->f_14=4;
*uParam0={
-849.47f, -1354.99f, 0.24f 
};
uParam0->f_3=109.84f;
uParam0->f_12=1;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 17:
uParam0->f_14=5;
*uParam0={
-852.47f, -1346.2f, 0.21f 
};
uParam0->f_3=108.76f;
uParam0->f_12=2;
uParam0->f_13=356;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 18:
uParam0->f_14=6;
*uParam0={
-745.857f, -1433.904f, 4.0005f 
};
uParam0->f_12=0;
uParam0->f_13=360;
uParam0->f_15={
-756.2952f, -1441.609f, 2.9184f 
};
uParam0->f_18={
-738.0606f, -1423.068f, 8.2835f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 19:
uParam0->f_14=7;
*uParam0={
-761.8486f, -1453.829f, 4.0005f 
};
uParam0->f_12=1;
uParam0->f_13=360;
uParam0->f_15={
-772.8158f, -1459.957f, 3.2894f 
};
uParam0->f_18={
-754.3353f, -1440.836f, 8.3334f 
};
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 20:
uParam0->f_14=8;
*uParam0={
1769.3f, 3244f, 41.1f 
};
uParam0->f_12=2;
uParam0->f_13=360;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 28);
iVar0=1;
break;
case 21:
uParam0->f_14=9;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=0;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 22:
uParam0->f_14=10;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=1;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 23:
uParam0->f_14=11;
*uParam0={
192.7897f, -1020.539f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=2;
uParam0->f_13=357;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 14);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 28);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 26:
case 27:
case 28:
iVar1=(iParam1 - 26);
uParam0->f_14=(12 + iVar1);
*uParam0={
196.2794f, -1020.479f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 29:
case 30:
case 31:
iVar1=(iParam1 - 29);
uParam0->f_14=(15 + iVar1);
*uParam0={
199.8872f, -1020.048f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 32:
case 33:
case 34:
iVar1=(iParam1 - 32);
uParam0->f_14=(18 + iVar1);
*uParam0={
203.6006f, -1019.776f, -99.98f 
};
uParam0->f_3=180f;
uParam0->f_4=0;
uParam0->f_12=(0 + iVar1);
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 12);
MISC::SET_BIT(&(uParam0->f_9), 7);
MISC::SET_BIT(&(uParam0->f_9), 27);
MISC::SET_BIT(&(uParam0->f_9), 24);
MISC::SET_BIT(&(uParam0->f_9), 29);
iVar0=1;
break;
case 24:
uParam0->f_14=21;
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 25:
uParam0->f_14=22;
*uParam0={
723.2515f, -632.0496f, 27.1484f 
};
uParam0->f_3=12.9316f;
uParam0->f_4=joaat("tailgater");
MISC::SET_BIT(&(uParam0->f_9), 10);
MISC::SET_BIT(&(uParam0->f_9), 11);
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 12);
iVar0=1;
break;
case 35:
*uParam0={
-51.23f, 3111.9f, 24.95f 
};
uParam0->f_3=46.78f;
uParam0->f_4=joaat("proptrailer");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 36:
*uParam0={
-55.7984f, -1096.586f, 25.4223f 
};
uParam0->f_3=308.0596f;
uParam0->f_4=joaat("bjxl");
uParam0->f_10=126;
uParam0->f_11=126;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 37:
*uParam0={
-2892.93f, 3192.37f, 11.66f 
};
uParam0->f_3=-132.35f;
uParam0->f_4=joaat("velum");
uParam0->f_10=157;
uParam0->f_11=157;
MISC::SET_BIT(&(uParam0->f_9), 9);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 13);
iVar0=1;
break;
case 38:
*uParam0={
1744.308f, 3270.673f, 40.2076f 
};
uParam0->f_3=125f;
uParam0->f_4=joaat("cargobob3");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 39:
*uParam0={
1751.44f, 3322.643f, 42.1855f 
};
uParam0->f_3=268.134f;
uParam0->f_4=joaat("submersible");
MISC::SET_BIT(&(uParam0->f_9), 23);
iVar0=1;
break;
case 41:
*uParam0={
1377.104f, -2076.2f, 52f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("towtruck");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 40:
*uParam0={
1380.42f, -2072.77f, 51.7607f 
};
uParam0->f_3=37.5f;
uParam0->f_4=joaat("trash");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 42:
*uParam0={
1359.389f, 3618.441f, 33.8907f 
};
uParam0->f_3=108.2337f;
uParam0->f_4=joaat("barracks");
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 43:
*uParam0={
693.1154f, -1018.155f, 21.6387f 
};
uParam0->f_3=177.6454f;
uParam0->f_4=joaat("firetruk");
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 8);
iVar0=1;
break;
case 44:
*uParam0={
-73.6963f, 495.124f, 143.5226f 
};
uParam0->f_3=155.5994f;
uParam0->f_4=joaat("vacca");
iVar0=1;
break;
case 45:
*uParam0={
-67.6314f, 891.8266f, 234.5348f 
};
uParam0->f_3=294.993f;
uParam0->f_4=joaat("surano");
iVar0=1;
break;
case 46:
*uParam0={
533.9048f, -169.2469f, 53.7005f 
};
uParam0->f_3=1.2998f;
uParam0->f_4=joaat("tornado2");
iVar0=1;
break;
case 47:
*uParam0={
-726.8914f, -408.6952f, 34.0416f 
};
uParam0->f_3=267.7392f;
uParam0->f_4=joaat("superd");
iVar0=1;
break;
case 48:
*uParam0={
-1321.519f, 261.3993f, 61.5709f 
};
uParam0->f_3=350.7697f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 49:
*uParam0={
-1267.999f, 451.6463f, 93.7071f 
};
uParam0->f_3=48.9311f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 50:
*uParam0={
-1062.076f, -226.7637f, 37.157f 
};
uParam0->f_3=234.2767f;
uParam0->f_4=joaat("double");
iVar0=1;
break;
case 51:
*uParam0={
68.16914f, -1558.958f, 29.46904f 
};
uParam0->f_3=49.90575f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 52:
*uParam0={
589.4399f, 2736.708f, 42.03316f 
};
uParam0->f_3=-175.7105f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 53:
*uParam0={
-488.774f, -344.5721f, 34.36356f 
};
uParam0->f_3=82.4042f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 54:
*uParam0={
288.8808f, -585.4728f, 43.15428f 
};
uParam0->f_3=-20.80707f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 55:
*uParam0={
304.8294f, -1383.674f, 31.67744f 
};
uParam0->f_3=-41.11603f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 56:
*uParam0={
1126.194f, -1481.486f, 34.7016f 
};
uParam0->f_3=-91.43369f;
uParam0->f_4=joaat("rumpo2");
uParam0->f_12=2;
MISC::SET_BIT(&(uParam0->f_9), 26);
iVar0=1;
break;
case 57:
*uParam0={
-1598.36f, 5252.84f, 0f 
};
uParam0->f_3=28.14f;
uParam0->f_4=joaat("submersible");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 58:
*uParam0={
-1602.62f, 5260.37f, 0.86f 
};
uParam0->f_3=25.32f;
uParam0->f_4=joaat("dinghy");
uParam0->f_13=404;
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 22);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 59:
*uParam0={
2116.571f, 4763.279f, 40.1596f 
};
uParam0->f_3=198.723f;
uParam0->f_4=joaat("bfinjection");
iVar0=1;
break;
case 60:
*uParam0={
1133.21f, 120.2f, 80.9f 
};
uParam0->f_3=134.4f;
if(func_346()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 61:
*uParam0={
-806.31f, -2679.65f, 13.9f 
};
uParam0->f_3=150.54f;
if(func_346()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 62:
*uParam0={
1985.85f, 3828.96f, 31.98f 
};
uParam0->f_3=-16.58f;
uParam0->f_4=joaat("blazer3");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 63:
*uParam0={
3870.75f, 4464.67f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=joaat("submersible2");
uParam0->f_13=308;
MISC::SET_BIT(&(uParam0->f_9), false);
MISC::SET_BIT(&(uParam0->f_9), 21);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
MISC::SET_BIT(&(uParam0->f_9), 30);
iVar0=1;
break;
case 64:
*uParam0={
1257.729f, -2564.474f, 41.717f 
};
uParam0->f_3=284.5561f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 65:
*uParam0={
643.2823f, 3014.152f, 42.2733f 
};
uParam0->f_3=128.0554f;
uParam0->f_4=joaat("dukes2");
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 66:
*uParam0={
38.9368f, 850.8677f, 196.3f 
};
uParam0->f_3=311.6813f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
case 67:
*uParam0={
1333.875f, 4262.226f, 30.78f 
};
uParam0->f_3=262.5293f;
uParam0->f_4=joaat("dodo");
MISC::SET_BIT(&(uParam0->f_9), 30);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 6);
iVar0=1;
break;
}
if(MISC::IS_BIT_SET(uParam0->f_9, 10)){
uParam0->f_4=Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(((((uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra")) || uParam0->f_4==joaat("luxor")) || uParam0->f_4==joaat("shamal")) || uParam0->f_4==joaat("titan")) || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_272(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_272(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_272(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_350(int iParam0, int iParam1){
struct<82> Var0;
if(func_352(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_351(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_351(int iParam0, var uParam1, int iParam2){
int iVar0;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (iParam0){
case 0:
iVar0=joaat("tailgater");
if(Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131]){
iVar0=joaat("premier");
}
switch (iVar0){
case joaat("tailgater"):
*uParam1=iVar0;
uParam1->f_2=3f;
uParam1->f_4=0;
uParam1->f_9=1;
uParam1->f_11[0]=1;
StringCopy(&(uParam1->f_27), "5MDS003", 16);
break;
case joaat("premier"):
*uParam1=iVar0;
uParam1->f_2=14.9f;
uParam1->f_5=43;
uParam1->f_6=43;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_9=0;
StringCopy(&(uParam1->f_27), "880HS955", 16);
break;
}
break;
case 2:
iVar0=joaat("bodhi2");
switch (iVar0){
case joaat("bodhi2"):
*uParam1=iVar0;
uParam1->f_2=14f;
uParam1->f_5=32;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "BETTY 32", 16);
if(Global_113648.f_9087.f_99.f_58[119]){
uParam1->f_11[1]=1;
}
break;
}
break;
case 1:
if(iParam2==1){
iVar0=joaat("buffalo2");
}elseif(iParam2==2){
iVar0=joaat("bagger");
}elseif(Global_113648.f_9087.f_99.f_58[118]){
iVar0=joaat("bagger");
}else{
iVar0=joaat("buffalo2");
}
switch (iVar0){
case joaat("bagger"):
*uParam1=iVar0;
uParam1->f_2=6f;
uParam1->f_5=53;
uParam1->f_6=0;
uParam1->f_7=59;
uParam1->f_8=156;
StringCopy(&(uParam1->f_27), "FC88", 16);
break;
case joaat("buffalo2"):
*uParam1=iVar0;
uParam1->f_2=0f;
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_10=1;
StringCopy(&(uParam1->f_27), "FC1988", 16);
uParam1->f_11[0]=1;
uParam1->f_11[1]=1;
uParam1->f_11[2]=1;
uParam1->f_11[3]=1;
uParam1->f_11[4]=1;
uParam1->f_11[5]=1;
uParam1->f_11[6]=1;
uParam1->f_11[7]=1;
uParam1->f_11[8]=1;
break;
}
break;
default:
break;
}}


bool func_352(int iParam0){
return iParam0 < 3;
}


bool func_353(int iParam0, var uParam1, var uParam2){
struct<35> Var0;
func_494(1);
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_38);
Var0={
StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal 
};
return func_354(Local_171.f_891.f_1[iParam0 /*15*/].f_4, Local_171.f_891.f_1[iParam0 /*15*/].f_4, Local_171.f_891.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_354(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6){
bool bVar0;
int iVar1;
float fVar2;
float fVar3;
float fVar4;
struct<61> Var5;
struct<61> Var6;
bVar0=false;
if(uParam6->f_14){
if(uParam6->f_25){
uParam6->f_25=0;
}}
if(!func_478()){
return 0;
}
if(func_477() && !Global_2635559.f_680==MISC::GET_FRAME_COUNT()){
if(!Global_2635559.f_676==0){
Global_2635559.f_676=0;
func_476();
func_475();
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_675){
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) < func_474(0)){
return 0;
}else{
Global_2635559.f_676=0;
}}}else{
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_677) > 30000){
Global_2635559.f_676=0;
}
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) > func_474(1)){
Global_2635559.f_676=0;
}}}
if(uParam6->f_6){
if(func_468(Param0)){
if(func_467(&Param0, 1)){
}}}
if(!Global_2635559.f_676==0){
if(vdist(Global_2635559.f_695, Param0) > 50f){
return 0;
}
if(Global_2635559.f_698 !=iParam2){
return 0;
}}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
if(Global_2635559.f_676==0){
Global_2635559.f_682=0;
Global_2635559.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_675=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_695={
Param0 
};
Global_2635559.f_698=iParam2;
Global_2635559.f_681=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_466();
func_476();
if(!uParam6->f_27 || (((((((((func_465(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2793046.f_936) && !Global_2793046.f_925) && !Global_2793046.f_933) && !Global_2793046.f_937) && !Global_2793046.f_954) && !Global_2793046.f_966) && !Global_2793046.f_938) && !Global_2793046.f_988)){
func_446(Param0, iParam2);
}
if(func_432(Param0)){
func_446(Param0, iParam2);
}
Global_2635559.f_676=2;
}
switch (Global_2635559.f_676){
case 2:
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f))){
Global_2635559.f_683={
Param0 
};
Global_2635559.f_686=0f;
if(Global_2793046.f_936){
fVar2=10f;
fVar3=5f;
fVar4=5f;
}else{
fVar2=4f;
fVar3=1f;
fVar4=1f;
}
if(((uParam6->f_3 && func_97(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_430(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0)){
Global_2635559.f_683={
Param0 
};
Global_2635559.f_686=*uParam5;
}else{
Var5.f_6=1082130432;
Var5.f_7=1176255488;
Var5.f_8=1;
Var5.f_10=1;
Var5.f_13=1;
Var5.f_15=1;
Var5.f_16=1;
Var5.f_31=1;
Var5.f_34=joaat("tailgater");
Var5.f_38=2;
Var5.f_45=2;
Var5.f_49=1123024896;
Var5.f_53=999;
Var5.f_54=1176256410;
Var5.f_55=1;
Var5.f_56=1;
Var5.f_57=1;
Var5.f_9=iParam3;
Var5.f_3=7f;
Var5.f_10=uParam6->f_5;
Var5.f_4=*uParam6;
Var5.f_13=uParam6->f_1;
Var5.f_14=uParam6->f_2;
Var5.f_5=uParam6->f_4;
Var5.f_15=uParam6->f_6;
Var5.f_11=uParam6->f_7;
Var5.f_6=uParam6->f_8;
Var5.f_7=uParam6->f_9;
Var5.f_16=uParam6->f_10;
Var5.f_17=uParam6->f_11;
Var5={
Param1 
};
Var5.f_12=1;
Var5.f_34=iParam2;
Var5.f_31=uParam6->f_13;
if(uParam6->f_32 && Global_2635559.f_682 > 0){
Var5.f_30=0;
Var5.f_29=1;
}else{
Var5.f_30=uParam6->f_30;
Var5.f_29=uParam6->f_31;
}
Var5.f_48=uParam6->f_14;
Var5.f_56=uParam6->f_25;
Var5.f_57=uParam6->f_26;
Var5.f_49=uParam6->f_29;
Var5.f_59=uParam6->f_33;
Var5.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var5.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var5.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
func_374(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var5);
}
func_372(Global_2635559.f_683, Global_2635559.f_686, iParam2, &(Global_2635559.f_673));
Global_2635559.f_671=0;
Global_2635559.f_672=0;
Global_2635559.f_682++;
Global_2635559.f_678=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_676=3;
}
break;
case 3:
if(Global_2635559.f_671){
if(Global_2635559.f_673==Global_2635559.f_674){
if(Global_2635559.f_672){
if(uParam6->f_12 && !uParam6->f_11){
if(func_371(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 1036831949)){
Global_2635559.f_676=4;
Global_2635559.f_700=NETWORK::GET_NETWORK_TIME_ACCURATE();
}else{
bVar0=true;
}
}
else{
bVar0=true;
}}else{
func_369(Global_2635559.f_683, 0);
func_368(-1);
}}else{
Global_2635559.f_671=0;
Global_2635559.f_672=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_678) > 3000){
func_368(-1);
}
break;
case 4:
if(uParam6->f_12 && !uParam6->f_11){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_700) < 10000){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_699)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635559.f_699)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635559.f_699)){
if(func_367(Global_2635559.f_683, Global_2635559.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_356(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 0, 0, 0, 1, 0)){
func_369(Global_2635559.f_683, 0);
func_368(-1);
}else{
bVar0=true;
}}else{
func_369(Global_2635559.f_683, 0);
func_368(-1);
}
}}else{
func_368(-1);
}}else{
func_368(1);
}}else{
bVar0=true;
}
break;
case 5:
Global_2635559.f_683={
Param0 
};
Global_2635559.f_686=0f;
Var6.f_6=1082130432;
Var6.f_7=1176255488;
Var6.f_8=1;
Var6.f_10=1;
Var6.f_13=1;
Var6.f_15=1;
Var6.f_16=1;
Var6.f_31=1;
Var6.f_34=joaat("tailgater");
Var6.f_38=2;
Var6.f_45=2;
Var6.f_49=1123024896;
Var6.f_53=999;
Var6.f_54=1176256410;
Var6.f_55=1;
Var6.f_56=1;
Var6.f_57=1;
Var6.f_9=iParam3;
Var6.f_3=3.5f;
Var6.f_10=uParam6->f_5;
Var6.f_4=*uParam6;
Var6.f_12=1;
Var6.f_13=0;
Var6.f_15=uParam6->f_6;
Var6.f_11=uParam6->f_7;
Var6.f_6=uParam6->f_8;
Var6.f_7=uParam6->f_9;
Var6={
Param1 
};
Var6.f_34=iParam2;
Var6.f_31=uParam6->f_13;
Var6.f_30=1;
Var6.f_48=uParam6->f_14;
Var6.f_56=uParam6->f_25;
Var6.f_57=uParam6->f_26;
Var6.f_30=uParam6->f_30;
Var6.f_29=uParam6->f_31;
Var6.f_59=uParam6->f_33;
Var6.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var6.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var6.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
Var6.f_49=uParam6->f_29;
func_374(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var6);
Global_2635559.f_676=6;
break;
case 6:
bVar0=true;
break;
}
Global_2635559.f_695={
Param0 
};
Global_2635559.f_698=iParam2;
Global_2635559.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
if(bVar0){
Global_2635559.f_516=0;
*uParam4={
Global_2635559.f_683 
};
*uParam5=Global_2635559.f_686;
func_355(1);
return 1;
}
return 0;
}


void func_355(bool bParam0){
Global_2635559.f_676=0;
func_466();
func_476();
if(bParam0){
func_475();
}}

int func_356(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
bool bVar1;
float fVar2;
int iVar3;
int iVar4;
struct<3> Var5;
float fVar6;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam7==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam7==0){
if(func_9(bVar1, bParam3, bParam4)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_99(bVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_107(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
fVar2=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), 0)){
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar3, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar3);
if(func_366(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_357(func_104(bVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_357(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_365(iParam3, 1008981770)){
func_358(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_358(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_364(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_359(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
Var3={
Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) 
};
Var3.f_2=(Var3.f_2 - ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
Var4={
Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) 
};
Var4.f_2=(Var4.f_2 + ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
*uParam3={
Var3 
};
*uParam4={
Var4 
};
*uParam5=MISC::ABSF((Var2.f_0 - Var1.f_0));
}


void func_359(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_362(iParam0);
if(iVar0 !=0){
func_360(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
return;
}}
if(vmag(*uParam1) <=0.01f || vmag(*uParam2) <=0.01f){
if(iParam0==joaat("kosatka")){
if(fParam4 < 20.7f){
fParam4=20.7f;
}
if(fParam3 < 137.2f){
fParam3=137.2f;
}
if(fParam5 < 21.1f){
fParam5=21.1f;
}}
*uParam1=(0f - (fParam4 * 0.5f));
*uParam2=(0f + (fParam4 * 0.5f));
uParam1->f_1=(0f - (fParam3 * 0.5f));
uParam2->f_1=(0f + (fParam3 * 0.5f));
uParam1->f_2=(0f - (fParam5 * 0.5f));
uParam2->f_2=(0f + (fParam5 * 0.5f));
}}


void func_360(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_361(iParam0, &Global_1577994);
iVar0=0;
while (iVar0 < 2){
if(STREAMING::IS_MODEL_VALID(Global_1577994[iVar0])){
MISC::GET_MODEL_DIMENSIONS(Global_1577994[iVar0], &(Global_1577998[iVar0 /*3*/]), &(Global_1578005[iVar0 /*3*/]));
}
if(vmag(Global_1577998[iVar0 /*3*/]) <=0.01f || vmag(Global_1578005[iVar0 /*3*/]) <=0.01f){
Global_1577998[iVar0 /*3*/]=(0f - (fParam4 * 0.5f));
Global_1578005[iVar0 /*3*/]=(0f + (fParam4 * 0.5f));
Global_1577998[iVar0 /*3*/].f_1=(0f - (fParam3 * 0.5f));
Global_1578005[iVar0 /*3*/].f_1=(0f + (fParam3 * 0.5f));
Global_1577998[iVar0 /*3*/].f_2=(0f - (fParam5 * 0.5f));
Global_1578005[iVar0 /*3*/].f_2=(0f + (fParam5 * 0.5f));
}
Global_1578012[iVar0]=(Global_1578005[iVar0 /*3*/] - Global_1577998[iVar0 /*3*/]);
Global_1578015[iVar0]=(Global_1578005[iVar0 /*3*/].f_1 - Global_1577998[iVar0 /*3*/].f_1);
Global_1578018[iVar0]=(Global_1578005[iVar0 /*3*/].f_2 - Global_1577998[iVar0 /*3*/].f_2);
if(Global_1578012[iVar0] > Global_1578021){
Global_1578021=Global_1578012[iVar0];
}
if(Global_1578018[iVar0] > Global_1578022){
Global_1578022=Global_1578018[iVar0];
}
iVar0++;
}
Global_1578023=(Global_1578021 * -0.5f);
Global_1578026=(Global_1578021 * 0.5f);
Global_1578023.f_1=((((0.5f * Global_1578015[0]) + Global_1578015[1]) + Global_1577994.f_3) * -1f);
Global_1578026.f_1=(0.5f * Global_1578015[0]);
Global_1578023.f_2=(Global_1578018[0] * -0.5f);
Global_1578026.f_2=(Global_1578018[0] * 0.5f);
*uParam1={
Global_1578023 
};
*uParam2={
Global_1578026 
};
}


void func_361(int iParam0, var uParam1){
switch (iParam0){
case 1:
(*uParam1)[0]=joaat("hauler2");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 2:
(*uParam1)[0]=joaat("phantom3");
(*uParam1)[1]=joaat("trailerlarge");
uParam1->f_3=-2.6f;
break;
case 3:
(*uParam1)[0]=joaat("nightshark");
(*uParam1)[1]=joaat("trailersmall2");
uParam1->f_3=0.5f;
break;
}}

int func_362(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_363(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_363(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


void func_364(var uParam0, struct<3> Param1){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=cos(Param1.f_0);
fVar1=sin(Param1.f_0);
Var2.f_0=*uParam0;
Var2.f_1=((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
Var2.f_2=((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_1);
fVar1=sin(Param1.f_1);
Var2.f_0=((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
Var2.f_1=uParam0->f_1;
Var2.f_2=((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
*uParam0={
Var2 
};
fVar0=cos(Param1.f_2);
fVar1=sin(Param1.f_2);
Var2.f_0=((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
Var2.f_1=((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
Var2.f_2=uParam0->f_2;
*uParam0={
Var2 
};
}


float func_365(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_359(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}

int func_366(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_357(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_358(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_358(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)){
return 1;
}
return 0;
}

int func_367(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar1=iVar0;
if(func_9(bVar1, 0, 1) && func_9(bParam3, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(func_357(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_357(func_104(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(func_357(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_9(bVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(func_357(func_104(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_368(int iParam0){
if(Global_2635559.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_681) < 30000){
if(iParam0==-1 || (iParam0 > -1 && Global_2635559.f_682 < iParam0)){
Global_2635559.f_676=2;
}else{
Global_2635559.f_676=5;
}}else{
Global_2635559.f_676=5;
}}


void func_369(struct<3> Param0, int iParam1){
struct<3> Var0;
if(iParam1==0 && func_370(Param0, 0.01f)){
return;
}
if(iParam1 < 30 && vmag(Param0) > 0f){
Var0={
Global_2635559.f_2737[iParam1 /*3*/] 
};
Global_2635559.f_2737[iParam1 /*3*/]={
Param0 
};
func_369(Var0, iParam1 + 1);
}}

int func_370(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if(vdist(Param0, Global_2635559.f_2737[iVar0 /*3*/]) < fParam1){
return 1;
}
iVar0++;
}
return 0;
}

int func_371(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
float fVar4;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 0;
}else{
func_476();
iVar3=0;
while (iVar3 < 3){
if(Global_2635559.f_687[iVar3]==-1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_358(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
if(bParam3){
fVar4=MISC::ABSF((Var0.f_2 - Var1.f_2));
Var0.f_2=(Var0.f_2 + ((fVar4 * 0.5f) - 2f));
Var1.f_2=(Var1.f_2 + (fVar4 * 0.5f));
}
Global_2635559.f_687[iVar3]=NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(Var0, Var1, fParam4);
Global_2635559.f_691[iVar3]=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_699=Global_2635559.f_687[iVar3];
return 1;
}
iVar3++;
}}
return 0;
}


void func_372(struct<3> Param0, var uParam1, int iParam2, var uParam3){
struct<8> Var0;
*uParam3=func_373(&Param0, &uParam1, &iParam2);
Var0.f_0=1556360603;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=uParam1;
Var0.f_6=iParam2;
Var0.f_7=*uParam3;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_257(1, 1));
}

int func_373(var uParam0, var uParam1, var uParam2){
char cVar0[64];
int iVar1;
StringCopy(&cVar0, "", 64);
StringIntConCat(&cVar0, round(*uParam0), 64);
StringIntConCat(&cVar0, round(uParam0->f_1), 64);
StringIntConCat(&cVar0, round(uParam0->f_2), 64);
StringIntConCat(&cVar0, round(*uParam1), 64);
StringIntConCat(&cVar0, *uParam2, 64);
iVar1=MISC::GET_HASH_KEY(&cVar0);
return iVar1;
}


void func_374(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635559.f_1754 > 0){
iVar0=0;
while (func_425(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_375(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_375(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar2;
int iVar3;
var uVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
bool bVar10;
float fVar11;
float fVar12;
int iVar13;
int iVar14;
int iVar15;
bool bVar16;
int iVar17;
bool bVar18;
int iVar19;
float fVar20;
int iVar21;
int iVar22;
float fVar23;
int iVar24;
struct<3> Var25;
var uVar26;
struct<3> Var27;
float fVar28;
bool bVar29;
iVar0=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_421(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_416(uParam0, 1)){
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
iVar3=0;
iVar8=1;
if(uParam2->f_11){
iVar3 +=2;
iVar3++;
iVar8=0;
}elseif(uParam2->f_10==0 || (uParam2->f_33 > 0 && uParam2->f_16)){
iVar3++;
iVar8=0;
}
iVar3 +=4;
fVar11=3f;
fVar12=5f;
switch (uParam2->f_33){
case 0:
fVar11=3f;
fVar12=5f;
break;
case 1:
fVar11=2.75f;
fVar12=7.5f;
break;
default:
fVar11=2.5f;
fVar12=10f;
break;
}
iVar13=0;
Global_2643122.f_162=0;
Global_2643122.f_163=0;
Global_2643122.f_164=-99;
Global_2643122.f_165={
0f, 0f, 0f 
};
iVar14=0;
while (iVar14 < 40){
Global_2643122[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar14]=0f;
iVar14++;
}
iVar15=1;
if(func_362(uParam2->f_34) !=0){
iVar15=3;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
uParam2->f_18=0;
}
while (true){
iVar6=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6)){
PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
bVar10=false;
if(Global_2643122.f_164==iVar6){
bVar10=true;
}
Global_2643122.f_165={
Var1 
};
if(((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
if(vdist(Var1, uParam2->f_35) > uParam2->f_4){
if(!func_409(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_406(Var1)){
Var1={
func_401(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_400(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_396(Var1, uParam2)){
if((uParam2->f_48 && !func_416(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_395(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_421(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar17=uParam2->f_31;
bVar18=true;
iVar19=1;
fVar20=uParam2->f_49;
if(!uParam2->f_55){
iVar17=0;
bVar18=false;
iVar19=0;
fVar20=1f;
}
elseif(uParam2->f_17){
iVar17=0;
bVar18=false;
iVar19=0;
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
else{
bVar18=true;
iVar19=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar20=(fVar20 * 0.375f);
}
}
}
iVar21=0;
if(!func_394(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_97(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_97(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_356(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_384(Var1, uParam2->f_54, &fVar23);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar22 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar22 < uParam2->f_53){
iVar14=0;
while (iVar14 < Global_2643122.f_162){
Global_2643122[iVar14 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar14]=0f;
iVar14++;
}
Global_2643122.f_162=0;
uParam2->f_53=iVar22;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
Var1 
};
Global_2643122.f_121[0]=fVar2;
}
else{
iVar14=0;
while (iVar14 < Global_2643122.f_162 + 1){
if(iVar14 < 40){
if(vdist2(Var1, uParam2->f_35) < vdist2(Global_2643122[iVar14 /*3*/], uParam2->f_35)){
func_383(Var1, fVar2, iVar14);
iVar14=Global_2643122.f_162 + 1;
}
}
iVar14++;
}
}
Global_2643122.f_162++;
if(Global_2643122.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643122.f_162==40){
iVar0=100;
}
}
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
Var1 
};
Global_2643122.f_121[Global_2643122.f_162]=fVar2;
Global_2643122.f_162++;
if(func_396(Var1, uParam2)){
Global_2643122.f_163++;
}
if(Global_2643122.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar0=100;
}
elseif(Global_2643122.f_162==40){
iVar0=100;
}
}
}
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
elseif(bVar16){
iVar0++;
}
}
else{
*uParam0={
Var1 
};
*uParam1=fVar2;
return 1;
}
}
}
else{
iVar13++;
}
}
else{
iVar0=100;
}
}
}
else{
iVar0++;
}
}
elseif(!uParam2->f_32){
iVar0=100;
}
}
else{
iVar0++;
}}else{
iVar0++;
}}
}
}
else{
iVar0++;
}}}else{
iVar0++;
}
}
else{
iVar0++;
}}else{
iVar13++;
}}else{
iVar13++;
}}
iVar0++;
if(iVar0 >=(40 + iVar13) || iVar0 >=100){
if(Global_2643122.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >=2)){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162){
func_381(0, uParam2);
}
iVar24=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
if(uParam2->f_18 && uParam2->f_30){
iVar24=0;
}
Var25={
Global_2643122[0 /*3*/] 
};
uVar26=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[iVar24 /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[iVar24];
Global_2643122[iVar24 /*3*/]={
Var25 
};
Global_2643122.f_121[iVar24]=uVar26;
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_380(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
Var27={
Var1 
};
fVar28=fVar2;
if(!uParam2->f_50){
bVar29=true;
}
else{
bVar29=false;
}
if(func_421(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_416(&Var27, bVar29)){
if(!uParam2->f_50){
uParam2->f_33=0;
uParam2->f_50=1;
*uParam0={
Var27 
};
*uParam1=fVar28;
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
return 0;
}else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}
}
else{
*uParam0={
Var27 
};
*uParam1=fVar28;
return 1;
}}}}}else{
uParam2->f_33++;
if(uParam2->f_33 < 3){
return 0;
}else{
func_376(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643122.f_164=iVar6;
}
return 0;
}


void func_376(var uParam0, var uParam1, var uParam2, struct<3> Param3){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=1E+09f;
iVar3=-1;
iVar2=0;
while (iVar2 < *uParam0){
fVar1=vdist(*(uParam0[iVar2 /*4*/]), Param3);
if(fVar1 < fVar0){
if(!func_377(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
fVar0=fVar1;
iVar3=iVar2;
}}
iVar2++;
}
if(!iVar3==-1){
*uParam1={
*(uParam0[iVar3 /*4*/]) 
};
*uParam2=(uParam0[iVar3 /*4*/])->f_3;
}}

int func_377(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4){
if(func_379(Param0, fParam1, bParam2, iParam3, 0) || func_378(Param0, bParam2, iParam4)){
return 1;
}
return 0;
}

int func_378(struct<3> Param0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam1==iVar0 || iParam2==1){
bVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_357(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_9(bVar2, 0, 1) && func_9(bParam1, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_379(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4){
int iVar0;
bool bVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam2==iVar0 || iParam3==1){
bVar1=iVar0;
bVar2=false;
if(bParam4){
if(func_9(bVar1, 0, 1) && func_9(bParam2, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(bParam2)){
bVar2=true;
}}}
if(!bVar2){
if(func_9(bVar1, 0, 1) && func_9(bParam2, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(vdist(func_104(bVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_9(bVar1, 0, 1)){
if(vdist(func_104(bVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_380(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_401(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_406(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_381(int iParam0, var uParam1){
if(!func_396(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=(Global_2643122.f_162 - 1);
func_382(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163){
func_381(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_381(iParam0 + 1, uParam1);
}}


void func_382(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_383(struct<3> Param0, float fParam1, int iParam2){
struct<3> Var0;
var uVar1;
Var0={
Global_2643122[iParam2 /*3*/] 
};
uVar1=Global_2643122.f_121[iParam2];
Global_2643122[iParam2 /*3*/]={
Param0 
};
Global_2643122.f_121[iParam2]=fParam1;
if(iParam2 <=Global_2643122.f_162 && iParam2 < 39){
if(vmag(Var0) > 0f){
func_383(Var0, uVar1, iParam2 + 1);
}}}

int func_384(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
struct<3> Var1;
int iVar2;
bool bVar3;
float fVar4;
float fVar5;
fVar4=99999.9f;
iVar0=0;
while (iVar0 < 32){
bVar3=iVar0;
if(func_385(bVar3)){
Var1={
func_104(bVar3) 
};
fVar5=vdist(Param0, Var1);
if(fVar5 < fParam1){
if(fVar5 < fVar4){
fVar4=fVar5;
}
iVar2++;
}}
iVar0++;
}
*fParam2=fVar4;
return iVar2;
}

int func_385(bool bParam0){
if(func_9(bParam0, 0, 1)){
if(!func_392(bParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam0)){
if(!PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_389(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_386(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_389(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_107(bParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_386(int iParam0, int iParam1, int iParam2, int iParam3){
bool bVar0;
bool bVar1;
if(iParam2==1){
if(iParam0==iParam1){
return 1;
}
return 0;
}
if((iParam0 > -1 && iParam1 > -1) && iParam0==iParam1){
return 1;
}
if(((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4){
bVar0=Global_1058070.f_14[iParam0];
if(iParam3 !=-1){
bVar0=iParam3;
}
if(bVar0 < 17 && bVar0 > -1){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0)){
bVar1=Global_1058070.f_14[iParam1];
if(bVar1 < 17 && bVar1 > -1){
switch (iParam0){
case 0:
if(!func_387(iParam0, bVar0, iParam1, bVar1) || !func_387(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_387(iParam0, bVar0, iParam1, bVar1) || !func_387(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_387(iParam0, bVar0, iParam1, bVar1) || !func_387(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_387(iParam0, bVar0, iParam1, bVar1) || !func_387(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
}
break;
}}}}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 0);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 1);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 2);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 3);
default:
}
break;
case 1:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 4);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 5);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 6);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 7);
default:
}
break;
case 2:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 8);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 9);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 10);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 11);
default:
}
break;
case 3:
switch (iParam1){
case 0:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 12);
case 1:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 13);
case 2:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 14);
case 3:
return MISC::IS_BIT_SET(Global_4718592.f_1214, 15);
default:
}
break;
}
return 0;
}

int func_387(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==iParam2){
return 1;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1)){
return 0;
}
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3)){
return 0;
}
iVar0=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar4=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}
iVar5=0;
iVar5=0;
while (iVar5 <=31){
iVar1=iVar5;
if(((!func_9(iVar1, 1, 1) || func_100(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_388(iVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(iVar1) !=iParam2){
}else{
iVar2=PLAYER::GET_PLAYER_PED(bVar1);
if(PED::IS_PED_INJURED(iVar2)){
}else{
iVar3=ENTITY::GET_ENTITY_MODEL(iVar2);
if(iVar4==joaat("mp_f_freemode_01") || iVar4==joaat("mp_m_freemode_01")){
if(iVar3==joaat("mp_f_freemode_01") || iVar3==joaat("mp_m_freemode_01")){
return 1;
}else{
return 0;
}}elseif(iVar4 !=iVar3){
return 0;
}}}
iVar5++;
}
return iVar0;
}


var func__388(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_389(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_390(bParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[bParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_390(int iParam0){
return func_391(iParam0);
}


var func__391(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_392(bool bParam0){
if(func_100(bParam0, 0)){
return 1;
}
if(func_393()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_393(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_394(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
float fVar4;
iVar0=1;
iVar0 +=2;
iVar0 +=4;
iVar0 +=8;
iVar0 +=16;
iVar0 +=32;
iVar0 +=64;
iVar0=(iVar0 + 131076);
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_366(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
iVar0 +=4096;
iVar0 +=8192;
iVar0 +=16384;
iVar1=VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
Var3={
ENTITY::GET_ENTITY_COORDS(iVar1, 0) 
};
fVar4=ENTITY::GET_ENTITY_HEADING(iVar1);
if(func_366(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_395(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
if(func_367(Param0, fParam1, iParam2, bParam3, iParam4) || func_430(Param0, fParam1, iParam2, bParam3, iParam5)){
return 1;
}
return 0;
}

int func_396(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_399(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_397(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
return 1;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1)){
return 1;
}
break;
}
return 0;
}
return 1;
}

int func_397(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_398(&Param1, &Param2);
if(((!Param0.f_0 >=Param1.f_0 || !Param0.f_1 >=Param1.f_1) || !Param0.f_0 <=Param2.f_0) || !Param0.f_1 <=Param2.f_1){
return 0;
}
if(bParam3 && bParam4){
return 1;
}elseif(bParam3){
if(Param0.f_2 >=Param1.f_2){
return 1;
}}elseif(bParam4){
if(Param0.f_2 <=Param2.f_2){
return 1;
}}elseif(Param0.f_2 >=Param1.f_2 && Param0.f_2 <=Param2.f_2){
return 1;
}
return 0;
}


void func_398(var uParam0, var uParam1){
var uVar0;
if(*uParam0 > *uParam1){
uVar0=*uParam1;
*uParam1=*uParam0;
*uParam0=uVar0;
}
if(uParam0->f_1 > uParam1->f_1){
uVar0=uParam1->f_1;
uParam1->f_1=uParam0->f_1;
uParam0->f_1=uVar0;
}
if(uParam0->f_2 > uParam1->f_2){
uVar0=uParam1->f_2;
uParam1->f_2=uParam0->f_2;
uParam0->f_2=uVar0;
}}


bool func_399(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
if(bParam3 && bParam4){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam3){
if(Param0.f_2 > Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}elseif(bParam4){
if(Param0.f_2 < Param1.f_2){
Param0.f_2=Param1.f_2;
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}
return vdist(Param0, Param1) < (fParam2 + 0.01f);
}

int func_400(struct<3> Param0, float fParam1){
int iVar0;
if(func_389(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_39172 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_39172){
if(Global_4980736.f_39173[iVar0 /*148*/].f_7 !=0){
if(func_357(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_5991 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_5991){
if(Global_4980736.f_5994[iVar0 /*492*/].f_15 !=0){
if(func_357(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_84915 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[iVar0 /*499*/].f_12 !=0){
if(func_357(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[iVar0], 0)){
if(func_357(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[iVar0], 0)){
if(func_357(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}


Vector3 func__401(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
struct<3> Var0;
var uVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
float fVar6;
float fVar7;
bool bVar8;
bool bVar9;
float fVar10;
struct<3> Var11;
struct<3> Var12;
struct<3> Var13;
if(bParam11){
if(vmag(Param4) > 0f){
if(!func_404(Param0, *uParam1, Param4)){
*uParam1=(*uParam1 + 180f);
}}
return Param0;
}
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
if(uVar2 & 1024==0 && !bParam6){
PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
if(iVar4==iVar5){
*uParam8=1;
}
if(bParam10){
if(!uVar2 & 128==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 256==0){
return 0f, 0f, 0f;
}
if(!uVar2 & 512==0){
return 0f, 0f, 0f;
}
if((iVar4 + iVar5) !=iParam2){
return 0f, 0f, 0f;
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_403(Param0)){
return 0f, 0f, 0f;
}}
if(iParam9 && *uParam8){
*uParam1=(*uParam1 + 180f);
if(*uParam1 > 360f){
*uParam1=(*uParam1 + -360f);
}}
if(*uParam1 <=90f || *uParam1 > 270f){
bVar8=true;
}else{
bVar8=false;
}
bVar9=false;
if(bVar8){
if(iVar4==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar4){
bVar9=true;
}}elseif(iVar5==0){
if(bParam10){
return 0f, 0f, 0f;
}}elseif(iParam2==iVar5){
bVar9=true;
}
if(fVar6 < 0f){
fVar7=0f;
}else{
if(bVar8){
if(bVar9){
fVar7=(4.2f * (to_float(iVar4) * 0.5f));
}else{
fVar7=(4.2f * to_float(bVar4));
}
if(bVar9){
if(bVar4 > 2){
fVar7=(fVar7 + (IntToFloat((bVar4 - 2)) * 1f));
}}elseif(bVar4 > 1){
fVar7=(fVar7 + (IntToFloat((bVar4 - 1)) * 1f));
}}else{
if(bVar9){
fVar7=(4.2f * (to_float(iVar5) * 0.5f));
}else{
fVar7=(4.2f * to_float(bVar5));
}
if(bVar9){
if(bVar5 > 2){
fVar7=(fVar7 + (IntToFloat((bVar5 - 2)) * 1f));
}}elseif(bVar5 > 1){
fVar7=(fVar7 + (IntToFloat((bVar5 - 1)) * 1f));
}}
if(!uVar2 & 64==0){
fVar7=(fVar7 + (0.95f * fVar6));
}
if(!uVar2 & 4==0 || !uVar2 & 8==0){
fVar7=(fVar7 + -0.5f);
}
if((!uVar2 & 32==0 && uVar2 & 4==0) && uVar2 & 8==0){
fVar7=(fVar7 + -1f);
}
if(!bParam3 || !uVar2 & 8==0){
fVar7=(fVar7 + (4.2f * -0.5f));
}
if(!iParam7==0){
if(uVar2 & 8 !=0){
fVar10=func_402(iParam7, 3.5f);
}else{
fVar10=func_402(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_404(Param0, *uParam1, Param4)){
if((bParam3 || uParam12) || ((uVar2 & 1024 !=0 || Param0.f_2==0f) && bParam6)){
*uParam1=(*uParam1 + 180f);
}elseif(bParam10){
return 0f, 0f, 0f;
}}}
if(fVar7 < 0f){
fVar7=0f;
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *uParam1, fVar7, 0f, 0f) 
};
if(bParam3){
if(PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *uParam1, &Var11)){
Var12={
Var11 - Param0 
};
if(!iParam7==0){
Var13={
Var12 / FtoV(vmag(Var12)) 
};
if(uVar2 & 8 !=0){
fVar10=func_402(iParam7, 3.5f);
}else{
fVar10=func_402(iParam7, 1.5f);
}
Var13={
Var13 * FtoV((fVar10 * 0.5f)) 
};
Var12={
Var12 - Var13 
};
Var11={
Param0 + Var12 
};
}
Var13={
Var0 - Var11 
};
Var0={
Var11 
};
}}
return Var0;
}


float func_402(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_359(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_403(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_404(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_364(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_405(Var1, Var0) >=0f){
return 1;
}
return 0;
}


float func_405(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_406(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_408(Param0);
iVar0=0;
while (iVar0 < Global_2642829[iVar1]){
if(func_407(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642829[8]){
if(func_407(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_407(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_408(struct<2> Param0, var uParam1){
if(Param0.f_1 > Global_2642117[0]){
return 0;
}
if(Param0.f_1 > Global_2642117[1]){
if(Param0.f_0 < Global_2642121[0]){
return 1;
}else{
return 2;
}}
if(Param0.f_1 > Global_2642117[2]){
if(Param0.f_0 < Global_2642121[1]){
return 3;
}elseif(Param0.f_0 < Global_2642121[2]){
return 4;
}elseif(Param0.f_0 < Global_2642121[3]){
return 5;
}else{
return 6;
}}
return 7;
}

int func_409(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_415(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_414(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
if(func_410(Var1, &uVar0) || func_415(Var1)){
Var1={
*uParam0 
};
func_414(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_410(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_413()){
return 0;
}
iVar1=func_412();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635559.f_368[iVar0 /*12*/].f_9==1){
if(func_411(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_411(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_399(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_397(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
break;
case 2:
if(bParam3 && bParam4){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
}elseif(bParam3){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}elseif(bParam4){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2)){
return 1;
}else{
return 0;
}}else{
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}
break;
}
return 0;
}

int func_412(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 10){
if(Global_2635559.f_368[iVar0 /*12*/].f_9){
iVar1++;
}
iVar0++;
}
return iVar1;
}


bool func_413(){
return Global_1950108.f_528;
}


void func_414(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
struct<3> Var0;
struct<3> Var1;
Var0={
*uParam0 - Param1 
};
Var0.f_2=0f;
if(vmag(Var0) > 0f){
Var0={
Var0 / FtoV(vmag(Var0)) 
};
}else{
Var0={
0f, 1f, 0f 
};
if(fParam5==0f){
func_364(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_364(&Var0, 0f, 0f, fParam5);
}}
Var0={
Var0 * FtoV((fParam2 + fParam3)) 
};
if(!bParam4){
Var1={
Param1 + Var0 
};
}else{
Var1={
Param1 - Var0 
};
}
*uParam0=Var1.f_0;
uParam0->f_1=Var1.f_1;
}

int func_415(struct<3> Param0){
float fVar0;
if(Global_2635559.f_596 > 0f){
fVar0=vdist(Param0, Global_2635559.f_593);
if(fVar0 < Global_2635559.f_596){
return 1;
}}
return 0;
}


bool func_416(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_399(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_397(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0)){
bVar0=true;
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, 0, 1)){
bVar0=true;
}
break;
}
if(bVar0){
if(bParam1){
*uParam0={
func_417(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}


Vector3 func__417(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_414(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_420(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_418(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_399(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_397(Var1, Param1, Param2, 0, 0)){
return Var1;
}
break;
case 2:
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, 0, 1)){
return Var1;
}
break;
}
iVar0++;
}
return Param0;
}


void func_418(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
Var0={
Param2 - Param1 
};
Var0.f_2=0f;
Var1={
*uParam0 - Param1 
};
Var1.f_2=0f;
Var2={
func_419(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_405(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_405(Var2, Var1) >=0f){
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) 
};
}
Var4={
*uParam0 + Var2 
};
fVar6=vdist(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
Var7={
Param1 + Param2 / Vector(2f, 2f, 2f) 
};
Var7.f_2=0f;
Var2={
func_419(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
Var2={
Var2 * FtoV((fParam3 * 0.5f)) 
};
Var8={
Var7 - Var2 
};
Var9={
Var7 + Var2 
};
Var10={
Var9 - Var8 
};
Var10.f_2=0f;
Var11={
*uParam0 - Var8 
};
Var11.f_2=0f;
Var2={
func_419(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_405(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_405(Var2, Var11) >=0f){
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) 
};
}else{
Var2={
Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) 
};
}
Var5={
*uParam0 + Var2 
};
if(vdist(Var4, *uParam0, uParam0->f_1, 0f) < vdist(Var5, *uParam0, uParam0->f_1, 0f)){
*uParam0={
Var4 
};
}else{
*uParam0={
Var5 
};
}}}


Vector3 func__419(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_420(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
struct<3> Var0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
Var0={
*uParam0 
};
fVar1=(*uParam0 - Param1.f_0);
fVar2=(*uParam0 - Param3.f_0);
if(fVar1 < fVar2){
fVar3=fVar1;
}else{
fVar3=fVar2;
}
fVar4=(uParam0->f_1 - Param1.f_1);
fVar5=(uParam0->f_1 - Param3.f_1);
if(fVar4 < fVar5){
fVar6=fVar4;
}else{
fVar6=fVar5;
}
Var0={
*uParam0 
};
if(!bParam6){
if(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param1.f_0 - fParam5);
}else{
Var0.f_0=(Param3.f_0 + fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param1.f_1 - fParam5);
}else{
Var0.f_1=(Param3.f_1 + fParam5);
}}elseif(fVar3 < fVar6){
if(fVar1 < fVar2){
Var0.f_0=(Param3.f_0 + fParam5);
}else{
Var0.f_0=(Param1.f_0 - fParam5);
}}elseif(fVar4 < fVar5){
Var0.f_1=(Param3.f_1 + fParam5);
}else{
Var0.f_1=(Param1.f_1 - fParam5);
}
*uParam0={
Var0 
};
}

int func_421(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_468(Param0)){
if(func_424(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_422(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_370(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_414(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
}
bVar1=true;
}
iVar0++;
}
if(bVar1){
return 1;
}
return 0;
}

int func_422(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_410(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_423(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_410(Var2, &uVar1) || func_415(Var2)){
Var2={
*uParam0 
};
func_423(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}


void func_423(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_417(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_417(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_417(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_414(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_420(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_418(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}

int func_424(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16)){
if(func_411(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0)){
if(bParam1){
if(Global_2640505[iVar0 /*17*/].f_12){
*uParam0={
Global_2640505[iVar0 /*17*/].f_13 
};
}
else{
Var1={
*uParam0 
};
func_423(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_424(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_423(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
}
*uParam0={
Var1 
};
}}
return 1;
}}}
iVar0++;
}
return 0;
}

int func_425(var uParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
int iVar8;
float fVar9;
bool bVar10;
int iVar11;
float fVar12;
struct<3> Var13;
var uVar14;
if(Global_2635559.f_1754 > 0){
iVar1=0;
iVar2=0;
if(!vmag(uParam2->f_35) > 0f){
uParam2->f_35={
*uParam0 
};
}
if(uParam2->f_15){
if(func_421(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_416(uParam0, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam0->f_2 < -80f){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}
Global_2643122.f_162=0;
Global_2643122.f_163=0;
iVar5=0;
while (iVar5 < 40){
Global_2643122[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar5]=0f;
iVar5++;
}
if(uParam2->f_30){
func_428(*uParam0);
}elseif(uParam2->f_29){
func_427();
}else{
func_426();
}
iVar1=0;
while (iVar1 < Global_2635559.f_1754){
iVar2=Global_2635559.f_2160[iVar1];
if(iVar2 > -1 && iVar2 < 101){
Var3={
Global_2635559.f_1755[iVar2 /*4*/] 
};
fVar4=Global_2635559.f_1755[iVar2 /*4*/].f_3;
if(vmag(Var3) > 0f){
if((uParam2->f_57 && vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57==0){
if((uParam2->f_5 > 0f && vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f){
if((uParam2->f_12 && !func_395(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_421(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
if(uParam2->f_8){
iVar6=uParam2->f_31;
bVar7=true;
iVar8=1;
fVar9=uParam2->f_49;
if(!uParam2->f_55){
iVar6=0;
bVar7=false;
iVar8=0;
fVar9=1f;
}
elseif(uParam2->f_17){
iVar6=0;
bVar7=false;
iVar8=0;
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}
}
else{
bVar7=true;
iVar8=1;
if(uParam2->f_28){
if(uParam2->f_33==1){
fVar9=(fVar9 * 0.375f);
}}
}
bVar10=false;
if(!func_394(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_97(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_97(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_356(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_384(Var3, uParam2->f_54, &fVar12);
}
if(!uParam2->f_52 || (uParam2->f_52 && iVar11 <=uParam2->f_53)){
if(uParam2->f_52){
if(iVar11 < uParam2->f_53){
iVar5=0;
while (iVar5 < Global_2643122.f_162){
Global_2643122[iVar5 /*3*/]={
0f, 0f, 0f 
};
Global_2643122.f_121[iVar5]=0f;
iVar5++;
}
Global_2643122.f_162=0;
uParam2->f_53=iVar11;
}
}
if(uParam2->f_30){
if(Global_2643122.f_162==0){
Global_2643122[0 /*3*/]={
Var3 
};
Global_2643122.f_121[0]=fVar4;
}
else{
iVar5=0;
while (iVar5 < Global_2643122.f_162 + 1){
if(iVar5 < 40){
if(vdist2(Var3, uParam2->f_35) < vdist2(Global_2643122[iVar5 /*3*/], uParam2->f_35)){
func_383(Var3, fVar4, iVar5);
iVar5=Global_2643122.f_162 + 1;
}
}
iVar5++;
}
}
Global_2643122.f_162++;
if(Global_2643122.f_162 >=5){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635559.f_1754;
}
elseif(Global_2643122.f_162==40){
iVar1=Global_2635559.f_1754;
}
}
}
else{
Global_2643122[Global_2643122.f_162 /*3*/]={
Var3 
};
Global_2643122.f_121[Global_2643122.f_162]=fVar4;
Global_2643122.f_162++;
if(Global_2643122.f_162 >=10){
if((uParam2->f_52 && uParam2->f_53==0) || uParam2->f_52==0){
iVar1=Global_2635559.f_1754;
}
elseif(Global_2643122.f_162==40){
iVar1=Global_2635559.f_1754;
}
}
}}}else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}
}
}
else{
*uParam0={
Var3 
};
*uParam1=fVar4;
return 1;
}}}
}}}}
iVar1++;
}
if(Global_2643122.f_162 > 0){
if(uParam2->f_30){
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}else{
if(Global_2643122.f_163 > 0 && !Global_2643122.f_163==Global_2643122.f_162){
func_381(0, uParam2);
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643122.f_162);
Var13={
Global_2643122[0 /*3*/] 
};
uVar14=Global_2643122.f_121[0];
Global_2643122[0 /*3*/]={
Global_2643122[iVar0 /*3*/] 
};
Global_2643122.f_121[0]=Global_2643122.f_121[iVar0];
Global_2643122[iVar0 /*3*/]={
Var13 
};
Global_2643122.f_121[iVar0]=uVar14;
*uParam0={
Global_2643122[0 /*3*/] 
};
*uParam1=Global_2643122.f_121[0];
return 1;
}}else{
uParam2->f_33++;
if(uParam2->f_33 < 2){
return 0;
}elseif(uParam2->f_59 && Global_2635559.f_1754 > 0){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
*uParam0={
Global_2635559.f_1755[iVar0 /*4*/] 
};
*uParam1=Global_2635559.f_1755[iVar0 /*4*/].f_3;
return 1;
}else{
return 0;
}}}
return 0;
}


void func_426(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}}


void func_427(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_1754);
uVar3=Global_2635559.f_2160[iVar1];
Global_2635559.f_2160[iVar1]=Global_2635559.f_2160[iVar2];
Global_2635559.f_2160[iVar2]=uVar3;
iVar0++;
}}


void func_428(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635559.f_1754){
uVar1=func_429(Param0, fVar0, &fVar0);
Global_2635559.f_2160[iVar2]=uVar1;
iVar2++;
}}

int func_429(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar0=-1;
fVar1=1E+08f;
iVar3=0;
while (iVar3 < Global_2635559.f_1754){
fVar2=vdist2(Param0, Global_2635559.f_1755[iVar3 /*4*/]);
if(fVar2 < fVar1 && fVar2 > fParam1){
iVar0=iVar3;
fVar1=fVar2;
}
iVar3++;
}
*fParam2=fVar1;
return iVar0;
}

int func_430(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_431(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_366(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_9(bVar2, 0, 1) && func_9(bParam3, 0, 1)){
return 1;
}
else{
return 1;
}}}
iVar1++;
}}
iVar0++;
}
return 0;
}

int func_431(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_365(iParam1, 1008981770);
fVar1=func_365(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_432(struct<3> Param0){
var uVar0;
if(Global_2793046.f_936 && func_433(Param0, &uVar0)){
return 1;
}
return 0;
}

int func_433(struct<3> Param0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
*bParam1=-1;
iVar2=func_445(Param0, 0);
if(!iVar2==-1){
iVar0=83;
while (iVar0 <=87){
iVar1=iVar0;
if(func_434(iVar1)){
if(func_445(Global_1950108.f_542[iVar0 /*3*/], 0)==iVar2){
*bParam1=iVar0 + 1000;
return 1;
}}
iVar0++;
}}
return 0;
}

int func_434(int iParam0){
int iVar0;
int iVar1;
iVar0=func_444(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_293==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_77()){
if(Global_1853910[iVar1 /*862*/].f_267.f_293==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
if(func_443(PLAYER::PLAYER_ID(), 0) || (func_440(PLAYER::PLAYER_ID()) && func_294(func_439(PLAYER::PLAYER_ID()))==12)){
return 1;
}
if(func_438(PLAYER::PLAYER_ID()) || (func_440(PLAYER::PLAYER_ID()) && func_294(func_439(PLAYER::PLAYER_ID()))==8)){
return 1;
}
if(func_437(PLAYER::PLAYER_ID()) || (func_440(PLAYER::PLAYER_ID()) && func_294(func_439(PLAYER::PLAYER_ID()))==5)){
return 1;
}
if(func_436(PLAYER::PLAYER_ID()) || (func_440(PLAYER::PLAYER_ID()) && func_294(func_439(PLAYER::PLAYER_ID()))==10)){
return 1;
}
if(func_435(PLAYER::PLAYER_ID()) || (func_440(PLAYER::PLAYER_ID()) && func_294(func_439(PLAYER::PLAYER_ID()))==6)){
return 1;
}
return 0;
}

int func_435(bool bParam0){
if(bParam0 !=func_77()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_294(Global_2657589[bParam0 /*466*/].f_321.f_7)==6;
}}}
return 0;
}

int func_436(bool bParam0){
if(bParam0 !=func_77()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_294(Global_2657589[bParam0 /*466*/].f_321.f_7)==10;
}}}
return 0;
}

int func_437(bool bParam0){
if(bParam0 !=func_77()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_77()){
return func_294(Global_2657589[bParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_438(bool bParam0){
if(bParam0 !=func_77()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_77()){
return func_294(Global_2657589[bParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_439(bool bParam0){
if(bParam0 !=func_77() && func_9(bParam0, 1, 1)){
return Global_2657589[bParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_440(bool bParam0){
if(bParam0 !=func_77() && func_9(bParam0, 1, 1)){
if(func_442(bParam0) && !func_441(bParam0)){
return 1;
}}
return 0;
}

int func_441(int iParam0){
if(iParam0 !=func_77() && func_9(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 4);
}
return 0;
}

int func_442(bool bParam0){
if(bParam0 !=func_77() && func_9(bParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_443(bool bParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(bParam0 !=func_77()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_77()){
return func_294(Global_2657589[bParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_444(int iParam0){
switch (iParam0){
case 83:
return 1;
break;
case 84:
return 2;
break;
case 85:
return 3;
break;
case 86:
return 4;
break;
case 87:
return 5;
break;
}
return 0;
}

int func_445(struct<3> Param0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1 || iParam1==0){
if(func_411(Param0, &(Global_2640505[iVar0 /*17*/]), 0.1f, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_446(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2[3];
int iVar3[3];
if(Global_2635559.f_45.f_319){
return;
}
if(!func_464()){
if(iParam1==0){
}
iVar1=func_463(Param0);
if(iVar1 > -1){
func_475();
switch (iVar1){
case 0:
func_462(-1139.678f, -2694.165f, 12.949f, 283.4298f);
func_462(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
func_462(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
func_462(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
func_462(-1110.51f, -2693.236f, 12.9595f, 298.84f);
func_462(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
func_462(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
func_462(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
func_462(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
break;
case 1:
func_462(-1411.731f, -533.6462f, 30.2703f, 215.116f);
func_462(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
func_462(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
func_462(-1438.8f, -584.4678f, 29.595f, 118.1207f);
break;
case 2:
func_462(-780.5905f, 292.8159f, 84.673f, 97.2697f);
func_462(-788.6147f, 291.8073f, 84.72f, 97.7348f);
func_462(-765.572f, 294.4459f, 84.5182f, 93.9327f);
func_462(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
break;
case 3:
func_462(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
func_462(-647.239f, 49.2068f, 40.7135f, 355.9723f);
func_462(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
func_462(-610.5603f, 5.1258f, 41.2404f, 98.696f);
break;
case 4:
func_462(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
func_462(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
func_462(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
func_462(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
break;
case 5:
func_462(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
func_462(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
func_462(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
func_462(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
break;
case 6:
func_462(-58.1347f, -573.486f, 36.5789f, 341.8442f);
func_462(-64.227f, -590.2214f, 35.1654f, 338.972f);
func_462(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
func_462(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
break;
case 7:
func_462(-232.1917f, -978.1431f, 28.166f, 160.2115f);
func_462(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
func_462(-251.993f, -998.3963f, 28.3747f, 249.3297f);
func_462(-262.222f, -994.5226f, 29.23f, 249.4673f);
break;
case 8:
func_462(151.624f, -1309.343f, 28.2023f, 243.201f);
func_462(152.7886f, -1305.608f, 28.2023f, 243.9973f);
func_462(145.8017f, -1287.19f, 28.312f, 120.6275f);
func_462(142.8935f, -1282.286f, 28.3156f, 120.3024f);
break;
case 9:
func_462(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
func_462(-2322.187f, 277.638f, 168.4671f, 23.4249f);
func_462(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
func_462(-2314.396f, 290.9f, 168.4671f, 114.3983f);
func_462(-2316.81f, 296.424f, 168.4671f, 113.6228f);
func_462(-2318.572f, 299.2423f, 168.4671f, 293.83f);
func_462(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
func_462(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
func_462(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
func_462(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
func_462(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
func_462(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
break;
case 10:
func_460(78);
break;
case 11:
func_460(79);
break;
case 12:
func_460(82);
break;
case 13:
func_460(81);
break;
case 14:
func_460(73);
break;
case 15:
func_462(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_462(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_462(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_462(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 16:
func_460(75);
break;
case 17:
func_460(76);
break;
case 18:
func_460(77);
break;
case 19:
func_462(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
func_462(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
func_462(-931.6637f, 703.693f, 151.369f, 87.7447f);
func_462(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
break;
case 20:
func_460(80);
break;
case 21:
case 25:
func_460(87);
break;
case 22:
case 26:
func_460(88);
break;
case 23:
case 27:
func_460(89);
break;
case 24:
case 28:
func_460(90);
break;
case 29:
case 30:
if(func_459(iParam1)){
func_460(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
}
break;
case 31:
func_462(-352.53f, -1836.742f, 21.924f, 274.8f);
func_462(-336.412f, -1837.341f, 22.497f, 264.6f);
func_462(-320.707f, -1840.342f, 23.195f, 257.4f);
func_462(-304.646f, -1843.295f, 24.219f, 261.599f);
func_462(-288.991f, -1844.123f, 25.228f, 269.599f);
func_462(-273.031f, -1842.69f, 26.27f, 278.199f);
func_462(-361.271f, -1814.526f, 21.63f, 96.399f);
func_462(-343.939f, -1813.331f, 22.368f, 87.999f);
func_462(-326.881f, -1814.914f, 23.106f, 78.799f);
func_462(-310.941f, -1818.223f, 23.957f, 78.799f);
func_462(-294.16f, -1820.207f, 25.092f, 89.199f);
func_462(-277.392f, -1819.237f, 26.283f, 100.199f);
func_462(-257.213f, -1838.977f, 27.318f, 285.799f);
func_462(-261.286f, -1815.615f, 27.439f, 110.399f);
func_462(-246.086f, -1808.691f, 28.576f, 117.398f);
func_462(-231.901f, -1800.767f, 28.619f, 119.398f);
func_462(-199.77f, -1989.34f, 26.62f, 180.997f);
func_462(-201.159f, -1971.41f, 26.62f, 190.798f);
func_462(-205.571f, -1954.537f, 26.62f, 199.998f);
func_462(-197.879f, -1940.822f, 26.62f, 114.998f);
func_462(-141.311f, -1967.41f, 21.805f, 91.997f);
func_462(-141.145f, -1977.861f, 21.813f, 91.997f);
func_462(-140.565f, -1988.289f, 21.815f, 91.997f);
func_462(-145.045f, -2032.168f, 21.956f, 73.597f);
func_462(-147.923f, -2041.781f, 21.956f, 73.597f);
func_462(-185.791f, -1948.005f, 26.62f, 18.596f);
func_462(-181.155f, -1965.422f, 26.62f, 8.196f);
func_462(-179.172f, -1984.332f, 26.62f, 1.396f);
func_462(-225.88f, -1824.637f, 28.897f, 299.596f);
func_462(-211.722f, -1816.401f, 28.859f, 300.796f);
func_462(-217.99f, -1792.624f, 28.649f, 119.196f);
func_462(-203.828f, -1784.264f, 28.678f, 119.996f);
func_462(-194.254f, -2018.756f, 26.62f, 75f);
func_462(-186.956f, -2031.369f, 26.62f, 338f);
func_462(-194.916f, -2047.94f, 26.62f, 329.8f);
func_462(-205.565f, -2064.553f, 26.62f, 320.2f);
func_462(-218.606f, -2077.97f, 26.62f, 311.2f);
func_462(-233.372f, -2089.601f, 26.62f, 304f);
func_462(-207.822f, -2002.11f, 26.62f, 173.799f);
func_462(-207.567f, -2027.579f, 26.62f, 158.599f);
func_462(-215.235f, -2042.272f, 26.62f, 148.999f);
func_462(-227.643f, -2058.498f, 26.62f, 138.799f);
func_462(-242.977f, -2071.452f, 26.62f, 125.798f);
func_462(-256.624f, -2087.982f, 26.62f, 204.198f);
func_462(-249.549f, -2098.767f, 26.62f, 294.198f);
func_462(-228.998f, -2048.889f, 26.62f, 141.198f);
func_462(-176.963f, -2009.239f, 24.519f, 261.597f);
func_462(-195.128f, -1806.447f, 28.814f, 299.997f);
func_462(-180.02f, -1797.414f, 28.797f, 299.997f);
func_462(-165.796f, -1787.672f, 28.788f, 304.597f);
func_462(-188.124f, -1774.765f, 28.711f, 123.197f);
func_462(-417.428f, -1836.374f, 19.238f, 121.797f);
func_462(-430.967f, -1844.844f, 18.468f, 121.797f);
func_462(-444.94f, -1853.739f, 17.786f, 121.797f);
break;
}}elseif(func_456(Param0, &iVar2, &iVar3) || (func_433(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)))){
func_475();
iVar0=0;
while (iVar0 < iVar2){
if(iVar2[iVar0] > 1000){
iVar2[iVar0]=(iVar2[iVar0] - 1000);
iVar3[iVar0]=1;
}
if(iVar2[iVar0] >=83 && iVar2[iVar0] <=87){
Global_2635559.f_516=1;
}
if(!iVar3[iVar0] && func_455(iVar2[iVar0], -1)){
if(func_459(iParam1)){
func_460(iVar2[iVar0]);
}}elseif(iVar3[iVar0]){
if(((func_454(PLAYER::PLAYER_PED_ID()) || func_453(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)){
if(func_452(iParam1)){
func_451(iVar2[iVar0]);
}
elseif(func_450(iParam1)){
func_449(iVar2[iVar0]);
func_451(iVar2[iVar0]);
}
else{
func_449(iVar2[iVar0]);
func_451(iVar2[iVar0]);
}}else{
func_447(iVar2[iVar0], iParam1);
}}else{
func_460(iVar2[iVar0]);
}
iVar0++;
}}}}


void func_447(int iParam0, int iParam1){
switch (iParam0){
case 23:
func_462(434.1898f, 6535.824f, 27.0084f, 66.9998f);
func_462(434.9146f, 6539.661f, 26.9691f, 66.9998f);
func_462(435.1928f, 6543.298f, 26.889f, 66.9998f);
func_462(429.8495f, 6506.581f, 27.1807f, 59.7997f);
func_462(429.8463f, 6511.11f, 27.0717f, 60.9997f);
func_462(434.2748f, 6581.816f, 26.1303f, 85.1993f);
func_462(443.1016f, 6580.717f, 26.0739f, 85.1993f);
func_462(451.9748f, 6579.937f, 26.0319f, 85.1993f);
break;
case 26:
func_462(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
func_462(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
func_462(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
func_462(-142.1459f, 6342.532f, 30.49f, 44.7982f);
func_462(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
func_462(-151.1909f, 6358.461f, 30.4907f, 223.398f);
func_462(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
func_462(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
break;
case 24:
func_462(60.7522f, 6465.807f, 30.3941f, 213.3973f);
func_462(57.4131f, 6462.55f, 30.3663f, 213.3973f);
func_462(48.0438f, 6452.668f, 30.3245f, 213.3973f);
func_462(40.6765f, 6445.235f, 30.3475f, 213.3973f);
func_462(37.8298f, 6442.521f, 30.3489f, 213.3973f);
func_462(35.0212f, 6439.866f, 30.3332f, 213.3973f);
func_462(32.1837f, 6437.21f, 30.2991f, 213.3973f);
func_462(29.4732f, 6434.526f, 30.3702f, 213.3973f);
break;
case 25:
func_462(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
func_462(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
func_462(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
func_462(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
func_462(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
func_462(-360.983f, 6130.575f, 30.4401f, 45.7965f);
func_462(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
func_462(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
break;
case 22:
func_462(45.2181f, 6341.107f, 30.2296f, 14.3964f);
func_462(41.6057f, 6339.476f, 30.2306f, 14.3964f);
func_462(39.2508f, 6359.469f, 30.2398f, 207.3965f);
func_462(36.3203f, 6356.893f, 30.2398f, 207.3965f);
func_462(51.6043f, 6365.022f, 30.2399f, 33.5965f);
func_462(65.6465f, 6380.626f, 30.2398f, 212.9964f);
func_462(24.8587f, 6366.36f, 30.2286f, 32.7965f);
func_462(19.6254f, 6360.736f, 30.2305f, 32.7965f);
break;
case 28:
func_462(94.0245f, 181.2181f, 103.5566f, 160.3953f);
func_462(91.0039f, 182.2811f, 103.6179f, 160.3953f);
func_462(68.365f, 148.2105f, 103.5812f, 339.9951f);
func_462(62.2104f, 150.5185f, 103.6101f, 339.9951f);
func_462(69.5198f, 186.4278f, 103.9415f, 69.7949f);
func_462(62.59f, 189.0833f, 103.9981f, 69.7949f);
func_462(55.6095f, 191.8089f, 104.2827f, 69.7949f);
func_462(154.7309f, 182.1333f, 104.6903f, 160.1945f);
break;
case 31:
func_462(322.4916f, -714.5293f, 28.1574f, 158.5941f);
func_462(329.5591f, -694.4284f, 28.1656f, 158.5941f);
func_462(324.565f, -684.3934f, 28.3133f, 247.194f);
func_462(326.4054f, -679.9403f, 28.3192f, 247.194f);
func_462(297.1177f, -804.3891f, 28.4859f, 160.594f);
func_462(288.5461f, -814.6994f, 28.1563f, 163.194f);
func_462(286.0127f, -821.7357f, 28.3093f, 163.194f);
func_462(283.6725f, -828.9533f, 28.1247f, 158.994f);
break;
case 29:
func_462(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
func_462(-1454.819f, -359.998f, 42.7885f, 311.3925f);
func_462(-1462.675f, -360.1352f, 42.9255f, 223.392f);
func_462(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
func_462(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
func_462(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
func_462(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
func_462(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
break;
case 30:
func_462(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
func_462(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
func_462(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
func_462(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
func_462(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
func_462(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
func_462(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
func_462(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
break;
case 27:
func_462(1414.237f, -1656.344f, 60.2449f, 332.7893f);
func_462(1416.668f, -1659.933f, 60.6982f, 332.7893f);
func_462(1419.327f, -1663.972f, 61.2382f, 332.7893f);
func_462(1421.557f, -1667.367f, 61.7479f, 332.7893f);
func_462(1423.744f, -1670.853f, 62.3125f, 332.7893f);
func_462(1412.157f, -1652.746f, 59.9105f, 332.7893f);
func_462(1426.201f, -1673.598f, 62.7133f, 330.1893f);
func_462(1435.804f, -1694.73f, 65.0743f, 352.5892f);
break;
case 33:
func_462(2810.787f, 4435.92f, 47.5295f, 20.7996f);
func_462(2808.413f, 4443.922f, 47.3732f, 14.7995f);
func_462(2806.298f, 4451.786f, 47.1865f, 15.3995f);
func_462(2803.925f, 4459.858f, 46.9823f, 15.3995f);
func_462(2801.756f, 4467.755f, 46.8147f, 15.3995f);
func_462(2893.563f, 4430.258f, 47.338f, 105.9994f);
func_462(2903.725f, 4425.854f, 47.3523f, 23.1992f);
func_462(2907.076f, 4418.059f, 47.6301f, 23.1992f);
break;
case 36:
func_462(1680.448f, 4821.131f, 41.0599f, 186.399f);
func_462(1679.76f, 4829.447f, 40.9167f, 186.399f);
func_462(1678.668f, 4838.03f, 41.0221f, 187.7989f);
func_462(1677.612f, 4846.028f, 41.0452f, 187.7989f);
func_462(1675.851f, 4860.434f, 41.0901f, 187.7989f);
func_462(1674.843f, 4868.343f, 41.0684f, 187.7989f);
func_462(1673.543f, 4875.752f, 41.0684f, 186.7986f);
func_462(1672.525f, 4884.972f, 41.0478f, 186.7986f);
break;
case 34:
func_462(422.863f, 3583.901f, 32.2386f, 313.5986f);
func_462(426.6211f, 3583.208f, 32.2386f, 313.5986f);
func_462(430.466f, 3582.042f, 32.2386f, 313.5986f);
func_462(434.2751f, 3580.881f, 32.2386f, 313.5986f);
func_462(438.1525f, 3579.911f, 32.2386f, 313.5986f);
func_462(442.0173f, 3578.948f, 32.2386f, 313.5986f);
func_462(420.2694f, 3572.995f, 32.2385f, 353.7984f);
func_462(424.4825f, 3572.1f, 32.2386f, 348.1984f);
break;
case 35:
func_462(627.005f, 2726.019f, 40.7692f, 4.3984f);
func_462(620.9771f, 2725.759f, 40.7897f, 4.3984f);
func_462(614.8536f, 2725.355f, 40.8321f, 4.3984f);
func_462(611.1158f, 2737.387f, 40.9734f, 185.3984f);
func_462(598.9713f, 2736.261f, 41.0602f, 186.5986f);
func_462(592.6151f, 2735.886f, 41.0602f, 186.5986f);
func_462(586.0421f, 2735.9f, 41.0535f, 186.5986f);
func_462(627.4468f, 2742.742f, 40.8963f, 183.5979f);
break;
case 32:
func_462(214.3318f, 2492.26f, 53.9736f, 312.7978f);
func_462(213.9953f, 2496.666f, 53.8128f, 312.7978f);
func_462(213.7524f, 2501.251f, 53.5958f, 312.7978f);
func_462(213.6645f, 2505.908f, 53.3477f, 312.7978f);
func_462(213.4478f, 2510.734f, 53.1055f, 312.7978f);
func_462(212.9148f, 2515.268f, 52.9376f, 312.7978f);
func_462(211.5983f, 2519.216f, 52.6753f, 312.7978f);
func_462(210.1288f, 2523.187f, 52.3493f, 312.7978f);
break;
case 38:
func_462(153.6785f, -2476.192f, 4.9877f, 178.4004f);
func_462(150.9209f, -2516.979f, 4.9909f, 179.9999f);
func_462(150.9499f, -2524.965f, 4.9905f, 179.9999f);
func_462(153.866f, -2467.242f, 4.9877f, 178.4004f);
func_462(150.8115f, -2533.139f, 4.9895f, 180.0004f);
func_462(153.8647f, -2433.386f, 5.2336f, 170.2002f);
func_462(142.7427f, -2536.147f, 5f, 205.0002f);
func_462(138.8267f, -2535.865f, 5f, 205.0002f);
break;
case 41:
func_462(-341.4255f, -2734.451f, 5.0413f, 314.8f);
func_462(-334.0134f, -2741.43f, 5.0269f, 314.8f);
func_462(-329.7832f, -2745.604f, 5.0196f, 314.8f);
func_462(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
func_462(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
func_462(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
func_462(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
func_462(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
break;
case 39:
func_462(1143.73f, -3105.091f, 4.8989f, 146.1979f);
func_462(1140.009f, -3104.954f, 4.8985f, 146.1979f);
func_462(1136.267f, -3104.69f, 4.8969f, 146.1979f);
func_462(1132.732f, -3104.277f, 4.8944f, 146.1979f);
func_462(1128.724f, -3104.54f, 4.896f, 146.1979f);
func_462(1125.106f, -3104.057f, 4.8942f, 146.1979f);
func_462(1117.8f, -3103.674f, 4.8922f, 146.1979f);
func_462(1114.015f, -3103.448f, 4.8931f, 146.1979f);
break;
case 40:
func_462(653.1188f, -2700.255f, 5.2101f, 24.7971f);
func_462(656.1305f, -2707.245f, 5.214f, 24.7971f);
func_462(659.3307f, -2714.378f, 5.2188f, 22.7968f);
func_462(662.2627f, -2722.228f, 5.2188f, 19.1968f);
func_462(649.2115f, -2728.359f, 5.1124f, 20.5967f);
func_462(646.2606f, -2720.833f, 5.1103f, 21.3967f);
func_462(643.4582f, -2713.846f, 5.1099f, 21.3967f);
func_462(640.3513f, -2706.571f, 5.108f, 21.3967f);
break;
case 37:
func_462(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
func_462(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
func_462(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
func_462(-238.214f, -2614.847f, 5.0502f, 271.5953f);
func_462(-238.013f, -2630.961f, 5.0331f, 271.3949f);
func_462(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
func_462(-253.401f, -2631.108f, 5.0319f, 272.195f);
func_462(-245.5563f, -2631.06f, 5.0323f, 272.195f);
break;
case 83:
func_462(-1190.795f, -3371.393f, 12.945f, 348.399f);
func_462(-1185.634f, -3373.893f, 12.945f, 348.399f);
func_462(-1114.818f, -3414.185f, 12.945f, 314.199f);
func_462(-1110.976f, -3416.37f, 12.945f, 314.199f);
func_462(-1098.621f, -3460.792f, 12.9453f, 329.799f);
func_462(-1093.31f, -3463.464f, 12.9453f, 329.799f);
func_462(-1089.433f, -3443.234f, 12.945f, 329.799f);
func_462(-1084.271f, -3446.31f, 12.945f, 329.799f);
func_462(-1093.808f, -3452.407f, 12.9451f, 329.799f);
func_462(-1088.383f, -3455.466f, 12.9451f, 329.799f);
func_462(-1118.474f, -3411.385f, 12.9451f, 313.199f);
func_462(-1181.003f, -3375.658f, 12.945f, 346.799f);
func_462(-1212.071f, -3382.283f, 12.9451f, 328.999f);
func_462(-1217.708f, -3378.623f, 12.9451f, 328.999f);
func_462(-1216.986f, -3390.396f, 12.9452f, 328.999f);
func_462(-1222.566f, -3386.707f, 12.9452f, 328.999f);
func_462(-1222.06f, -3398.882f, 12.9452f, 328.999f);
func_462(-1227.698f, -3394.946f, 12.9451f, 328.999f);
func_462(-1097.517f, -3472.086f, 12.9453f, 328.999f);
func_462(-1102.951f, -3468.619f, 12.9452f, 328.999f);
func_462(-1227.253f, -3407.38f, 12.9452f, 328.999f);
func_462(-1232.836f, -3403.572f, 12.9452f, 328.999f);
break;
case 84:
func_462(-1364.879f, -3285.201f, 12.945f, 330.2f);
func_462(-1359.229f, -3288.52f, 12.945f, 330.2f);
func_462(-1369.636f, -3293.617f, 12.945f, 330.2f);
func_462(-1363.881f, -3296.796f, 12.945f, 330.2f);
func_462(-1432.898f, -3247.702f, 12.945f, 330.2f);
func_462(-1437.282f, -3255.429f, 12.945f, 330.2f);
func_462(-1441.623f, -3262.969f, 12.945f, 330.2f);
func_462(-1443.954f, -3251.006f, 12.945f, 330.2f);
func_462(-1374.159f, -3301.61f, 12.945f, 330.2f);
func_462(-1368.508f, -3304.924f, 12.945f, 330.2f);
func_462(-1359.905f, -3276.118f, 12.9448f, 330.4f);
func_462(-1354.228f, -3279.63f, 12.9448f, 330.4f);
func_462(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
func_462(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
func_462(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
func_462(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
func_462(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
func_462(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
func_462(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
func_462(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
func_462(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
func_462(-1444.064f, -3273.751f, 12.945f, 330.7996f);
break;
case 85:
func_462(-2060.105f, 3186.159f, 31.81f, 329.599f);
func_462(-2065.521f, 3189.007f, 31.81f, 150.199f);
func_462(-2055.006f, 3194.989f, 31.81f, 329.599f);
func_462(-2060.471f, 3197.816f, 31.81f, 150.199f);
func_462(-2049.611f, 3204.032f, 31.81f, 329.599f);
func_462(-2055.048f, 3206.958f, 31.81f, 150.199f);
func_462(-2049.627f, 3216.253f, 31.81f, 150.199f);
func_462(-2039.024f, 3222.121f, 31.81f, 329.599f);
func_462(-2044.17f, 3213.208f, 31.81f, 329.599f);
func_462(-2044.672f, 3224.638f, 31.81f, 150.199f);
func_462(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
func_462(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
func_462(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
func_462(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
func_462(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
func_462(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
func_462(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
func_462(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
func_462(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
func_462(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
func_462(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
func_462(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
break;
case 86:
func_462(-1843.828f, 3085.094f, 31.81f, 165.8f);
func_462(-1828.571f, 3084.114f, 31.841f, 329.2f);
func_462(-1823.414f, 3092.762f, 31.843f, 330f);
func_462(-1819.045f, 3100.435f, 31.845f, 330f);
func_462(-1833.313f, 3075.722f, 31.838f, 330f);
func_462(-1847.648f, 3076.8f, 31.835f, 165.8f);
func_462(-1838.479f, 3078.576f, 31.863f, 150.599f);
func_462(-1833.605f, 3086.784f, 31.863f, 150.599f);
func_462(-1828.424f, 3095.617f, 31.863f, 150.599f);
func_462(-1823.95f, 3102.821f, 31.862f, 150.599f);
func_462(-1819.284f, 3110.67f, 31.8615f, 150.2f);
func_462(-1814.545f, 3108.229f, 31.8476f, 330.6f);
func_462(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
func_462(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
func_462(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
func_462(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
func_462(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
func_462(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
func_462(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
func_462(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
func_462(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
func_462(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
break;
case 87:
func_462(-2538.561f, 3303.172f, 31.814f, 296.999f);
func_462(-2530.309f, 3307.445f, 31.816f, 296.999f);
func_462(-2521.733f, 3311.833f, 31.817f, 296.999f);
func_462(-2512.881f, 3316.428f, 31.819f, 296.999f);
func_462(-2502.952f, 3321.518f, 31.821f, 296.999f);
func_462(-2542.613f, 3310.728f, 31.814f, 296.999f);
func_462(-2534.195f, 3314.753f, 31.815f, 296.999f);
func_462(-2525.635f, 3318.97f, 31.817f, 296.999f);
func_462(-2516.674f, 3323.545f, 31.819f, 296.999f);
func_462(-2507.153f, 3328.454f, 31.82f, 296.999f);
func_462(-2547.689f, 3298.791f, 31.812f, 296.999f);
func_462(-2551.261f, 3306.304f, 31.8123f, 296.999f);
func_462(-2497.446f, 3333.296f, 31.821f, 296.999f);
func_462(-2494.089f, 3326.065f, 31.8218f, 296.999f);
func_462(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
func_462(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
func_462(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
func_462(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
func_462(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
func_462(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
func_462(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
func_462(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
break;
case 89:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(1284.416f, 2890.299f, 45.0276f, 336.3999f);
func_462(1273.248f, 2901.428f, 45.0426f, 338.3999f);
func_462(1262.945f, 2911.535f, 43.2959f, 341.9999f);
func_462(1272.094f, 2873.387f, 45.3443f, 328.5991f);
func_462(1259.785f, 2892.217f, 45.1126f, 339.9999f);
func_462(1231.279f, 2910.881f, 43.3085f, 12f);
func_462(1306.515f, 2839.475f, 46.8947f, 132.3996f);
func_462(1307.453f, 2825.276f, 45.1566f, 127.1998f);
func_462(1257.029f, 2872.157f, 45.9766f, 338.5992f);
func_462(1225.764f, 2930.095f, 41.6173f, 14.7999f);
}else{
func_462(1265.123f, 2836.949f, 47.1021f, 119.9996f);
func_462(1258.145f, 2831.643f, 46.4503f, 135.7993f);
func_462(1240.847f, 2828.721f, 46.4388f, 39.5992f);
func_462(1236.877f, 2835.49f, 46.3491f, 22.9991f);
func_462(1235.697f, 2843.403f, 46.0231f, 2.7991f);
func_462(1237.686f, 2850.607f, 45.5261f, 335.5991f);
func_462(1241.126f, 2858.816f, 45.0176f, 339.7991f);
func_462(1249.715f, 2810.588f, 47.2648f, 255.1992f);
func_462(1257.696f, 2808.609f, 47.014f, 266.1992f);
func_462(1265.577f, 2808.353f, 46.7598f, 277.199f);
func_462(1273.808f, 2808.484f, 46.3872f, 263.999f);
func_462(1282.535f, 2807.134f, 45.9705f, 250.7989f);
func_462(1290.168f, 2803.745f, 45.8005f, 238.7988f);
func_462(1296.445f, 2798.777f, 46.0903f, 228.9988f);
func_462(1302.041f, 2792.33f, 45.957f, 221.7987f);
func_462(1251.389f, 2825.818f, 45.9856f, 119.1982f);
func_462(1285.48f, 2819.238f, 45.044f, 228.3993f);
func_462(1293.023f, 2814.164f, 44.8859f, 233.399f);
func_462(1242.18f, 2814.153f, 47.7108f, 227.3991f);
func_462(1236.362f, 2819.623f, 47.6845f, 224.399f);
func_462(1231.532f, 2825.855f, 47.4649f, 210.5992f);
func_462(1228.177f, 2833.423f, 47.3171f, 197.5993f);
func_462(1243.095f, 2866.749f, 44.6219f, 353.7992f);
func_462(1307.346f, 2785.787f, 46.1136f, 219.9997f);
func_462(1300.752f, 2808.224f, 44.5688f, 228.9997f);
func_462(1306.571f, 2802.468f, 44.6275f, 224.1992f);
func_462(1244.465f, 2875.697f, 44.5839f, 353.7992f);
func_462(1312.441f, 2795.427f, 45.2701f, 218.5991f);
}
break;
case 90:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(14.4916f, 2660.726f, 79.0178f, 310.1999f);
func_462(3.855f, 2672.388f, 78.437f, 319.2f);
func_462(-7.057f, 2682.247f, 77.472f, 319.2f);
func_462(-14.041f, 2663.43f, 77.4221f, 319.2f);
func_462(41.8086f, 2597.059f, 81.3524f, 301.9997f);
func_462(60.2273f, 2609.745f, 79.5672f, 305.9998f);
func_462(34.0188f, 2659.723f, 78.9894f, 314.2f);
func_462(29.4879f, 2675.34f, 76.0202f, 314.2f);
func_462(19.0088f, 2686.16f, 75.6897f, 314.2f);
func_462(7.6101f, 2697.113f, 76.2923f, 314.2f);
}else{
func_462(50.6405f, 2633.902f, 79.4503f, 305.1998f);
func_462(46.2894f, 2639.951f, 79.9122f, 305.1998f);
func_462(55.3668f, 2627.773f, 79.6363f, 305.1998f);
func_462(59.9522f, 2620.408f, 80.0499f, 305.1998f);
func_462(42.1486f, 2646.073f, 80.108f, 305.1998f);
func_462(68.1481f, 2630.07f, 77.0725f, 305.1998f);
func_462(62.6048f, 2637.014f, 76.1722f, 305.1998f);
func_462(57.3543f, 2643.56f, 75.5301f, 305.1998f);
func_462(52.611f, 2649.698f, 76.1354f, 305.1998f);
func_462(74.5845f, 2640.475f, 72.602f, 305.1998f);
func_462(68.5462f, 2646.784f, 71.6298f, 305.1998f);
func_462(62.426f, 2652.977f, 71.7029f, 305.1998f);
func_462(79.5597f, 2650.835f, 68.668f, 305.1998f);
func_462(72.6035f, 2656.857f, 67.3294f, 305.1998f);
func_462(83.4156f, 2660.237f, 64.3198f, 305.1998f);
func_462(102.851f, 2688.009f, 51.732f, 224f);
func_462(109.815f, 2681.012f, 51.112f, 224f);
func_462(116.355f, 2674.26f, 50.529f, 224f);
func_462(125.138f, 2665.98f, 49.8f, 224f);
func_462(132.228f, 2659.865f, 49.26f, 228.4f);
func_462(139.354f, 2653.536f, 48.737f, 228.4f);
func_462(88.512f, 2702.995f, 53.042f, 224.199f);
func_462(81.565f, 2710.357f, 53.67f, 224.199f);
func_462(75.156f, 2716.981f, 54.223f, 224.199f);
func_462(68.442f, 2723.806f, 54.775f, 226.199f);
func_462(61.449f, 2730.606f, 55.308f, 226.199f);
func_462(53.702f, 2738.167f, 55.855f, 226.199f);
func_462(91.2443f, 2667.262f, 59.9931f, 314.599f);
}
break;
case 91:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(2772.011f, 3889.062f, 42.94f, 145.4f);
func_462(2785.592f, 3880.409f, 43.695f, 146.199f);
func_462(2788.387f, 3898.107f, 45.364f, 140.999f);
func_462(2801.558f, 3912.485f, 44.931f, 131.999f);
func_462(2805.531f, 3892.253f, 47.01f, 106.399f);
func_462(2824.791f, 3894.787f, 47.4293f, 105.3989f);
func_462(2761.739f, 3945.948f, 44.59f, 135.398f);
func_462(2814.589f, 3930.404f, 44.816f, 134.9978f);
func_462(2747.627f, 3930.92f, 43.8497f, 138.3978f);
func_462(2796.312f, 3928.316f, 42.6106f, 134.5979f);
}else{
func_462(2730.174f, 3890.294f, 42.435f, 54.6f);
func_462(2714.633f, 3918.283f, 42.938f, 16f);
func_462(2716.533f, 3910.15f, 42.699f, 19.6f);
func_462(2757.499f, 3874.045f, 42.724f, 64.8f);
func_462(2747.99f, 3878.676f, 42.561f, 62.8f);
func_462(2738.337f, 3884.314f, 42.614f, 57.2f);
func_462(2711.836f, 3926.255f, 42.931f, 21.6f);
func_462(2707.586f, 3934.558f, 42.984f, 27.6f);
func_462(2702.361f, 3943.039f, 42.951f, 30.6f);
func_462(2696.696f, 3951.317f, 43.012f, 34.8f);
func_462(2766.778f, 3868.911f, 42.822f, 59.8f);
func_462(2775.397f, 3863.697f, 43.204f, 54.2f);
func_462(2738.841f, 3869.927f, 42.492f, 242.799f);
func_462(2746.49f, 3865.861f, 42.808f, 239.599f);
func_462(2754.829f, 3861.039f, 42.906f, 240.799f);
func_462(2762.616f, 3856.316f, 42.895f, 240.799f);
func_462(2770.463f, 3851.383f, 43.216f, 233.199f);
func_462(2778.129f, 3844.914f, 43.26f, 229.199f);
func_462(2785.341f, 3837.918f, 43.141f, 224.999f);
func_462(2730.65f, 3875.186f, 42.437f, 231.999f);
func_462(2724.14f, 3880.885f, 42.469f, 224.599f);
func_462(2718.541f, 3887.508f, 42.614f, 217.399f);
func_462(2783.246f, 3857.409f, 43.175f, 45.199f);
func_462(2790.716f, 3850.631f, 43.125f, 45.199f);
func_462(2690.655f, 3959.246f, 43.255f, 40.199f);
func_462(2797.912f, 3842.523f, 43.166f, 40.199f);
func_462(2791.836f, 3830.845f, 43.14f, 221.999f);
func_462(2712.952f, 3894.566f, 42.484f, 14.799f);
}
break;
case 92:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(3374.661f, 5559.709f, 12.3726f, 138.7999f);
func_462(3366.365f, 5569.449f, 13.9704f, 112.8f);
func_462(3358.493f, 5581.463f, 16.1783f, 112.8f);
func_462(3356.705f, 5595.363f, 15.4029f, 112.8f);
func_462(3336.662f, 5552.357f, 19.491f, 249.6f);
func_462(3336.791f, 5567.825f, 20.432f, 249.6f);
func_462(3335.259f, 5599.046f, 22.4606f, 249.6f);
func_462(3336.811f, 5613.029f, 22.2159f, 249.6f);
func_462(3354.696f, 5609.699f, 15.9453f, 111.3999f);
func_462(3354.006f, 5624.206f, 16.018f, 111.3999f);
}else{
func_462(3372.053f, 5506.134f, 20.8174f, 99.5999f);
func_462(3374.923f, 5520.177f, 20.3207f, 86f);
func_462(3350.643f, 5490.432f, 18.8423f, 139.9997f);
func_462(3364.189f, 5502.98f, 19.648f, 125.7999f);
func_462(3354.101f, 5484.773f, 19.619f, 116.399f);
func_462(3365.919f, 5519.949f, 18.8008f, 102.9988f);
func_462(3341.889f, 5506.809f, 19.584f, 161.199f);
func_462(3338.581f, 5497.709f, 19.376f, 161.199f);
func_462(3335.674f, 5489.348f, 19.542f, 161.199f);
func_462(3332.019f, 5479.563f, 19.738f, 150.998f);
func_462(3327.404f, 5470.857f, 19.302f, 159.398f);
func_462(3323.903f, 5461.49f, 18.492f, 156.398f);
func_462(3320.016f, 5452.957f, 17.834f, 153.198f);
func_462(3315.782f, 5444.61f, 17.115f, 150.798f);
func_462(3335.451f, 5455.723f, 18.2323f, 162.1979f);
func_462(3338.788f, 5464.803f, 18.8631f, 163.7977f);
func_462(3362.476f, 5488.211f, 20.4432f, 108.5979f);
func_462(3371.259f, 5491.274f, 21.5286f, 104.9989f);
func_462(3342.201f, 5517.014f, 19.642f, 170.199f);
func_462(3343.267f, 5526.085f, 18.902f, 175.598f);
func_462(3343.531f, 5536.075f, 18.217f, 178.598f);
func_462(3357.257f, 5496.71f, 18.9729f, 132.5977f);
func_462(3342.346f, 5473.345f, 19.1235f, 159.3987f);
func_462(3347.236f, 5480.447f, 19.4672f, 131.199f);
func_462(3357.623f, 5516.9f, 16.9016f, 118.7991f);
func_462(3361.366f, 5545.886f, 15.5532f, 118.7991f);
func_462(3352.612f, 5541.013f, 16.3238f, 131.999f);
func_462(3343.349f, 5546.494f, 17.8738f, 173.9988f);
}
break;
case 93:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(43.848f, 6845.657f, 13.379f, 247.2f);
func_462(50.379f, 6861.146f, 15.105f, 247.2f);
func_462(32.501f, 6871.777f, 13.3283f, 247.2f);
func_462(38.437f, 6885.796f, 13.3627f, 247.2f);
func_462(55.806f, 6875.081f, 14.824f, 247.2f);
func_462(11.616f, 6877.079f, 11.466f, 247.2f);
func_462(18.954f, 6891.633f, 11.37f, 247.2f);
func_462(26.68f, 6907.587f, 11.869f, 247.2f);
func_462(7.479f, 6907.895f, 12.024f, 247.2f);
func_462(44.9981f, 6901.352f, 11.9426f, 247.2f);
}else{
func_462(35.591f, 6836.608f, 13.288f, 274.4f);
func_462(36.028f, 6830.135f, 13.801f, 270.8f);
func_462(35.114f, 6823.884f, 14.527f, 260.8f);
func_462(48.779f, 6838.693f, 14.337f, 273.6f);
func_462(56.738f, 6821.8f, 15.244f, 244.8f);
func_462(48.377f, 6825.895f, 14.656f, 249.8f);
func_462(49.11f, 6831.439f, 13.991f, 274.8f);
func_462(53.544f, 6818.275f, 16.342f, 243f);
func_462(46.162f, 6821.945f, 15.483f, 249.8f);
func_462(60.129f, 6836.8f, 15.605f, 269.6f);
func_462(40.88f, 6802.952f, 20.113f, 242.6f);
func_462(48.203f, 6799.134f, 20.897f, 244.4f);
func_462(70.449f, 6809.271f, 16.846f, 243f);
func_462(61.436f, 6814.266f, 16.71f, 244.2f);
func_462(56.142f, 6793.458f, 19.806f, 242.6f);
func_462(65.759f, 6791.12f, 18.433f, 276.4f);
func_462(77.305f, 6805.391f, 18.558f, 245.6f);
func_462(85.893f, 6800.243f, 18.535f, 249.8f);
func_462(56.85f, 6780.582f, 18.822f, 297.999f);
func_462(65.636f, 6784.669f, 18.789f, 293.799f);
func_462(74.121f, 6788.498f, 18.739f, 293.799f);
func_462(97.779f, 6796.32f, 19.02f, 276.799f);
func_462(106.76f, 6796.983f, 18.914f, 272.599f);
func_462(112.387f, 6802.858f, 18.994f, 210.599f);
func_462(117.58f, 6802.644f, 18.663f, 209.399f);
func_462(122.481f, 6802.693f, 18.468f, 209.399f);
func_462(127.182f, 6802.686f, 18.218f, 209.399f);
func_462(132.429f, 6801.882f, 17.949f, 209.399f);
}
break;
case 94:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
func_462(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
func_462(-2232.397f, 2274.252f, 31.602f, 296.7993f);
func_462(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
func_462(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
func_462(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
func_462(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
func_462(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
func_462(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
func_462(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
}else{
func_462(-2239.671f, 2390.292f, 10.756f, 189.2002f);
func_462(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
func_462(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
func_462(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
func_462(-2238.044f, 2372.67f, 15.07f, 187.4004f);
func_462(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
func_462(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
func_462(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
func_462(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
func_462(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
func_462(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
func_462(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
func_462(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
func_462(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
func_462(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
func_462(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
func_462(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
func_462(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
func_462(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
func_462(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
func_462(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
func_462(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
func_462(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
func_462(-2255.106f, 2285.415f, 31.617f, 130.3999f);
func_462(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
func_462(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
func_462(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
func_462(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
}
break;
case 95:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(4.0332f, 3378.618f, 41.0822f, 247.1989f);
func_462(38.819f, 3321.2f, 37.0283f, 203.999f);
func_462(26.877f, 3309.062f, 37.93f, 191.9991f);
func_462(15.6727f, 3297.846f, 39.0535f, 191.9991f);
func_462(-24.2865f, 3367.527f, 41.4783f, 264.399f);
func_462(-23.1279f, 3352.254f, 40.52f, 280.399f);
func_462(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
func_462(97.4844f, 3335.385f, 34.6164f, 7.9981f);
func_462(20.409f, 3370.839f, 38.8393f, 235.799f);
func_462(48.457f, 3336.586f, 35.8912f, 270.3979f);
}else{
func_462(25.9869f, 3349.706f, 36.0366f, 273.9994f);
func_462(25.0176f, 3356.915f, 36.4258f, 276.9998f);
func_462(36.2443f, 3351.358f, 36.2386f, 272.5997f);
func_462(35.9352f, 3358.816f, 37.0033f, 276.7998f);
func_462(25.9651f, 3342.673f, 36.2157f, 270.7997f);
func_462(30.027f, 3292.351f, 38.604f, 140.199f);
func_462(49.1614f, 3358.589f, 35.9759f, 263.5988f);
func_462(48.288f, 3352.494f, 35.5841f, 261.1988f);
func_462(23.897f, 3283.152f, 39.381f, 145.399f);
func_462(60.9182f, 3356.21f, 35.8814f, 255.3988f);
func_462(18.723f, 3274.025f, 40.054f, 155.799f);
func_462(59.0177f, 3350.004f, 35.3204f, 255.7989f);
func_462(36.958f, 3298.847f, 38.001f, 127.799f);
func_462(54.165f, 3311.582f, 36.517f, 303.799f);
func_462(61.607f, 3317.105f, 35.916f, 306.999f);
func_462(68.994f, 3323.129f, 35.364f, 308.199f);
func_462(76.266f, 3329.467f, 34.805f, 311.399f);
func_462(82.757f, 3335.915f, 34.344f, 316.598f);
func_462(46.5977f, 3306.196f, 37.1628f, 304.9976f);
func_462(14.664f, 3263.688f, 40.931f, 160.398f);
func_462(50.8234f, 3324.118f, 36.2129f, 305.1976f);
func_462(11.7852f, 3256.101f, 41.7031f, 159.198f);
func_462(89.575f, 3343.311f, 33.932f, 318.398f);
func_462(58.4154f, 3329.423f, 35.6197f, 305.5979f);
func_462(65.3201f, 3334.253f, 35.1903f, 306.5977f);
func_462(72.1063f, 3339.793f, 34.8449f, 308.5977f);
func_462(95.6614f, 3349.917f, 33.696f, 316.1977f);
func_462(85.4387f, 3353.183f, 33.8047f, 317.9978f);
}
break;
case 96:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(2135.708f, 1757.503f, 102.073f, 40.999f);
func_462(2148.674f, 1764.557f, 102.75f, 40.999f);
func_462(2160.511f, 1771.173f, 104.149f, 40.999f);
func_462(2172.842f, 1777.391f, 105.369f, 40.999f);
func_462(2127.938f, 1736.353f, 100.835f, 222.199f);
func_462(2141.682f, 1739.865f, 99.833f, 222.199f);
func_462(2152.786f, 1747.776f, 99.785f, 222.199f);
func_462(2166.356f, 1754.682f, 100.07f, 220.399f);
func_462(2090.66f, 1701.805f, 101.681f, 243.199f);
func_462(2066.149f, 1716.735f, 102.112f, 228.2f);
}else{
func_462(2073.044f, 1725.935f, 102.5096f, 225.2f);
func_462(2077.24f, 1730.299f, 102.5247f, 225.2f);
func_462(2081.68f, 1734.742f, 102.5588f, 225.2f);
func_462(2086.052f, 1739.045f, 102.6618f, 225.2f);
func_462(2090.55f, 1743.53f, 102.6058f, 225.2f);
func_462(2095.295f, 1748.274f, 102.3022f, 225.2f);
func_462(2101.779f, 1721.807f, 101.927f, 225.2f);
func_462(2107.08f, 1727.001f, 101.932f, 225.2f);
func_462(2095.867f, 1716.475f, 101.925f, 225.2f);
func_462(2112.387f, 1732.492f, 101.849f, 225.2f);
func_462(2089.718f, 1710.779f, 101.978f, 225.2f);
func_462(2111.639f, 1717.132f, 100.855f, 225.2f);
func_462(2117.297f, 1722.655f, 100.704f, 225.2f);
func_462(2105.821f, 1711.672f, 101.065f, 225.2f);
func_462(2098.759f, 1704.866f, 101.209f, 225.2f);
func_462(2121.208f, 1713.145f, 99.65f, 225.2f);
func_462(2115.34f, 1707.542f, 99.829f, 225.2f);
func_462(2109.211f, 1702.247f, 100.079f, 225.2f);
func_462(2124.167f, 1704.036f, 98.584f, 225.2f);
func_462(2118.181f, 1698.253f, 98.645f, 225.2f);
func_462(2127.253f, 1694.878f, 97.078f, 225.2f);
func_462(2117.786f, 1738.219f, 101.839f, 225.2f);
func_462(2122.34f, 1728.011f, 100.627f, 225.2f);
func_462(2126.288f, 1718.542f, 99.501f, 225.2f);
func_462(2129.762f, 1709.847f, 98.352f, 225.2f);
func_462(2132.765f, 1700.777f, 96.999f, 225.2f);
func_462(2120.399f, 1689.165f, 97.388f, 225.2f);
func_462(2098.994f, 1747.929f, 102.2403f, 225.2f);
}
break;
case 97:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_462(1871.691f, 358.5369f, 162.1067f, 153.1979f);
func_462(1858.966f, 351.2935f, 161.7614f, 166.598f);
func_462(1873.611f, 342.6637f, 161.6936f, 142.998f);
func_462(1887.645f, 343.1557f, 162.1659f, 138.5979f);
func_462(1888.644f, 328.0839f, 161.7489f, 139.398f);
func_462(1898.596f, 315.2232f, 161.4418f, 173.7979f);
func_462(1896.729f, 266.5388f, 161.1619f, 113.5978f);
func_462(1900.167f, 281.3884f, 161.7807f, 115.197f);
func_462(1856.286f, 294.624f, 161.442f, 167.9966f);
func_462(1868.622f, 309.7907f, 162.6084f, 155.1968f);
}else{
func_462(1856.378f, 255.9146f, 162.7158f, 147.6202f);
func_462(1837.279f, 227.3696f, 165.2592f, 164.3995f);
func_462(1835.192f, 219.3931f, 167.5468f, 169.9994f);
func_462(1833.557f, 211.859f, 169.864f, 169.9994f);
func_462(1839.534f, 194.4053f, 171.3841f, 172.9989f);
func_462(1838.289f, 185.8157f, 171.2585f, 174.1989f);
func_462(1837.478f, 177.0607f, 170.7063f, 174.1989f);
func_462(1840.463f, 202.6959f, 170.8702f, 174.1989f);
func_462(1836.296f, 168.7307f, 170.5786f, 174.1989f);
func_462(1835.412f, 159.3162f, 170.4163f, 171.1989f);
func_462(1826.91f, 214.9648f, 172.2502f, 18.7986f);
func_462(1823.805f, 223.0288f, 172.0794f, 21.7986f);
func_462(1820.599f, 231.144f, 172.2987f, 21.7986f);
func_462(1817.245f, 239.1232f, 172.0878f, 21.7986f);
func_462(1814.089f, 247.0423f, 171.7386f, 24.9986f);
func_462(1810.879f, 255.6553f, 171.7517f, 19.3986f);
func_462(1807.729f, 265.4899f, 172.2307f, 15.1986f);
func_462(1823.147f, 197.3122f, 172.235f, 192.3984f);
func_462(1824.641f, 184.4241f, 171.5948f, 183.3985f);
func_462(1825.019f, 171.2314f, 170.5843f, 183.3985f);
func_462(1824.748f, 162.8998f, 170.4961f, 173.1985f);
func_462(1817.345f, 214.6964f, 172.5223f, 203.9982f);
func_462(1813.466f, 222.3717f, 172.3316f, 200.9982f);
func_462(1809.114f, 230.8225f, 172.346f, 205.1983f);
func_462(1805.594f, 239.3896f, 172.0033f, 197.9984f);
func_462(1802.515f, 247.4269f, 171.8964f, 197.9984f);
func_462(1833.982f, 150.4025f, 170.411f, 163.7985f);
func_462(1823.079f, 154.5105f, 170.8194f, 163.7985f);
}
break;
case 123:
case 124:
case 125:
func_448(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
func_448(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
func_448(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
func_448(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
func_448(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
func_448(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
func_448(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
func_448(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
func_448(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
func_448(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
func_448(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
func_448(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
func_448(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
func_448(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
func_448(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
func_448(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
func_448(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
func_448(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
func_448(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
func_448(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
func_448(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
func_448(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
func_448(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
func_448(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
func_448(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
func_448(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
func_448(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
func_448(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
func_448(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
func_448(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
func_448(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
func_448(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
break;
default:
break;
}}


void func_448(struct<3> Param0, float fParam1, int iParam2, bool bParam3){
struct<2> Var0;
struct<2> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
if(!iParam2==0){
func_359(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
fVar2=(Var1.f_1 - Var0.f_1);
if(bParam3){
fVar2=(fVar2 * -1f);
}
fVar2=(fVar2 * 0.5f);
Var3={
0f, fVar2, 0f 
};
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var3) 
};
func_462(Var4, fParam1);
}else{
func_462(Param0, fParam1);
}}


void func_449(int iParam0){
switch (iParam0){
case 83:
func_462(-1133.454f, -3371.672f, 12.945f, 329.799f);
func_462(-1119.748f, -3379.991f, 12.945f, 329.799f);
func_462(-1147.602f, -3363.505f, 12.945f, 329.799f);
func_462(-1161.988f, -3354.852f, 12.945f, 329.799f);
func_462(-1116.563f, -3358.99f, 12.945f, 329.799f);
func_462(-1131.23f, -3350.104f, 12.945f, 329.799f);
func_462(-1145.252f, -3341.608f, 12.945f, 329.799f);
func_462(-1115.202f, -3339.265f, 12.945f, 329.799f);
func_462(-1129.559f, -3330.697f, 12.945f, 329.799f);
func_462(-1114.664f, -3320.954f, 12.945f, 329.799f);
func_462(-1199.923f, -3369.502f, 12.945f, 350.399f);
func_462(-1212.069f, -3363.568f, 12.945f, 350.399f);
func_462(-1223.637f, -3356.694f, 12.945f, 350.399f);
func_462(-1102.284f, -3420.613f, 12.945f, 354.599f);
func_462(-1091.131f, -3427.396f, 12.945f, 354.599f);
func_462(-1079.372f, -3434.306f, 12.945f, 354.599f);
func_462(-1067.498f, -3441.878f, 13.114f, 354.599f);
func_462(-1055.714f, -3448.819f, 12.977f, 354.599f);
func_462(-1043.37f, -3455.796f, 13.146f, 354.599f);
func_462(-1017.023f, -3382.777f, 12.8401f, 330.6f);
func_462(-1010.608f, -3386.103f, 12.8401f, 330.6f);
func_462(-1004.658f, -3389.823f, 12.8401f, 330.6f);
func_462(-998.3798f, -3393.644f, 12.8401f, 330.6f);
func_462(-991.5242f, -3397.297f, 12.8401f, 330.6f);
func_462(-985.0826f, -3401.247f, 12.8401f, 330.6f);
func_462(-978.2733f, -3405.031f, 12.8401f, 330.6f);
func_462(-971.724f, -3409.109f, 12.8401f, 330.6f);
func_462(-964.4719f, -3413.202f, 13.1463f, 330.6f);
func_462(-1022.94f, -3392.372f, 12.8401f, 330.6f);
func_462(-1016.219f, -3395.82f, 12.8401f, 330.6f);
func_462(-1009.873f, -3399.143f, 12.8401f, 330.6f);
func_462(-1003.436f, -3402.982f, 12.8401f, 330.6f);
func_462(-997.0872f, -3406.928f, 12.8401f, 330.6f);
func_462(-990.2305f, -3410.548f, 12.8401f, 330.6f);
func_462(-983.4429f, -3414.093f, 12.8401f, 330.6f);
func_462(-976.8809f, -3417.846f, 12.8401f, 330.6f);
func_462(-969.4039f, -3421.727f, 13.1463f, 330.6f);
func_462(-1028.251f, -3401.834f, 12.8401f, 330.6f);
func_462(-1021.631f, -3405.433f, 12.8401f, 330.6f);
func_462(-1015.209f, -3408.563f, 12.8401f, 330.6f);
func_462(-1008.81f, -3412.484f, 12.8401f, 330.6f);
func_462(-1002.277f, -3415.987f, 12.8401f, 330.6f);
func_462(-995.7023f, -3419.97f, 12.8401f, 330.6f);
func_462(-989.1453f, -3423.988f, 12.8401f, 330.6f);
func_462(-982.6298f, -3427.981f, 12.8401f, 330.6f);
func_462(-974.9305f, -3431.833f, 13.1463f, 330.6f);
break;
case 84:
func_462(-1356.991f, -3242.228f, 12.945f, 330f);
func_462(-1369.313f, -3234.758f, 12.945f, 330f);
func_462(-1381.751f, -3227.408f, 12.945f, 330f);
func_462(-1394.302f, -3220.021f, 12.945f, 330f);
func_462(-1354.339f, -3223.129f, 12.945f, 330f);
func_462(-1366.302f, -3215.809f, 12.945f, 330f);
func_462(-1378.492f, -3208.645f, 12.945f, 330f);
func_462(-1350.322f, -3203.405f, 12.945f, 330f);
func_462(-1362.684f, -3196.451f, 12.945f, 330f);
func_462(-1347.089f, -3182.69f, 12.945f, 330f);
func_462(-1452.642f, -3222.367f, 12.945f, 347.799f);
func_462(-1464.229f, -3215.108f, 12.945f, 347.799f);
func_462(-1476.133f, -3207.652f, 12.945f, 347.799f);
func_462(-1488.295f, -3200.033f, 12.945f, 347.799f);
func_462(-1336.877f, -3272.344f, 12.945f, 8.199f);
func_462(-1323.381f, -3279.614f, 12.945f, 8.199f);
func_462(-1309.671f, -3287.749f, 12.945f, 8.199f);
func_462(-1296.963f, -3294.511f, 12.945f, 8.199f);
func_462(-1501.978f, -3193.849f, 12.945f, 350.599f);
func_462(-1344.716f, -3288.333f, 12.9445f, 331.2f);
func_462(-1338.141f, -3290.335f, 12.9445f, 331.2f);
func_462(-1331.473f, -3294.178f, 12.9445f, 331.2f);
func_462(-1324.921f, -3297.998f, 12.9445f, 331.2f);
func_462(-1318.129f, -3301.957f, 12.9445f, 331.2f);
func_462(-1350.466f, -3294.226f, 12.9445f, 331.2f);
func_462(-1343.482f, -3297.576f, 12.9445f, 331.2f);
func_462(-1336.398f, -3302.456f, 12.9445f, 331.2f);
func_462(-1329.82f, -3306.82f, 12.945f, 331.2f);
func_462(-1322.761f, -3310.353f, 12.945f, 331.2f);
func_462(-1316.587f, -3314.556f, 12.945f, 331.2f);
func_462(-1326.538f, -3318.499f, 12.945f, 331.2f);
func_462(-1335.74f, -3313.678f, 12.945f, 331.2f);
func_462(-1350.848f, -3302.619f, 12.9446f, 331.2f);
func_462(-1357.961f, -3306.886f, 12.945f, 331.2f);
func_462(-1335.202f, -3322.428f, 12.9452f, 331.2f);
func_462(-1351.401f, -3311.566f, 12.9452f, 331.2f);
func_462(-1344.255f, -3305.965f, 12.9451f, 331.2f);
func_462(-1299.832f, -3305.573f, 12.945f, 331.2f);
func_462(-1293.414f, -3309.413f, 12.945f, 331.2f);
func_462(-1286.835f, -3313.157f, 12.945f, 331.2f);
func_462(-1303.988f, -3313.1f, 12.945f, 331.2f);
func_462(-1297.402f, -3316.699f, 12.945f, 331.2f);
func_462(-1290.969f, -3320.519f, 12.945f, 331.2f);
func_462(-1308.27f, -3320.612f, 12.945f, 331.2f);
func_462(-1301.968f, -3324.714f, 12.945f, 331.2f);
func_462(-1295.483f, -3328.422f, 12.945f, 331.2f);
break;
case 85:
func_462(-2039.992f, 3132.191f, 31.81f, 149.399f);
func_462(-2025.075f, 3128.63f, 31.81f, 197.599f);
func_462(-2049.589f, 3142.464f, 31.81f, 109.199f);
func_462(-2088.648f, 3081.327f, 31.81f, 150.599f);
func_462(-2070.669f, 3111.575f, 31.81f, 123.399f);
func_462(-2053.385f, 3109.703f, 31.81f, 150.599f);
func_462(-2044.448f, 3094.012f, 31.81f, 181.799f);
func_462(-2071.825f, 3093.477f, 31.81f, 150.599f);
func_462(-2060.579f, 3085.924f, 31.81f, 150.599f);
func_462(-2062.712f, 3066.073f, 31.81f, 150.599f);
func_462(-2094.385f, 3190.445f, 31.81f, 117.799f);
func_462(-2083.056f, 3182.885f, 31.81f, 117.799f);
func_462(-2071.578f, 3175.554f, 31.81f, 117.799f);
func_462(-2120.249f, 3173.97f, 31.81f, 25.199f);
func_462(-2067.547f, 3146.325f, 31.81f, 14.998f);
func_462(-2080.506f, 3154.591f, 31.81f, 15.798f);
func_462(-2093.278f, 3159.793f, 31.81f, 14.798f);
func_462(-2106.614f, 3167.605f, 31.81f, 21.198f);
func_462(-2106.347f, 3196.902f, 31.81f, 117.799f);
func_462(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
func_462(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
func_462(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
func_462(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
func_462(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
func_462(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
func_462(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
func_462(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
func_462(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
func_462(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
func_462(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
func_462(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
func_462(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
func_462(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
func_462(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
func_462(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
func_462(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
func_462(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
func_462(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
func_462(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
func_462(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
func_462(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
func_462(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
func_462(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
func_462(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
func_462(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
func_462(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
break;
case 86:
func_462(-1885.187f, 3095.344f, 31.81f, 150.2f);
func_462(-1898.637f, 3072.816f, 31.811f, 150.2f);
func_462(-1886.469f, 3065.78f, 31.811f, 150.2f);
func_462(-1874.621f, 3058.437f, 31.81f, 150.2f);
func_462(-1862.818f, 3051.244f, 31.81f, 150.2f);
func_462(-1915.317f, 3041.652f, 31.811f, 150.2f);
func_462(-1896.724f, 2997.848f, 31.81f, 150.2f);
func_462(-1932.975f, 3011.781f, 31.81f, 150.2f);
func_462(-1875.668f, 3034.438f, 31.811f, 150.2f);
func_462(-1886.144f, 3016.285f, 31.81f, 150.2f);
func_462(-1913.706f, 3104.196f, 31.81f, 118.599f);
func_462(-1925.44f, 3112.236f, 31.81f, 118.599f);
func_462(-1938.08f, 3119.383f, 31.81f, 118.599f);
func_462(-1927.822f, 3072.679f, 31.81f, 13.399f);
func_462(-1940.575f, 3079.031f, 31.81f, 13.399f);
func_462(-1953.344f, 3084.888f, 31.81f, 13.399f);
func_462(-1965.91f, 3091.929f, 31.81f, 13.399f);
func_462(-1978.86f, 3100.029f, 31.81f, 13.399f);
func_462(-1950.928f, 3126.457f, 31.81f, 118.999f);
func_462(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
func_462(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
func_462(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
func_462(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
func_462(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
func_462(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
func_462(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
func_462(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
func_462(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
func_462(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
func_462(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
func_462(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
func_462(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
func_462(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
func_462(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
func_462(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
func_462(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
func_462(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
func_462(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
func_462(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
func_462(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
func_462(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
func_462(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
func_462(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
func_462(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
func_462(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
func_462(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
break;
case 87:
func_462(-2484.323f, 3249.294f, 31.828f, 151f);
func_462(-2495.313f, 3255.746f, 31.828f, 151f);
func_462(-2472.644f, 3242.684f, 31.828f, 151f);
func_462(-2506.313f, 3262.27f, 31.823f, 151f);
func_462(-2461.494f, 3235.93f, 31.828f, 151f);
func_462(-2505.602f, 3238.049f, 31.828f, 151f);
func_462(-2481.937f, 3224.8f, 31.828f, 151f);
func_462(-2516.813f, 3244.266f, 31.823f, 151f);
func_462(-2470.03f, 3217.899f, 31.828f, 151f);
func_462(-2493.933f, 3231.308f, 31.828f, 151f);
func_462(-2443.467f, 3227.753f, 31.828f, 175.8f);
func_462(-2431.365f, 3220.9f, 31.828f, 175.8f);
func_462(-2419.883f, 3214.708f, 31.828f, 175.8f);
func_462(-2501.903f, 3272.865f, 31.822f, 123.999f);
func_462(-2513.555f, 3280.176f, 31.817f, 123.999f);
func_462(-2524.776f, 3287.276f, 31.973f, 123.999f);
func_462(-2407.718f, 3208.055f, 31.827f, 176.199f);
func_462(-2395.689f, 3201.125f, 31.827f, 176.199f);
func_462(-2383.498f, 3194.211f, 31.833f, 176.199f);
func_462(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
func_462(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
func_462(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
func_462(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
func_462(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
func_462(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
func_462(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
func_462(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
func_462(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
func_462(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
func_462(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
func_462(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
func_462(-2383.986f, 3223.995f, 31.986f, 150.5996f);
func_462(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
func_462(-2370.524f, 3215.946f, 32.002f, 150.5996f);
func_462(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
func_462(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
func_462(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
func_462(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
func_462(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
func_462(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
func_462(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
func_462(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
func_462(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
func_462(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
func_462(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
func_462(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
break;
default:
break;
}}

int func_450(int iParam0){
switch (iParam0){
case joaat("microlight"):
case joaat("havok"):
case joaat("seabreeze"):
case joaat("rogue"):
case joaat("pyro"):
case joaat("buzzard"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("volatus"):
case joaat("cuban800"):
case joaat("besra"):
case joaat("duster"):
case joaat("stunt"):
case joaat("velum"):
case joaat("velum2"):
case joaat("vestra"):
case joaat("lazer"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("starling"):
case joaat("conada"):
return 1;
default:
}
return 0;
}


void func_451(int iParam0){
switch (iParam0){
case 83:
case 84:
func_462(-947.712f, -3367.704f, 12.944f, 60f);
func_462(-904.692f, -3293.072f, 12.944f, 60f);
func_462(-863.71f, -3221.978f, 12.944f, 60f);
func_462(-966.418f, -3162.773f, 12.944f, 60f);
func_462(-1007.435f, -3233.93f, 12.944f, 60f);
func_462(-1050.455f, -3308.559f, 12.944f, 60f);
func_462(-1145.673f, -3253.456f, 12.944f, 60f);
func_462(-1098.386f, -3181.428f, 12.944f, 60f);
func_462(-1060.474f, -3108.903f, 12.944f, 60f);
func_462(-1155.391f, -3053.632f, 12.944f, 60f);
func_462(-1196.114f, -3125.146f, 12.948f, 60f);
func_462(-1235.552f, -3201.86f, 12.944f, 60f);
func_462(-1344.446f, -3139.177f, 12.944f, 60f);
func_462(-1301.308f, -3064.341f, 12.944f, 60f);
func_462(-1260.135f, -2992.912f, 12.944f, 60f);
func_462(-1364.244f, -2932.9f, 12.98f, 60f);
func_462(-1405.284f, -3004.108f, 12.96f, 60f);
func_462(-1448.29f, -3078.72f, 12.95f, 60f);
func_462(-1535.732f, -3028.318f, 12.945f, 60f);
func_462(-1492.639f, -2953.558f, 12.945f, 60f);
func_462(-1451.506f, -2882.2f, 12.944f, 60f);
func_462(-1553.927f, -2823.12f, 13.002f, 60f);
func_462(-1595.097f, -2894.571f, 12.944f, 60f);
func_462(-1637.836f, -2968.714f, 12.945f, 60f);
func_462(-1740.971f, -2911.484f, 12.944f, 330f);
func_462(-1696.293f, -2833.978f, 12.944f, 330f);
func_462(-1651.502f, -2756.273f, 12.945f, 330f);
func_462(-1588.258f, -2647.575f, 12.944f, 330f);
func_462(-1536.862f, -2681.378f, 12.945f, 330f);
func_462(-1529.025f, -2544.485f, 12.944f, 330f);
break;
case 85:
case 86:
case 87:
func_462(-1970.422f, 2825.696f, 31.81f, 60.4f);
func_462(-2033.307f, 2855.526f, 31.83f, 60.4f);
func_462(-2091.018f, 2888.691f, 31.81f, 60.4f);
func_462(-2206.717f, 2955.363f, 31.81f, 60.4f);
func_462(-2268.817f, 2990.846f, 31.81f, 60.4f);
func_462(-2324.039f, 3023.154f, 31.811f, 60.4f);
func_462(-2435.806f, 3087.705f, 31.824f, 60.4f);
func_462(-2543.753f, 3149.909f, 31.821f, 60.4f);
func_462(-1944.848f, 2898.798f, 31.81f, 125.398f);
func_462(-1978.705f, 2924.367f, 31.846f, 151.999f);
func_462(-2064.849f, 2955.153f, 31.867f, 151.199f);
func_462(-2106.165f, 2980.687f, 31.81f, 104.599f);
func_462(-2302.367f, 3088.676f, 31.814f, 150.598f);
func_462(-2152.113f, 2924.162f, 31.81f, 60.198f);
func_462(-2488.232f, 3118.146f, 31.822f, 59.798f);
func_462(-2277.922f, 3133.756f, 31.811f, 120.598f);
func_462(-2604.776f, 3185.186f, 31.812f, 59.998f);
func_462(-2608.107f, 3305.049f, 31.812f, 60.198f);
func_462(-2718.936f, 3323.203f, 31.81f, 201.198f);
func_462(-2658.718f, 3216.499f, 31.812f, 59.998f);
func_462(-2380.372f, 3055.341f, 31.826f, 60.4f);
func_462(-2790.616f, 3286.24f, 31.812f, 240.397f);
func_462(-2770.946f, 3322.605f, 31.812f, 240.397f);
func_462(-2678.805f, 3339.186f, 31.812f, 199.597f);
func_462(-2743.882f, 3224.094f, 31.81f, 303.397f);
func_462(-2701.354f, 3203.092f, 31.994f, 328.397f);
func_462(-2249.816f, 2944.609f, 31.937f, 330.196f);
func_462(-2586.579f, 3137.286f, 31.935f, 330.196f);
func_462(-2134.76f, 2878.728f, 31.81f, 330.196f);
func_462(-1949.075f, 2861.21f, 31.811f, 58.798f);
break;
default:
break;
}}

int func_452(int iParam0){
switch (iParam0){
case joaat("hydra"):
case joaat("dodo"):
case joaat("mammatus"):
case joaat("annihilator"):
case joaat("tula"):
case joaat("hunter"):
case joaat("mogul"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("shamal"):
case joaat("savage"):
case joaat("luxor"):
case joaat("luxor2"):
case joaat("nimbus"):
case joaat("swift"):
case joaat("swift2"):
case joaat("valkyrie"):
case joaat("titan"):
case joaat("skylift"):
case joaat("miljet"):
case joaat("bombushka"):
case joaat("volatol"):
case joaat("alkonost"):
return 1;
default:
}
return 0;
}

int func_453(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f){
return 1;
}
return 0;
}

int func_454(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f){
return 1;
}
return 0;
}

int func_455(int iParam0, int iParam1){
if(iParam1==-1){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
break;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}
return 0;
}

int func_456(struct<2> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
iVar2=0;
fVar3=50f;
iVar0=1;
while (iVar0 <=130){
if(iVar2 < *uParam2){
iVar1=0;
iVar1=0;
while (iVar1 < 2){
if(vdist(Param0.f_0, Param0.f_1, 0f, Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3){
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=0;
iVar2++;
iVar1=99;
}
iVar1++;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 162){
fVar3=50f;
if(iVar0 >=83 && iVar0 <=87){
if(func_434(iVar0)){
fVar3=300f;
}else{
fVar3=0f;
}}
if(iVar0 >=89 && iVar0 <=97){
if(func_457(iVar0)){
fVar3=75f;
}else{
fVar3=0f;
}}
if(iVar0 >=123 && iVar0 <=125){
fVar3=150f;
}
if(iVar2 < *uParam2){
fVar4=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950108.f_542[iVar0 /*3*/], Global_1950108.f_542[iVar0 /*3*/].f_1, 0f);
if(fVar4 < fVar3){
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=1;
iVar2++;
}}
iVar0++;
}
if(iVar2 > 0){
return 1;
}
return 0;
}

int func_457(int iParam0){
int iVar0;
int iVar1;
iVar0=func_458(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_300==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_77()){
if(Global_1853910[iVar1 /*862*/].f_267.f_300==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
return 0;
}

int func_458(int iParam0){
switch (iParam0){
case 89:
return 1;
break;
case 90:
return 2;
break;
case 91:
return 3;
break;
case 92:
return 4;
break;
case 93:
return 5;
break;
case 94:
return 6;
break;
case 95:
return 7;
break;
case 96:
return 8;
break;
case 97:
return 9;
break;
}
return 0;
}

int func_459(int iParam0){
if((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 1;
}
return 0;
}


void func_460(int iParam0){
switch (iParam0){
case 78:
func_462(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
func_462(-612.8933f, 692.116f, 148.7577f, 79.1005f);
func_462(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
func_462(-639.3558f, 696.9992f, 150.5134f, 77.481f);
break;
case 79:
func_462(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_462(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_462(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_462(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 82:
func_462(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_462(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_462(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_462(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 81:
func_462(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
func_462(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
func_462(-1283.894f, 467.2136f, 95.4036f, 95.058f);
func_462(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
break;
case 73:
func_462(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
func_462(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
func_462(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
func_462(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
break;
case 75:
func_462(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_462(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_462(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_462(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 76:
func_462(-668.575f, 668.7567f, 149.4004f, 69.8844f);
func_462(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_462(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_462(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
break;
case 77:
func_462(128.4334f, 578.7522f, 182.2934f, 106.5458f);
func_462(97.7791f, 576.8907f, 181.5599f, 91.3539f);
func_462(83.5896f, 576.4791f, 181.0832f, 89.7262f);
func_462(69.9599f, 575.9902f, 180.5019f, 91.4926f);
break;
case 80:
func_462(-872.1293f, 698.7591f, 148.5084f, 339.673f);
func_462(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
func_462(-907.3458f, 695.8158f, 150.396f, 270.6491f);
func_462(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
break;
case 87:
if(func_461()){
func_462(-1608.297f, -556.875f, 33.406f, 310f);
func_462(-1616.095f, -563.402f, 33.049f, 309.4f);
func_462(-1560.29f, -531.69f, 34.576f, 35.3994f);
func_462(-1555.303f, -538.781f, 34.044f, 35.3994f);
}else{
func_462(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
func_462(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
func_462(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
func_462(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
func_462(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
func_462(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
func_462(-1611.769f, -601.588f, 31.2908f, 50.7362f);
func_462(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
}
break;
case 88:
if(func_461()){
func_462(-1402.362f, -511.396f, 30.888f, 35.4f);
func_462(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
func_462(-1407.634f, -503.839f, 31.35f, 35.4f);
func_462(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
}else{
func_462(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
func_462(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
func_462(-1346.236f, -523.9114f, 30.6f, 124.7302f);
func_462(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
func_462(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
func_462(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
func_462(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
func_462(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
}
break;
case 89:
if(func_461()){
func_462(-102.737f, -597.379f, 35.053f, 160.999f);
func_462(-97.793f, -589.568f, 35.082f, 134.799f);
func_462(-110.357f, -619.402f, 35.055f, 160.599f);
func_462(-112.561f, -627.723f, 35.046f, 165.399f);
}else{
func_462(-108.2604f, -613.6386f, 35.055f, 160.8063f);
func_462(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
func_462(-112.84f, -629.6357f, 35.0662f, 174.9843f);
func_462(-98.7403f, -590.3209f, 35.075f, 139.7632f);
func_462(-98.3748f, -612.642f, 35.137f, 161.1124f);
func_462(-92.595f, -595.4065f, 35.1888f, 161.3083f);
func_462(-104.4742f, -630.1472f, 35.1396f, 161.184f);
func_462(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
}
break;
case 90:
if(func_461()){
func_462(-59.349f, -779.238f, 43.134f, 228.398f);
func_462(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
func_462(-65.212f, -772.66f, 43.151f, 219.398f);
func_462(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
}else{
func_462(-59.684f, -779.4568f, 43.114f, 228.7591f);
func_462(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
func_462(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
func_462(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
func_462(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
func_462(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
func_462(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
func_462(-9.239f, -773.0505f, 43.0788f, 318.0367f);
}
break;
case 91:
func_462(246.5035f, -1798.749f, 26.1131f, 212.5996f);
func_462(247.8968f, -1797.017f, 26.1131f, 212.5996f);
func_462(249.3848f, -1795.374f, 26.1131f, 212.5996f);
func_462(250.8498f, -1793.695f, 26.1131f, 212.5996f);
func_462(262.9285f, -1784.205f, 26.1131f, 164.5991f);
func_462(266.8129f, -1787.476f, 26.1131f, 164.5991f);
func_462(264.814f, -1785.801f, 26.1131f, 164.5991f);
func_462(269.0069f, -1789.16f, 26.1131f, 164.5991f);
break;
case 92:
func_462(-1464.5f, -927.9f, 9f, 296.7991f);
func_462(-1466f, -926.1f, 9f, 296.7991f);
func_462(-1467.9f, -924.7f, 9f, 296.7991f);
func_462(-1469.7f, -923.7f, 9f, 296.7991f);
func_462(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
func_462(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
func_462(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
func_462(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
break;
case 93:
func_462(30.0784f, -1024.16f, 28.4469f, 234.5994f);
func_462(29.1695f, -1026.719f, 28.4453f, 234.5994f);
func_462(28.2538f, -1029.296f, 28.4421f, 234.5994f);
func_462(27.3737f, -1031.767f, 28.3937f, 234.5994f);
func_462(32.6932f, -1017.063f, 28.4531f, 234.5994f);
func_462(33.672f, -1014.399f, 28.4552f, 234.5994f);
func_462(37.488f, -1014.344f, 28.4781f, 175.5986f);
func_462(39.4909f, -1015.097f, 28.484f, 175.5986f);
break;
case 94:
func_462(45.0033f, 2784.392f, 56.8782f, 103.5999f);
func_462(43.316f, 2785.903f, 56.8782f, 103.5999f);
func_462(41.6126f, 2787.36f, 56.8782f, 103.5999f);
func_462(39.9584f, 2788.773f, 56.8782f, 103.5999f);
func_462(35.2347f, 2792.135f, 56.8781f, 208.7997f);
func_462(33.7771f, 2790.379f, 56.8781f, 208.7997f);
func_462(30.7578f, 2786.8f, 56.8781f, 208.7997f);
func_462(29.3121f, 2785.045f, 56.8745f, 208.7997f);
break;
case 95:
func_462(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
func_462(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
func_462(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
func_462(-337.675f, 6074.252f, 30.2727f, 152.9999f);
func_462(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
func_462(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
func_462(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
func_462(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
break;
case 96:
func_462(1738.422f, 3716.779f, 33.0787f, 6.9999f);
func_462(1736.207f, 3715.989f, 33.094f, 6.9999f);
func_462(1748.442f, 3714.17f, 33.0889f, 39.399f);
func_462(1750.475f, 3715.007f, 33.1067f, 39.399f);
func_462(1747.18f, 3721.102f, 33.007f, 95.199f);
func_462(1746.413f, 3723.255f, 32.9738f, 95.199f);
func_462(1740.67f, 3717.613f, 33.0616f, 8.199f);
func_462(1733.937f, 3715.08f, 33.1236f, 8.199f);
break;
case 97:
func_462(947.9371f, -1452.737f, 30.143f, 331.5991f);
func_462(950.2141f, -1452.826f, 30.1364f, 331.5991f);
func_462(952.4588f, -1452.882f, 30.129f, 331.5991f);
func_462(954.6608f, -1452.869f, 30.1303f, 331.5991f);
func_462(935.1006f, -1452.701f, 30.1907f, 316.999f);
func_462(932.5459f, -1452.579f, 30.2194f, 316.999f);
func_462(929.9319f, -1452.567f, 30.2647f, 316.999f);
func_462(927.4857f, -1452.446f, 30.3167f, 316.999f);
break;
case 98:
func_462(186.6051f, 306.8702f, 104.389f, 162.3999f);
func_462(184.3881f, 306.7666f, 104.3845f, 162.3999f);
func_462(182.1681f, 306.6823f, 104.375f, 162.3999f);
func_462(183.3219f, 296.2871f, 104.3707f, 350.7995f);
func_462(180.9933f, 296.3411f, 104.3704f, 350.7995f);
func_462(178.6569f, 296.4709f, 104.3701f, 350.7995f);
func_462(195.1475f, 304.4284f, 104.4644f, 77.3989f);
func_462(195.0814f, 301.8218f, 104.5287f, 77.3989f);
break;
case 99:
func_462(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
func_462(-33.3895f, -199.7716f, 51.355f, 5.3995f);
func_462(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
func_462(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
func_462(-17.9628f, -206.2525f, 51.3702f, 29.399f);
func_462(-14.8043f, -207.5648f, 51.4707f, 29.399f);
func_462(-11.8482f, -208.6405f, 51.5633f, 29.399f);
func_462(-9.1304f, -209.4894f, 51.6472f, 29.399f);
break;
case 100:
func_462(2478.52f, 4082.137f, 36.8208f, 227.5999f);
func_462(2477.557f, 4079.946f, 36.8014f, 227.5999f);
func_462(2465.123f, 4081.35f, 37.0655f, 167.4f);
func_462(2463.017f, 4082.271f, 37.0653f, 167.4f);
func_462(2467.7f, 4080.332f, 37.0649f, 167.4f);
func_462(2469.587f, 4079.538f, 37.061f, 167.4f);
func_462(2481.354f, 4088.553f, 36.9131f, 209.4f);
func_462(2482.442f, 4091.023f, 36.9472f, 209.4f);
break;
case 101:
func_462(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
func_462(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
func_462(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
func_462(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
func_462(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
func_462(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
func_462(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
func_462(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
break;
case 102:
func_462(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
func_462(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
func_462(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
func_462(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
func_462(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
func_462(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
func_462(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
func_462(-1127.039f, -1564.395f, 3.292f, 168.9988f);
break;
default:
break;
}}


bool func_461(){
return Global_2683864.f_17;
}


void func_462(struct<3> Param0, float fParam1){
if(Global_2635559.f_1754 < 101){
if(vmag(Param0) <=0.01f){
return;
}
Global_2635559.f_1755[Global_2635559.f_1754 /*4*/]={
Param0 
};
Global_2635559.f_1755[Global_2635559.f_1754 /*4*/].f_3=fParam1;
Global_2635559.f_1754++;
}}

int func_463(struct<3> Param0){
int iVar0;
if(vdist(Global_2635559.f_2904, Param0) < Global_2635559.f_2912){
return Global_2635559.f_2907;
}
Global_2635559.f_2904={
Param0 
};
iVar0=0;
while (iVar0 < 32){
if(Param0.f_2 <=0f){
Param0.f_2=((Global_2642883[iVar0 /*7*/].f_2 + Global_2642883[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_407(Param0, &(Global_2642883[iVar0 /*7*/]))){
Global_2635559.f_2907=iVar0;
return iVar0;
}
iVar0++;
}
Global_2635559.f_2907=-1;
return -1;
}

int func_464(){
if(MISC::IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2684801.f_6436){
return 0;
}
return 0;
}

int func_465(struct<2> Param0, var uParam1, bool bParam2, float fParam3){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=0;
iVar0=83;
while (iVar0 <=84 + 1){
if(bParam2){
if(func_434(iVar0)){
fVar1=fParam3;
}else{
fVar1=0f;
}}else{
fVar1=fParam3;
}
fVar2=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950108.f_542[iVar0 /*3*/], Global_1950108.f_542[iVar0 /*3*/].f_1, 0f);
if(fVar2 < fVar1){
iVar3++;
}
iVar0++;
}
if(iVar3 > 0){
return 1;
}
return 0;
}


void func_466(){
int iVar0;
iVar0=0;
while (iVar0 < 30){
Global_2635559.f_2737[iVar0 /*3*/]={
0f, 0f, 0f 
};
iVar0++;
}}

int func_467(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
Var1={
*uParam0 
};
iVar0=0;
while (iVar0 < 2){
if(Var1.f_2 <=0f){
Var1.f_2=((Global_2642839[iVar0 /*7*/].f_2 + Global_2642839[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_407(Var1, &(Global_2642839[iVar0 /*7*/]))){
if(bParam1){
func_418(&Var1, Global_2642839[iVar0 /*7*/], Global_2642839[iVar0 /*7*/].f_3, Global_2642839[iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
return 0;
}

int func_468(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_472(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_471(Param0, 1008981770)){
if(!func_424(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_424(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_470(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_469(&(Global_2635559.f_45[iVar0 /*12*/])) 
};
if(!func_424(&Var1, 0, 0, 0, 1)){
if(!func_424(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__469(var uParam0){
switch (uParam0->f_10){
case 0:
return *uParam0;
break;
case 1:
case 2:
return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
break;
}
return *uParam0;
}

int func_470(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_411(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_471(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_411(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_472(bool bParam0, bool bParam1){
if(func_264() !=0){
return func_473(bParam0) !=0;
}
return func_389(bParam0, bParam1, 0);
}

int func_473(int iParam0){
if(func_9(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}

int func_474(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}


void func_475(){
int iVar0;
struct<4> Var1;
iVar0=0;
while (iVar0 < 101){
Global_2635559.f_1755[iVar0 /*4*/]={
Var1 
};
iVar0++;
}
Global_2635559.f_1754=0;
}


void func_476(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_691[iVar0])){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_691[iVar0]){
if(!Global_2635559.f_687[iVar0]==-1){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_687[iVar0])){
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635559.f_687[iVar0]);
Global_2635559.f_687[iVar0]=-1;
}else{
Global_2635559.f_687[iVar0]=-1;
}}}}elseif(!Global_2635559.f_687[iVar0]==-1){
Global_2635559.f_687[iVar0]=-1;
}
iVar0++;
}}

int func_477(){
if(!Global_2635559.f_606==0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_611) < func_474(0)){
return 1;
}
return 0;
}

int func_478(){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE()==5){
return 0;
}}
if(Global_2635559.f_517==MISC::GET_FRAME_COUNT()){
return 0;
}
if(!func_480(PLAYER::PLAYER_ID()) && !func_479(0)){
return 0;
}
return 1;
}


bool func_479(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_480(bool bParam0){
if(bParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, bParam0);
}
return 1;
}

int func_481(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
var uVar4;
if(func_487(iParam0, &Var1, &Var2, &uVar4, &iVar0)){
if(MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var2, Var1, uVar4, &Var3)){
if(func_483(iParam0, Var3, Var2, iVar0)){
Local_2104.f_1221={
Var3 
};
Local_2104.f_1230=func_482(Var3, Var2);
return 1;
}}}
return 0;
}


float func_482(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_483(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
if(func_167(iParam0, 15)){
if(!func_484(iParam0, Param1, Param2, iParam3)){
return 0;
}}
if(Local_213.f_377.f_42 !=0){
Stack.Push(iParam0);
Stack.Push(Param1);
Call_Loc(Local_213.f_377.f_42);
if(!StackVal){
return 0;
}}elseif(!func_97(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
return 0;
}
return 1;
}

int func_484(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=vdist(Param1, Param2);
if(fVar0 > func_486()){
return 0;
}
fVar1=vdist(Param1, func_219());
if(fVar1 < func_183()){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam3)){
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam3, Param1) 
};
if(MISC::ABSF(Var2.f_0) > func_485()){
return 0;
}}
return 1;
}


float func_485(){
if(Local_213.f_661.f_6 !=0){
Call_Loc(Local_213.f_661.f_6);
return StackVal;
}
return 100f;
}


float func_486(){
if(Local_213.f_661.f_5 !=0){
Call_Loc(Local_213.f_661.f_5);
return StackVal;
}
return Local_171.f_1578.f_8;
}

int func_487(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4){
if(func_167(iParam0, 15)){
*uParam4=func_237(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(*uParam4) && !ENTITY::IS_ENTITY_DEAD(*uParam4, 0)){
*uParam1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam4) 
};
*uParam2={
ENTITY::GET_ENTITY_COORDS(*uParam4, 0) 
};
}else{
return 0;
}}elseif(Local_213.f_377.f_39 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_39);
*uParam1={
StackVal, StackVal, StackVal 
};
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_39);
*uParam2={
StackVal, StackVal, StackVal 
};
}else{
*uParam1={
Local_171.f_891.f_1[iParam0 /*15*/].f_4 
};
*uParam2={
Local_171.f_891.f_1[iParam0 /*15*/].f_4 
};
}
if(iLocal_2066 > 0){
func_488(uParam1);
}
if(!func_167(iParam0, 15) && Local_213.f_377.f_41 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_41);
*uParam3=StackVal;
}elseif((uParam1->f_2 >=0f && uParam1->f_2 < 90f) || (uParam1->f_2 >=270f && uParam1->f_2 < 360f)){
*uParam3=120f;
}else{
*uParam3=60f;
}
return 1;
}


void func_488(var uParam0){
if(iLocal_2066 < 5){
switch (iLocal_2066){
case 1:
*uParam0={
*uParam0 + Vector(10f, 0f, 0f) 
};
break;
case 2:
*uParam0={
*uParam0 + Vector(20f, 0f, 0f) 
};
break;
case 3:
*uParam0={
*uParam0 - Vector(10f, 0f, 0f) 
};
break;
case 4:
*uParam0={
*uParam0 - Vector(20f, 0f, 0f) 
};
break;
}
if(uParam0->f_2 > 360f){
uParam0->f_2=(uParam0->f_2 - 360f);
}}else{
iLocal_2066=0;
}
iLocal_2066++;
}

int func_489(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
if(func_491(iParam0, &Var2, &Var1, &iVar0)){
if(func_490(iParam0, Var2, Var1, iVar0)){
Local_2104.f_1221={
Var2 
};
Local_2104.f_1230=func_482(Var2, Var1);
return 1;
}}
return 0;
}

int func_490(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
float fVar0;
if(func_167(iParam0, 15)){
if(!func_484(iParam0, Param1, Param2, iParam3)){
return 0;
}}
if(!func_97(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0)){
return 0;
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0, 1, 0)){
if(Param1.f_2 < fVar0){
return 0;
}}else{
fVar0=PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Param1.f_0, Param1.f_1);
if(Param1.f_2 < fVar0){
return 0;
}}
return 1;
}

int func_491(int iParam0, var uParam1, var uParam2, var uParam3){
float fVar0;
bool bVar1;
bool bVar2;
int iVar3;
fVar0=200f;
if(func_167(iParam0, 15)){
*uParam3=func_237(iParam0);
if(!ENTITY::DOES_ENTITY_EXIST(*uParam3)){
return 0;
}
if(func_172()==4){
bVar1=func_176(func_60(1, iParam0), 0);
bVar2=bVar1;
if(!func_9(bVar2, 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2)){
return 0;
}
iVar3=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar2);
*uParam2={
Local_2109[iVar3 /*229*/].f_132 
};
}else{
*uParam2={
ENTITY::GET_ENTITY_COORDS(*uParam3, 0) 
};
}
fVar0=(func_486() / 2f);
}else{
*uParam2={
Local_171.f_891.f_1[iParam0 /*15*/].f_4 
};
}
*uParam1={
func_493(*uParam2, 0f, ((-1f * fVar0) * sin((to_float(iLocal_2066) * 30f))), (fVar0 * cos((to_float(bLocal_2066) * 30f))), 0f) 
};
uParam1->f_2=(uParam1->f_2 + func_492());
bLocal_2066++;
if(bLocal_2066 >=12){
bLocal_2066=false;
}
return 1;
}


float func_492(){
return 60f;
}


Vector3 func__493(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3){
struct<3> Var0;
float fVar1;
float fVar2;
float fVar3;
struct<3> Var4;
fVar1=fParam1;
fVar2=cos(fVar1);
fVar3=sin(fVar1);
Var0.f_0=((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
Var0.f_1=((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
Var4={
Param0 + Var0 
};
return Var4;
}


void func_494(bool bParam0){
if(!func_2497(83)){
if(bParam0){
PATHFIND::LOAD_ALL_PATH_NODES(1);
func_161(83);
}}elseif(!bParam0){
PATHFIND::LOAD_ALL_PATH_NODES(0);
func_495(83);
}}


void func_495(int iParam0){
if(func_133(&uLocal_2059, iParam0)){}}


void func_496(var uParam0, int iParam1){
int iVar0;
if(!func_167(iParam1, 15)){
return;
}
if(Local_213.f_661.f_10==0){
return;
}
Call_Loc(Local_213.f_661.f_10);
iVar0=StackVal;
if(iVar0==0 || !STREAMING::IS_MODEL_VALID(iVar0)){
return;
}
*uParam0=iVar0;
}

int func_497(int iParam0){
int iVar0;
if(!func_153(1, iParam0)){
return 0;
}
iVar0=Local_171.f_891.f_1[iParam0 /*15*/].f_9;
if(iVar0 !=-1){
if(!func_145(Local_171.f_1748.f_1[iVar0 /*2*/]) || !func_13(&(Local_2104.f_1213), 2000, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_2046)){
return 0;
}
Stack.Push(Local_213.f_377.f_54 !=0);
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_54);
if(StackVal && !StackVal){
return 0;
}
return 1;
}

int func_498(int iParam0){
int iVar0;
if(func_167(iParam0, 15)){
if(!func_13(&(Local_2104.f_1087.f_21), func_158(), 0)){
return 0;
}}
if(Local_213.f_377.f_34 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_34);
iVar0=StackVal;
if(iVar0 !=-1){
if(!func_13(&(Local_2104.f_773[iParam0 /*8*/].f_6), iVar0, 0)){
return 0;
}else{
func_28(&(Local_2104.f_773[iParam0 /*8*/].f_6));
}}}
return 1;
}

int func_499(int iParam0){
if(func_167(iParam0, 15)){
return func_160();
}
if(Local_213.f_377.f_23 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_377.f_23);
return StackVal;
}
return 1;
}


void func_500(int iParam0, int iParam1){
if(Local_171.f_891.f_1[iParam0 /*15*/].f_9==-1){
return;
}
if(func_152(iParam0) > 2 && func_152(iParam0) < 5){
if(func_501(iParam0, iParam1)){
func_215(iParam0, 2);
}else{
func_214(iParam0, 2);
}}}


bool func_501(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
iVar0=func_502(iParam1);
if(iVar0 !=func_77() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0)){
iVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
return func_168(iVar1, 2);
}}
return func_167(iParam0, 2);
}


bool func_502(int iParam0){
int iVar0;
bool bVar1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!PED::IS_PED_INJURED(iVar0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
if(bVar1 !=func_77() && func_9(bVar1, 0, 1)){
return bVar1;
}}}
return func_77();
}


void func_503(int iParam0, int iParam1){
if(func_167(iParam0, 15)){
*iParam1=0;
}}

int func_504(int iParam0, int iParam1, bool bParam2){
var uVar0;
var uVar1;
if(func_167(iParam0, 15)){
if(!bParam2){
uVar0=func_60(1, iParam0);
return 1;
}
if(func_59(iParam0)){
uVar1=func_60(1, iParam0);
return 1;
}
return 0;
}
return 0;
}


void func_505(int iParam0, int iParam1){
Local_2104.f_773[iParam0 /*8*/].f_1=iParam1;
}

int func_506(int iParam0, int iParam1){
int iVar0;
if(iParam1 !=func_508()){
return -1;
}
iVar0=0;
while (iVar0 < Local_171.f_19){
if(iParam0==func_507(iVar0)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_507(int iParam0){
return Local_2104.f_2.f_9[iParam0];
}

int func_508(){
return Local_171.f_19.f_5[0 /*13*/].f_11;
}

int func_509(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
if(iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=0;
while (iVar0 < iVar1){
iVar2=func_510(iParam0, (iVar0 - 1), bParam6, iParam7);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(iParam3 && iVar2==PLAYER::PLAYER_PED_ID()){
}elseif(bParam2){
if(PED::IS_PED_A_PLAYER(iVar2)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
if(((!PED::IS_PED_INJURED(iVar2) && iVar3 !=func_77()) && func_9(iVar3, 1, 1)) || iParam8){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2))==0){
if(!bParam5){
return 0;
}}else{
return 0;
}
}}}elseif(iParam1==0){
return 0;
}elseif(!PED::IS_PED_INJURED(iVar2)){
return 0;
}}
iVar0++;
}}
return 1;
}

int func_510(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
}
if(bParam2){
if(!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_vehicle"))==1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_any_vehicle"))==1){
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f){
return iVar0;
}}}
iVar0=-1;
}}
return iVar0;
}

int func_511(int iParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_512(NETWORK::NET_TO_VEH(iParam0));
}
return 0;
}

int func_512(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}


void func_513(){
func_514();
}


void func_514(){
struct<20> Var0;
if(!func_3(8)){
if(func_522() > 0 && Local_1953.f_0 > 0){
if(func_2497(53)){
Var0={
func_521(func_10()) 
};
if(func_515(func_10(), Local_2104.f_1255, &Var0)){
func_16(8);
}}}}}

int func_515(bool bParam0, struct<3> Param1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
if(!func_520(Param1)){
return 0;
}
if(bParam0==func_77()){
return 0;
}
if(*uParam2 > 18){
return 0;
}
iVar0=func_519(bParam0);
if(iVar0 !=-1){
iVar1=0;
while (iVar1 < *uParam2){
if((*uParam2)[iVar1] !=0){
iVar2=func_518(iVar0, (*uParam2)[iVar1]);
if(iVar2 !=-1){
if(!func_517(Param1, Global_2650102.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/])){
if(!func_15(&(Global_1956139.f_5765)) || func_13(&(Global_1956139.f_5765), 10000, 0)){
func_18(&(Global_1956139.f_5765), 0, 0);
func_516(bParam0, Param1, uParam2);
}
return 0;
}}}
iVar1++;
}
return 1;
}
return 0;
}


void func_516(bool bParam0, struct<3> Param1, var uParam2){
struct<26> Var0;
int iVar1;
int iVar2;
if(!func_520(Param1)){
return;
}
if(*uParam2 > 18){
return;
}
if(*uParam2 <=0){
return;
}
Var0.f_3=-1;
Var0.f_3.f_1=-1;
Var0.f_3.f_2=-1000;
Var0.f_6=18;
Var0.f_0=1812472025;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=bParam0;
Var0.f_3={
Param1 
};
Var0.f_25=*uParam2;
iVar1=0;
while (iVar1 < *uParam2){
Var0.f_6[iVar1]=(*uParam2)[iVar1];
iVar1++;
}
iVar2=func_257(1, 1);
if(!iVar2==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 26, iVar2);
}}

int func_517(struct<3> Param0, struct<3> Param1){
if(!func_520(Param0)){
return 0;
}
if(Param0.f_0==Param1.f_0 && Param0.f_2==Param1.f_2){
return 1;
}
return 0;
}

int func_518(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 18){
if(iParam1==Global_2650102.f_199.f_962[iParam0 /*75*/].f_1[iVar0]){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_519(bool bParam0){
int iVar0;
if(func_9(bParam0, 0, 1)){
iVar0=0;
while (iVar0 < 10){
if(Global_2650102.f_199.f_962[iVar0 /*75*/]==bParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_520(struct<3> Param0){
if(Param0.f_0==-1 || Param0.f_2==-1000){
return 0;
}
return 1;
}
struct<20> func_521(int iParam0){
struct<20> Var0;
int iVar1;
int iVar2;
Var0=18;
Var0.f_19=0;
if(!func_82(iParam0)){
return Var0;
}
if(func_9(iParam0, 0, 1)){
iVar1=0;
while (iVar1 < 10){
if(Global_2650102.f_199.f_962[iVar1 /*75*/]==iParam0){
iVar2=0;
while (iVar2 < 18){
if(Global_2650102.f_199.f_962[iVar1 /*75*/].f_1[iVar2] !=0 && !func_520(Global_2650102.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/])){
Var0[Var0.f_19]=Global_2650102.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
Var0.f_19++;
}
iVar2++;
}}else{
iVar1++;
}}}
return Var0;
}

int func_522(){
int iVar0;
iVar0=(iVar0 + func_38());
Stack.Push(iVar0);
Call_Loc(Local_213.f_832);
iVar0=(StackVal + StackVal);
return iVar0;
}


void func_523(){
int iVar0;
iVar0=0;
Stack.Push(iVar0);
Call_Loc(Local_213.f_832);
while (StackVal < StackVal){
func_527(iVar0);
func_524(iVar0);
iVar0++;
}}


void func_524(int iParam0){
bool bVar0;
int iVar1;
Stack.Push(iParam0);
Call_Loc(Local_213.f_832.f_3);
bVar0=StackVal;
if(bVar0==func_77()){
return;
}
iVar1=func_526(iParam0);
if(iVar1 !=func_77() && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1)){
if(func_9(bVar0, 0, 1)){
func_525(iParam0, bVar0);
}}}


void func_525(int iParam0, bool bParam1){
Local_2104.f_1295[iParam0 /*4*/].f_3=bParam1;
}

int func_526(int iParam0){
return Local_2104.f_1295[iParam0 /*4*/].f_3;
}


void func_527(int iParam0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_832.f_1);
if(StackVal && !func_554(iParam0, 0)){
if(func_529(&(Local_2104.f_1295[iParam0 /*4*/].f_2), 1, iParam0, func_553(iParam0), func_552(), func_551(iParam0), func_550(iParam0))){
func_528(iParam0, 0);
}}}


void func_528(int iParam0, int iParam1){
if(func_17(&(Local_2104.f_1295[iParam0 /*4*/]), iParam1)){}}

int func_529(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6){
if(*uParam0==-1){
*uParam0=func_549();
if(*uParam0==-1){
return 0;
}}
if(Local_2104.f_1283 !=iParam4){
Local_2104.f_1283=iParam4;
}
if(Local_2104.f_1283.f_1[*uParam0 /*5*/].f_2==-1){
Local_2104.f_1283.f_1[*uParam0 /*5*/].f_2=iParam1;
Local_2104.f_1283.f_1[*uParam0 /*5*/].f_3=iParam2;
}
if(func_530(&(Local_2104.f_1283.f_1[*uParam0 /*5*/]), bParam3, *uParam0, Local_2104.f_1283, &(Local_2104.f_1255), uParam5, uParam6)){
return 1;
}
return 0;
}

int func_530(var uParam0, bool bParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
struct<3> Var4;
bool bVar5;
if(bParam1==func_77()){
return 0;
}
if(!func_520(*uParam4)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
*uParam4={
func_548() 
};
}else{
return 0;
}}
if(!func_517(*uParam4, Global_1956139.f_5767)){
if((MISC::GET_FRAME_COUNT() - Global_1956139.f_5767.f_4) <=90 || (func_15(&(Global_1956139.f_5590)) && !func_13(&(Global_1956139.f_5590), 1500, 0))){
return 0;
}else{
func_546();
func_545(*uParam4);
}}
if(MISC::IS_BIT_SET(Global_1956139.f_5767.f_3, 31)){
iVar1=(Global_1956139.f_5767.f_4 - 1);
if(MISC::GET_FRAME_COUNT()==iVar1){
return 0;
}else{
MISC::CLEAR_BIT(&(Global_1956139.f_5767.f_3), 31);
}}
if(Global_1956139.f_5767.f_4==0){
Global_1956139.f_5767.f_4=MISC::GET_FRAME_COUNT();
bVar0=false;
while (bVar0 < 20){
Global_1956139.f_5772[bVar0]=-1;
iVar2=func_543(PLAYER::PLAYER_ID(), bVar0);
if(func_542(iVar2)){
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), bVar0);
}
bVar0++;
}}
uVar3=func_541(bParam1, bParam2);
*uParam0=bParam1;
uParam0->f_1=uVar3;
if(func_540(*uParam0)){
Var4={
func_538(*uParam0) 
};
if((Global_1956139.f_5767.f_4==MISC::GET_FRAME_COUNT() || func_537(*uParam0) !=iParam3) || !func_517(*uParam4, Var4)){
if(Global_1956139.f_5767.f_4 !=MISC::GET_FRAME_COUNT()){
Global_1956139.f_5767.f_4=MISC::GET_FRAME_COUNT();
if(Global_1956139.f_5772[bVar0]==uParam0->f_1){
Global_1956139.f_5772[bVar0]=-1;
}}
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), bParam2);
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), 31);
uParam0->f_1=-1;
Global_1956139.f_5767.f_4++;
return 0;
}else{
func_532(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
return 1;
}}
if(Global_1956139.f_5772[bParam2]==-1){
Global_1956139.f_5772[bParam2]=uVar3;
}
if(!func_15(&(Global_1956139.f_5590)) || func_13(&(Global_1956139.f_5590), 1500, 0)){
bVar5=true;
func_18(&(Global_1956139.f_5590), 0, 0);
}
if(!bVar5){
if(MISC::GET_FRAME_COUNT()==Global_1956139.f_5592){
bVar5=true;
}}
if(bVar5){
func_531(*uParam0, iParam3, uParam5, *uParam4, uParam6);
Global_1956139.f_5592=MISC::GET_FRAME_COUNT();
}
return 0;
}


void func_531(struct<2> Param0, int iParam1, var uParam2, struct<3> Param3, var uParam4){
struct<10> Var0;
int iVar1;
if(!func_520(Param3)){
return;
}
Var0.f_2.f_1=-1;
Var0.f_6=-1;
Var0.f_6.f_1=-1;
Var0.f_6.f_2=-1000;
Var0.f_0=265264873;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_4=iParam1;
Var0.f_9=uParam2;
Var0.f_5=uParam4;
Var0.f_6={
Param3 
};
iVar1=func_257(1, 1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 10, iVar1);
}}


void func_532(struct<2> Param0, char* sParam1){
bool bVar0;
bool bVar1;
bool bVar2;
var uVar3;
int iVar4;
var uVar5;
char cVar6[16];
bVar0=false;
if(bVar0){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sParam1="FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
}
bVar1=func_536(Param0);
bVar2=func_540(Param0);
uVar3=func_537(Param0);
iVar4=func_535(Param0);
uVar5=func_533(Param0);
if(iVar4==0){
StringCopy(&cVar6, "Initial", 16);
}elseif(iVar4==2){
StringCopy(&cVar6, "Delivered", 16);
}elseif(iVar4==-1){
StringCopy(&cVar6, "Invalid", 16);
}else{
IntToString(&cVar6, iVar4, 16);
}}}

int func_533(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_534(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_14;
}
iVar0++;
}
return 0;
}

int func_534(struct<2> Param0, struct<2> Param1){
if(Param0.f_1 !=-1 && Param1.f_1 !=-1){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return 0;
}

int func_535(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_534(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/];
}
iVar0++;
}
return -1;
}


bool func_536(struct<2> Param0){
return (Param0.f_1 !=-1 && Param0.f_0 !=func_77());
}

int func_537(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_534(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_3;
}
iVar0++;
}
return 0;
}


Vector3 func__538(struct<2> Param0){
int iVar0;
struct<3> Var1;
iVar0=func_539(Param0);
if(iVar0 < 0 || iVar0 >=64){
Var1=-1;
Var1.f_1=-1;
Var1.f_2=-1000;
return Var1;
}
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_539(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(func_534(Param0, Global_2650102.f_199.f_1[iVar0 /*15*/].f_1)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_540(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_534(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_541(bool bParam0, int iParam1){
bool bVar0;
if(Global_1956139.f_5772[iParam1] !=-1){
return Global_1956139.f_5772[iParam1];
}
bVar0=false;
while (bVar0 < 31){
if(!MISC::IS_BIT_SET(Global_1956139.f_5767.f_3, bVar0)){
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), bVar0);
return func_543(bParam0, bVar0);
}
bVar0++;
}
return -1;
}

int func_542(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_543(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_544(bParam0);
return (iVar0 + bParam1);
}

int func_544(bool bParam0){
return MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(bParam0));
}


void func_545(struct<3> Param0){
Global_1956139.f_5767={
Param0 
};
}


void func_546(){
Global_1956139.f_5767.f_3=0;
Global_1956139.f_5767.f_4=0;
Global_1956139.f_5767={
func_547() 
};
}


Vector3 func__547(){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1000;
return Var0;
}


Vector3 func__548(){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1000;
Var0.f_1=NETWORK::GET_CLOUD_TIME_AS_INT();
Var0.f_0=SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
Var0.f_2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
return Var0;
}

int func_549(){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < 2){
if(!func_536(Local_2104.f_1283.f_1[iVar1 /*5*/])){
iVar0=iVar1;
}else{
iVar1++;
}}
return iVar0;
}

int func_550(int iParam0){
return 0;
}

int func_551(int iParam0){
return 1;
}

int func_552(){
return 23;
}


bool func_553(int iParam0){
return func_10();
}


bool func_554(int iParam0, int iParam1){
return func_4(&(Local_2104.f_1295[iParam0 /*4*/]), iParam1);
}


void func_555(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
func_566(iVar0);
func_561(iVar0);
iVar0++;
}
func_556();
}


void func_556(){
if(Local_171.f_19 <=0){
return;
}
if(!func_560()){
return;
}
Stack.Push(Local_213.f_124.f_36 !=0);
Call_Loc(Local_213.f_124.f_36);
if(StackVal && StackVal){
return;
}
if(func_559()){
if(func_558()){
func_8(5);
}}elseif(func_557()){
func_8(5);
}}

int func_557(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(func_171(iVar0, 3)){
return 1;
}
iVar0++;
}
return 0;
}

int func_558(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(!func_171(iVar0, 3)){
return 0;
}
iVar0++;
}
return 1;
}


bool func_559(){
return func_33(0);
}

int func_560(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(!func_171(iVar0, 6)){
return 0;
}
iVar0++;
}
return 1;
}


void func_561(int iParam0){
if(func_171(iParam0, 29) && func_564(iParam0)){
if(func_563(iParam0)){
func_562(iParam0, 29);
}}}


void func_562(int iParam0, int iParam1){
if(func_133(&(Local_2104.f_2.f_5[iParam0 /*3*/]), iParam1)){}}

int func_563(int iParam0){
int iVar0;
if(func_564(iParam0)){
iVar0=func_507(iParam0);
return (Local_2104.f_773[iVar0 /*8*/].f_1==5 || func_171(iParam0, 0));
}
return 1;
}


bool func_564(int iParam0){
return (func_565(iParam0) && func_508()==2);
}


bool func_565(int iParam0){
return Local_2104.f_2.f_9[iParam0] !=-1;
}


void func_566(int iParam0){
if(Local_171.f_19.f_5[iParam0 /*13*/].f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_124.f_23);
if(StackVal){
if(!func_171(iParam0, 6)){
if(func_142(Local_171.f_19.f_5[iParam0 /*13*/].f_2)){
if(NETWORK::CAN_REGISTER_MISSION_PICKUPS(1)){
if(func_568(iParam0)){
func_567(iParam0, 6);
}}}}}}}


void func_567(int iParam0, int iParam1){
if(func_17(&(Local_2104.f_2.f_5[iParam0 /*3*/]), iParam1)){}}

int func_568(int iParam0){
struct<3> Var0;
float fVar1;
struct<3> Var2;
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_2104.f_2[iParam0])){
Var0={
func_581(iParam0) 
};
fVar1=Local_171.f_19.f_5[iParam0 /*13*/].f_6;
Var2={
Local_171.f_19.f_5[iParam0 /*13*/].f_7 
};
if(func_52(Var0)){
return 0;
}
Local_2104.f_2[iParam0]=NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_580(iParam0), Var0, !func_579(iParam0, 0), Local_171.f_19.f_5[iParam0 /*13*/].f_2));
ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), fVar1);
if(!func_52(Var2)){
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_2104.f_2[iParam0]), Var2, 2, 1);
}
func_573(iParam0, Var0);
if(Local_213.f_124.f_30 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_124.f_30);
}}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_2104.f_2[iParam0])){
if(func_529(&(Local_2104.f_2.f_13[iParam0]), 0, iParam0, func_572(iParam0), func_571(), func_570(iParam0), func_569(iParam0))){
func_239(NETWORK::NET_TO_ENT(Local_2104.f_2[iParam0]), Local_2104.f_1283.f_1[func_240(iParam0) /*5*/].f_1);
Local_2104.f_2.f_11[iParam0]=NETWORK::GET_CLOUD_TIME_AS_INT();
return 1;
}}
return 0;
}

int func_569(int iParam0){
return 0;
}

int func_570(int iParam0){
return 1;
}

int func_571(){
return 23;
}


bool func_572(int iParam0){
return func_10();
}


void func_573(int iParam0, struct<3> Param1){
if(func_565(iParam0)){
func_567(iParam0, 29);
if(iParam0 !=func_578(func_507(iParam0))){
func_567(iParam0, 40);
}}elseif(!func_579(iParam0, 7)){
func_567(iParam0, 39);
}
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_2104.f_2[iParam0], 1);
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), 1200);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), 50, 0);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), true);
ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_2104.f_2[iParam0]), 1, 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_ENT(Local_2104.f_2[iParam0]), true);
OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), 1);
OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), 1);
if(func_577()){
OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), 1);
}
if(func_576(iParam0)){
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), true);
}else{
func_567(iParam0, 28);
}
if(!func_579(iParam0, 1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]));
}
if(func_579(iParam0, 2)){
ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), Param1, 1, 0, 0, 1);
}
if(func_579(iParam0, 3)){
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]));
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), 1);
}
if(func_579(iParam0, 4)){
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_2104.f_2[iParam0]), 1);
}
if((func_579(iParam0, 6) || func_579(iParam0, 7)) || func_565(iParam0)){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), false, 0);
}
if(Local_171.f_19.f_5[iParam0 /*13*/].f_12 !=-1){
func_567(iParam0, 23);
}
if(func_575(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_2104.f_2[iParam0]), 1);
}
if(func_579(iParam0, 9) || Local_213.f_124.f_38 !=0){
func_574(iParam0, 1, 0);
}}


void func_574(int iParam0, int iParam1, int iParam2){
OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_2104.f_2[iParam0]), iParam1, iParam2);
}

int func_575(int iParam0){
if(Local_171.f_19.f_5[iParam0 /*13*/].f_12 !=-1 && func_138(Local_171.f_1748.f_1[Local_171.f_19.f_5[iParam0 /*13*/].f_12 /*2*/])){
return 1;
}
if(func_579(iParam0, 8)){
return 1;
}
if(func_33(22)){
return 1;
}
return 0;
}


bool func_576(int iParam0){
if(func_171(iParam0, 29)){
return 0;
}
return !func_579(iParam0, 5);
}

int func_577(){
return 0;
}

int func_578(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < Local_171.f_19){
if(Local_2104.f_2.f_9[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_579(int iParam0, int iParam1){
return func_4(&(Local_171.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_580(int iParam0){
if(Local_213.f_124.f_28 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_124.f_28);
return StackVal;
}
return 68603185;
}


Vector3 func__581(int iParam0){
if(func_583(iParam0)){
Stack.Push(iParam0);
Call_Loc(Local_213.f_124.f_27);
return StackVal, StackVal, StackVal;
}elseif(func_564(iParam0)){
return Local_171.f_891.f_1[func_507(iParam0) /*15*/].f_4 + func_582(iParam0, Local_171.f_891.f_1[func_507(iParam0) /*15*/].f_3);
}
return Local_171.f_19.f_5[iParam0 /*13*/].f_3;
}


Vector3 func__582(int iParam0, int iParam1){
switch (iParam1){
case joaat("insurgent3"):
case joaat("limo2"):
switch (iParam0){
case 0:
return 1f, -2f, -0.1f;
case 1:
return -1f, -2f, -0.1f;
case 2:
return 1f, -2f, -0.1f;
case 3:
return -1f, -2f, -0.1f;
default:
}
break;
case joaat("issi3"):
case joaat("panto"):
case joaat("raptor"):
switch (iParam0){
case 0:
return 0.5f, 0f, -0.1f;
case 1:
return -0.5f, 0f, -0.1f;
case 2:
return 0.5f, 0f, -0.1f;
case 3:
return -0.5f, 0f, -0.1f;
default:
}
break;
}
switch (iParam0){
case 0:
return 1f, 0f, -0.1f;
case 1:
return -1f, 0f, -0.1f;
case 2:
return 1f, 0f, -0.1f;
case 3:
return -1f, 0f, -0.1f;
default:
}
return 0f, -1f, -0.1f;
}


bool func_583(var uParam0){
struct<3> Var0;
if(Local_213.f_124.f_27==0){
return 0;
}
Stack.Push(uParam0);
Call_Loc(Local_213.f_124.f_27);
Var0={
StackVal, StackVal, StackVal 
};
return !func_52(Var0);
}


void func_584(){
}

int func_585(){
return Local_2104.f_1157;
}


void func_586(int iParam0){
Local_2104.f_1156=iParam0;
}

int func_587(){
int iVar0;
int iVar1;
int iVar2;
if(!func_2492(func_2495(), func_2493())){
return 0;
}
if(Local_2104.f_1160==-1){
Local_2104.f_1160=func_2495();
}
if(Local_2104.f_1161==-1){
Local_2104.f_1161=func_2493();
}
if(!func_613()){
return 0;
}
func_612();
func_609();
Local_2104.f_1170=NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_608(), -1, 0);
func_606();
func_603();
func_602();
func_601();
func_599();
func_597();
func_596();
iVar0=0;
while (iVar0 < 3){
func_593(iVar0);
iVar0++;
}
iVar1=0;
while (iVar1 < 6){
Local_2104.f_1182[iVar1]=-1;
iVar1++;
}
iVar2=0;
while (iVar2 < 1){
Local_2104.f_1078[iVar2]=-1;
iVar2++;
}
Local_2104.f_1174=MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
Local_2104.f_1155=func_592();
STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_2104.f_1167), &(Local_2104.f_1168));
Global_1894573[iLocal_2047 /*608*/].f_526=Local_2104.f_1167;
Global_1894573[iLocal_2047 /*608*/].f_527=Local_2104.f_1168;
func_591();
if(!func_588()){
return 0;
}
Call_Loc(Local_213.f_1);
return StackVal;
}

int func_588(){
if(func_590() !=0){
Local_2104.f_1234.f_18=func_589(bLocal_2046);
}
return 1;
}

int func_589(bool bParam0){
if(bParam0 !=-1){
return Global_1981514[bParam0 /*60*/].f_27.f_4;
}
return -1;
}

int func_590(){
return Local_2104.f_1234;
}


void func_591(){
if(Local_2104.f_1175==-1){
Local_2104.f_1175=NETWORK::GET_CLOUD_TIME_AS_INT();
}}

int func_592(){
return -1;
}


void func_593(int iParam0){
float fVar0;
float fVar1;
float fVar2;
struct<3> Var3;
if(Local_213.f_562.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_562.f_2);
Local_2104.f_1114.f_2[iParam0 /*3*/]={
StackVal, StackVal, StackVal 
};
return;
}
if(Local_171.f_1808.f_1[iParam0 /*18*/].f_14){
Local_2104.f_1114.f_2[iParam0 /*3*/]={
Local_171.f_1808.f_1[iParam0 /*18*/].f_15 
};
return;
}
fVar0=(Local_171.f_1808.f_1[iParam0 /*18*/].f_7 / 2f);
fVar1=(fVar0 * 0.25f);
fVar2=(fVar0 * 0.5f);
Var3={
func_594(iParam0) 
};
if(func_119()){
Var3.f_0=(Var3.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}else{
Var3.f_0=(Var3.f_0 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}
if(func_119()){
Var3.f_1=(Var3.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}else{
Var3.f_1=(Var3.f_1 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}
Local_2104.f_1114.f_2[iParam0 /*3*/]={
Var3 
};
}


Vector3 func__594(int iParam0){
if(Local_213.f_562.f_3 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_562.f_3);
return StackVal, StackVal, StackVal;
}
if(Local_171.f_1808.f_1[iParam0 /*18*/].f_2 !=-1){
return func_595(Local_171.f_1808.f_1[iParam0 /*18*/].f_2, Local_171.f_1808.f_1[iParam0 /*18*/].f_3);
}
return Local_171.f_1808.f_1[iParam0 /*18*/].f_4;
}


Vector3 func__595(int iParam0, int iParam1){
switch (iParam0){
case 3:
return Local_171.f_19.f_5[iParam1 /*13*/].f_3;
case 0:
return Local_171.f_38.f_1[iParam1 /*21*/].f_3;
case 1:
return Local_171.f_891.f_1[iParam1 /*15*/].f_4;
case 2:
return Local_171.f_1179.f_1[iParam1 /*12*/].f_4;
default:
}
return 0f, 0f, 0f;
}


void func_596(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 2){
iVar1=(iVar1 + Local_171.f_1612[iVar0 /*32*/]);
iVar0++;
}
Local_2104.f_1179=iVar1;
}


void func_597(){
int iVar0;
iVar0=0;
while (iVar0 < Local_171.f_38){
Local_2104.f_22[iVar0 /*25*/].f_16=func_598(iVar0);
iVar0++;
}}

int func_598(int iParam0){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_16==-1){
if(iParam0 < 14){
return (iParam0 + 1 * (1000 / Local_171.f_38));
}else{
return ((iParam0 + 1 - 14) * (1000 / Local_171.f_38));
}}
return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_171.f_38.f_1[iParam0 /*21*/].f_16);
}


void func_599(){
Local_2104.f_1087.f_24=func_600();
}


var func__600(){
return Local_171.f_1578.f_5;
}


void func_601(){
Local_2104.f_1158=3;
}


void func_602(){
int iVar0;
iVar0=0;
while (iVar0 < 1){
Local_2104.f_1295[iVar0 /*4*/].f_3=func_77();
iVar0++;
}}


void func_603(){
int iVar0;
iVar0=0;
while (iVar0 < Local_171.f_19){
Local_2104.f_2.f_13[iVar0]=-1;
iVar0++;
}
func_604();
}


void func_604(){
int iVar0;
if(func_605()){
if(func_35(&(Local_2104.f_2.f_9), &(Local_2104.f_1078.f_3))){
func_16(2);
}}else{
iVar0=0;
while (iVar0 < Local_171.f_19){
Local_2104.f_2.f_9[iVar0]=Local_171.f_19.f_5[iVar0 /*13*/].f_10;
iVar0++;
}}}

int func_605(){
return 0;
}


void func_606(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=0;
while (iVar0 < Local_171.f_19){
iVar3=Local_171.f_19.f_5[iVar0 /*13*/].f_10;
iVar4=Local_171.f_19.f_5[iVar0 /*13*/].f_11;
if(iVar3 !=-1 && iVar4 !=0){
switch (iVar4){
case 2:
func_215(iVar3, 14);
break;
}}
iVar0++;
}
iVar5=0;
while (iVar5 < 4){
iVar2=Local_171.f_1578[iVar5];
if(iVar2 !=-1){
func_215(iVar2, 15);
}
iVar5++;
}
iVar1=0;
while (iVar1 < Local_171.f_38){
iVar2=Local_171.f_38.f_1[iVar1 /*21*/].f_8;
if(iVar2 !=-1 && func_167(iVar2, 15)){
if(Local_171.f_38.f_1[iVar1 /*21*/].f_9==-1){
iVar5=0;
while (iVar5 < 4){
if(iVar2==Local_171.f_1578[iVar5]){
Local_2104.f_1087[iVar5 /*5*/].f_2=iVar1;
}
iVar5++;
}}
func_93(iVar1, 19);
}
iVar6=0;
while (iVar6 < Local_171.f_1875){
if(Local_171.f_1875.f_1[iVar6 /*26*/]==iVar1){
func_93(iVar1, 21);
}
iVar6++;
}
iVar1++;
}
func_607(0);
}


void func_607(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(Local_171.f_1612[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1==-1){
}else{
switch (Local_171.f_1612[iParam0 /*32*/].f_7[iVar0 /*2*/]){
case 2:
func_215(Local_171.f_1612[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 16);
break;
case 3:
func_199(Local_171.f_1612[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 5);
break;
case 1:
func_93(Local_171.f_1612[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 20);
break;
}
iVar0++;
}}}


char* func_608(){
switch (Global_2697021){
case 0:
return "freemode";
default:
}
return "freemode";
}


void func_609(){
Local_2104.f_1169=func_610() + 1;
Global_1894573[bLocal_2046 /*608*/].f_10.f_391=Local_2104.f_1169;
}

int func_610(){
if(func_78()==func_77()){
return 0;
}
return func_611(func_78());
}

int func_611(bool bParam0){
if(func_109(bParam0)==func_77()){
return 0;
}
return Global_1894573[bParam0 /*608*/].f_10.f_19;
}


void func_612(){
}

int func_613(){
func_2491();
func_653();
if(!func_616()){
return 0;
}
func_614();
Stack.Push(Local_213.f_0 !=0);
Call_Loc(Local_213.f_0);
if(StackVal && !StackVal){
return 0;
}
return 1;
}


void func_614(){
func_615(34);
}


void func_615(int iParam0){
if(func_17(&(Local_171.f_16), iParam0)){}}

int func_616(){
if(func_2497(12)){
return 1;
}
if(!func_627()){
return 0;
}
func_621();
func_618();
func_617();
if(Local_213.f_13 !=0){
Call_Loc(Local_213.f_13);
}
func_161(12);
return 1;
}


void func_617(){
}


void func_618(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar0++;
}
iVar0=0;
while (iVar0 < 0){
iVar0++;
}
if(Local_171.f_1677 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1677){
iVar0++;
}}
if(Local_171.f_2243 > 0){
iVar0=0;
while (iVar0 < Local_171.f_2243){
iVar1=0;
while (iVar1 < Local_171.f_2243.f_1[iVar0 /*63*/].f_14){
iVar1++;
}
iVar1=0;
while (iVar1 < Local_171.f_2243.f_1[iVar0 /*63*/].f_24){
iVar1++;
}
iVar1=0;
while (iVar1 < Local_171.f_2243.f_1[iVar0 /*63*/].f_54){
iVar1++;
}
iVar0++;
}}
iVar0=0;
while (iVar0 < 1){
iVar0++;
}
if(Local_171.f_1588 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1588){
iVar0++;
}}
if(Local_171.f_2085 > 0){
iVar0=0;
while (iVar0 < Local_171.f_2085){
iVar0++;
}}
if(Local_171.f_1748 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1748){
iVar0++;
}}
if(func_620() > 0){
iVar0=0;
while (iVar0 < 1){
if(!func_52(Local_171.f_1870[iVar0 /*4*/]) && Local_171.f_1870[iVar0 /*4*/].f_3 !=0f){
}
iVar0++;
}}
if(Local_171.f_19 > 0){
iVar0=0;
while (iVar0 < Local_171.f_19){
if(-1 !=Local_171.f_19.f_5[iVar0 /*13*/].f_10){
}
iVar0++;
}}
if(Local_171.f_1875 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1875){
iVar1=0;
while (iVar1 < 3){
iVar1++;
}
iVar0++;
}}
if(Local_171.f_38 > 0){
iVar0=0;
while (iVar0 < Local_171.f_38){
if(-1 !=Local_171.f_38.f_1[iVar0 /*21*/].f_8){
}
if(-1 !=Local_171.f_38.f_1[iVar0 /*21*/].f_8){
}
if(Local_171.f_38.f_1[iVar0 /*21*/].f_10 !=-1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_171.f_2391[Local_171.f_38.f_1[iVar0 /*21*/].f_10 /*16*/]))){
}}
iVar0++;
}}
iVar0=0;
while (iVar0 < 22){
iVar1=0;
while (iVar1 < 6){
if(Local_171.f_38.f_632[iVar0 /*10*/].f_1[iVar1] !=-1){
}
iVar1++;
}
iVar0++;
}
if(Local_171.f_1711 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1711){
iVar0++;
}}
iVar0=0;
while (iVar0 < 4){
if(!func_52(Local_171.f_2846[iVar0 /*42*/])){
iVar1=0;
while (iVar1 < 8){
if(!func_52(Local_171.f_2846[iVar0 /*42*/].f_6[iVar1 /*3*/])){
}
iVar1++;
}}
iVar0++;
}
if(Local_171.f_1179 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1179){
iVar0++;
}}
if(func_619() > 0){
iVar0=0;
while (iVar0 < func_619()){
iVar0++;
}}
if(Local_171.f_1808 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1808){
iVar0++;
}}
if(Local_171.f_2824 > 0){
iVar0=0;
while (iVar0 < Local_171.f_2824){
iVar0++;
}}
if(Local_171.f_3015 > 0){
iVar0=0;
while (iVar0 < Local_171.f_3015){
iVar0++;
}}
iVar0=0;
while (iVar0 < 2){
iVar1=0;
while (iVar1 < Local_171.f_1612[iVar0 /*32*/]){
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 1){
iVar0++;
}
if(Local_171.f_1752 > 0){
iVar0=0;
while (iVar0 < Local_171.f_1752){
iVar0++;
}}
if(Local_171.f_891 > 0){
iVar0=0;
while (iVar0 < Local_171.f_891){
iVar0++;
}}}

int func_619(){
int iVar0;
int iVar1[27];
int iVar2;
bool bVar3;
int iVar4;
iVar2=0;
while (iVar2 < 27){
iVar1[iVar2]=-1;
iVar2++;
}
iVar4=0;
while (iVar4 < Local_171.f_38){
if(Local_171.f_38.f_1[iVar4 /*21*/].f_10 !=-1){
bVar3=true;
iVar2=0;
while (iVar2 < 27){
if(iVar1[iVar2]==Local_171.f_38.f_1[iVar4 /*21*/].f_10){
bVar3=false;
}
iVar2++;
}
if(bVar3){
iVar1[iVar0]=Local_171.f_38.f_1[iVar4 /*21*/].f_10;
iVar0++;
}}
iVar4++;
}
return iVar0;
}

int func_620(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 1){
if(!func_52(Local_171.f_1870[iVar1 /*4*/]) && Local_171.f_1870[iVar1 /*4*/].f_3 !=0f){
iVar0++;
}
iVar1++;
}
return iVar0;
}


void func_621(){
int iVar0;
var uVar1;
struct<8> Var2;
iVar0=iVar0;
uVar1=uVar1;
func_626(Local_171.f_1578.f_9, 4, "data.Ambush.iCount", "MAX_NUM_AMBUSH_VEHICLES");
func_626(func_625(), 2, "data.BottomRightHUD (GET_NUM_BOTTOM_RIGHT_HUD())", "MAX_NUM_BOTTOM_RIGHT_HUD");
func_626(Local_171.f_1677, 8, "data.CustomSpawns.iCount", "MAX_NUM_CUSTOM_SPAWNS");
func_626(Local_171.f_2243, 2, "data.Cutscene.iNumScenes", "MAX_NUM_CUTSCENES");
func_626(func_624(), 1, "data.FocusCam (GET_NUM_FOCUS_CAMS())", "MAX_NUM_FOCUS_CAMS");
func_626(Local_171.f_1588, 2, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
func_626(Local_171.f_2085, 6, "data.Interact.iNumLocations", "MAX_NUM_INTERACT_LOCATIONS");
func_626(Local_171.f_1748, 1, "data.Interior.iCount", "MAX_NUM_MISSION_INTERIORS");
func_626(func_620(), 1, "data.LeaveArea (GET_NUM_LEAVE_AREAS())", "MAX_NUM_LEAVE_AREAS");
func_626(Local_171.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
func_626(Local_171.f_38, 30, "data.Ped.iCount", "MAX_NUM_PEDS");
func_626(func_623(), 22, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
func_626(Local_171.f_1864, 1, "data.TakePhotos.Photos.iPhotoCount", "MAX_NUM_TAKE_PHOTOGRAPHS");
func_626(Local_171.f_1875, 8, "data.Patrol.iCount", "MAX_NUM_PATROLS");
func_626(Local_171.f_1711, 5, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
func_626(Local_171.f_1179, 30, "data.Prop.iCount", "MAX_NUM_PROPS");
func_626(func_619(), 27, "data.Scenario (GET_NUM_PED_SCENARIOS())", "MAX_NUM_SCENARIOS");
func_626(Local_171.f_1808, 3, "data.SearchArea.iNumAreas", "MAX_NUM_SEARCH_AREAS");
func_626(Local_171.f_2824, 2, "data.SecurityCamera.iNumCameras", "MAX_NUM_SECURITY_CAMERAS");
func_626(func_622(), 4, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
func_626(Local_171.f_3015, 20, "data.Tags.iCount", "MAX_NUM_TAGS");
iVar0=0;
while (iVar0 < 2){
StringCopy(&Var2, "data.TakeOutTarget[", 64);
StringIntConCat(&Var2, iVar0, 64);
StringConCat(&Var2, "].iCount", 64);
func_626(Local_171.f_1612[iVar0 /*32*/], 12, &Var2, "MAX_NUM_TARGETS");
iVar0++;
}
func_626(Local_171.f_1752, 6, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
func_626(Local_171.f_891, 19, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

int func_622(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 4){
if(!func_52(Local_171.f_2846[iVar1 /*42*/])){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_623(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < Local_171.f_38){
if(Local_171.f_38.f_1[iVar0 /*21*/].f_14 > iVar1){
iVar1=Local_171.f_38.f_1[iVar0 /*21*/].f_14;
}
iVar0++;
}
return iVar1 + 1;
}

int func_624(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 1){
if(Local_171.f_2384[iVar1 /*6*/] !=0){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_625(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 2){
iVar0++;
iVar1++;
}
return iVar0;
}


void func_626(int iParam0, int iParam1, char* sParam2, char* sParam3){
if(iParam0 <=iParam1){}}

int func_627(){
if(!func_652(Local_2056.f_0)){
return 1;
}
return func_628(func_649(), &Local_171, &Local_214);
}

int func_628(char* sParam0, var uParam1, var uParam2){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
func_648();
if(!DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam0, 0)){
return 0;
}
func_630(uParam1);
func_629(uParam2);
return 1;
}


void func_629(var uParam0){
DATAFILE::DATAFILE_DELETE(0);
*uParam0=0;
uParam0->f_1=0;
StringCopy(&(uParam0->f_2), "", 64);
uParam0->f_18=0;
uParam0->f_19=0;
}


void func_630(var uParam0){
int iVar0;
var uVar1;
var uVar2;
iVar0=DATAFILE::DATAFILE_GET_FILE_DICT(0);
uVar1=DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
Global_4718592.f_114152=DATAFILE::DATADICT_GET_INT(iVar0, "debugOnlyVersion");
func_631(&uVar1, uParam0, 0, &uVar2);
}


bool func_631(var uParam0, var uParam1, bool bParam2, var uParam3){
if(!bParam2 || *uParam3==0){
func_632(uParam0, uParam1);
}
if(!bParam2 || *uParam3==1){}
if(!bParam2 || *uParam3==2){
*uParam3=0;
return 1;
}
*uParam3++;
return !bParam2;
}


void func_632(var uParam0, var uParam1){
struct<2> Var0;
int iVar1;
int iVar2;
var uVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8[1];
int iVar9[1];
var uVar10;
bool bVar11;
var uVar12;
bool bVar13;
var uVar14;
bool bVar15;
var uVar16;
bool bVar17;
var uVar18;
bool bVar19;
var uVar20;
bool bVar21;
var uVar22;
bool bVar23;
int iVar24;
int iVar25;
var uVar26[1];
int iVar27[1];
var uVar28;
bool bVar29;
var uVar30;
bool bVar31;
var uVar32;
bool bVar33;
var uVar34;
bool bVar35;
var uVar36;
bool bVar37;
var uVar38;
bool bVar39;
var uVar40;
bool bVar41;
var uVar42;
bool bVar43;
var uVar44;
bool bVar45;
var uVar46;
bool bVar47;
var uVar48;
bool bVar49;
var uVar50;
bool bVar51;
var uVar52;
bool bVar53;
var uVar54;
bool bVar55;
var uVar56;
bool bVar57;
var uVar58;
bool bVar59;
var uVar60;
bool bVar61;
int iVar62;
var uVar63;
int iVar64;
var uVar65[6];
int iVar66[6];
var uVar67;
bool bVar68;
var uVar69;
bool bVar70;
int iVar71;
int iVar72;
var uVar73[2];
int iVar74[2];
var uVar75;
bool bVar76;
var uVar77;
bool bVar78;
var uVar79;
bool bVar80;
var uVar81;
bool bVar82;
var uVar83;
bool bVar84;
var uVar85;
bool bVar86;
int iVar87;
var uVar88;
bool bVar89;
var uVar90;
bool bVar91;
var uVar92;
bool bVar93;
var uVar94;
bool bVar95;
int iVar96;
int iVar97;
var uVar98[2];
int iVar99[2];
var uVar100;
bool bVar101;
var uVar102;
bool bVar103;
var uVar104;
bool bVar105;
var uVar106;
bool bVar107;
var uVar108;
bool bVar109;
int iVar110;
int iVar111;
int iVar112;
int iVar113;
var uVar114;
bool bVar115;
int iVar116;
int iVar117;
var uVar118;
bool bVar119;
var uVar120;
bool bVar121;
var uVar122[1];
int iVar123[1];
var uVar124;
bool bVar125;
int iVar126;
var uVar127;
bool bVar128;
var uVar129;
bool bVar130;
var uVar131;
bool bVar132;
var uVar133;
bool bVar134;
int iVar135;
var uVar136;
bool bVar137;
int iVar138;
var uVar139;
bool bVar140;
var uVar141;
bool bVar142;
var uVar143;
bool bVar144;
var uVar145;
bool bVar146;
int iVar147;
var uVar148[12];
int iVar149[12];
var uVar150[12];
int iVar151[12];
int iVar152;
int iVar153;
var uVar154;
bool bVar155;
var uVar156;
bool bVar157;
int iVar158;
int iVar159;
var uVar160;
bool bVar161;
var uVar162;
bool bVar163;
var uVar164;
bool bVar165;
int iVar166;
int iVar167;
var uVar168;
bool bVar169;
var uVar170;
bool bVar171;
int iVar172;
int iVar173;
var uVar174[1];
int iVar175[1];
var uVar176;
bool bVar177;
var uVar178;
bool bVar179;
var uVar180;
bool bVar181;
int iVar182;
int iVar183;
var uVar184[1];
int iVar185[1];
var uVar186;
bool bVar187;
var uVar188;
bool bVar189;
var uVar190;
bool bVar191;
var uVar192;
bool bVar193;
var uVar194;
bool bVar195;
var uVar196;
bool bVar197;
int iVar198;
var uVar199;
bool bVar200;
var uVar201;
bool bVar202;
var uVar203;
bool bVar204;
var uVar205;
bool bVar206;
var uVar207;
bool bVar208;
var uVar209;
bool bVar210;
int iVar211;
var uVar212;
bool bVar213;
var uVar214;
bool bVar215;
int iVar216;
int iVar217;
var uVar218;
bool bVar219;
int iVar220;
var uVar221[3];
int iVar222[3];
var uVar223[3];
int iVar224[3];
var uVar225[3];
int iVar226[3];
var uVar227[3];
int iVar228[3];
int iVar229;
int iVar230;
var uVar231;
bool bVar232;
var uVar233;
bool bVar234;
var uVar235;
bool bVar236;
var uVar237;
bool bVar238;
int iVar239;
var uVar240;
bool bVar241;
int iVar242;
int iVar243;
var uVar244[1];
int iVar245[1];
var uVar246;
bool bVar247;
var uVar248;
bool bVar249;
var uVar250;
bool bVar251;
var uVar252;
bool bVar253;
int iVar254;
var uVar255;
bool bVar256;
var uVar257;
bool bVar258;
var uVar259;
bool bVar260;
var uVar261[8];
int iVar262[8];
var uVar263[8];
int iVar264[8];
var uVar265[1];
int iVar266[1];
int iVar267;
int iVar268;
var uVar269;
bool bVar270;
var uVar271;
bool bVar272;
func_647(&iVar5, *uParam0, "me");
func_647(&iVar6, iVar5, "blp");
func_647(&iVar7, iVar5, "ents");
func_647(&iVar24, *uParam0, "pd");
func_647(&iVar25, iVar24, "pds");
func_647(&iVar62, iVar24, "grp");
func_647(&uVar63, iVar62, "rel");
func_647(&iVar64, iVar62, "trg");
func_647(&iVar71, *uParam0, "vh");
func_647(&iVar72, iVar71, "veh");
func_647(&iVar87, iVar72, "blp");
func_647(&iVar96, *uParam0, "pp");
func_647(&iVar97, iVar96, "prps");
func_647(&iVar110, *uParam0, "want");
func_647(&iVar111, *uParam0, "modt");
func_647(&iVar112, *uParam0, "amb");
func_647(&iVar113, iVar112, "veh");
func_647(&iVar116, *uParam0, "gt");
func_647(&iVar117, iVar116, "loc");
func_647(&iVar126, iVar117, "blp");
func_647(&iVar135, *uParam0, "tot");
func_647(&iVar138, iVar135, "tohud");
func_647(&iVar147, iVar135, "tar");
func_647(&iVar152, *uParam0, "cst");
func_647(&iVar153, iVar152, "csts");
func_647(&iVar158, *uParam0, "pop");
func_647(&iVar159, iVar158, "blkr");
func_647(&iVar166, *uParam0, "inte");
func_647(&iVar167, iVar166, "int");
func_647(&iVar172, *uParam0, "ta");
func_647(&iVar173, iVar172, "ars");
func_647(&iVar182, *uParam0, "sear");
func_647(&iVar183, iVar182, "area");
func_647(&iVar198, iVar183, "blp");
func_647(&iVar211, *uParam0, "la");
func_647(&iVar216, *uParam0, "ptrl");
func_647(&iVar217, iVar216, "pat");
func_647(&iVar220, iVar217, "nd");
func_647(&iVar229, *uParam0, "fcs");
func_647(&iVar230, iVar229, "fcs");
func_647(&iVar239, *uParam0, "sro");
func_647(&iVar242, *uParam0, "seccam");
func_647(&iVar243, iVar242, "seccams");
func_647(&iVar254, *uParam0, "port");
func_647(&iVar267, *uParam0, "tags");
func_647(&iVar268, iVar267, "tag");
if(func_646(*uParam0, "fmbs")==7){
bVar4=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar7, &Var0)==7){
iVar9[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar7, "mn")==7){
bVar11=true;
}
if(func_646(iVar7, "pos")==7){
bVar13=true;
}
if(func_646(iVar7, "head")==7){
bVar15=true;
}
if(func_646(iVar7, "rot")==7){
bVar17=true;
}
if(func_646(iVar7, "cv")==7){
bVar19=true;
}
if(func_646(iVar7, "crt")==7){
bVar21=true;
}
if(func_646(iVar7, "int")==7){
bVar23=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar25, &Var0)==7){
iVar27[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar25, "mn")==7){
bVar29=true;
}
if(func_646(iVar25, "pos")==7){
bVar31=true;
}
if(func_646(iVar25, "head")==7){
bVar33=true;
}
if(func_646(iVar25, "wpn")==7){
bVar35=true;
}
if(func_646(iVar25, "veh")==7){
bVar37=true;
}
if(func_646(iVar25, "st")==7){
bVar39=true;
}
if(func_646(iVar25, "scen")==7){
bVar41=true;
}
if(func_646(iVar25, "anim")==7){
bVar43=true;
}
if(func_646(iVar25, "int")==7){
bVar45=true;
}
if(func_646(iVar25, "asi")==7){
bVar47=true;
}
if(func_646(iVar25, "grp")==7){
bVar49=true;
}
if(func_646(iVar25, "mvmt")==7){
bVar51=true;
}
if(func_646(iVar25, "mrd")==7){
bVar53=true;
}
if(func_646(iVar25, "sr")==7){
bVar55=true;
}
if(func_646(iVar25, "sa")==7){
bVar57=true;
}
if(func_646(iVar25, "hr")==7){
bVar59=true;
}
if(func_646(iVar25, "dr")==7){
bVar61=true;
}
iVar2=0;
while (iVar2 < 6){
StringCopy(&Var0, "ar", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar64, &Var0)==7){
iVar66[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar62, "ed")==7){
bVar68=true;
}
if(func_646(iVar62, "gt")==7){
bVar70=true;
}
iVar2=0;
while (iVar2 < 2){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar72, &Var0)==7){
iVar74[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar72, "mn")==7){
bVar76=true;
}
if(func_646(iVar72, "pos")==7){
bVar78=true;
}
if(func_646(iVar72, "head")==7){
bVar80=true;
}
if(func_646(iVar72, "col")==7){
bVar82=true;
}
if(func_646(iVar72, "int")==7){
bVar84=true;
}
if(func_646(iVar72, "vds")==7){
bVar86=true;
}
if(func_646(iVar87, "sprt")==7){
bVar89=true;
}
if(func_646(iVar87, "hclr")==7){
bVar91=true;
}
if(func_646(iVar87, "scl")==7){
bVar93=true;
}
if(func_646(iVar87, "sh")==7){
bVar95=true;
}
iVar2=0;
while (iVar2 < 2){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar97, &Var0)==7){
iVar99[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar97, "mn")==7){
bVar101=true;
}
if(func_646(iVar97, "pos")==7){
bVar103=true;
}
if(func_646(iVar97, "head")==7){
bVar105=true;
}
if(func_646(iVar97, "rot")==7){
bVar107=true;
}
if(func_646(iVar97, "int")==7){
bVar109=true;
}
if(func_646(iVar113, "idx")==7){
bVar115=true;
}
if(func_646(iVar117, "pos")==7){
bVar119=true;
}
if(func_646(iVar117, "rad")==7){
bVar121=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar117, &Var0)==7){
iVar123[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar117, "brd")==7){
bVar125=true;
}
if(func_646(iVar126, "sprt")==7){
bVar128=true;
}
if(func_646(iVar126, "hclr")==7){
bVar130=true;
}
if(func_646(iVar126, "scl")==7){
bVar132=true;
}
if(func_646(iVar126, "sh")==7){
bVar134=true;
}
if(func_646(iVar135, "tco")==7){
bVar137=true;
}
if(func_646(iVar138, "brtyp")==7){
bVar140=true;
}
if(func_646(iVar138, "brtit")==7){
bVar142=true;
}
if(func_646(iVar138, "brmax")==7){
bVar144=true;
}
if(func_646(iVar138, "brord")==7){
bVar146=true;
}
iVar2=0;
while (iVar2 < 12){
StringCopy(&Var0, "totyp", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar147, &Var0)==7){
iVar149[iVar2]=1;
}
StringCopy(&Var0, "toid", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar147, &Var0)==7){
iVar151[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar153, "vcst")==7){
bVar155=true;
}
if(func_646(iVar153, "hcst")==7){
bVar157=true;
}
if(func_646(iVar159, "typ")==7){
bVar161=true;
}
if(func_646(iVar159, "min")==7){
bVar163=true;
}
if(func_646(iVar159, "max")==7){
bVar165=true;
}
if(func_646(iVar167, "typ")==7){
bVar169=true;
}
if(func_646(iVar167, "var")==7){
bVar171=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar173, &Var0)==7){
iVar175[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar173, "vmn")==7){
bVar177=true;
}
if(func_646(iVar173, "vmx")==7){
bVar179=true;
}
if(func_646(iVar173, "fwd")==7){
bVar181=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar183, &Var0)==7){
iVar185[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar183, "typ")==7){
bVar187=true;
}
if(func_646(iVar183, "iei")==7){
bVar189=true;
}
if(func_646(iVar183, "vco")==7){
bVar191=true;
}
if(func_646(iVar183, "ent")==7){
bVar193=true;
}
if(func_646(iVar183, "tri")==7){
bVar195=true;
}
if(func_646(iVar183, "ita")==7){
bVar197=true;
}
if(func_646(iVar198, "sprt")==7){
bVar200=true;
}
if(func_646(iVar198, "hclr")==7){
bVar202=true;
}
if(func_646(iVar198, "scl")==7){
bVar204=true;
}
if(func_646(iVar198, "sh")==7){
bVar206=true;
}
if(func_646(iVar183, "bce")==7){
bVar208=true;
}
if(func_646(iVar183, "vce")==7){
bVar210=true;
}
if(func_646(iVar211, "pos")==7){
bVar213=true;
}
if(func_646(iVar211, "rad")==7){
bVar215=true;
}
if(func_646(iVar217, "pedi")==7){
bVar219=true;
}
iVar2=0;
while (iVar2 < 3){
StringCopy(&Var0, "scro", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar220, &Var0)==7){
iVar222[iVar2]=1;
}
StringCopy(&Var0, "pos", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar220, &Var0)==7){
iVar224[iVar2]=1;
}
StringCopy(&Var0, "look", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar220, &Var0)==7){
iVar226[iVar2]=1;
}
StringCopy(&Var0, "dur", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar220, &Var0)==7){
iVar228[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar230, "ftyp")==7){
bVar232=true;
}
if(func_646(iVar230, "feid")==7){
bVar234=true;
}
if(func_646(iVar230, "fvec")==7){
bVar236=true;
}
if(func_646(iVar230, "frng")==7){
bVar238=true;
}
if(func_646(iVar239, "name")==7){
bVar241=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar243, &Var0)==7){
iVar245[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar243, "pid")==7){
bVar247=true;
}
if(func_646(iVar243, "vrange")==7){
bVar249=true;
}
if(func_646(iVar243, "vwidth")==7){
bVar251=true;
}
if(func_646(iVar243, "vsize")==7){
bVar253=true;
}
if(func_646(iVar254, "pos")==7){
bVar256=true;
}
if(func_646(iVar254, "head")==7){
bVar258=true;
}
if(func_646(iVar254, "plnkp")==7){
bVar260=true;
}
iVar2=0;
while (iVar2 < 8){
StringCopy(&Var0, "wrpc", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar254, &Var0)==7){
iVar262[iVar2]=1;
}
iVar2++;
}
iVar2=0;
while (iVar2 < 8){
StringCopy(&Var0, "wrph", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar254, &Var0)==7){
iVar264[iVar2]=1;
}
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_646(iVar254, &Var0)==7){
iVar266[iVar2]=1;
}
iVar2++;
}
if(func_646(iVar268, "typ")==7){
bVar270=true;
}
if(func_646(iVar268, "id")==7){
bVar272=true;
}
if(bVar4){
uVar3=DATAFILE::DATADICT_GET_ARRAY(*uParam0, "fmbs");
}
iVar2=0;
while (iVar2 < 1){
if(iVar9[iVar2]){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar8[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar7, &Var0);
}
iVar2++;
}
if(bVar11){
uVar10=DATAFILE::DATADICT_GET_ARRAY(iVar7, "mn");
}
if(bVar13){
uVar12=DATAFILE::DATADICT_GET_ARRAY(iVar7, "pos");
}
if(bVar15){
uVar14=DATAFILE::DATADICT_GET_ARRAY(iVar7, "head");
}
if(bVar17){
uVar16=DATAFILE::DATADICT_GET_ARRAY(iVar7, "rot");
}
if(bVar19){
uVar18=DATAFILE::DATADICT_GET_ARRAY(iVar7, "cv");
}
if(bVar21){
uVar20=DATAFILE::DATADICT_GET_ARRAY(iVar7, "crt");
}
if(bVar23){
uVar22=DATAFILE::DATADICT_GET_ARRAY(iVar7, "int");
}
iVar2=0;
while (iVar2 < 1){
if(iVar27[iVar2]){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar26[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar25, &Var0);
}
iVar2++;
}
if(bVar29){
uVar28=DATAFILE::DATADICT_GET_ARRAY(iVar25, "mn");
}
if(bVar31){
uVar30=DATAFILE::DATADICT_GET_ARRAY(iVar25, "pos");
}
if(bVar33){
uVar32=DATAFILE::DATADICT_GET_ARRAY(iVar25, "head");
}
if(bVar35){
uVar34=DATAFILE::DATADICT_GET_ARRAY(iVar25, "wpn");
}
if(bVar37){
uVar36=DATAFILE::DATADICT_GET_ARRAY(iVar25, "veh");
}
if(bVar39){
uVar38=DATAFILE::DATADICT_GET_ARRAY(iVar25, "st");
}
if(bVar41){
uVar40=DATAFILE::DATADICT_GET_ARRAY(iVar25, "scen");
}
if(bVar43){
uVar42=DATAFILE::DATADICT_GET_ARRAY(iVar25, "anim");
}
if(bVar45){
uVar44=DATAFILE::DATADICT_GET_ARRAY(iVar25, "int");
}
if(bVar47){
uVar46=DATAFILE::DATADICT_GET_ARRAY(iVar25, "asi");
}
if(bVar49){
uVar48=DATAFILE::DATADICT_GET_ARRAY(iVar25, "grp");
}
if(bVar51){
uVar50=DATAFILE::DATADICT_GET_ARRAY(iVar25, "mvmt");
}
if(bVar53){
uVar52=DATAFILE::DATADICT_GET_ARRAY(iVar25, "mrd");
}
if(bVar55){
uVar54=DATAFILE::DATADICT_GET_ARRAY(iVar25, "sr");
}
if(bVar57){
uVar56=DATAFILE::DATADICT_GET_ARRAY(iVar25, "sa");
}
if(bVar59){
uVar58=DATAFILE::DATADICT_GET_ARRAY(iVar25, "hr");
}
if(bVar61){
uVar60=DATAFILE::DATADICT_GET_ARRAY(iVar25, "dr");
}
iVar2=0;
while (iVar2 < 6){
if(iVar66[iVar2]){
StringCopy(&Var0, "ar", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar65[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar64, &Var0);
}
iVar2++;
}
if(bVar68){
uVar67=DATAFILE::DATADICT_GET_ARRAY(iVar62, "ed");
}
if(bVar70){
uVar69=DATAFILE::DATADICT_GET_ARRAY(iVar62, "gt");
}
iVar2=0;
while (iVar2 < 2){
if(iVar74[iVar2]){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar73[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar72, &Var0);
}
iVar2++;
}
if(bVar76){
uVar75=DATAFILE::DATADICT_GET_ARRAY(iVar72, "mn");
}
if(bVar78){
uVar77=DATAFILE::DATADICT_GET_ARRAY(iVar72, "pos");
}
if(bVar80){
uVar79=DATAFILE::DATADICT_GET_ARRAY(iVar72, "head");
}
if(bVar82){
uVar81=DATAFILE::DATADICT_GET_ARRAY(iVar72, "col");
}
if(bVar84){
uVar83=DATAFILE::DATADICT_GET_ARRAY(iVar72, "int");
}
if(bVar86){
uVar85=DATAFILE::DATADICT_GET_ARRAY(iVar72, "vds");
}
if(bVar89){
uVar88=DATAFILE::DATADICT_GET_ARRAY(iVar87, "sprt");
}
if(bVar91){
uVar90=DATAFILE::DATADICT_GET_ARRAY(iVar87, "hclr");
}
if(bVar93){
uVar92=DATAFILE::DATADICT_GET_ARRAY(iVar87, "scl");
}
if(bVar95){
uVar94=DATAFILE::DATADICT_GET_ARRAY(iVar87, "sh");
}
iVar2=0;
while (iVar2 < 2){
if(iVar99[iVar2]){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar98[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar97, &Var0);
}
iVar2++;
}
if(bVar101){
uVar100=DATAFILE::DATADICT_GET_ARRAY(iVar97, "mn");
}
if(bVar103){
uVar102=DATAFILE::DATADICT_GET_ARRAY(iVar97, "pos");
}
if(bVar105){
uVar104=DATAFILE::DATADICT_GET_ARRAY(iVar97, "head");
}
if(bVar107){
uVar106=DATAFILE::DATADICT_GET_ARRAY(iVar97, "rot");
}
if(bVar109){
uVar108=DATAFILE::DATADICT_GET_ARRAY(iVar97, "int");
}
if(bVar115){
uVar114=DATAFILE::DATADICT_GET_ARRAY(iVar113, "idx");
}
if(bVar119){
uVar118=DATAFILE::DATADICT_GET_ARRAY(iVar117, "pos");
}
if(bVar121){
uVar120=DATAFILE::DATADICT_GET_ARRAY(iVar117, "rad");
}
iVar2=0;
while (iVar2 < 1){
if(iVar123[iVar2]){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar122[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar117, &Var0);
}
iVar2++;
}
if(bVar125){
uVar124=DATAFILE::DATADICT_GET_ARRAY(iVar117, "brd");
}
if(bVar128){
uVar127=DATAFILE::DATADICT_GET_ARRAY(iVar126, "sprt");
}
if(bVar130){
uVar129=DATAFILE::DATADICT_GET_ARRAY(iVar126, "hclr");
}
if(bVar132){
uVar131=DATAFILE::DATADICT_GET_ARRAY(iVar126, "scl");
}
if(bVar134){
uVar133=DATAFILE::DATADICT_GET_ARRAY(iVar126, "sh");
}
if(bVar137){
uVar136=DATAFILE::DATADICT_GET_ARRAY(iVar135, "tco");
}
if(bVar140){
uVar139=DATAFILE::DATADICT_GET_ARRAY(iVar138, "brtyp");
}
if(bVar142){
uVar141=DATAFILE::DATADICT_GET_ARRAY(iVar138, "brtit");
}
if(bVar144){
uVar143=DATAFILE::DATADICT_GET_ARRAY(iVar138, "brmax");
}
if(bVar146){
uVar145=DATAFILE::DATADICT_GET_ARRAY(iVar138, "brord");
}
iVar2=0;
while (iVar2 < 12){
if(iVar149[iVar2]){
StringCopy(&Var0, "totyp", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar148[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar147, &Var0);
}
if(iVar151[iVar2]){
StringCopy(&Var0, "toid", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar150[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar147, &Var0);
}
iVar2++;
}
if(bVar155){
uVar154=DATAFILE::DATADICT_GET_ARRAY(iVar153, "vcst");
}
if(bVar157){
uVar156=DATAFILE::DATADICT_GET_ARRAY(iVar153, "hcst");
}
if(bVar161){
uVar160=DATAFILE::DATADICT_GET_ARRAY(iVar159, "typ");
}
if(bVar163){
uVar162=DATAFILE::DATADICT_GET_ARRAY(iVar159, "min");
}
if(bVar165){
uVar164=DATAFILE::DATADICT_GET_ARRAY(iVar159, "max");
}
if(bVar169){
uVar168=DATAFILE::DATADICT_GET_ARRAY(iVar167, "typ");
}
if(bVar171){
uVar170=DATAFILE::DATADICT_GET_ARRAY(iVar167, "var");
}
iVar2=0;
while (iVar2 < 1){
if(iVar175[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar174[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar173, &Var0);
}
iVar2++;
}
if(bVar177){
uVar176=DATAFILE::DATADICT_GET_ARRAY(iVar173, "vmn");
}
if(bVar179){
uVar178=DATAFILE::DATADICT_GET_ARRAY(iVar173, "vmx");
}
if(bVar181){
uVar180=DATAFILE::DATADICT_GET_ARRAY(iVar173, "fwd");
}
iVar2=0;
while (iVar2 < 1){
if(iVar185[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar184[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar183, &Var0);
}
iVar2++;
}
if(bVar187){
uVar186=DATAFILE::DATADICT_GET_ARRAY(iVar183, "typ");
}
if(bVar189){
uVar188=DATAFILE::DATADICT_GET_ARRAY(iVar183, "iei");
}
if(bVar191){
uVar190=DATAFILE::DATADICT_GET_ARRAY(iVar183, "vco");
}
if(bVar193){
uVar192=DATAFILE::DATADICT_GET_ARRAY(iVar183, "ent");
}
if(bVar195){
uVar194=DATAFILE::DATADICT_GET_ARRAY(iVar183, "tri");
}
if(bVar197){
uVar196=DATAFILE::DATADICT_GET_ARRAY(iVar183, "ita");
}
if(bVar200){
uVar199=DATAFILE::DATADICT_GET_ARRAY(iVar198, "sprt");
}
if(bVar202){
uVar201=DATAFILE::DATADICT_GET_ARRAY(iVar198, "hclr");
}
if(bVar204){
uVar203=DATAFILE::DATADICT_GET_ARRAY(iVar198, "scl");
}
if(bVar206){
uVar205=DATAFILE::DATADICT_GET_ARRAY(iVar198, "sh");
}
if(bVar208){
uVar207=DATAFILE::DATADICT_GET_ARRAY(iVar183, "bce");
}
if(bVar210){
uVar209=DATAFILE::DATADICT_GET_ARRAY(iVar183, "vce");
}
if(bVar213){
uVar212=DATAFILE::DATADICT_GET_ARRAY(iVar211, "pos");
}
if(bVar215){
uVar214=DATAFILE::DATADICT_GET_ARRAY(iVar211, "rad");
}
if(bVar219){
uVar218=DATAFILE::DATADICT_GET_ARRAY(iVar217, "pedi");
}
iVar2=0;
while (iVar2 < 3){
if(iVar222[iVar2]){
StringCopy(&Var0, "scro", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar221[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar220, &Var0);
}
if(iVar224[iVar2]){
StringCopy(&Var0, "pos", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar223[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar220, &Var0);
}
if(iVar226[iVar2]){
StringCopy(&Var0, "look", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar225[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar220, &Var0);
}
if(iVar228[iVar2]){
StringCopy(&Var0, "dur", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar227[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar220, &Var0);
}
iVar2++;
}
if(bVar232){
uVar231=DATAFILE::DATADICT_GET_ARRAY(iVar230, "ftyp");
}
if(bVar234){
uVar233=DATAFILE::DATADICT_GET_ARRAY(iVar230, "feid");
}
if(bVar236){
uVar235=DATAFILE::DATADICT_GET_ARRAY(iVar230, "fvec");
}
if(bVar238){
uVar237=DATAFILE::DATADICT_GET_ARRAY(iVar230, "frng");
}
if(bVar241){
uVar240=DATAFILE::DATADICT_GET_ARRAY(iVar239, "name");
}
iVar2=0;
while (iVar2 < 1){
if(iVar245[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar244[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar243, &Var0);
}
iVar2++;
}
if(bVar247){
uVar246=DATAFILE::DATADICT_GET_ARRAY(iVar243, "pid");
}
if(bVar249){
uVar248=DATAFILE::DATADICT_GET_ARRAY(iVar243, "vrange");
}
if(bVar251){
uVar250=DATAFILE::DATADICT_GET_ARRAY(iVar243, "vwidth");
}
if(bVar253){
uVar252=DATAFILE::DATADICT_GET_ARRAY(iVar243, "vsize");
}
if(bVar256){
uVar255=DATAFILE::DATADICT_GET_ARRAY(iVar254, "pos");
}
if(bVar258){
uVar257=DATAFILE::DATADICT_GET_ARRAY(iVar254, "head");
}
if(bVar260){
uVar259=DATAFILE::DATADICT_GET_ARRAY(iVar254, "plnkp");
}
iVar2=0;
while (iVar2 < 8){
if(iVar262[iVar2]){
StringCopy(&Var0, "wrpc", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar261[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar254, &Var0);
}
iVar2++;
}
iVar2=0;
while (iVar2 < 8){
if(iVar264[iVar2]){
StringCopy(&Var0, "wrph", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar263[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar254, &Var0);
}
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
if(iVar266[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar265[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar254, &Var0);
}
iVar2++;
}
if(bVar270){
uVar269=DATAFILE::DATADICT_GET_ARRAY(iVar268, "typ");
}
if(bVar272){
uVar271=DATAFILE::DATADICT_GET_ARRAY(iVar268, "id");
}
*uParam1={
func_645(*uParam0, "fmnm", "") 
};
iVar1=0;
while (iVar1 < 2){
uParam1->f_16[iVar1]=func_644(uVar3, iVar1, 0, bVar4);
iVar1++;
}
uParam1->f_19=func_643(iVar5, "num", 0);
uParam1->f_19.f_1=func_642(iVar6, "sprt", -1);
uParam1->f_19.f_1.f_1=func_642(iVar6, "hclr", 12);
uParam1->f_19.f_1.f_2=func_641(iVar6, "scl", 1f);
uParam1->f_19.f_1.f_3=func_639(iVar6, "sh", 0);
iVar1=0;
while (iVar1 < 1){
iVar2=0;
while (iVar2 < 1){
uParam1->f_19.f_5[iVar1 /*13*/][iVar2]=func_644(uVar8[iVar2], iVar1, 0, iVar9[iVar2]);
iVar2++;
}
uParam1->f_19.f_5[iVar1 /*13*/].f_2=func_638(uVar10, iVar1, 0, bVar11);
uParam1->f_19.f_5[iVar1 /*13*/].f_3={
func_637(uVar12, iVar1, 0f, 0f, 0f, bVar13) 
};
uParam1->f_19.f_5[iVar1 /*13*/].f_6=func_636(uVar14, iVar1, 0f, bVar15);
uParam1->f_19.f_5[iVar1 /*13*/].f_7={
func_637(uVar16, iVar1, 0f, 0f, 0f, bVar17) 
};
uParam1->f_19.f_5[iVar1 /*13*/].f_10=func_644(uVar18, iVar1, -1, bVar19);
uParam1->f_19.f_5[iVar1 /*13*/].f_11=func_638(uVar20, iVar1, 2, bVar21);
uParam1->f_19.f_5[iVar1 /*13*/].f_12=func_644(uVar22, iVar1, -1, bVar23);
iVar1++;
}
uParam1->f_38=func_643(iVar24, "num", 0);
iVar1=0;
while (iVar1 < 30){
iVar2=0;
while (iVar2 < 1){
uParam1->f_38.f_1[iVar1 /*21*/][iVar2]=func_644(uVar26[iVar2], iVar1, 0, iVar27[iVar2]);
iVar2++;
}
uParam1->f_38.f_1[iVar1 /*21*/].f_2=func_638(uVar28, iVar1, 0, bVar29);
uParam1->f_38.f_1[iVar1 /*21*/].f_3={
func_637(uVar30, iVar1, 0f, 0f, 0f, bVar31) 
};
uParam1->f_38.f_1[iVar1 /*21*/].f_6=func_636(uVar32, iVar1, 0f, bVar33);
uParam1->f_38.f_1[iVar1 /*21*/].f_7=func_638(uVar34, iVar1, 0, bVar35);
uParam1->f_38.f_1[iVar1 /*21*/].f_8=func_644(uVar36, iVar1, -1, bVar37);
uParam1->f_38.f_1[iVar1 /*21*/].f_9=func_638(uVar38, iVar1, 0, bVar39);
uParam1->f_38.f_1[iVar1 /*21*/].f_10=func_644(uVar40, iVar1, -1, bVar41);
uParam1->f_38.f_1[iVar1 /*21*/].f_11=func_644(uVar42, iVar1, -1, bVar43);
uParam1->f_38.f_1[iVar1 /*21*/].f_12=func_644(uVar44, iVar1, -1, bVar45);
uParam1->f_38.f_1[iVar1 /*21*/].f_13=func_644(uVar46, iVar1, -1, bVar47);
uParam1->f_38.f_1[iVar1 /*21*/].f_14=func_644(uVar48, iVar1, 0, bVar49);
uParam1->f_38.f_1[iVar1 /*21*/].f_15=func_638(uVar50, iVar1, 2, bVar51);
uParam1->f_38.f_1[iVar1 /*21*/].f_16=func_644(uVar52, iVar1, -1, bVar53);
uParam1->f_38.f_1[iVar1 /*21*/].f_17=func_636(uVar54, iVar1, 60f, bVar55);
uParam1->f_38.f_1[iVar1 /*21*/].f_18=func_636(uVar56, iVar1, 60f, bVar57);
uParam1->f_38.f_1[iVar1 /*21*/].f_19=func_636(uVar58, iVar1, 60f, bVar59);
uParam1->f_38.f_1[iVar1 /*21*/].f_20=func_636(uVar60, iVar1, -1f, bVar61);
iVar1++;
}
iVar1=0;
while (iVar1 < 22){
iVar2=0;
while (iVar2 < 6){
uParam1->f_38.f_632[iVar1 /*10*/].f_1[iVar2]=func_644(uVar65[iVar2], iVar1, -1, iVar66[iVar2]);
iVar2++;
}
uParam1->f_38.f_632[iVar1 /*10*/].f_8=func_644(uVar67, iVar1, 0, bVar68);
uParam1->f_38.f_632[iVar1 /*10*/].f_9=func_644(uVar69, iVar1, -1, bVar70);
iVar1++;
}
uParam1->f_891=func_643(iVar71, "num", 0);
iVar1=0;
while (iVar1 < 19){
iVar2=0;
while (iVar2 < 2){
uParam1->f_891.f_1[iVar1 /*15*/][iVar2]=func_644(uVar73[iVar2], iVar1, 0, iVar74[iVar2]);
iVar2++;
}
uParam1->f_891.f_1[iVar1 /*15*/].f_3=func_638(uVar75, iVar1, 0, bVar76);
uParam1->f_891.f_1[iVar1 /*15*/].f_4={
func_637(uVar77, iVar1, 0f, 0f, 0f, bVar78) 
};
uParam1->f_891.f_1[iVar1 /*15*/].f_7=func_636(uVar79, iVar1, 0f, bVar80);
uParam1->f_891.f_1[iVar1 /*15*/].f_8=func_644(uVar81, iVar1, -1, bVar82);
uParam1->f_891.f_1[iVar1 /*15*/].f_9=func_644(uVar83, iVar1, -1, bVar84);
uParam1->f_891.f_1[iVar1 /*15*/].f_10=func_644(uVar85, iVar1, 0, bVar86);
uParam1->f_891.f_1[iVar1 /*15*/].f_11=func_638(uVar88, iVar1, -1, bVar89);
uParam1->f_891.f_1[iVar1 /*15*/].f_11.f_1=func_638(uVar90, iVar1, 12, bVar91);
uParam1->f_891.f_1[iVar1 /*15*/].f_11.f_2=func_636(uVar92, iVar1, 1f, bVar93);
uParam1->f_891.f_1[iVar1 /*15*/].f_11.f_3=func_635(uVar94, iVar1, 0, bVar95);
iVar1++;
}
uParam1->f_891.f_287=func_643(iVar71, "trv", -1);
uParam1->f_1179=func_643(iVar96, "num", 0);
iVar1=0;
while (iVar1 < 30){
iVar2=0;
while (iVar2 < 2){
uParam1->f_1179.f_1[iVar1 /*12*/][iVar2]=func_644(uVar98[iVar2], iVar1, 0, iVar99[iVar2]);
iVar2++;
}
uParam1->f_1179.f_1[iVar1 /*12*/].f_3=func_638(uVar100, iVar1, 0, bVar101);
uParam1->f_1179.f_1[iVar1 /*12*/].f_4={
func_637(uVar102, iVar1, 0f, 0f, 0f, bVar103) 
};
uParam1->f_1179.f_1[iVar1 /*12*/].f_7=func_636(uVar104, iVar1, 0f, bVar105);
uParam1->f_1179.f_1[iVar1 /*12*/].f_8={
func_637(uVar106, iVar1, 0f, 0f, 0f, bVar107) 
};
uParam1->f_1179.f_1[iVar1 /*12*/].f_11=func_644(uVar108, iVar1, -1, bVar109);
iVar1++;
}
uParam1->f_1566=func_643(iVar110, "wnum", 0);
uParam1->f_1566.f_1=func_643(iVar110, "wfak", -1);
uParam1->f_1566.f_2=func_641(iVar110, "wblk", 250f);
uParam1->f_1569=func_643(iVar111, "time", -1);
uParam1->f_1569.f_1=func_642(iVar111, "disp", 0);
iVar1=0;
while (iVar1 < 4){
uParam1->f_1578[iVar1]=func_644(uVar114, iVar1, -1, bVar115);
iVar1++;
}
uParam1->f_1578.f_5=func_643(iVar112, "wvs", 3);
uParam1->f_1578.f_6=func_643(iVar112, "spd", 15000);
uParam1->f_1578.f_7=func_643(iVar112, "rspd", 5000);
uParam1->f_1578.f_8=func_641(iVar112, "sdst", 200f);
uParam1->f_1578.f_9=func_643(iVar112, "num", 0);
uParam1->f_1588=func_643(iVar116, "num", 0);
iVar1=0;
while (iVar1 < 2){
uParam1->f_1588.f_1[iVar1 /*11*/]={
func_637(uVar118, iVar1, 0f, 0f, 0f, bVar119) 
};
uParam1->f_1588.f_1[iVar1 /*11*/].f_3=func_636(uVar120, iVar1, -1f, bVar121);
iVar2=0;
while (iVar2 < 1){
uParam1->f_1588.f_1[iVar1 /*11*/].f_4[iVar2]=func_644(uVar122[iVar2], iVar1, 0, iVar123[iVar2]);
iVar2++;
}
uParam1->f_1588.f_1[iVar1 /*11*/].f_6=func_636(uVar124, iVar1, 0f, bVar125);
uParam1->f_1588.f_1[iVar1 /*11*/].f_7=func_638(uVar127, iVar1, -1, bVar128);
uParam1->f_1588.f_1[iVar1 /*11*/].f_7.f_1=func_638(uVar129, iVar1, 12, bVar130);
uParam1->f_1588.f_1[iVar1 /*11*/].f_7.f_2=func_636(uVar131, iVar1, 1f, bVar132);
uParam1->f_1588.f_1[iVar1 /*11*/].f_7.f_3=func_635(uVar133, iVar1, 0, bVar134);
iVar1++;
}
iVar1=0;
while (iVar1 < 2){
uParam1->f_1612[iVar1 /*32*/]=func_644(uVar136, iVar1, 0, bVar137);
uParam1->f_1612[iVar1 /*32*/].f_1=func_638(uVar139, iVar1, 1, bVar140);
uParam1->f_1612[iVar1 /*32*/].f_1.f_1=func_634(uVar141, iVar1, "", bVar142);
uParam1->f_1612[iVar1 /*32*/].f_1.f_2=func_644(uVar143, iVar1, 0, bVar144);
uParam1->f_1612[iVar1 /*32*/].f_1.f_3=func_638(uVar145, iVar1, 5, bVar146);
iVar2=0;
while (iVar2 < 12){
uParam1->f_1612[iVar1 /*32*/].f_7[iVar2 /*2*/]=func_638(uVar148[iVar2], iVar1, 0, iVar149[iVar2]);
uParam1->f_1612[iVar1 /*32*/].f_7[iVar2 /*2*/].f_1=func_644(uVar150[iVar2], iVar1, -1, iVar151[iVar2]);
iVar2++;
}
iVar1++;
}
uParam1->f_1677=func_643(iVar152, "num", 0);
iVar1=0;
while (iVar1 < 8){
uParam1->f_1677.f_1[iVar1 /*4*/]={
func_637(uVar154, iVar1, 0f, 0f, 0f, bVar155) 
};
uParam1->f_1677.f_1[iVar1 /*4*/].f_3=func_636(uVar156, iVar1, 0f, bVar157);
iVar1++;
}
uParam1->f_1711=func_643(iVar158, "num", 0);
iVar1=0;
while (iVar1 < 5){
uParam1->f_1711.f_1[iVar1 /*7*/]=func_638(uVar160, iVar1, -1, bVar161);
uParam1->f_1711.f_1[iVar1 /*7*/].f_1={
func_637(uVar162, iVar1, 0f, 0f, 0f, bVar163) 
};
uParam1->f_1711.f_1[iVar1 /*7*/].f_4={
func_637(uVar164, iVar1, 0f, 0f, 0f, bVar165) 
};
iVar1++;
}
uParam1->f_1748=func_643(iVar166, "num", 0);
iVar1=0;
while (iVar1 < 1){
uParam1->f_1748.f_1[iVar1 /*2*/]=func_638(uVar168, iVar1, -1, bVar169);
uParam1->f_1748.f_1[iVar1 /*2*/].f_1=func_644(uVar170, iVar1, 0, bVar171);
iVar1++;
}
uParam1->f_1752=func_643(iVar172, "num", 0);
iVar1=0;
while (iVar1 < 6){
iVar2=0;
while (iVar2 < 1){
uParam1->f_1752.f_1[iVar1 /*9*/][iVar2]=func_644(uVar174[iVar2], iVar1, 0, iVar175[iVar2]);
iVar2++;
}
uParam1->f_1752.f_1[iVar1 /*9*/].f_2={
func_637(uVar176, iVar1, 0f, 0f, 0f, bVar177) 
};
uParam1->f_1752.f_1[iVar1 /*9*/].f_5={
func_637(uVar178, iVar1, 0f, 0f, 0f, bVar179) 
};
uParam1->f_1752.f_1[iVar1 /*9*/].f_8=func_636(uVar180, iVar1, 0f, bVar181);
iVar1++;
}
uParam1->f_1808=func_643(iVar182, "num", 0);
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 1){
uParam1->f_1808.f_1[iVar1 /*18*/][iVar2]=func_644(uVar184[iVar2], iVar1, 0, iVar185[iVar2]);
iVar2++;
}
uParam1->f_1808.f_1[iVar1 /*18*/].f_2=func_638(uVar186, iVar1, -1, bVar187);
uParam1->f_1808.f_1[iVar1 /*18*/].f_3=func_644(uVar188, iVar1, -1, bVar189);
uParam1->f_1808.f_1[iVar1 /*18*/].f_4={
func_637(uVar190, iVar1, 0f, 0f, 0f, bVar191) 
};
uParam1->f_1808.f_1[iVar1 /*18*/].f_7=func_636(uVar192, iVar1, -1f, bVar193);
uParam1->f_1808.f_1[iVar1 /*18*/].f_8=func_636(uVar194, iVar1, -1f, bVar195);
uParam1->f_1808.f_1[iVar1 /*18*/].f_9=func_644(uVar196, iVar1, -1, bVar197);
uParam1->f_1808.f_1[iVar1 /*18*/].f_10=func_638(uVar199, iVar1, -1, bVar200);
uParam1->f_1808.f_1[iVar1 /*18*/].f_10.f_1=func_638(uVar201, iVar1, 12, bVar202);
uParam1->f_1808.f_1[iVar1 /*18*/].f_10.f_2=func_636(uVar203, iVar1, 1f, bVar204);
uParam1->f_1808.f_1[iVar1 /*18*/].f_10.f_3=func_635(uVar205, iVar1, 0, bVar206);
uParam1->f_1808.f_1[iVar1 /*18*/].f_14=func_635(uVar207, iVar1, 0, bVar208);
uParam1->f_1808.f_1[iVar1 /*18*/].f_15={
func_637(uVar209, iVar1, 0f, 0f, 0f, bVar210) 
};
iVar1++;
}
iVar1=0;
while (iVar1 < 1){
uParam1->f_1870[iVar1 /*4*/]={
func_637(uVar212, iVar1, 0f, 0f, 0f, bVar213) 
};
uParam1->f_1870[iVar1 /*4*/].f_3=func_636(uVar214, iVar1, 0f, bVar215);
iVar1++;
}
uParam1->f_1875=func_643(iVar216, "num", 0);
iVar1=0;
while (iVar1 < 8){
uParam1->f_1875.f_1[iVar1 /*26*/]=func_644(uVar218, iVar1, -1, bVar219);
iVar2=0;
while (iVar2 < 3){
uParam1->f_1875.f_1[iVar1 /*26*/].f_1[iVar2 /*8*/]=func_644(uVar221[iVar2], iVar1, -1, iVar222[iVar2]);
uParam1->f_1875.f_1[iVar1 /*26*/].f_1[iVar2 /*8*/].f_1={
func_637(uVar223[iVar2], iVar1, 0f, 0f, 0f, iVar224[iVar2]) 
};
uParam1->f_1875.f_1[iVar1 /*26*/].f_1[iVar2 /*8*/].f_4={
func_637(uVar225[iVar2], iVar1, 0f, 0f, 0f, iVar226[iVar2]) 
};
uParam1->f_1875.f_1[iVar1 /*26*/].f_1[iVar2 /*8*/].f_7=func_644(uVar227[iVar2], iVar1, 2000, iVar228[iVar2]);
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 1){
uParam1->f_2384[iVar1 /*6*/]=func_638(uVar231, iVar1, 0, bVar232);
uParam1->f_2384[iVar1 /*6*/].f_1=func_644(uVar233, iVar1, 0, bVar234);
uParam1->f_2384[iVar1 /*6*/].f_2={
func_637(uVar235, iVar1, 0f, 0f, 0f, bVar236) 
};
uParam1->f_2384[iVar1 /*6*/].f_5=func_636(uVar237, iVar1, 0f, bVar238);
iVar1++;
}
iVar1=0;
while (iVar1 < 27){
uParam1->f_2391[iVar1 /*16*/]={
func_633(uVar240, iVar1, "", bVar241) 
};
iVar1++;
}
uParam1->f_2824=func_643(iVar242, "num", 0);
iVar1=0;
while (iVar1 < 2){
iVar2=0;
while (iVar2 < 1){
uParam1->f_2824.f_1[iVar1 /*10*/][iVar2]=func_644(uVar244[iVar2], iVar1, 0, iVar245[iVar2]);
iVar2++;
}
uParam1->f_2824.f_1[iVar1 /*10*/].f_2=func_644(uVar246, iVar1, -1, bVar247);
uParam1->f_2824.f_1[iVar1 /*10*/].f_3=func_636(uVar248, iVar1, 8.2f, bVar249);
uParam1->f_2824.f_1[iVar1 /*10*/].f_4=func_636(uVar250, iVar1, 3f, bVar251);
uParam1->f_2824.f_1[iVar1 /*10*/].f_5=func_636(uVar252, iVar1, 0.36f, bVar253);
iVar1++;
}
iVar1=0;
while (iVar1 < 4){
uParam1->f_2846[iVar1 /*42*/]={
func_637(uVar255, iVar1, 0f, 0f, 0f, bVar256) 
};
uParam1->f_2846[iVar1 /*42*/].f_3=func_636(uVar257, iVar1, 0f, bVar258);
uParam1->f_2846[iVar1 /*42*/].f_4=func_644(uVar259, iVar1, -1, bVar260);
iVar2=0;
while (iVar2 < 8){
uParam1->f_2846[iVar1 /*42*/].f_6[iVar2 /*3*/]={
func_637(uVar261[iVar2], iVar1, 0f, 0f, 0f, iVar262[iVar2]) 
};
iVar2++;
}
iVar2=0;
while (iVar2 < 8){
uParam1->f_2846[iVar1 /*42*/].f_31[iVar2]=func_636(uVar263[iVar2], iVar1, 0f, iVar264[iVar2]);
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
uParam1->f_2846[iVar1 /*42*/].f_40[iVar2]=func_644(uVar265[iVar2], iVar1, 0, iVar266[iVar2]);
iVar2++;
}
iVar1++;
}
uParam1->f_3015=func_643(iVar267, "num", 0);
iVar1=0;
while (iVar1 < 20){
uParam1->f_3015.f_1[iVar1 /*2*/]=func_638(uVar269, iVar1, 0, bVar270);
uParam1->f_3015.f_1[iVar1 /*2*/].f_1=func_644(uVar271, iVar1, -1, bVar272);
iVar1++;
}}
struct<16> func_633(var uParam0, int iParam1, char* sParam2, bool bParam3){
struct<16> Var0;
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
}else{
StringCopy(&Var0, sParam2, 64);
}
return Var0;
}


char* func_634(var uParam0, int iParam1, char* sParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1);
}
return sParam2;
}

int func_635(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
}
return iParam2;
}


float func_636(var uParam0, int iParam1, float fParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
}
return fParam2;
}


Vector3 func__637(var uParam0, int iParam1, struct<3> Param2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
}
return Param2;
}

int func_638(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
}
return iParam2;
}

int func_639(int iParam0, char* sParam1, int iParam2){
if(func_640(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==1){
return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
}
return iParam2;
}


bool func_640(int iParam0){
return iParam0 !=0;
}


float func_641(int iParam0, char* sParam1, float fParam2){
if(func_640(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==3){
return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
}
return fParam2;
}

int func_642(int iParam0, char* sParam1, int iParam2){
if(func_640(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==2){
return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
}
return iParam2;
}

int func_643(int iParam0, char* sParam1, int iParam2){
if(func_640(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==2){
return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
}
return iParam2;
}

int func_644(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
}
return iParam2;
}
struct<16> func_645(int iParam0, char* sParam1, char* sParam2){
struct<16> Var0;
if(func_640(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==4){
StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
}else{
StringCopy(&Var0, sParam2, 64);
}
return Var0;
}

int func_646(int iParam0, char* sParam1){
if(!func_640(iParam0)){
return 0;
}
return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}


void func_647(var uParam0, int iParam1, char* sParam2){
if(!func_640(iParam1)){
return;
}
if(!func_640(*uParam0) && DATAFILE::DATADICT_GET_TYPE(iParam1, sParam2)==6){
*uParam0=DATAFILE::DATADICT_GET_DICT(iParam1, sParam2);
if(!func_640(*uParam0)){
}}
if(!func_640(*uParam0)){}}


void func_648(){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0){
DATAFILE::DATAFILE_DELETE(0);
}}


char* func_649(){
return func_650(func_590(), func_651());
}


char* func_650(int iParam0, int iParam1){
switch (iParam1){
case 0:
return "Fixer_Setup_1";
case 1:
return "Fixer_Prep_Nightclub_1";
case 2:
return "Fixer_Prep_Nightclub_2";
case 3:
return "Fixer_Prep_Yacht_1";
case 4:
return "Fixer_Prep_Yacht_2";
case 5:
return "Fixer_Prep_Limo_1";
case 6:
return "Fixer_Prep_Limo_2";
case 7:
return "Fixer_Prep_Way_In_1";
case 8:
return "Fixer_Prep_Way_In_2";
case 9:
return "Fixer_Prep_Families_1";
case 10:
return "Fixer_Prep_Families_2";
case 11:
return "Fixer_Prep_Ballas_1";
case 12:
return "Fixer_Prep_Ballas_2";
default:
}
return "";
}

int func_651(){
return Local_2104.f_1234.f_1;
}

int func_652(int iParam0){
switch (iParam0){
case 275:
case 270:
case 276:
case 277:
case 273:
case 292:
case 295:
case 300:
case 309:
case 310:
return 0;
default:
}
return 1;
}


void func_653(){
if(func_2497(21)){
return;
}
func_654();
func_161(21);
}


void func_654(){
switch (func_590()){
case 0:
func_2275();
break;
case 3:
func_2030();
break;
case 1:
func_1581();
break;
case 4:
func_1339();
break;
case 2:
func_1041();
break;
case 6:
func_845();
break;
case 5:
func_655();
break;
}}


void func_655(){
Local_213.f_13=179280;
Local_213.f_3.f_1=178268;
Local_213.f_10=178255;
Local_213.f_11=177782;
Local_213.f_11.f_1=174766;
Local_213.f_124=174733;
Local_213.f_124.f_4=174722;
Local_213.f_124.f_31=174679;
Local_213.f_166=173429;
Local_213.f_166.f_1=173298;
Local_213.f_166.f_192=172812;
Local_213.f_166.f_150=172649;
Local_213.f_166.f_150.f_5=172624;
Local_213.f_166.f_150.f_6=172611;
Local_213.f_166.f_150.f_4=172602;
Local_213.f_166.f_150.f_13=172546;
Local_213.f_166.f_150.f_16=172522;
Local_213.f_166.f_193=172178;
Local_213.f_166.f_178=172147;
Local_213.f_166.f_2.f_5=172101;
Local_213.f_166.f_2.f_5.f_2=172063;
Local_213.f_166.f_2.f_5.f_3=172008;
Local_213.f_166.f_2.f_5.f_1=171983;
Local_213.f_166.f_2.f_5.f_7=171974;
Local_213.f_166.f_2.f_21.f_2=171808;
Local_213.f_166.f_2.f_94=171729;
Local_213.f_166.f_2.f_94.f_2=171716;
Local_213.f_166.f_2.f_94.f_9=171703;
Local_213.f_166.f_2.f_109=171694;
Local_213.f_166.f_2.f_109.f_1=171645;
Local_213.f_166.f_2.f_109.f_3=171633;
Local_213.f_166.f_2.f_109.f_6=171523;
Local_213.f_166.f_2.f_127=171325;
Local_213.f_166.f_2.f_127.f_1=171302;
Local_213.f_166.f_205=171274;
Local_213.f_166.f_204=171243;
Local_213.f_432.f_35=171131;
Local_213.f_377.f_23=171084;
Local_213.f_377.f_44=169657;
Local_213.f_377.f_43=169487;
Local_213.f_377.f_45=169228;
Local_213.f_377=169200;
Local_213.f_377.f_4=169176;
Local_213.f_377.f_9=169115;
Local_213.f_377.f_13=169086;
Local_213.f_377.f_39=169017;
Local_213.f_377.f_31=168989;
Local_213.f_695.f_2=168963;
Local_213.f_695.f_10=168801;
Local_213.f_695.f_7=168675;
Local_213.f_695.f_8=168666;
Local_213.f_695.f_9=168634;
Local_213.f_695.f_13=168295;
Local_213.f_695.f_12=167967;
Local_213.f_695.f_14=167827;
Local_213.f_695.f_11=167817;
Local_213.f_695.f_15=167739;
Local_213.f_53=167658;
Local_213.f_716=167644;
Local_213.f_74.f_11=167630;
Local_213.f_679=167598;
Local_213.f_679.f_1=167425;
Local_213.f_679.f_6=167399;
Local_213.f_838=167390;
Local_213.f_838.f_4=167381;
Local_213.f_15.f_13=167323;
Local_213.f_661.f_8=167309;
Local_213.f_475.f_8=166785;
Local_213.f_15.f_27=166719;
Local_213.f_104.f_3=166523;
Local_213.f_104.f_3.f_1=166362;
}


char* func_656(int iParam0){
switch (iParam0){
case 0:
return "FIXER_DELIVERING_START";
case 1:
return "FIXER_GUNFIGHT_START";
case 2:
return "FIXER_SUSPENSE_START";
case 3:
return "FIXER_SUSPENSE";
case 4:
return "FIXER_DELIVERING";
case 5:
return "FIXER_GUNFIGHT";
case 6:
return "FIXER_MED_INTENSITY";
case 7:
return "FIXER_VEHICLE_ACTION";
case 8:
return "FIXER_SILENT";
case 9:
return func_657();
default:
}
return "";
}


char* func_657(){
return "FIXER_MUSIC_STOP";
}

int func_658(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
case 0:
if(func_660() >=1){
return 9;
}
break;
case 9:
if(func_660() >=3){
return 2;
}
break;
case 2:
if(func_660() >=4){
return 5;
}
break;
case 5:
if(func_660() >=5){
return 6;
}
break;
case 6:
if(func_660() >=6){
return 7;
}
break;
case 7:
if(func_659() >=7){
return 4;
}
break;
}
return -1;
}

int func_659(){
return func_22();
}

int func_660(){
return func_661();
}

int func_661(){
return Local_2109[iLocal_2049 /*229*/];
}


bool func_662(){
return func_663(Local_2051, Local_171.f_1588.f_1[1 /*11*/]) <=100f;
}


float func_663(struct<3> Param0, struct<3> Param1){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1);
}

int func_664(int iParam0){
if(fLocal_2074 !=-1f && fLocal_2074 <=Local_171.f_1588.f_1[iParam0 /*11*/].f_3){
if(func_665(iParam0)){
return 1;
}}
return 0;
}

int func_665(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return (func_671(1) && func_666(1));
default:
}
return 0;
}


bool func_666(int iParam0){
int iVar0;
int iVar1;
if(func_185(func_670(0)) !=3){
return 0;
}
iVar0=func_669(0);
iVar1=func_667(iParam0);
if(!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
return 0;
}
return PED::GET_VEHICLE_PED_IS_IN(iVar0, 0)==iVar1;
}

int func_667(int iParam0){
int iVar0;
iVar0=func_670(iParam0);
if(func_668(iParam0)==1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[iVar0 /*8*/])){
return NETWORK::NET_TO_VEH(Local_2104.f_773[iVar0 /*8*/]);
}}
return -1;
}

int func_668(int iParam0){
return Local_171.f_3015.f_1[iParam0 /*2*/];
}

int func_669(int iParam0){
int iVar0;
iVar0=func_670(iParam0);
if(func_668(iParam0)==0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[iVar0 /*25*/])){
return NETWORK::NET_TO_PED(Local_2104.f_22[iVar0 /*25*/]);
}}
return -1;
}


bool func_670(int iParam0){
return Local_171.f_3015.f_1[iParam0 /*2*/].f_1;
}


bool func_671(int iParam0){
return (((ENTITY::DOES_ENTITY_EXIST(iLocal_2052) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, 0)) && iLocal_2052==func_667(iParam0)) && func_672(iLocal_2048, 0)==-1);
}

int func_672(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
if(iVar1==1){
iVar3=-1;
return iVar3;
}
iVar2=0;
while (iVar2 < iVar1){
iVar3=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0)==iParam0){
return iVar3;
}}
iVar2++;
}}}}
return iVar3;
}


bool func_673(){
return func_659() > 6;
}

int func_674(){
if(func_675(iLocal_2050, 10) && func_666(1)){
return 1;
}
return 0;
}


bool func_675(int iParam0, int iParam1){
return func_4(&(Local_2109[iParam0 /*229*/].f_220), iParam1);
}

int func_676(var uParam0){
return 0;
}

int func_677(var uParam0){
return 0;
}

int func_678(int iParam0){
switch (iParam0){
case 0:
return 0;
default:
}
return 1;
}

int func_679(int iParam0){
switch (iParam0){
case 0:
if(!func_680(iParam0)){
if(bLocal_2138){
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 71) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 72)){
if(!func_15(&uLocal_2139) || func_13(&uLocal_2139, 5000, 0)){
func_28(&uLocal_2139);
func_14(&uLocal_2139, 0, 0);
return 1;
}}}}
break;
}
return 0;
}

int func_680(int iParam0){
Stack.Push(Local_213.f_679 !=0);
Stack.Push(iParam0);
Call_Loc(Local_213.f_679);
if(StackVal && func_681(StackVal)){
return 1;
}
return 0;
}

int func_681(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


char* func_682(int iParam0){
switch (iParam0){
case 0:
return "FXR_HT_FAM1";
default:
}
return "";
}


bool func_683(){
return func_659()==7;
}


bool func_684(){
return func_659() > 6;
}

int func_685(){
switch (func_659()){
case 2:
return !func_686(3);
default:
}
return 0;
}


bool func_686(int iParam0){
int iVar0;
iVar0=iParam0;
return (func_687(iVar0) && Local_2024.f_2 !=iVar0);
}


bool func_687(int iParam0){
return func_150(&Local_2024, iParam0);
}

int func_688(int iParam0, var uParam1){
switch (iParam0){
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
return func_670(0);
default:
}
return -1;
}

int func_689(var uParam0){
return 175;
}

int func_690(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 5000;
case 2:
return 0;
case 3:
return 2000;
case 4:
return 3500;
case 5:
return 3000;
case 6:
return 2000;
case 7:
return 0;
case 8:
return 3000;
case 9:
return 5000;
case 10:
return 0;
default:
}
return 0;
}

int func_691(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return (func_686(0) && func_659()==0);
case 2:
return func_69(func_670(0)) >=1;
case 3:
return func_659()==2;
case 4:
return func_686(3);
case 5:
return func_686(4);
case 6:
return func_69(func_670(0)) >=3;
case 7:
return (!func_693(func_670(0), 0) && (func_659()==5 || func_69(func_670(0))==5));
case 8:
return (func_659() > 4 && func_693(func_670(0), 0));
case 9:
return ((func_659() > 6 && func_692(0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_2046)==0);
case 10:
return (func_659() >=7 && Local_1933[0 /*7*/].f_2 <=70f);
default:
}
return 0;
}


bool func_692(int iParam0){
return Local_1933[iParam0 /*7*/].f_4 !=func_77();
}


bool func_693(int iParam0, int iParam1){
return func_4(&(Local_217[iParam0 /*21*/]), iParam1);
}


char* func_694(int iParam0){
switch (func_651()){
case 9:
switch (iParam0){
case 0:
return "FXFR_D3F_1A";
case 1:
return "FXFA_EXPL1A";
case 2:
return "FXFA_SHOUT1B";
case 3:
return "FXFA_DEAL1A";
case 4:
return "FXFA_JOUR1A";
case 5:
return "FXFA_JOUR2B";
case 6:
return "FXFA_ARR1A";
case 7:
return "FXFA_STEAL1A";
case 8:
return "FXFA_DELIV1A";
case 9:
return "FXFA_JOUR3A";
case 10:
return "FXFA_ARR2A";
default:
}
break;
case 10:
switch (iParam0){
case 0:
return "FXFR_D3F_1B";
case 1:
return "FXFA_EXPL1B";
case 2:
return "FXFA_SHOUT1B";
case 3:
return "FXFA_DEAL1B";
case 4:
return "FXFA_JOUR1A";
case 5:
return "FXFA_JOUR2B";
case 6:
return "FXFA_ARR1B";
case 7:
return "FXFA_STEAL1B";
case 8:
return "FXFA_DELIV1B";
case 9:
return "FXFA_JOUR3B";
case 10:
return "FXFA_ARR2B";
default:
}
break;
}
return "";
}


char* func_695(int iParam0){
switch (iParam0){
case 0:
return "FXFRAUD";
default:
}
return "FXFAAUD";
}

int func_696(var uParam0){
return 1;
}

int func_697(int iParam0, var uParam1){
switch (iParam0){
case 0:
return 2;
case 1:
return 3;
case 2:
return 2;
case 3:
return 2;
case 4:
return 2;
case 5:
return 2;
case 6:
return 2;
case 7:
return 2;
case 8:
return 2;
case 9:
return 2;
case 10:
return 2;
default:
}
return 2;
}


char* func_698(int iParam0, var uParam1){
switch (iParam0){
case 0:
return "FIX_FRANKLIN";
case 1:
return "FIX_FRANKLIN";
case 2:
return "FIX_FAML1";
case 3:
return "FIX_FAML1";
case 4:
return "FIX_FAML1";
case 5:
return "FIX_FAML1";
case 6:
return "FIX_FAML1";
case 7:
return "FIX_FAML1";
case 8:
return "FIX_FAML1";
case 9:
return "FIX_FAML1";
case 10:
return "FIX_FAML1";
default:
}
return "FIX_FRANKLIN";
}

int func_699(int iParam0){
switch (iParam0){
case 0:
return 0;
default:
}
return 1;
}

int func_700(int iParam0, var uParam1){
if(func_670(2)==iParam0){
return func_659() > 3;
}
return 0;
}


Vector3 func__701(int iParam0){
if(func_670(12)==iParam0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[func_670(2) /*8*/])){
return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_2104.f_773[func_670(2) /*8*/]), 0);
}}
return Local_2051;
}


char* func_702(int iParam0){
if(func_670(1)==iParam0){
return "FXR_BLIP_BACV";
}
return "";
}

int func_703(int iParam0){
if(func_670(1)==iParam0){
return !func_704(iParam0, iLocal_2050, 11);
}
return 0;
}


bool func_704(bool bParam0, int iParam1, int iParam2){
return func_4(&(Local_2109[iParam1 /*229*/].f_135[bParam0 /*2*/]), iParam2);
}

int func_705(int iParam0){
if(func_670(1)==iParam0){
return 225;
}
return -1;
}

int func_706(int iParam0){
if(func_670(1)==iParam0){
return func_660()==1;
}
return 0;
}


void func_707(int iParam0, int iParam1, bool bParam2, var uParam3, var uParam4){
if(bParam2){
if(iParam0==func_670(1)){
if(func_704(iParam0, iLocal_2050, 9) && !func_710(16)){
if(func_709(Local_2104.f_773[iParam0 /*8*/])){
AUDIO::SET_VEH_RADIO_STATION(iParam1, "RADIO_09_HIPHOP_OLD");
func_708(12);
}}}elseif(iParam0==func_670(2)){
if(func_666(2) && !func_710(6)){
if(func_709(Local_2104.f_773[iParam0 /*8*/])){
VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam1, 2, 0);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, 3, 0, VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 3));
func_708(4);
}}}}}


void func_708(int iParam0){
if(func_17(&(Local_2109[iLocal_2049 /*229*/].f_220), iParam0)){}}

int func_709(int iParam0){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_141(iParam0)){
return 1;
}}
return 0;
}


bool func_710(int iParam0){
return func_4(&(Local_2104.f_1231), iParam0);
}


void func_711(int iParam0, int iParam1){
if(func_670(2)==iParam0){
VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iParam1, -30f);
func_712(iParam1, 2, 0, 1, 5, 1065353216);
func_712(iParam1, 3, 0, 1, 5, 1065353216);
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 3);
}elseif(func_670(1)==iParam0){
ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam1, 1);
VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(iParam1, 0);
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, 0.2f);
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 1, 3);
}}


void func_712(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, iParam1, iParam2, iParam3);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, iParam1, iParam4, fParam5);
}

int func_713(int iParam0, var uParam1){
if(Local_171.f_891.f_1[iParam0 /*15*/].f_3==joaat("phoenix")){
uParam1->f_66=joaat("phoenix");
*uParam1=2;
uParam1->f_5=112;
uParam1->f_6=74;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 25);
uParam1->f_9[0]=1;
uParam1->f_9[1]=1;
uParam1->f_9[3]=1;
uParam1->f_9[4]=1;
uParam1->f_9[7]=1;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=1;
uParam1->f_9[23]=22;
return 1;
}elseif(Local_171.f_891.f_1[iParam0 /*15*/].f_3==joaat("warrener2")){
uParam1->f_66=joaat("warrener2");
uParam1->f_5=74;
uParam1->f_6=112;
uParam1->f_7=67;
uParam1->f_8=122;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=1;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=1;
uParam1->f_9[1]=5;
uParam1->f_9[7]=5;
uParam1->f_9[8]=1;
uParam1->f_9[10]=1;
uParam1->f_9[11]=3;
uParam1->f_9[12]=3;
uParam1->f_9[13]=2;
uParam1->f_9[15]=1;
uParam1->f_9[23]=18;
uParam1->f_9[47]=1;
uParam1->f_9[48]=2;
return 1;
}elseif(Local_171.f_891.f_1[iParam0 /*15*/].f_3==joaat("primo2")){
uParam1->f_66=joaat("primo2");
uParam1->f_5=0;
uParam1->f_6=50;
uParam1->f_7=53;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_69=8;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=1;
uParam1->f_9[1]=2;
uParam1->f_9[2]=1;
uParam1->f_9[3]=1;
uParam1->f_9[4]=1;
uParam1->f_9[6]=2;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=1;
uParam1->f_9[24]=1;
uParam1->f_9[37]=2;
uParam1->f_9[39]=5;
uParam1->f_9[40]=5;
uParam1->f_9[43]=2;
uParam1->f_9[44]=2;
return 1;
}elseif(Local_171.f_891.f_1[iParam0 /*15*/].f_3==joaat("manana2")){
uParam1->f_66=joaat("manana2");
*uParam1=2;
uParam1->f_5=50;
uParam1->f_6=0;
uParam1->f_7=53;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=8;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), false);
uParam1->f_9[1]=3;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=38;
uParam1->f_9[24]=4;
uParam1->f_9[33]=8;
uParam1->f_9[37]=1;
uParam1->f_9[39]=4;
uParam1->f_9[40]=3;
uParam1->f_9[45]=1;
uParam1->f_9[48]=1;
return 1;
}elseif(func_670(1)==iParam0){
uParam1->f_66=joaat("cavalcade2");
StringCopy(&(uParam1->f_1), "63DYR448", 16);
uParam1->f_5=0;
uParam1->f_6=6;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=1;
uParam1->f_69=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 24);
MISC::SET_BIT(&(uParam1->f_77), 9);
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=1;
uParam1->f_9[15]=4;
uParam1->f_9[22]=1;
uParam1->f_9[23]=23;
return 1;
}elseif(func_167(iParam0, 15)){
if(Local_171.f_891.f_1[iParam0 /*15*/].f_3==joaat("nightblade")){
uParam1->f_66=joaat("nightblade");
StringCopy(&(uParam1->f_1), "88ELC593", 16);
uParam1->f_5=0;
uParam1->f_6=4;
uParam1->f_7=10;
uParam1->f_8=131;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=6;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[5]=1;
uParam1->f_9[11]=4;
uParam1->f_9[12]=3;
uParam1->f_9[13]=3;
return 1;
}elseif(Local_171.f_891.f_1[iParam0 /*15*/].f_3==joaat("gargoyle")){
uParam1->f_66=joaat("gargoyle");
StringCopy(&(uParam1->f_1), "41XZE016", 16);
uParam1->f_5=0;
uParam1->f_6=11;
uParam1->f_7=10;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=6;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[11]=4;
uParam1->f_9[12]=3;
uParam1->f_9[13]=3;
return 1;
}}
return 0;
}

int func_714(int iParam0){
if(iParam0==func_670(9)){
return func_659() > 3;
}elseif(iParam0==func_670(12)){
return 0;
}
return 1;
}


void func_715(int iParam0, int iParam1, var uParam2){
if(((iParam0==func_670(3) || iParam0==func_670(4)) || iParam0==func_670(5)) || iParam0==func_670(6)){
if(Global_1956139.f_5602){
if(func_709(Local_2104.f_926[iParam0 /*5*/])){
ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam1, 0)){
ENTITY::DELETE_ENTITY(&iParam1);
}}}}}


void func_716(int iParam0){
if(iParam0==func_670(0)){
func_90(&(Local_2104.f_22[iParam0 /*25*/]));
}}

int func_717(int iParam0, var uParam1){
if(iParam0==func_670(0)){
return func_710(34);
}
return 0;
}


float func_718(int iParam0, var uParam1){
if(iParam0==func_670(0)){
return 5f;
}
return 5f;
}


Vector3 func__719(int iParam0, int iParam1){
if(iParam0==func_670(0)){
switch (func_651()){
case 9:
return 867.4428f, -2192.647f, 29.4701f;
case 10:
return 827.8649f, -1050.273f, 26.8693f;
default:}}elseif(iParam0==func_670(10) || iParam0==func_670(11)){
return func_720();
}
return ENTITY::GET_ENTITY_COORDS(iParam1, 0);
}


Vector3 func__720(){
switch (func_651()){
case 9:
return 848.0505f, -2185.349f, 29.308f;
case 10:
return 857.9564f, -1058.007f, 27.361f;
default:
}
return Local_171.f_19.f_5[0 /*13*/].f_3;
}


float func_721(var uParam0, var uParam1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[func_670(2) /*8*/])){
return func_722(ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_ENT(Local_2104.f_773[func_670(2) /*8*/])), 30f, 500f);
}
return 30f;
}


float func_722(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}

int func_723(var uParam0, var uParam1){
return 2884412;
}

int func_724(var uParam0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[func_670(2) /*8*/])){
return NETWORK::NET_TO_ENT(Local_2104.f_773[func_670(2) /*8*/]);
}
return -1;
}

int func_725(var uParam0){
return 7;
}


float func_726(var uParam0){
return 20f;
}


float func_727(var uParam0){
return 10f;
}


Vector3 func__728(var uParam0, var uParam1){
switch (func_651()){
case 9:
return 861.5433f, -2173.794f, 29.5741f;
case 10:
return 860.3067f, -1076.519f, 27.4791f;
default:
}
return Local_171.f_19.f_5[0 /*13*/].f_3;
}


void func_729(int iParam0, int iParam1){
if(iParam0==func_670(0)){
if(func_666(2)){
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 1);
}
Stack.Push(iParam1);
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_191);
WEAPON::GIVE_WEAPON_TO_PED(StackVal, StackVal, 9999999, 1, 1);
}elseif(iParam0==func_670(10) || iParam0==func_670(11)){}
if((iParam0==func_670(0) || iParam0==func_670(16)) || iParam0==func_670(17)){
PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, func_720(), 10f, true, 0);
}
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

int func_730(var uParam0){
return 1;
}

int func_731(int iParam0){
if(iParam0==func_670(0)){
return 20000;
}
return -1;
}


float func_732(var uParam0){
switch (func_733()){
case 1:
return 1f;
case 5:
return 3f;
default:
}
return 1f;
}

int func_733(){
return func_69(func_670(0));
}

int func_734(var uParam0){
switch (func_733()){
case 1:
return 0;
case 5:
return 2;
default:
}
return 0;
}

int func_735(var uParam0){
switch (func_733()){
case 1:
return func_670(1);
case 5:
return func_670(2);
default:
}
return -1;
}

int func_736(int iParam0){
if(iParam0==func_670(0)){
if(func_585() !=0){
return 1;
}}
return 0;
}


void func_737(int iParam0, int iParam1, bool bParam2){
float fVar0;
if(iParam0==func_670(0)){
if(!bParam2){
switch (func_659()){
case 1:
if(iParam0==func_670(0) && !func_710(13)){
fVar0=func_663(Local_2051, ENTITY::GET_ENTITY_COORDS(iParam1, 0));
if(fVar0 < 20f){
func_708(9);
}}
break;
}
if(!func_710(14)){
if((func_659()==3 && func_671(1)) && func_666(1)){
fVar0=func_663(func_739(), ENTITY::GET_ENTITY_COORDS(iParam1, 0));
if(fVar0 < 10f){
func_708(10);
}}}
func_738(iParam0, iParam1);
}elseif(bLocal_2044){
if(func_585()==0){
func_8(9);
}}}}


void func_738(int iParam0, int iParam1){
char* sVar0;
sVar0="move_m@brave";
STREAMING::REQUEST_CLIP_SET(sVar0);
if(!STREAMING::HAS_CLIP_SET_LOADED(sVar0)){
return;
}
if(func_709(Local_2104.f_22[iParam0 /*25*/])){
PED::SET_PED_MOVEMENT_CLIPSET(iParam1, sVar0, 1048576000);
}}


Vector3 func__739(){
switch (func_651()){
case 9:
return 890.761f, -2184.054f, 29.5158f;
case 10:
return 823.97f, -1077.487f, 27.1563f;
default:
}
return Local_171.f_1588.f_1[1 /*11*/];
}

int func_740(int iParam0){
if(func_94(iParam0, 20)){
return 0;
}
return 1;
}


char* func_741(int iParam0){
if(iParam0==func_670(0)){
return "FXR_BLIP_BAVER";
}elseif(Local_171.f_38.f_1[iParam0 /*21*/].f_14==1){
return "FXR_BLIP_BAFAM";
}
return "PB_ENEMY";
}

int func_742(var uParam0){
return -1;
}


float func_743(var uParam0){
return 0.6f;
}

int func_744(int iParam0){
if(func_94(iParam0, 20)){
return 6;
}
return 9;
}

int func_745(int iParam0){
if(func_185(iParam0)==3){
if(func_94(iParam0, 20) && func_659()==4){
return 1;
}
if(iParam0==func_670(0)){
if(!func_693(iParam0, 0) && func_659() >=3){
return 1;
}}elseif(Local_171.f_38.f_1[iParam0 /*21*/].f_14==1 && iParam0 !=func_670(15)){
if(func_659() >=3){
if(!func_693(iParam0, 0)){
return 1;
}elseif(Local_171.f_38.f_1[iParam0 /*21*/].f_9==-1){
return 1;
}}}}
return 0;
}


void func_746(int iParam0, int iParam1, bool bParam2){
if(bParam2){
return;
}
PED::SET_PED_CONFIG_FLAG(iParam1, 132, true);
if(func_670(0)==iParam0){
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
PED::SET_PED_PROP_INDEX(iParam1, 1, 0, 0, false, 1);
PED::SET_PED_PROP_INDEX(iParam1, 6, 0, 0, false, 1);
PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam1, 0);
PED::SET_PED_CONFIG_FLAG(iParam1, 116, false);
PED::SET_PED_CONFIG_FLAG(iParam1, 118, false);
PED::SET_PED_CONFIG_FLAG(iParam1, 182, true);
ENTITY::SET_ENTITY_PROOFS(iParam1, false, true, false, false, false, 0, 0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 13, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 28, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 50, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 51, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 35, 1);
WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, 1);
PED::SET_PED_COMBAT_ABILITY(iParam1, 2);
PED::SET_PED_SHOOT_RATE(iParam1, 80);
PED::SET_PED_ACCURACY(iParam1, 25);
}elseif(func_670(10)==iParam0 || func_670(11)==iParam0){
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
PED::SET_PED_COMBAT_ABILITY(iParam1, 2);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 300);
ENTITY::SET_ENTITY_HEALTH(iParam1, 300, 0);
}elseif(func_670(13)==iParam0 || func_670(14)==iParam0){
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 1);
PED::SET_PED_COMBAT_ABILITY(iParam1, 2);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 300);
ENTITY::SET_ENTITY_HEALTH(iParam1, 300, 0);
}elseif(func_670(15)==iParam0){
PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 0);
}elseif(func_670(16)==iParam0 || func_670(17)==iParam0){
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
PED::SET_PED_COMBAT_ABILITY(iParam1, 2);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 51, 1);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 300);
ENTITY::SET_ENTITY_HEALTH(iParam1, 300, 0);
}}

int func_747(int iParam0){
if(func_670(0)==iParam0){
return 0;
}
if(func_670(10)==iParam0 || func_670(11)==iParam0){
return 1;
}
if(func_670(15)==iParam0){
return 3;
}
if(func_670(16)==iParam0 || func_670(17)==iParam0){
return 4;
}
if(func_670(13)==iParam0 || func_670(14)==iParam0){
return 5;
}
return 2;
}


void func_748(int iParam0){
switch (iParam0){
case 0:
func_769(iParam0, 0, 8);
func_767(iParam0, 0, 1, 174617);
func_769(iParam0, 1, 15);
func_767(iParam0, 1, 2, 174476);
func_769(iParam0, 2, 0);
func_767(iParam0, 2, 4, 174462);
func_767(iParam0, 2, 3, 174425);
func_769(iParam0, 3, 42);
func_767(iParam0, 3, 4, 174462);
func_769(iParam0, 4, 7);
func_767(iParam0, 4, 5, 174339);
func_769(iParam0, 5, 15);
func_767(iParam0, 5, 6, 174318);
func_769(iParam0, 6, 7);
func_767(iParam0, 6, 7, 174304);
func_758(iParam0, 6, 174290);
func_769(iParam0, 7, 0);
break;
case 1:
func_769(iParam0, 0, 0);
func_767(iParam0, 0, 1, 174227);
func_767(iParam0, 0, 2, 174122);
func_769(iParam0, 1, 16);
func_754(iParam0, 1, 2);
func_769(iParam0, 2, 7);
break;
case 2:
func_753(iParam0);
break;
case 3:
func_769(iParam0, 0, 8);
func_767(iParam0, 0, 1, 173927);
func_769(iParam0, 1, 34);
break;
case 4:
func_769(iParam0, 0, 42);
func_767(iParam0, 0, 1, 173908);
func_769(iParam0, 1, 7);
break;
case 5:
func_769(iParam0, 0, 0);
func_767(iParam0, 0, 1, 173873);
func_767(iParam0, 0, 2, 173856);
func_769(iParam0, 1, 7);
func_769(iParam0, 2, 41);
func_767(iParam0, 0, 1, 173873);
break;
}}


bool func_749(int iParam0, var uParam1){
return iParam0==func_670(13);
}


bool func_750(int iParam0, var uParam1){
if(iParam0==func_670(14)){
return 1;
}
return func_152(func_670(12)) > 4;
}


bool func_751(var uParam0, var uParam1){
return func_69(func_670(0)) >=4;
}


bool func_752(var uParam0, var uParam1){
return func_69(func_670(0)) > 0;
}


void func_753(int iParam0){
func_769(iParam0, 0, 0);
func_754(iParam0, 0, 3);
func_754(iParam0, 0, 2);
func_754(iParam0, 0, 1);
func_769(iParam0, 1, 8);
func_754(iParam0, 1, 3);
func_769(iParam0, 2, 21);
func_754(iParam0, 2, 3);
func_769(iParam0, 3, 7);
}


void func_754(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
iVar0=Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_18;
uVar1=iParam2;
Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/]=uVar1;
Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_18++;
}


bool func_755(int iParam0, var uParam1){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_9==-1){
return 0;
}
if(func_185(func_670(10))==6){
return 1;
}
return func_756(func_670(10))==7;
}

int func_756(int iParam0){
if(func_69(iParam0) !=-1){
return Local_217.f_634[func_70(iParam0) /*154*/].f_1[func_69(iParam0) /*19*/];
}
return -1;
}


bool func_757(int iParam0, var uParam1){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_9 !=-1){
return 0;
}
return func_659() > 3;
}


void func_758(int iParam0, int iParam1, int iParam2){
Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_15=iParam2;
}


void func_759(var uParam0, int iParam1){
TASK::CLEAR_PED_TASKS(iParam1);
}


bool func_760(var uParam0, var uParam1){
return func_659() >=7;
}

int func_761(var uParam0, var uParam1){
if(func_666(2)){
return 1;
}
return 0;
}


bool func_762(var uParam0, var uParam1){
return ((func_659() > 4 && func_763(2)) || Local_1945.f_0 <=1);
}

int func_763(int iParam0){
int iVar0;
if(func_152(func_670(iParam0)) !=4){
return 0;
}
iVar0=func_667(iParam0);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, 0)){
return 1;
}
return 0;
}


bool func_764(var uParam0, var uParam1){
return (func_710(14) || (func_659()==3 && !func_763(1)));
}


bool func_765(var uParam0, var uParam1){
return func_659() > 3;
}

int func_766(var uParam0, var uParam1){
if(func_666(1)){
return 1;
}
return 0;
}


void func_767(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
iVar0=Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_18;
uVar1=iParam2;
Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/]=uVar1;
Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/].f_1=iParam3;
Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/].f_18++;
}


bool func_768(var uParam0, var uParam1){
return func_710(13);
}


void func_769(int iParam0, int iParam1, int iParam2){
Local_217.f_634[iParam0 /*154*/].f_1[iParam1 /*19*/]=iParam2;
Local_217.f_634[iParam0 /*154*/]++;
}


void func_770(var uParam0, var uParam1){
if(bLocal_2044){
func_771(34);
}}


void func_771(int iParam0){
if(func_17(&(Local_2104.f_1231), iParam0)){}}

int func_772(var uParam0){
return 499;
}

int func_773(var uParam0){
if(func_659() >=5 && !func_692(0)){
return 1;
}
return 0;
}


void func_774(){
func_820(0, 4, 177712);
func_819(0, 1, 1);
func_820(1, 41, 177580);
func_819(1, 3, 3);
func_816(1, 2, 177548);
func_820(2, 4, 177108);
func_819(2, 3, 3);
func_816(2, 1, 177086);
func_820(3, 43, 177069);
func_819(3, 4, 4);
func_820(4, 7, 177052);
func_819(4, 5, 5);
func_820(5, 22, 177035);
func_816(5, 10, 176893);
func_816(5, 6, 176861);
func_802(5, 7);
func_802(5, 5);
func_802(5, 9);
func_802(5, 8);
func_800(5, 176790);
func_820(6, 43, 176754);
func_816(6, 5, 176740);
func_816(6, 7, 176555);
func_816(6, 8, 176523);
func_820(7, 24, 176506);
func_816(7, 10, 176893);
func_816(7, 6, 176861);
func_802(7, 5);
func_802(7, 9);
func_802(7, 8);
func_820(8, 25, 176170);
func_816(8, 10, 176893);
func_816(8, 6, 176861);
func_802(8, 7);
func_802(8, 5);
func_802(8, 9);
func_820(9, 23, 175168);
func_816(9, 10, 176893);
func_816(9, 6, 176861);
func_802(9, 7);
func_802(9, 5);
func_802(9, 9);
func_802(9, 8);
func_820(10, 48, 175168);
}


void func_775(){
if(func_783()){
func_776();
}}


void func_776(){
if(!func_782()){
return;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return;
}
func_777();
}


void func_777(){
func_779();
func_778(0);
}


void func_778(bool bParam0){
bool bVar0;
bVar0=NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
Global_1574757=20;
StringCopy(&(Global_1574757.f_1), "", 32);
Global_1574757.f_9=0;
if(bVar0){
Global_1574757.f_10=NETWORK::GET_NETWORK_TIME();
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}
StringCopy(&(Global_1574757.f_12), "", 16);
StringCopy(&(Global_1574757.f_16), "", 64);
StringCopy(&(Global_1574757.f_32), "", 64);
Global_1574757.f_52=0;
Global_1574757.f_53=0;
Global_1574757.f_54=0;
Global_1574757.f_55=-1;
Global_1574757.f_56=0;
Global_1574757.f_59=0;
if(bParam0){
return;
}}


void func_779(){
if(!func_781()){}
if(func_782()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_780();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_780(){
switch (Global_1574757){
case 20:
return;
case 0:
return;
case 1:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
return;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
return;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 6:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 8:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
case 12:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 13:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 14:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 15:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 17:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
return;
case 16:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 19:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 18:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
default:
}}

int func_781(){
if(!func_782()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_780();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_782(){
if(Global_1574757==20){
return 0;
}
return 1;
}

int func_783(){
if(!func_782()){
return 0;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return 0;
}
return 1;
}


void func_784(){
func_785("FXR_OT_FAM_HDEL", 0);
}


void func_785(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_789(sParam0)){
return;
}
func_777();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_788();
func_787(bParam1);
func_786();
}


void func_786(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_787(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_788(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


bool func_789(char* sParam0){
if(!func_782()){
return 0;
}
if(Global_1574757==11){
return func_790(sParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_790(char* sParam0){
if(!func_782()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}


void func_791(){
func_785("FXR_OT_FAM_DEL", 0);
}

int func_792(){
if(func_659()==7 && func_692(0)){
return 1;
}
return 0;
}

int func_793(){
if(func_659()==7 && func_794(1)){
return 1;
}
return 0;
}

int func_794(bool bParam0){
return func_795(bLocal_2046, bParam0);
}

int func_795(bool bParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(func_796(bParam0, iVar0, bParam1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_796(int iParam0, int iParam1, bool bParam2){
if(Local_1933[iParam1 /*7*/].f_4==iParam0){
if(bParam2){
if(func_171(iParam1, 4) || func_797(iParam1, iLocal_2050, 6)){
return 0;
}}
return 1;
}
return 0;
}


bool func_797(int iParam0, int iParam1, int iParam2){
return func_4(&(Local_2109[iParam1 /*229*/].f_3[iParam0 /*3*/]), iParam2);
}


bool func_798(){
return !func_692(0);
}


void func_799(){
func_785("FXR_OT_FAM_ESC", 0);
}


void func_800(int iParam0, int iParam1){
Local_216[iParam0 /*30*/].f_26=iParam1;
}


void func_801(){
PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
}


void func_802(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Local_216[iParam0 /*30*/].f_28;
uVar1=iParam1;
Local_216[iParam0 /*30*/].f_1[iVar0 /*3*/]=uVar1;
Local_216[iParam0 /*30*/].f_28++;
}

int func_803(){
if(func_659()==6 && func_692(0)){
return 1;
}
return 0;
}

int func_804(){
if(func_805(0)){
return 1;
}
return 0;
}

int func_805(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(!func_806(iVar0, bParam0)){
return 0;
}
iVar0++;
}
return 1;
}

int func_806(int iParam0, bool bParam1){
if(func_171(iParam0, 4) || func_171(iParam0, 3)){
return 1;
}
if(bParam1){
if(func_797(iParam0, iLocal_2050, 6) || func_797(iParam0, iLocal_2050, 9)){
return 1;
}}
return 0;
}


void func_807(){
func_785("FXR_OT_FAM_STL", 0);
}


void func_808(){
func_785("FXR_OT_FAM_TAK", 0);
}


void func_809(){
func_785("FXR_OT_FAM_INT", 0);
}

int func_810(){
if(!func_763(1)){
return 1;
}
return 0;
}


void func_811(){
func_812("FXR_OT_FAM_DRV", func_815(), 12, 0);
}


void func_812(char* sParam0, char* sParam1, int iParam2, bool bParam3){
if(func_813(sParam0, sParam1, bParam3, iParam2)){
Global_1574757=19;
Global_1574757.f_56=iParam2;
}}

int func_813(char* sParam0, char* sParam1, bool bParam2, var uParam3){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(func_814(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
func_777();
Global_1574757=3;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=uParam3;
Global_1574757.f_56=uParam3;
func_788();
func_787(bParam2);
func_786();
return 1;
}


bool func_814(char* sParam0, char* sParam1){
if(!func_782()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(!MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12))){
return 0;
}
return MISC::GET_HASH_KEY(sParam1)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}


char* func_815(){
switch (func_651()){
case 9:
return "FXR_LOC_CYPR";
case 10:
return "FXR_LOC_LAMESA";
default:
}
return "";
}


void func_816(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
iVar0=Local_216[iParam0 /*30*/].f_28;
uVar1=iParam1;
Local_216[iParam0 /*30*/].f_1[iVar0 /*3*/]=uVar1;
Local_216[iParam0 /*30*/].f_1[iVar0 /*3*/].f_1=iParam2;
Local_216[iParam0 /*30*/].f_28++;
}

int func_817(){
if(func_659() >=2 && func_763(1)){
return 1;
}
return 0;
}


void func_818(){
func_785("FXR_OT_FAM_ENT", 0);
}


void func_819(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
var uVar2;
iVar0=Local_216[iParam0 /*30*/].f_28;
uVar1=iParam1;
uVar2=iParam2;
Local_216[iParam0 /*30*/].f_1[iVar0 /*3*/]=uVar1;
Local_216[iParam0 /*30*/].f_1[iVar0 /*3*/].f_2=uVar2;
Local_216[iParam0 /*30*/].f_28++;
}


void func_820(int iParam0, int iParam1, int iParam2){
Local_216[iParam0 /*30*/]=iParam1;
Local_216[iParam0 /*30*/].f_29=iParam2;
iLocal_2058++;
}


void func_821(){
func_812("FXR_GOTO", func_822(), 12, 0);
}


char* func_822(){
switch (func_651()){
case 9:
return "FXR_LOC_CHMB";
case 10:
return "FXR_LOC_STRW";
default:
}
return "";
}


void func_823(){
func_832(0, 4);
func_831(0, 1);
func_832(1, 41);
func_829(1, 2, 178153);
func_832(2, 4);
func_831(2, 3);
func_832(3, 43);
func_829(3, 4, 178019);
func_832(4, 7);
func_831(4, 5);
func_832(5, 22);
func_831(5, 6);
func_832(6, 43);
func_825(6, 178001);
func_829(6, 7, 177920);
func_832(7, 24);
func_831(7, 8);
func_832(8, 48);
}

int func_824(){
if(func_13(&(Local_2104.f_1219), 120000, 0)){
func_28(&(Local_2104.f_1219));
return 1;
}
if(Local_1933[0 /*7*/].f_3 >=1500f){
return 1;
}
return 0;
}


void func_825(int iParam0, int iParam1){
Local_215[iParam0 /*29*/].f_26=iParam1;
}


void func_826(){
func_28(&(Local_2104.f_1219));
}

int func_827(){
return func_828();
}

int func_828(){
int iVar0;
iVar0=0;
while (iVar0 < Local_171.f_38.f_632){
if(func_88(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}


void func_829(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
iVar0=Local_215[iParam0 /*29*/].f_28;
uVar1=iParam1;
Local_215[iParam0 /*29*/].f_1[iVar0 /*3*/]=uVar1;
Local_215[iParam0 /*29*/].f_1[iVar0 /*3*/].f_1=iParam2;
Local_215[iParam0 /*29*/].f_28++;
}


bool func_830(){
return func_167(func_670(1), 17);
}


void func_831(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Local_215[iParam0 /*29*/].f_28;
uVar1=iParam1;
Local_215[iParam0 /*29*/].f_1[iVar0 /*3*/]=uVar1;
Local_215[iParam0 /*29*/].f_28++;
}


void func_832(int iParam0, int iParam1){
Local_215[iParam0 /*29*/]=iParam1;
iLocal_2057++;
}


void func_833(){
PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
}


void func_834(){
bLocal_2138=false;
if(!func_693(func_670(0), 0)){
if((func_659()==2 && func_671(1)) || func_794(1)){
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
bLocal_2138=true;
}}
if(!bLocal_2138 && func_680(0)){
func_839(0);
}
if(bLocal_2055 && func_659()==3){
if(!HUD::DOES_BLIP_EXIST(uLocal_2136)){
uLocal_2136=HUD::ADD_BLIP_FOR_RADIUS(func_720(), 50f);
func_837(&uLocal_2136, 6);
HUD::SET_BLIP_ALPHA(uLocal_2136, 80);
HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_2136, true);
}}elseif(HUD::DOES_BLIP_EXIST(uLocal_2136)){
HUD::REMOVE_BLIP(&uLocal_2136);
}
if(func_836()){
func_835(bLocal_2046, func_86(), 0, 0);
iLocal_2137=1;
}}


void func_835(bool bParam0, int iParam1, int iParam2, int iParam3){
if(bParam0 !=func_77() && func_9(bParam0, 1, 1)){
func_75(Local_2056.f_0, func_74(bParam0), iParam1, iParam2, iParam3);
}}

int func_836(){
if(iLocal_2137 || func_659() !=6){
return 0;
}
if(func_42(Local_2104.f_1219, 60000, 0) || Local_1933[0 /*7*/].f_3 > 700f){
return 1;
}
return 0;
}


void func_837(var uParam0, int iParam1){
int iVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
iVar0=func_838(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
}}

int func_838(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
switch (iParam0){
case 1:
return 4;
case 0:
return 4;
case 6:
return 59;
case 18:
return 2;
case 13:
return 5;
case 116:
return 38;
case 28:
return 6;
case 29:
return 7;
case 30:
return 8;
case 31:
return 9;
case 32:
return 10;
case 33:
return 11;
case 34:
return 12;
case 35:
return 13;
case 36:
return 14;
case 37:
return 15;
case 38:
return 16;
case 39:
return 17;
case 40:
return 18;
case 41:
return 19;
case 42:
return 20;
case 43:
return 21;
case 44:
return 22;
case 45:
return 23;
case 46:
return 24;
case 47:
return 25;
case 48:
return 26;
case 49:
return 27;
case 50:
return 28;
case 51:
return 29;
case 52:
return 30;
case 53:
return 31;
case 54:
return 32;
case 55:
return 33;
case 56:
return 34;
case 57:
return 35;
case 58:
return 36;
case 59:
return 37;
case 9:
return 57;
case 10:
return 53;
case 118:
return 57;
case 14:
return 56;
case 3:
return 55;
case 21:
return 50;
case 15:
return 51;
case 20:
return 52;
case 11:
return 54;
case 23:
return 58;
case 12:
return 60;
case 24:
return 61;
case 4:
return 62;
default:
}
HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
return 0;
}


void func_839(int iParam0){
if(func_680(iParam0)){
HUD::CLEAR_HELP(1);
}}


void func_840(){
int iVar0;
iVar0=Local_171.f_38.f_1[func_670(0) /*21*/].f_14;
Local_171.f_38.f_1[func_670(10) /*21*/].f_14=iVar0;
Local_171.f_38.f_1[func_670(11) /*21*/].f_14=iVar0;
Local_171.f_38.f_632[iVar0 /*10*/]=Global_1837209;
func_844(func_670(0), 18);
func_844(func_670(0), 12);
func_842();
func_841(func_670(9), 17);
func_841(func_670(12), 18);
func_841(func_670(1), 0);
func_841(func_670(2), 3);
func_615(13);
func_615(11);
Local_171.f_1578.f_6=0;
Local_171.f_1578.f_7=0;
}


void func_841(bool bParam0, int iParam1){
if(func_17(&(Local_171.f_891.f_1[bParam0 /*15*/]), iParam1)){}}


void func_842(){
func_843(func_670(3), 10);
func_843(func_670(4), 10);
func_843(func_670(5), 10);
func_843(func_670(6), 10);
Local_171.f_1179.f_1[func_670(3) /*12*/].f_8={
0f, 0f, -21.155f 
};
Local_171.f_1179.f_1[func_670(4) /*12*/].f_8={
0f, 0f, 45f 
};
Local_171.f_1179.f_1[func_670(5) /*12*/].f_8={
0f, 0f, 0f 
};
Local_171.f_1179.f_1[func_670(6) /*12*/].f_8={
0f, 0f, -91.886f 
};
Local_171.f_1179.f_362[0 /*6*/]=func_670(3);
Local_171.f_1179.f_362[0 /*6*/].f_2=func_670(2);
Local_171.f_1179.f_362[0 /*6*/].f_1=2;
Local_171.f_1179.f_362[0 /*6*/].f_3={
-0.5f, -0.5f, -0.27f 
};
Local_171.f_1179.f_362[1 /*6*/]=func_670(4);
Local_171.f_1179.f_362[1 /*6*/].f_2=func_670(2);
Local_171.f_1179.f_362[1 /*6*/].f_1=2;
Local_171.f_1179.f_362[1 /*6*/].f_3={
0.7f, -1.2f, -0.27f 
};
Local_171.f_1179.f_362[2 /*6*/]=func_670(5);
Local_171.f_1179.f_362[2 /*6*/].f_2=func_670(2);
Local_171.f_1179.f_362[2 /*6*/].f_1=2;
Local_171.f_1179.f_362[2 /*6*/].f_3={
0.4f, -0.57f, -0.27f 
};
Local_171.f_1179.f_362[3 /*6*/]=func_670(6);
Local_171.f_1179.f_362[3 /*6*/].f_2=func_670(2);
Local_171.f_1179.f_362[3 /*6*/].f_1=2;
Local_171.f_1179.f_362[3 /*6*/].f_3={
-0.36f, -1.2f, -0.27f 
};
}


void func_843(bool bParam0, int iParam1){
if(func_17(&(Local_171.f_1179.f_1[bParam0 /*12*/]), iParam1)){}}


void func_844(bool bParam0, int iParam1){
if(func_17(&(Local_171.f_38.f_1[bParam0 /*21*/]), iParam1)){}}


void func_845(){
Local_213.f_13=197324;
Local_213.f_10=197141;
Local_213.f_11=196861;
Local_213.f_11.f_1=195638;
Local_213.f_3.f_1=195336;
Local_213.f_3=195282;
Local_213.f_166.f_187=195239;
Local_213.f_166=194646;
Local_213.f_166.f_1=194566;
Local_213.f_166.f_193=192799;
Local_213.f_166.f_192=192099;
Local_213.f_166.f_150=191930;
Local_213.f_166.f_150.f_5=191855;
Local_213.f_166.f_150.f_6=191842;
Local_213.f_166.f_150.f_4=191833;
Local_213.f_166.f_150.f_13=191748;
Local_213.f_166.f_200=191669;
Local_213.f_166.f_205=191625;
Local_213.f_166.f_178=191525;
Local_213.f_166.f_201=191199;
Local_213.f_166.f_207=191152;
Local_213.f_166.f_181=191138;
Local_213.f_166.f_181.f_1=190796;
Local_213.f_166.f_181.f_2=190556;
Local_213.f_166.f_2.f_59.f_1=190432;
Local_213.f_166.f_2.f_59.f_4=190389;
Local_213.f_166.f_2.f_59=190380;
Local_213.f_166.f_2.f_59.f_2=190371;
Local_213.f_166.f_2.f_59.f_3=190362;
Local_213.f_166.f_2.f_5.f_2=190353;
Local_213.f_166.f_2.f_5.f_3=190344;
Local_213.f_166.f_2.f_5=190331;
Local_213.f_166.f_2.f_5.f_1=190319;
Local_213.f_166.f_2.f_25=190272;
Local_213.f_166.f_2.f_21.f_2=190220;
Local_213.f_166.f_2=190128;
Local_213.f_166.f_2.f_1=189645;
Local_213.f_166.f_2.f_2=189552;
Local_213.f_166.f_2.f_4=189521;
Local_213.f_166.f_2.f_16.f_1=189492;
Local_213.f_166.f_2.f_16=189463;
Local_213.f_166.f_2.f_16.f_2=189434;
Local_213.f_166.f_2.f_28=189411;
Local_213.f_166.f_2.f_28.f_1=189399;
Local_213.f_166.f_2.f_28.f_17=189386;
Local_213.f_166.f_2.f_28.f_18=189376;
Local_213.f_166.f_2.f_28.f_19=189330;
Local_213.f_838=189321;
Local_213.f_838.f_4=189312;
Local_213.f_124=189269;
Local_213.f_124.f_4=189259;
Local_213.f_124.f_13=189247;
Local_213.f_124.f_36=189233;
Local_213.f_777=189131;
Local_213.f_777.f_1=189004;
Local_213.f_377.f_23=188978;
Local_213.f_377.f_45=188688;
Local_213.f_377.f_43=188604;
Local_213.f_377.f_44=186823;
Local_213.f_377.f_54=186719;
Local_213.f_695.f_13=186172;
Local_213.f_695.f_2=186146;
Local_213.f_695.f_11=186136;
Local_213.f_695.f_9=186104;
Local_213.f_695.f_12=185698;
Local_213.f_695.f_14=185494;
Local_213.f_695.f_10=185146;
Local_213.f_695.f_7=184855;
Local_213.f_695.f_15=184506;
Local_213.f_53.f_2.f_1=184460;
Local_213.f_53.f_2.f_2=184414;
Local_213.f_15.f_27=184397;
Local_213.f_112.f_7=184307;
Local_213.f_112.f_8=184294;
Local_213.f_112=184280;
Local_213.f_772.f_2=184261;
Local_213.f_625=184248;
Local_213.f_53=184200;
Local_213.f_15.f_4=184188;
Local_213.f_661=184174;
Local_213.f_661.f_8=184114;
Local_213.f_661.f_3=184105;
Local_213.f_661.f_2=184085;
Local_213.f_74.f_7=184026;
Local_213.f_74.f_6=184012;
Local_213.f_74.f_11=184003;
Local_213.f_475.f_8=183938;
Local_213.f_15.f_27=183909;
Local_213.f_629=183895;
Local_213.f_629.f_9=183883;
Local_213.f_629.f_10=183768;
Local_213.f_629.f_8=183757;
Local_213.f_629.f_1=183673;
Local_213.f_629.f_2=183611;
Local_213.f_629.f_12=183495;
Local_213.f_629.f_13=183429;
Local_213.f_629.f_16=181857;
Local_213.f_629.f_28=181789;
Local_213.f_629.f_28.f_1=181729;
Local_213.f_629.f_28.f_2=181716;
Local_213.f_629.f_7=181664;
Local_213.f_96=181633;
Local_213.f_96.f_2=181624;
Local_213.f_96.f_3=181615;
Local_213.f_96.f_1=181567;
Local_213.f_15.f_13=181461;
Local_213.f_104.f_3.f_1=166362;
Local_213.f_104.f_3=181327;
}

int func_846(int iParam0){
switch (iParam0){
case -1:
if(func_847() >=0){
return 0;
}
break;
case 0:
if(func_847() >=1){
return 9;
}
break;
case 9:
if(func_847() >=3){
return 1;
}
break;
case 1:
if(func_847() >=4){
return 6;
}
break;
case 6:
if(func_847() >=5){
return 3;
}
break;
}
return -1;
}

int func_847(){
return func_661();
}

int func_848(){
if(func_849()==1 && !func_693(func_670(0), 0)){
if(iLocal_2053 !=0 && func_672(iLocal_2048, 0)==-1){
return vdist(Local_2051, Local_171.f_891.f_1[func_670(1) /*15*/].f_4) <=10f;
}}
return 0;
}

int func_849(){
return func_22();
}

int func_850(var uParam0){
if(func_849()==1 && !func_693(func_670(0), 0)){
return !func_13(&Local_114, 3000, 0);
}
return 0;
}

int func_851(var uParam0){
return 0;
}

int func_852(var uParam0){
return 1;
}

int func_853(int iParam0){
switch (iParam0){
case 0:
return func_849()==1;
default:
}
return 0;
}


var func__854(int iParam0){
return round(ENTITY::GET_ANIM_DURATION(Local_171.f_2243.f_1[iParam0 /*63*/].f_7, Local_171.f_2243.f_1[iParam0 /*63*/].f_25[0 /*7*/].f_4)) * 1000;
}


float func_855(var uParam0, var uParam1){
return 40f;
}


Vector3 func__856(var uParam0, var uParam1){
switch (func_651()){
case 11:
return -10.7665f, 0f, -100.8997f;
case 12:
return -15.6298f, 0f, -102.2398f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__857(var uParam0, var uParam1){
switch (func_651()){
case 11:
return 265.1957f, -1962.592f, 23.6756f;
case 12:
return 267.7659f, -1761.173f, 29.8568f;
default:
}
return 0f, 0f, 0f;
}


void func_858(int iParam0){
switch (iParam0){
case 0:
if(CAM::IS_SCREEN_FADED_OUT() && !func_871(1)){
if(func_860()==-1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Garage_Door_Open", "GTAO_Script_Doors_Faded_Screen_Sounds", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "Garage_Door_Close", "GTAO_Script_Doors_Faded_Screen_Sounds", 1);
}
func_859(1);
}
break;
}}


void func_859(int iParam0){
if(func_17(&uLocal_2070, iParam0)){}}

int func_860(){
int iVar0;
iVar0=0;
while (iVar0 < Local_171.f_1748){
if(Local_171.f_1748.f_1[iVar0 /*2*/] !=-1){
if(func_151(Local_171.f_1748.f_1[iVar0 /*2*/])){
if(func_861()==func_139(Local_171.f_1748.f_1[iVar0 /*2*/])){
return Local_171.f_1748.f_1[iVar0 /*2*/];
}}elseif(INTERIOR::IS_VALID_INTERIOR(Local_2037[iVar0 /*3*/]) && Global_100733.f_385==Local_2037[iVar0 /*3*/]){
return Local_171.f_1748.f_1[iVar0 /*2*/];
}}
iVar0++;
}
return -1;
}

int func_861(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
iVar1=func_862(iVar0);
if(iVar1 !=-1){
return iVar1;
}
if(Global_100733.f_385 !=0){
iVar2=0;
while (iVar2 < 43){
iVar3=iVar2;
func_147(iVar3);
if(Global_1955050[iVar2]==Global_100733.f_385){
return iVar3;
}
iVar2++;
}}}
return -1;
}

int func_862(int iParam0){
if(func_869(iParam0)){
return 15;
}
if(func_867(iParam0)){
return 28;
}
if(func_865(iParam0)){
return 36;
}
if(func_864(iParam0)){
return 23;
}
if(func_863(iParam0)){
return 33;
}
return -1;
}

int func_863(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0)){
return 1;
}}
return 0;
}

int func_864(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <=80f){
if((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0)){
return 1;
}}}
return 0;
}


bool func_865(int iParam0){
return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, 0, 1, 0)) || func_866());
}

int func_866(){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(vdist2(func_104(PLAYER::PLAYER_ID()), 3042.596f, -4667.915f, 34.26143f) <=25600f){
if(CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.915f, 34.26143f, 50f)){
return 1;
}}}
return 0;
}


bool func_867(int iParam0){
return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_868());
}

int func_868(){
struct<3> Var0;
if(!CAM::IS_SCREEN_FADED_OUT()){
Var0={
-2073.541f, -1021.104f, 14.99213f 
};
if(vdist2(func_104(PLAYER::PLAYER_ID()), Var0) <=25600f){
if(CAM::IS_SPHERE_VISIBLE(Var0, 60f)){
return 1;
}}}
return 0;
}


bool func_869(int iParam0){
return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_870());
}

int func_870(){
struct<3> Var0;
if(!CAM::IS_SCREEN_FADED_OUT()){
Var0={
Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) 
};
if(vdist2(func_104(PLAYER::PLAYER_ID()), Var0) <=25600f){
if(CAM::IS_SPHERE_VISIBLE(Var0, 50f)){
return 1;
}}}
return 0;
}


bool func_871(int iParam0){
return func_4(&uLocal_2070, iParam0);
}


bool func_872(int iParam0){
switch (iParam0){
case 0:
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > 0.6f;
default:
}
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > 0.99f;
}


bool func_873(int iParam0){
float fVar0;
float fVar1;
switch (iParam0){
case 0:
fVar0=(ENTITY::GET_ANIM_DURATION(Local_171.f_2243.f_1[iParam0 /*63*/].f_7, Local_171.f_2243.f_1[iParam0 /*63*/].f_25[0 /*7*/].f_4) * 1000f);
fVar1=((fVar0 * 0.6f) - IntToFloat(Local_171.f_2243.f_1[iParam0 /*63*/].f_13));
break;
}
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > (fVar1 / fVar0);
}


float func_874(int iParam0){
switch (iParam0){
case 0:
switch (func_651()){
case 11:
return -33.84f;
case 12:
return -46.08f;
default:
}
break;
}
return 0f;
}


Vector3 func__875(int iParam0){
switch (iParam0){
case 0:
switch (func_651()){
case 11:
return 268.4696f, -1962.767f, 22.071f;
case 12:
return 270.9097f, -1761.312f, 27.915f;
default:
}
break;
}
return 0f, 0f, 0f;
}


bool func_876(var uParam0, var uParam1){
return bLocal_2046;
}

int func_877(int iParam0){
if((func_881() && func_879(func_880())) && func_878(func_880())==iParam0){
return 1;
}
return 0;
}

int func_878(int iParam0){
return Local_171.f_2846[iParam0 /*42*/].f_5;
}


bool func_879(int iParam0){
return Local_171.f_2846[iParam0 /*42*/].f_5 !=-1;
}

int func_880(){
return Local_2035.f_0;
}


bool func_881(){
return Local_2035.f_0 !=-1;
}


bool func_882(var uParam0){
return func_883();
}


bool func_883(){
return func_849() >=4;
}


bool func_884(){
return func_885();
}


bool func_885(){
return func_168(iLocal_2050, 15);
}

int func_886(int iParam0){
if(fLocal_2074 !=-1f && fLocal_2074 <=Local_171.f_1588.f_1[iParam0 /*11*/].f_3){
if(func_794(1) || iParam0 !=1){
return 1;
}}
return 0;
}

int func_887(){
return 0;
}


bool func_888(){
return func_2497(17);
}

int func_889(){
if((func_849() >=4 && func_849() < 6) && !func_890()){
return 1;
}
return 0;
}


bool func_890(){
return func_168(iLocal_2050, 2);
}


bool func_891(bool bParam0, var uParam1){
return func_168(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 15);
}

int func_892(){
return 4;
}

int func_893(){
return func_894(0);
}

int func_894(bool bParam0){
if(func_849() > 3){
if(bParam0){
func_14(&Local_2114, 0, 0);
}
return func_42(Local_2114, 5000, 0);
}
return 0;
}


bool func_895(){
return func_849()==3;
}


bool func_896(){
return func_890();
}

int func_897(){
switch (func_849()){
case 2:
return !func_686(3);
case 3:
return !func_686(5);
default:
}
return 0;
}


bool func_898(){
return !func_890();
}


Vector3 func__899(var uParam0){
return Local_171.f_2846[0 /*42*/];
}


bool func_900(){
return func_849() >=6;
}


float func_901(){
return 50f;
}


Vector3 func__902(){
return func_903();
}


Vector3 func__903(){
switch (func_651()){
case 11:
return 103.7674f, -1939.736f, 19.80371f;
case 12:
return 172.9701f, -1726.198f, 28.29168f;
default:
}
return Local_171.f_1588.f_1[1 /*11*/];
}


bool func_904(){
return func_168(iLocal_2050, 15);
}


char* func_905(var uParam0){
switch (*uParam0){
case 0:
return "FXR_TIC_BA1R";
case 1:
return "FXR_TIC_BA2R";
default:
}
return "";
}


char* func_906(var uParam0){
switch (*uParam0){
case 0:
return "FXR_TIC_BA1L";
case 1:
return "FXR_TIC_BA2L";
default:
}
return "";
}

int func_907(int iParam0, var uParam1){
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
return func_670(0);
default:
}
switch (func_651()){
case 11:
switch (iParam0){
case 11:
return func_670(3);
case 12:
return func_670(4);
case 13:
return func_670(3);
case 14:
return func_670(4);
case 15:
return func_670(4);
case 16:
return func_670(3);
case 17:
return func_670(4);
case 18:
return func_670(3);
default:
}
break;
case 12:
switch (iParam0){
case 11:
return func_670(4);
case 12:
return func_670(3);
case 13:
return func_670(4);
case 14:
return func_670(3);
case 15:
return func_670(4);
case 16:
return func_670(3);
case 17:
return func_670(4);
case 18:
return func_670(3);
default:
}
break;
}
return -1;
}

int func_908(int iParam0, var uParam1){
switch (iParam0){
case 0:
return 2;
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
return 2;
default:
}
switch (func_651()){
case 11:
switch (iParam0){
case 11:
return 2;
case 12:
return 3;
case 13:
return 2;
case 14:
return 3;
case 15:
return 3;
case 16:
return 2;
case 17:
return 3;
case 18:
return 2;
default:
}
break;
case 12:
switch (iParam0){
case 11:
return 3;
case 12:
return 2;
case 13:
return 3;
case 14:
return 2;
case 15:
return 3;
case 16:
return 2;
case 17:
return 3;
case 18:
return 2;
default:
}
break;
}
return 2;
}


char* func_909(int iParam0, var uParam1){
switch (iParam0){
case 0:
return "FIX_FRANKLIN";
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
return "FIX_FAML1";
default:
}
switch (func_651()){
case 11:
switch (iParam0){
case 11:
return "FIX_FAML1";
case 12:
return "FIX_BALLASL1";
case 13:
return "FIX_FAML1";
case 14:
return "FIX_BALLASL1";
case 15:
return "FIX_BALLASL1";
case 16:
return "FIX_FAML1";
case 17:
return "FIX_BALLASL1";
case 18:
return "FIX_FAML1";
default:
}
break;
case 12:
switch (iParam0){
case 11:
return "FIX_BALLASL1";
case 12:
return "FIX_FAML1";
case 13:
return "FIX_BALLASL1";
case 14:
return "FIX_FAML1";
case 15:
return "FIX_BALLASL1";
case 16:
return "FIX_FAML1";
case 17:
return "FIX_BALLASL1";
case 18:
return "FIX_FAML1";
default:
}
break;
}
return "FIX_FRANKLIN";
}

int func_910(int iParam0){
switch (iParam0){
case 1:
return 0;
case 2:
return 3000;
case 3:
return 2000;
case 4:
return 3500;
case 5:
return 0;
case 6:
return 0;
case 7:
return 0;
case 8:
return 3000;
case 9:
return 0;
case 10:
return 0;
case 11:
return 0;
case 12:
return 0;
case 13:
return 0;
case 14:
return 0;
case 15:
return 0;
case 16:
return 0;
case 17:
return 0;
case 18:
return 0;
default:
}
return 0;
}

int func_911(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return func_710(13);
case 2:
return func_686(1);
case 3:
return ((func_686(2) && func_849()==2) && func_913(0));
case 4:
return (func_686(3) && func_913(0));
case 5:
return func_849()==3;
case 6:
return (func_849() >=3 && PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_2046) > 0);
case 7:
return func_894(0);
case 8:
return func_69(func_670(2))==2;
case 9:
return func_710(14);
case 10:
return (func_686(9) && func_710(15));
case 11:
return (func_912() && (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN()));
case 12:
return func_686(11);
case 13:
return func_686(12);
case 14:
return func_686(13);
case 15:
return func_686(14);
case 16:
return func_686(15);
case 17:
return func_686(16);
case 18:
return func_686(17);
default:
}
return 0;
}


bool func_912(){
return func_3(9);
}


bool func_913(int iParam0){
return Local_1933[iParam0 /*7*/].f_4 !=func_77();
}


char* func_914(int iParam0){
switch (iParam0){
case 0:
return "FXFRAUD";
default:
}
return "FXBAAUD";
}

int func_915(var uParam0){
return 175;
}

int func_916(int iParam0){
switch (iParam0){
case 0:
return 0;
default:
}
return 1;
}


char* func_917(int iParam0){
switch (func_651()){
case 11:
switch (iParam0){
case 0:
return "FXFR_D3B_1A";
case 1:
return "FXBA_SHOUT1";
case 2:
return "FXBA_PICK1";
case 3:
return "FXBA_LOC1";
case 4:
return "FXBA_LOCJ2";
case 5:
return "FXBA_ARRIVE1";
case 6:
return "FXBA_COPS1";
case 7:
return "FXBA_BLFLEE1";
case 8:
return "FXBA_CHASE";
case 9:
return "FXBA_BLEED1";
case 10:
return "FXBA_GARAGE1";
case 11:
return "FXBA_INTIM1A";
case 12:
return "FXBA_INTIM1B";
case 13:
return "FXBA_INTIM1C";
case 14:
return "FXBA_INTIM1D";
case 15:
return "FXBA_INTIM1F";
case 16:
return "FXBA_INTIM1G";
case 17:
return "FXBA_INTIM1H";
case 18:
return "FXBA_INTIM1I";
default:
}
break;
case 12:
switch (iParam0){
case 0:
return "FXFR_D3B_1B";
case 1:
return "FXBA_SHOUT2";
case 2:
return "FXBA_PICK1";
case 3:
return "FXBA_LOC2";
case 4:
return "FXBA_LOCJ2";
case 5:
return "FXBA_ARRIVE2";
case 6:
return "FXBA_COPS2";
case 7:
return "FXBA_BLFLEE2";
case 8:
return "FXBA_CHASE";
case 9:
return "FXBA_BLEED2";
case 10:
return "FXBA_GARAGE2";
case 11:
return "FXBA_INTIM2A";
case 12:
return "FXBA_INTIM2B";
case 13:
return "FXBA_INTIM2C";
case 14:
return "FXBA_INTIM2D";
case 15:
return "FXBA_INTIM2E";
case 16:
return "FXBA_INTIM2F";
case 17:
return "FXBA_INTIM2G";
case 18:
return "FXBA_INTIM2H";
default:
}
break;
}
return "";
}

int func_918(int iParam0){
if(func_167(iParam0, 15)){
if(func_919() && func_185(func_670(6)) < 3){
return 0;
}}
return 1;
}

int func_919(){
if(func_849()==3){
if(func_13(&(Local_2104.f_1234.f_13), 90000, 0)){
return 1;
}
if(Local_2104.f_1087.f_23 >=4){
return 1;
}}
return 0;
}

int func_920(int iParam0, var uParam1){
if(iParam0==func_670(10)){
uParam1->f_66=joaat("chino2");
uParam1->f_5=146;
uParam1->f_6=25;
uParam1->f_7=145;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_69=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[1]=1;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=16;
uParam1->f_9[24]=4;
uParam1->f_9[37]=6;
uParam1->f_9[39]=2;
uParam1->f_9[40]=2;
uParam1->f_9[45]=2;
uParam1->f_9[48]=9;
return 1;
}elseif(iParam0==func_670(11)){
uParam1->f_66=joaat("peyote3");
*uParam1=3;
uParam1->f_5=145;
uParam1->f_6=0;
uParam1->f_7=74;
uParam1->f_8=141;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=8;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[4]=1;
uParam1->f_9[6]=3;
uParam1->f_9[7]=1;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=36;
uParam1->f_9[24]=4;
uParam1->f_9[33]=16;
uParam1->f_9[37]=3;
uParam1->f_9[39]=5;
uParam1->f_9[43]=1;
uParam1->f_9[45]=2;
uParam1->f_9[48]=2;
return 1;
}elseif(iParam0==func_670(12)){
uParam1->f_66=joaat("buccaneer2");
uParam1->f_5=146;
uParam1->f_6=111;
uParam1->f_7=145;
uParam1->f_8=90;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=8;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 3);
uParam1->f_9[4]=1;
uParam1->f_9[7]=2;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=3;
uParam1->f_9[24]=4;
uParam1->f_9[35]=6;
uParam1->f_9[37]=2;
uParam1->f_9[39]=4;
uParam1->f_9[40]=1;
uParam1->f_9[45]=1;
uParam1->f_9[48]=3;
return 1;
}elseif(Local_171.f_891.f_1[iParam0 /*15*/].f_3==joaat("baller")){
uParam1->f_66=joaat("baller");
uParam1->f_5=145;
uParam1->f_6=0;
uParam1->f_7=74;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 24);
uParam1->f_9[1]=1;
uParam1->f_9[2]=1;
uParam1->f_9[3]=1;
uParam1->f_9[4]=1;
uParam1->f_9[11]=2;
uParam1->f_9[12]=1;
uParam1->f_9[13]=1;
uParam1->f_9[15]=3;
uParam1->f_9[23]=34;
return 1;
}elseif(iParam0==func_670(1)){
uParam1->f_66=joaat("cavalcade2");
StringCopy(&(uParam1->f_1), "63DYR448", 16);
uParam1->f_5=0;
uParam1->f_6=6;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=1;
uParam1->f_69=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 24);
MISC::SET_BIT(&(uParam1->f_77), 9);
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=1;
uParam1->f_9[15]=4;
uParam1->f_9[22]=1;
uParam1->f_9[23]=23;
return 1;
}elseif(iParam0==func_670(7)){
uParam1->f_66=joaat("primo2");
uParam1->f_5=0;
uParam1->f_6=50;
uParam1->f_7=53;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_69=8;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=1;
uParam1->f_9[1]=2;
uParam1->f_9[2]=1;
uParam1->f_9[3]=1;
uParam1->f_9[4]=1;
uParam1->f_9[6]=2;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=1;
uParam1->f_9[24]=1;
uParam1->f_9[37]=2;
uParam1->f_9[39]=5;
uParam1->f_9[40]=5;
uParam1->f_9[43]=2;
uParam1->f_9[44]=2;
return 1;
}elseif(iParam0==func_670(8)){
uParam1->f_66=joaat("manana2");
*uParam1=2;
uParam1->f_5=50;
uParam1->f_6=0;
uParam1->f_7=53;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=8;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), false);
uParam1->f_9[1]=3;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=38;
uParam1->f_9[24]=4;
uParam1->f_9[33]=8;
uParam1->f_9[37]=1;
uParam1->f_9[39]=4;
uParam1->f_9[40]=3;
uParam1->f_9[45]=1;
uParam1->f_9[48]=1;
return 1;
}elseif(iParam0==func_670(9)){
uParam1->f_66=joaat("voodoo2");
uParam1->f_5=50;
uParam1->f_6=89;
uParam1->f_7=53;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=9;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[1]=2;
uParam1->f_9[4]=1;
uParam1->f_9[6]=3;
uParam1->f_9[11]=2;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[23]=13;
uParam1->f_9[24]=5;
uParam1->f_9[28]=6;
uParam1->f_9[37]=1;
uParam1->f_9[38]=5;
uParam1->f_9[39]=2;
uParam1->f_9[40]=3;
uParam1->f_9[43]=1;
uParam1->f_9[44]=8;
uParam1->f_9[45]=2;
uParam1->f_9[48]=1;
return 1;
}
return 0;
}


void func_921(int iParam0, int iParam1){
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 1, 1, 0);
if(iParam0==func_670(5)){
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iParam1, 1, 1);
VEHICLE::SET_VEHICLE_LIVERY(iParam1, 0);
VEHICLE::SET_VEHICLE_SIREN(iParam1, 1);
}elseif(iParam0==func_670(1)){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 1, 3);
}
VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 2);
ENTITY::SET_ENTITY_LIGHTS(iParam1, 1);
}


void func_922(int iParam0, int iParam1, bool bParam2, var uParam3, var uParam4){
if(bParam2){
if(iParam0==func_670(1)){
if((func_704(iParam0, iLocal_2050, 9) && iLocal_2032==9) && !func_710(16)){
if(func_709(Local_2104.f_773[iParam0 /*8*/])){
AUDIO::SET_VEH_RADIO_STATION(iParam1, "RADIO_09_HIPHOP_OLD");
func_708(12);
}}}elseif(iParam0==func_670(5)){
if(!func_710(6) && func_923(iParam1, func_924(), 10f, 1)){
func_708(4);
}
if(!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iParam1)){
if(func_709(Local_2104.f_773[iParam0 /*8*/])){
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iParam1, 1, 1);
}}}}}


bool func_923(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}


Vector3 func__924(){
switch (func_651()){
case 11:
return 91.6619f, -1901.453f, 54.588f;
case 12:
return 175.5878f, -1697.185f, 59.211f;
default:
}
return Local_171.f_891.f_1[func_670(5) /*15*/].f_4;
}

int func_925(int iParam0){
if(iParam0==func_670(5)){
return func_919();
}
return 1;
}


bool func_926(int iParam0, struct<3> Param1){
if(((iParam0==1 && func_890()) && func_927()) && func_13(&uLocal_2127, 3000, 0)){
return 1;
}
return ENTITY::IS_ENTITY_AT_COORD(iLocal_2048, Param1, 1f, 1f, 2f, 0, 1, 0);
}


bool func_927(){
return func_686(func_928());
}

int func_928(){
switch (func_651()){
case 11:
return 18;
case 12:
return 18;
default:
}
return 18;
}

int func_929(int iParam0){
switch (iParam0){
case 0:
if(!func_890() && func_849()==5){
if(func_185(func_670(0)) > 3 && func_13(&uLocal_2125, 1000, 0)){
return 1;
}}
break;
case 1:
return (func_890() && func_849()==6);
}
return 0;
}


bool func_930(){
return func_849() >=3;
}


char* func_931(var uParam0){
return "FXR_BLIP_BACV";
}

int func_932(var uParam0){
return 225;
}

int func_933(int iParam0){
if(func_849() > 0 && func_849() < 3){
if(!func_692(iParam0)){
return 1;
}}
return 0;
}

int func_934(var uParam0){
return 0;
}

int func_935(var uParam0){
return 0;
}


float func_936(var uParam0){
switch (func_651()){
case 11:
return -164.5541f;
case 12:
return 178.8603f;
default:
}
return -1f;
}

int func_937(){
return 30;
}


float func_938(){
return 30f;
}


Vector3 func__939(var uParam0, var uParam1){
return func_924();
}

int func_940(int iParam0){
if(iParam0==func_670(6)){
return 1;
}
return 0;
}

int func_941(int iParam0){
if(iParam0==func_670(0)){
return 1835018;
}
return 1835017;
}


char* func_942(int iParam0){
if(iParam0==func_670(0)){
return "anim@apt_trans@garage";
}
return "random@arrests";
}


char* func_943(int iParam0){
if(iParam0==func_670(0)){
return "gar_open_1_left";
}
return "kneeling_arrest_idle";
}

int func_944(int iParam0){
if(iParam0==func_670(0)){
if(func_849() >=4){
return 1;
}}
return 0;
}


float func_945(int iParam0){
if(iParam0==func_670(0)){
if(func_849() >=4){
return func_946();
}}
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_190);
return StackVal;
}


float func_946(){
switch (func_651()){
case 11:
return 242.7158f;
case 12:
return 231.1821f;
default:
}
return 40000f;
}


Vector3 func__947(int iParam0){
if(iParam0==func_670(0)){
if(func_849() >=4){
return func_948();
}}
Stack.Push(iParam0);
Call_Loc(Local_213.f_166.f_189);
return StackVal, StackVal, StackVal;
}


Vector3 func__948(){
switch (func_651()){
case 11:
return 239.0419f, -1942.799f, 23.4108f;
break;
case 12:
return 236.9561f, -1737.052f, 29.072f;
break;
}
return func_949(0);
}


Vector3 func__949(int iParam0){
switch (func_651()){
case 11:
switch (iParam0){
case 0:
return 240.0075f, -1943.459f, 22.3805f;
case 1:
return 247.0824f, -1948.246f, 22.2773f;
case 2:
return 254.2559f, -1955.342f, 22.0179f;
case 3:
return 260.5031f, -1961.003f, 21.8687f;
case 4:
return 265.9044f, -1962.346f, 22.011f;
case 5:
return 173.6048f, -1007.756f, -99.9999f;
case 6:
return 175.9254f, -1002.555f, -99.9999f;
default:
}
break;
case 12:
switch (iParam0){
case 0:
return 237.8877f, -1737.744f, 28.0441f;
case 1:
return 249.3056f, -1746.413f, 27.9278f;
case 2:
return 258.9594f, -1755.639f, 27.813f;
case 3:
return 268.0435f, -1760.932f, 27.839f;
case 4:
return 173.6048f, -1007.756f, -99.9999f;
case 5:
return 175.9254f, -1002.555f, -99.9999f;
default:
}
break;
}
return 0f, 0f, 0f;
}


char* func_950(int iParam0){
if(iParam0==func_670(0)){
if(func_849() >=4){
return "CODE_HUMAN_MEDIC_KNEEL";
}}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_10 !=-1){
return func_951(&(Local_171.f_2391[Local_171.f_38.f_1[iParam0 /*21*/].f_10 /*16*/]));
}
return "";
}


var func__951(var uParam0){
return uParam0;
}


void func_952(int iParam0, int iParam1){
PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, func_903(), 20f, (func_94(iParam0, 19) || iParam0==func_670(0)), 0);
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

int func_953(var uParam0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[func_670(4) /*25*/])){
return NETWORK::NET_TO_ENT(Local_2104.f_22[func_670(4) /*25*/]);
}
return -1;
}

int func_954(var uParam0){
return 40000;
}


bool func_955(var uParam0){
return func_670(1);
}


float func_956(var uParam0){
return 1f;
}

int func_957(var uParam0){
return 0;
}

int func_958(){
return -1;
}


float func_959(var uParam0){
return 2f;
}

int func_960(var uParam0){
return 1;
}


float func_961(int iParam0){
if(iParam0==func_670(0) && !func_710(14)){
return func_946();
}
return 40000f;
}


Vector3 func__962(int iParam0){
if(iParam0==func_670(0) && !func_710(14)){
return func_948();
}
return func_963();
}


Vector3 func__963(){
switch (func_651()){
case 11:
return 267.7888f, -1962.5f, 22.0726f;
break;
case 12:
return 270.3454f, -1761.034f, 27.9088f;
break;
}
return Local_171.f_2846[0 /*42*/];
}


float func_964(int iParam0){
if(Local_2104.f_1234.f_19==-1){
Local_2104.f_1234.f_19=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}
switch (func_651()){
case 11:
switch (Local_2104.f_1234.f_19){
case 0:
return 170.6503f;
case 1:
return 110.2573f;
case 2:
return 149.4555f;
case 3:
return 145.3181f;
case 4:
return 310.6556f;
default:
}
break;
case 12:
switch (Local_2104.f_1234.f_19){
case 0:
return 22.8147f;
case 1:
return 39.9431f;
case 2:
return 200.7746f;
case 3:
return 45.9676f;
case 4:
return 230.1205f;
default:
}
break;
}
return Local_171.f_38.f_1[iParam0 /*21*/].f_6;
}


Vector3 func__965(int iParam0){
if(Local_2104.f_1234.f_19==-1){
Local_2104.f_1234.f_19=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}
switch (func_651()){
case 11:
switch (Local_2104.f_1234.f_19){
case 0:
return 141.7622f, -1924.475f, 20.0062f;
case 1:
return 129.4043f, -1921.154f, 20.0183f;
case 2:
return 101.1578f, -1900.382f, 20.0722f;
case 3:
return 89.1305f, -1886.829f, 22.123f;
case 4:
return 56.9838f, -1920.991f, 20.6252f;
default:
}
break;
case 12:
switch (Local_2104.f_1234.f_19){
case 0:
return 212.7334f, -1764.084f, 28.2627f;
case 1:
return 238.8246f, -1748.424f, 28.1394f;
case 2:
return 201.569f, -1720.402f, 28.2918f;
case 3:
return 211.8529f, -1780.708f, 28.1221f;
case 4:
return 132.1943f, -1714.32f, 28.2735f;
default:
}
break;
}
return Local_171.f_38.f_1[iParam0 /*21*/].f_3;
}


bool func_966(var uParam0){
return func_849()==3;
}

int func_967(int iParam0){
if(func_56(iParam0, 10)){
if(func_919() && func_185(func_670(6)) < 3){
return 0;
}}
return 1;
}


void func_968(int iParam0, struct<6> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9){
if(iParam0==func_670(0) || iParam0==func_670(2)){
if(Param1.f_5 && func_849() < 5){
if(bParam9==bLocal_2046){
func_969(iParam0);
}elseif(bLocal_2044 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bParam9)){
func_969(iParam0);
}}}}


void func_969(int iParam0){
if(iParam0==func_670(0)){
func_970(0);
}elseif(iParam0==func_670(2)){
func_970(1);
}}


void func_970(int iParam0){
struct<2> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_0=iParam0;
func_971(5, &Var0);
}


void func_971(int iParam0, int iParam1){
struct<4> Var0;
Var0.f_3=-1;
Var0.f_3.f_1=-1;
Var0.f_0=-1736983835;
Var0.f_1=bLocal_2046;
Var0.f_2=iParam0;
Var0.f_3={
*iParam1 
};
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_972(1));
}


var func__972(int iParam0){
var uVar0;
int iVar1;
bool bVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_9(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_973(int iParam0){
if(iParam0==func_670(0) || iParam0==func_670(2)){
if(func_585() !=0){
return 1;
}
if((func_849() >=4 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[iParam0 /*25*/])) && !ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_PED(Local_2104.f_22[iParam0 /*25*/]))){
return 1;
}}
return 0;
}

int func_974(int iParam0, var uParam1){
if((iParam0==func_670(6) && func_849()==5) && func_912()){
return 1;
}
return 0;
}

int func_975(int iParam0, var uParam1){
if((Local_171.f_38.f_1[iParam0 /*21*/].f_14==0 || uParam1) || func_849() < 3){
return 1;
}
if(iParam0==func_670(2) && func_69(iParam0)==2){
return 1;
}
return 0;
}


char* func_976(int iParam0){
if(iParam0==func_670(0) || iParam0==func_670(3)){
return "FXR_BLIP_BAVER";
}
if(iParam0==func_670(4)){
return "FXR_BLIP_BAP";
}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_14==0){
return "FXR_BLIP_BAFAM";
}
return "FXR_BLIP_BABA";
}

int func_977(var uParam0){
return -1;
}


float func_978(var uParam0){
return 0.6f;
}

int func_979(int iParam0){
if(iParam0==func_670(0) || iParam0==func_670(3)){
return 9;
}
if(iParam0==func_670(4)){
return 1;
}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_14==0){
return 9;
}
return 6;
}

int func_980(int iParam0){
if(func_185(iParam0)==3){
if(iParam0==func_670(0)){
if(!func_693(iParam0, 0)){
switch (func_849()){
case 3:
case 2:
case 4:
case 5:
return ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_2104.f_22[iParam0 /*25*/]));
}}
default:}
if(iParam0==func_670(4) || iParam0==func_670(3)){
if(func_890()){
return 1;
}}
if(Local_171.f_38.f_1[iParam0 /*21*/].f_14==0 && iParam0 !=func_670(6)){
return func_849()==3;
}}
return 0;
}


void func_981(int iParam0, int iParam1, bool bParam2){
if(bParam2){
return;
}
if((func_56(iParam0, 10) && func_94(iParam0, 8)) && Local_2104.f_1234.f_19 !=-1){
Local_2104.f_1234.f_19=-1;
}
PED::SET_PED_CONFIG_FLAG(iParam1, 132, true);
PED::SET_PED_CONFIG_FLAG(iParam1, 395, true);
if(Local_171.f_38.f_1[iParam0 /*21*/].f_14==0){
PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, 0);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 500);
ENTITY::SET_ENTITY_HEALTH(iParam1, 500, 0);
if((iParam0 % 2)==0){
PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(iParam1);
PED::SET_PED_CONFIG_FLAG(iParam1, 281, true);
}}
func_982(iParam0, iParam1, 1);
PED::SET_PED_ACCURACY(iParam1, 5);
PED::SET_PED_SHOOT_RATE(iParam1, 30);
if(iParam0==func_670(3) || iParam0==func_670(4)){
PED::SET_PED_CAN_RAGDOLL(iParam1, 0);
}
if(iParam0==func_670(0) || iParam0==func_670(3)){
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
PED::SET_PED_PROP_INDEX(iParam1, 1, 0, 0, false, 1);
PED::SET_PED_PROP_INDEX(iParam1, 6, 0, 0, false, 1);
PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam1, 0);
PED::SET_PED_CONFIG_FLAG(iParam1, 116, false);
PED::SET_PED_CONFIG_FLAG(iParam1, 118, false);
ENTITY::SET_ENTITY_PROOFS(iParam1, false, true, false, false, false, 0, 0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
PED::SET_PED_CONFIG_FLAG(iParam1, 445, true);
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
}elseif(iParam0==func_670(2) || iParam0==func_670(4)){
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
PED::SET_PED_PROP_INDEX(iParam1, 0, 0, 0, false, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 0);
if(iParam0==func_670(4)){
PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 0);
PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
}
ENTITY::SET_ENTITY_PROOFS(iParam1, false, true, true, false, false, 0, 0, 0);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 2000);
ENTITY::SET_ENTITY_HEALTH(iParam1, 2000, 0);
PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, 0);
PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(iParam1);
PED::SET_PED_CONFIG_FLAG(iParam1, 281, true);
if(iParam0==func_670(4)){
PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0, 0.664f, 0.317f, 2);
PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 4, 0.635f, 0.524f, 3);
PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5, 0.21f, 0.664f, 2);
PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0, 0.786f, 0.469f, 3);
PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 2, 0f, 0.148f, 3);
}}}


void func_982(bool bParam0, int iParam1, bool bParam2){
switch (Local_171.f_38.f_1[bParam0 /*21*/].f_14){
case 0:
if(bParam2){
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, 0, Local_171.f_38.f_632[1 /*10*/]);
PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 0);
PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
}else{
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, 1, Local_171.f_38.f_632[1 /*10*/]);
}
break;
case 1:
if(bParam2){
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, 0, Local_171.f_38.f_632[0 /*10*/]);
}else{
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, 1, Local_171.f_38.f_632[0 /*10*/]);
}
break;
}}


void func_983(bool bParam0, int iParam1, bool bParam2){
float fVar0;
if(((!bParam2 && func_849() >=3) && func_13(&uLocal_2112, 15000, 0)) && !MISC::IS_BIT_SET(uLocal_2130, bParam0)){
if(func_709(Local_2104.f_22[bParam0 /*25*/])){
func_982(bParam0, iParam1, 0);
MISC::SET_BIT(&uLocal_2130, bParam0);
}}
if(bParam0==func_670(0) || bParam0==func_670(2)){
if(!bParam2){
if(func_989(bParam0) && func_709(Local_2104.f_22[bParam0 /*25*/])){
PED::SET_PED_CAN_RAGDOLL(iParam1, 0);
PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
func_988(bParam0);
}
switch (func_849()){
case 1:
if(bParam0==func_670(0) && !func_710(13)){
fVar0=func_663(Local_2051, ENTITY::GET_ENTITY_COORDS(iParam1, 0));
if(fVar0 < 30f){
func_708(9);
}}
break;
case 4:
fVar0=vdist(func_963(), ENTITY::GET_ENTITY_COORDS(iParam1, 0));
if(fVar0 <=1.5f){
if(bParam0==func_670(2) || (func_69(bParam0)==5 && func_13(&uLocal_2123, 1500, 0))){
if(ENTITY::IS_ENTITY_VISIBLE(iParam1)){
if(func_709(Local_2104.f_22[bParam0 /*25*/])){
NETWORK::NETWORK_FADE_OUT_ENTITY(iParam1, 0, 1);
}}
}}elseif(bParam0==func_670(0)){
if(fVar0 <=15f){
func_708(11);
}
if(!func_710(14) && func_69(bParam0)==4){
fVar0=vdist(Local_2051, ENTITY::GET_ENTITY_COORDS(iParam1, 0));
if(fVar0 <=5f){
func_708(10);
}
}}
break;
}}elseif(bLocal_2044){
if(func_585()==0 && func_849() < 5){
func_8(9);
}}}elseif(bParam0==func_670(3)){
if(func_849() >=5 && !bParam2){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_2104.f_22[bParam0 /*25*/])){
PHYSICS::SET_USE_KINEMATIC_PHYSICS(iParam1, 1);
}
if(func_987(func_928()) && func_13(&uLocal_2121, 3000, 0)){
if((func_709(Local_2104.f_22[bParam0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2048, 0)) && !PED::IS_PED_HEADTRACKING_PED(iParam1, iLocal_2048)){
TASK::TASK_LOOK_AT_ENTITY(iParam1, iLocal_2048, -1, 2048, 4);
}}elseif(func_927()){
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[func_670(4) /*25*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_2104.f_22[func_670(4) /*25*/]), 0)) && !PED::IS_PED_HEADTRACKING_PED(iParam1, NETWORK::NET_TO_PED(Local_2104.f_22[func_670(4) /*25*/]))){
if(func_709(Local_2104.f_22[bParam0 /*25*/])){
TASK::TASK_LOOK_AT_ENTITY(iParam1, NETWORK::NET_TO_PED(Local_2104.f_22[func_670(4) /*25*/]), -1, 2048, 4);
}}}}}elseif(bParam0==func_670(4)){
if((((func_849() >=5 && !bParam2) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[func_670(3) /*25*/])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_2104.f_22[func_670(3) /*25*/]), 0)) && !PED::IS_PED_HEADTRACKING_PED(iParam1, NETWORK::NET_TO_PED(Local_2104.f_22[func_670(3) /*25*/]))){
if(func_709(Local_2104.f_22[bParam0 /*25*/])){
TASK::TASK_LOOK_AT_ENTITY(iParam1, NETWORK::NET_TO_PED(Local_2104.f_22[func_670(3) /*25*/]), -1, 2048, 4);
}}}elseif(bParam0 !=func_670(6) && !bParam2){
if(func_894(1)){
if(!MISC::IS_BIT_SET(uLocal_2129, bParam0) && func_709(Local_2104.f_22[bParam0 /*25*/])){
func_986(iParam1);
MISC::SET_BIT(&uLocal_2129, bParam0);
}}}
if((((bParam0==func_670(6) && !iLocal_2135) && func_710(6)) && func_709(Local_2104.f_22[bParam0 /*25*/])) && !bParam2){
func_984(iParam1, "STOP_ON_FOOT_MEGAPHONE_03", 16);
iLocal_2135=1;
}}


void func_984(int iParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_985(iParam2), 1);
}

int func_985(int iParam0){
int iVar0;
switch (iParam0){
case 0:
return "SPEECH_PARAMS_STANDARD";
case 1:
return "SPEECH_PARAMS_ALLOW_REPEAT";
case 2:
return "SPEECH_PARAMS_BEAT";
case 3:
return "SPEECH_PARAMS_FORCE";
case 4:
return "SPEECH_PARAMS_FORCE_FRONTEND";
case 5:
return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
case 6:
return "SPEECH_PARAMS_FORCE_NORMAL";
case 7:
return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
case 8:
return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
case 9:
return "SPEECH_PARAMS_FORCE_SHOUTED";
case 10:
return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
case 11:
return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
case 12:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
case 13:
return "SPEECH_PARAMS_MEGAPHONE";
case 14:
return "SPEECH_PARAMS_HELI";
case 15:
return "SPEECH_PARAMS_FORCE_MEGAPHONE";
case 16:
return "SPEECH_PARAMS_FORCE_HELI";
case 17:
return "SPEECH_PARAMS_INTERRUPT";
case 18:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
case 19:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
case 20:
return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
case 21:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
case 22:
return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
case 23:
return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
case 24:
return "SPEECH_PARAMS_ADD_BLIP";
case 25:
return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
case 26:
return "SPEECH_PARAMS_ADD_BLIP_FORCE";
case 27:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
case 28:
return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
case 29:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
case 30:
return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
case 31:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
case 32:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
case 33:
return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
case 34:
return "SPEECH_PARAMS_SHOUTED";
case 35:
return "SPEECH_PARAMS_SHOUTED_CLEAR";
case 36:
return "SPEECH_PARAMS_SHOUTED_CRITICAL";
default:
}
iVar0=0;
return iVar0;
}


void func_986(int iParam0){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
TASK::CLEAR_PED_TASKS(iParam0);
PED::SET_PED_COMBAT_RANGE(iParam0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1024, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32768, 0);
WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), 1);
}


bool func_987(int iParam0){
int iVar0;
iVar0=iParam0;
return Local_2024.f_2==iVar0;
}


void func_988(bool bParam0){
if(bParam0==func_670(0)){
func_708(17);
}elseif(bParam0==func_670(2)){
func_708(18);
}}

int func_989(bool bParam0){
if(func_756(bParam0)==26){
if(bParam0==func_670(0)){
if(!func_710(23)){
return 1;
}}elseif(bParam0==func_670(2)){
if(!func_710(24)){
return 1;
}}}
return 0;
}

int func_990(int iParam0){
if(iParam0==func_670(0)){
return 1;
}
if(iParam0==func_670(2)){
return 2;
}
if(iParam0==func_670(3) || iParam0==func_670(4)){
return 3;
}
if(iParam0==func_670(6)){
return 4;
}
return 0;
}


void func_991(int iParam0){
switch (iParam0){
case 0:
func_753(iParam0);
break;
case 1:
func_769(iParam0, 0, 8);
func_767(iParam0, 0, 1, 195209);
func_769(iParam0, 1, 15);
func_767(iParam0, 1, 2, 195195);
func_769(iParam0, 2, 7);
func_767(iParam0, 2, 3, 195172);
func_769(iParam0, 3, 26);
func_767(iParam0, 3, 5, 195135);
func_767(iParam0, 3, 4, 195073);
func_769(iParam0, 4, 8);
func_767(iParam0, 4, 3, 195032);
func_769(iParam0, 5, 9);
break;
case 2:
func_769(iParam0, 0, 0);
func_767(iParam0, 0, 1, 195023);
func_769(iParam0, 1, 7);
func_767(iParam0, 1, 2, 194977);
func_769(iParam0, 2, 26);
break;
case 3:
func_769(iParam0, 0, 0);
func_767(iParam0, 0, 1, 194961);
func_767(iParam0, 0, 2, 194945);
func_769(iParam0, 1, 19);
func_769(iParam0, 2, 9);
break;
case 4:
func_769(iParam0, 0, 12);
break;
}}


bool func_992(int iParam0, var uParam1){
return iParam0==func_670(4);
}


bool func_993(int iParam0, var uParam1){
return iParam0==func_670(3);
}


bool func_994(var uParam0, var uParam1){
return (func_849() >=3 && (func_13(&uLocal_2110, 15000, 0) || ENTITY::GET_ENTITY_HEALTH(uParam1) <=1800));
}

int func_995(var uParam0, var uParam1){
return 1;
}


var func__996(var uParam0, var uParam1){
return ((func_13(&uLocal_2119, 1500, 0) && func_710(14)) && func_686(9));
}

int func_997(int iParam0, int iParam1){
if(!func_710(14)){
return func_923(iParam1, func_962(iParam0), 1.5f, 1);
}else{
return func_923(iParam1, func_963(), 1.5f, 1);
}
return 0;
}

int func_998(var uParam0, int iParam1){
if(func_710(14)){
return func_923(iParam1, func_963(), 1.5f, 1);
}
return 0;
}


var func__999(var uParam0, var uParam1){
return (func_894(0) && func_686(6));
}


bool func_1000(var uParam0, var uParam1){
return func_849()==3;
}


var func__1001(var uParam0, var uParam1){
return (func_710(13) && func_13(&uLocal_2115, 2000, 0));
}

int func_1002(int iParam0){
if(iParam0==func_670(3) || iParam0==func_670(4)){
return func_849()==5;
}
return 1;
}


void func_1003(){
if(Local_2104.f_1234.f_20==-1){
Local_2104.f_1234.f_20=MISC::ADD_POP_MULTIPLIER_SPHERE(Local_171.f_1588.f_1[1 /*11*/], 200f, 1f, 0f, 0, 1);
}}


void func_1004(){
func_1005();
if((func_849()==2 && func_794(1)) && !func_693(func_670(0), 0)){
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
}
if(func_890() && !bLocal_2134){
ENTITY::CREATE_MODEL_HIDE(172.935f, -999.418f, -98.971f, 5f, joaat("prop_laptop_01a"), 1);
bLocal_2134=true;
}}


void func_1005(){
struct<3> Var0;
Var0={
func_949(iLocal_2131) 
};
if(!func_52(Var0)){
if(!MISC::IS_BIT_SET(uLocal_2132, iLocal_2131)){
if(func_923(iLocal_2048, Var0, 30f, 1)){
uLocal_2133[iLocal_2131]=GRAPHICS::ADD_DECAL(1110, Var0, 0f, 0f, -1f, func_1006(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
MISC::SET_BIT(&uLocal_2132, iLocal_2131);
}}
bLocal_2131++;
}else{
bLocal_2131=false;
}}


Vector3 func__1006(struct<3> Param0){
float fVar0;
float fVar1;
fVar0=vmag(Param0);
if(fVar0 !=0f){
fVar1=(1f / fVar0);
Param0={
Param0 * Vector(fVar1, fVar1, fVar1) 
};
}else{
Param0.f_0=0f;
Param0.f_1=0f;
Param0.f_2=0f;
}
return Param0;
}


void func_1007(){
func_820(0, 4, 196808);
func_819(0, 1, 1);
func_820(1, 22, 196791);
func_816(1, 2, 196778);
func_820(2, 4, 196761);
func_819(2, 3, 3);
func_816(2, 1, 196748);
func_820(3, 7, 196731);
func_819(3, 4, 4);
func_820(4, 18, 196701);
func_819(4, 5, 5);
func_820(5, 43, 196657);
func_819(5, 6, 6);
func_820(6, 27, 195801);
func_819(6, 7, 7);
func_820(7, 48, 195793);
}


void func_1008(){
}


void func_1009(){
var uVar0[8];
int iVar1;
if(func_890()){
func_776();
}elseif(!func_168(iLocal_2050, 4)){
func_785("TR_OT_LEAVEAREA", 0);
}else{
iVar1=func_1013(&uVar0);
if(iVar1 > 1){
if(func_284(func_78(), 1)){
func_785("TR_OT_WAITLVARM", 0);
}else{
func_785("TR_OT_WAITLVARO", 0);
}}elseif(iVar1==1){
func_1010("TR_OT_WAITLVARP", NETWORK::NETWORK_GET_PLAYER_INDEX(uVar0[0]), 1, 0);
}}}


void func_1010(char* sParam0, bool bParam1, int iParam2, bool bParam3){
func_1011(sParam0, PLAYER::GET_PLAYER_NAME(bParam1), bParam3, 1);
}

int func_1011(char* sParam0, char* sParam1, bool bParam2, int iParam3){
var uVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63){
return 0;
}
if(func_1012(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
uVar0=Global_1574757.f_54;
func_777();
Global_1574757=9;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=iParam3;
Global_1574757.f_56=iParam3;
Global_1574757.f_54=uVar0;
func_788();
func_787(bParam2);
func_786();
return 1;
}


bool func_1012(char* sParam0, char* sParam1){
if(!func_782()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(!MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12))){
return 0;
}
return MISC::GET_HASH_KEY(sParam1)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_1013(var uParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=0;
while (iVar1 < *uParam0){
(*uParam0)[iVar1]=func_592();
iVar1++;
}
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(iVar1 !=iLocal_2049){
iVar2=0;
while (iVar2 < 1){
Stack.Push(!func_52(func_1016(iVar2)));
Stack.Push(iVar2);
Call_Loc(Local_213.f_625.f_1);
if(StackVal && StackVal){
iVar3=iVar1;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && func_1014(iVar2, iVar3)){
if(iVar0 < *uParam0){
(*uParam0)[iVar0]=iVar3;
}
iVar0++;
}}
iVar2++;
}}
iVar1++;
}
return iVar0;
}

int func_1014(int iParam0, int iParam1){
struct<3> Var0;
if(iParam1==iLocal_2050){
if(vdist2(Local_2051, func_1016(iParam0)) < pow(func_1015(iParam0), 2f)){
return 1;
}}else{
Var0={
func_104(NETWORK::NETWORK_GET_PLAYER_INDEX(iParam1)) 
};
if(vdist2(Var0, Local_2051) < pow(100f, 2f)){
if(vdist2(Var0, func_1016(iParam0)) < pow(func_1015(iParam0), 2f)){
return 1;
}}elseif(Local_2109[iParam1 /*229*/].f_207==iParam0){
return 1;
}}
return 0;
}


var func__1015(int iParam0){
if(Local_213.f_625.f_3 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_625.f_3);
return StackVal;
}
return Local_171.f_1870[iParam0 /*4*/].f_3;
}


Vector3 func__1016(int iParam0){
if(Local_213.f_625.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_213.f_625.f_2);
return StackVal, StackVal, StackVal;
}
return Local_171.f_1870[iParam0 /*4*/];
}


void func_1017(){
if(func_890()){
func_785("FXR_OT_WAITBA", 0);
}elseif(func_929(0)){
func_785("FXR_OT_GABA", 0);
}}


void func_1018(){
if(func_69(func_670(0))==3){
func_785("FXR_OT_FOLBA", 0);
}}


void func_1019(){
func_785("FXR_OT_DEFBA", 0);
}


bool func_1020(){
return !func_1022();
}


void func_1021(){
func_785("FXR_OT_DRIVEBA", 0);
}


bool func_1022(){
return func_913(0);
}


void func_1023(){
func_785("FXR_OT_ENTBA", 0);
}


void func_1024(){
switch (func_651()){
case 11:
func_785("FXR_OT_GOBA1", 0);
break;
case 12:
func_785("FXR_OT_GOBA2", 0);
break;
}}


void func_1025(){
func_832(0, 4);
func_831(0, 1);
func_832(1, 22);
func_831(1, 2);
func_832(2, 4);
func_831(2, 3);
func_832(3, 7);
func_1030(3, 197123);
func_829(3, 4, 197043);
func_832(4, 18);
func_829(4, 5, 197024);
func_832(5, 43);
func_829(5, 6, 197012);
func_832(6, 27);
func_829(6, 7, 196989);
func_832(7, 48);
}


bool func_1026(){
return (!func_912() && func_3(4));
}


bool func_1027(){
return func_927();
}


bool func_1028(){
return func_185(func_670(0)) > 3;
}

int func_1029(){
if(func_710(6) && func_13(&uLocal_2117, 3000, 0)){
return 1;
}
if(func_13(&(Local_2104.f_1234.f_13), 120000, 0)){
return 1;
}
return 0;
}


void func_1030(int iParam0, int iParam1){
Local_215[iParam0 /*29*/].f_27=iParam1;
}


void func_1031(){
func_73(func_86(), 1, 0);
}


void func_1032(){
func_1034();
if(bLocal_2134){
ENTITY::REMOVE_MODEL_HIDE(172.935f, -999.418f, -98.971f, 5f, joaat("prop_laptop_01a"), 0);
}
func_1033(19);
func_1033(20);
func_1033(21);
if(bLocal_2044 && Local_2104.f_1234.f_20 !=-1){
if(MISC::DOES_POP_MULTIPLIER_SPHERE_EXIST(Local_2104.f_1234.f_20)){
MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_2104.f_1234.f_20, 0);
}}}


void func_1033(bool bParam0){
MISC::CLEAR_BIT(&(Global_2793046.f_5225.f_47), bParam0);
}


void func_1034(){
bool bVar0;
bVar0=false;
while (bVar0 < 7){
if(MISC::IS_BIT_SET(uLocal_2132, bVar0)){
GRAPHICS::REMOVE_DECAL(uLocal_2133[bVar0]);
}
bVar0++;
}}


void func_1035(){
int iVar0;
Local_171.f_38.f_632[0 /*10*/]=Global_1837209;
Local_171.f_19=1;
Local_171.f_19.f_5[0 /*13*/].f_2=joaat("prop_drug_package");
Local_171.f_19.f_5[0 /*13*/].f_3={
Local_171.f_891.f_1[func_670(1) /*15*/].f_4 
};
Local_171.f_19.f_5[0 /*13*/].f_10=func_670(1);
Local_171.f_1566=1;
Local_171.f_1566.f_1=3;
Local_171.f_38.f_1[func_670(4) /*21*/].f_14=0;
iVar0=0;
while (iVar0 < Local_171.f_38){
if(Local_171.f_38.f_1[iVar0 /*21*/].f_8==-1 && Local_171.f_38.f_1[iVar0 /*21*/].f_14==1){
if((iVar0 % 2)==0){
func_844(iVar0, 10);
func_844(iVar0, 11);
func_844(iVar0, 19);
}}
iVar0++;
}
func_1040(0, 0);
func_1039(0, 2);
func_1039(1, 2);
func_1037();
func_615(13);
Local_171.f_1578.f_6=3000;
Local_171.f_1578.f_7=0;
Local_171.f_1578.f_8=200f;
Local_171.f_1578.f_5=4;
func_841(func_670(5), 19);
func_844(func_670(0), 12);
func_615(28);
Local_171.f_2384[0 /*6*/]=1;
Local_171.f_2384[0 /*6*/].f_1=func_670(0);
Local_171.f_2384[0 /*6*/].f_5=35f;
func_1036(19);
func_1036(20);
func_1036(21);
}


void func_1036(bool bParam0){
MISC::SET_BIT(&(Global_2793046.f_5225.f_47), iParam0);
}


void func_1037(){
Local_171.f_2243=1;
Local_171.f_2243.f_1[0 /*63*/].f_24=1;
Local_171.f_2243.f_1[0 /*63*/].f_7="anim@apt_trans@garage";
Local_171.f_2243.f_1[0 /*63*/].f_25[0 /*7*/].f_4="gar_open_1_left";
func_1038(0, 3);
func_1038(0, 5);
Local_171.f_2846[0 /*42*/].f_5=0;
}


void func_1038(int iParam0, int iParam1){
if(func_17(&(Local_171.f_2243.f_1[iParam0 /*63*/]), iParam1)){}}


void func_1039(int iParam0, int iParam1){
if(func_17(&(Local_171.f_2846[iParam0 /*42*/].f_40), iParam1)){}}


void func_1040(int iParam0, int iParam1){
if(func_133(&(Local_171.f_2846[iParam0 /*42*/].f_40), iParam1)){}}


void func_1041(){
Local_213.f_13=219734;
Local_213.f_11=219261;
Local_213.f_11.f_1=217992;
Local_213.f_661.f_1=217939;
Local_213.f_661=217908;
Local_213.f_661.f_2=217881;
Local_213.f_661.f_3=217872;
Local_213.f_104.f_3=217726;
Local_213.f_104.f_3.f_1=217629;
Local_213.f_104.f_3.f_3=217617;
Local_213.f_104.f_3.f_2=217605;
Local_213.f_104.f_1=217374;
Local_213.f_104.f_2=217365;
Local_213.f_104=217313;
Local_213.f_675=217191;
Local_213.f_675.f_1=217040;
Local_213.f_10=216700;
Local_213.f_629=216622;
Local_213.f_629.f_1=216448;
Local_213.f_629.f_2=216316;
Local_213.f_629.f_16=216145;
Local_213.f_629.f_22=216102;
Local_213.f_629.f_8=216091;
Local_213.f_629.f_12=215945;
Local_213.f_629.f_13=215849;
Local_213.f_629.f_9=215834;
Local_213.f_629.f_10=215766;
Local_213.f_695.f_11=215756;
Local_213.f_695.f_10=215692;
Local_213.f_695.f_14=215640;
Local_213.f_695.f_8=215596;
Local_213.f_695.f_18=215070;
Local_213.f_695.f_13=214679;
Local_213.f_695.f_12=214325;
Local_213.f_695.f_7=214129;
Local_213.f_695.f_9=214064;
Local_213.f_695.f_2=214038;
Local_213.f_679.f_6=214012;
Local_213.f_679=213876;
Local_213.f_679.f_1=213521;
Local_213.f_53.f_2.f_1=213449;
Local_213.f_53.f_2.f_2=213377;
Local_213.f_2=212710;
Local_213.f_0=212701;
Local_213.f_1=212279;
Local_213.f_484=212270;
Local_213.f_484.f_1=212114;
Local_213.f_484.f_56.f_3=212031;
Local_213.f_484.f_56.f_2=211993;
Local_213.f_484.f_56=211936;
Local_213.f_484.f_56.f_1=211890;
Local_213.f_484.f_30=211842;
Local_213.f_484.f_3=211790;
Local_213.f_484.f_4=211605;
Local_213.f_484.f_53=211560;
Local_213.f_484.f_5=211524;
Local_213.f_484.f_22=211458;
Local_213.f_484.f_20=211195;
Local_213.f_484.f_18=211159;
Local_213.f_484.f_64.f_1=211108;
Local_213.f_484.f_64=211048;
Local_213.f_625=210998;
Local_213.f_3.f_1=207032;
Local_213.f_3=206788;
Local_213.f_166.f_187=206707;
Local_213.f_166.f_192=206586;
Local_213.f_166.f_1=206475;
Local_213.f_166=206101;
Local_213.f_166.f_150=205256;
Local_213.f_166.f_150.f_16=205247;
Local_213.f_166.f_200=205027;
Local_213.f_166.f_2.f_21.f_2=204997;
Local_213.f_166.f_2.f_28.f_1=204963;
Local_213.f_166.f_2.f_28.f_16=204933;
Local_213.f_166.f_2.f_28=204855;
Local_213.f_166.f_142=204160;
Local_213.f_777.f_18=203844;
Local_213.f_777.f_5=203825;
Local_213.f_777.f_1=203651;
Local_213.f_432.f_23=203433;
Local_213.f_432.f_33=203418;
Local_213.f_432.f_40=203376;
Local_213.f_432.f_19=203335;
Local_213.f_432.f_20=203305;
Local_213.f_432.f_39=203149;
Local_213.f_843=203071;
Local_213.f_843.f_1=203062;
Local_213.f_843.f_2=203033;
Local_213.f_562=202987;
Local_213.f_562.f_1=202900;
Local_213.f_562.f_7=202836;
Local_213.f_562.f_2=202601;
Local_213.f_562.f_4=202495;
Local_213.f_562.f_3=202253;
Local_213.f_15.f_27=202160;
Local_213.f_15.f_27.f_2=202147;
Local_213.f_592.f_10=202106;
Local_213.f_592.f_10.f_13=202074;
Local_213.f_688.f_5=202064;
Local_213.f_688.f_6=202032;
Local_213.f_688.f_4=201979;
Local_213.f_672.f_1=201711;
Local_213.f_672=201630;
Local_213.f_377.f_23=200429;
Local_213.f_377.f_43=200048;
Local_213.f_377=199929;
Local_213.f_377.f_13=199900;
Local_213.f_377.f_18=199877;
Local_213.f_377.f_9=199854;
Local_213.f_377.f_4=199829;
Local_213.f_377.f_26=199806;
Local_213.f_377.f_27=199783;
Local_213.f_377.f_45=199507;
Local_213.f_377.f_52=199474;
Local_213.f_377.f_44=199306;
Local_213.f_377.f_25=199271;
}


float func_1042(int iParam0){
if(iParam0==func_670(0)){
return Local_171.f_1808.f_1[0 /*18*/].f_8;
}
return 0f;
}

int func_1043(int iParam0, var uParam1){
if(iParam0==func_670(0)){
switch (func_651()){
case 3:
case 4:
uParam1->f_66=joaat("toro2");
StringCopy(&(uParam1->f_1), "1875", 16);
uParam1->f_5=111;
uParam1->f_6=59;
uParam1->f_7=3;
uParam1->f_8=145;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[11]=4;
uParam1->f_9[12]=3;
uParam1->f_9[13]=3;
uParam1->f_9[18]=1;
return 1;
}
default:
}
return 0;
}

int func_1044(int iParam0, var uParam1){
if(iParam0==func_670(14)){
if(func_710(26)){
return 1;
}}
return 0;
}


void func_1045(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
if(iParam0==func_670(0)){
func_1048(iParam0, iParam1);
func_1046(iParam0, iParam1, uParam2);
}}


void func_1046(int iParam0, int iParam1, var uParam2){
if(!func_1047()){
return;
}
if(uParam2 && func_704(iParam0, iLocal_2050, 9)){
if(func_709(Local_2104.f_773[iParam0 /*8*/])){
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 1, 1, 0);
AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam1, 1);
AUDIO::SET_VEH_FORCED_RADIO_THIS_FRAME(iParam1);
AUDIO::SET_VEH_RADIO_STATION(iParam1, "RADIO_09_HIPHOP_OLD");
func_708(12);
}}}

int func_1047(){
if(!func_710(16) && !func_675(iLocal_2050, 12)){
return 1;
}
return 0;
}


void func_1048(int iParam0, int iParam1){
if(!func_1050()){
return;
}
if(func_1049() > 2){
if(func_709(Local_2104.f_773[iParam0 /*8*/])){
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
func_708(13);
}}}

int func_1049(){
return func_661();
}

int func_1050(){
if(!func_710(17) && !func_675(iLocal_2050, 13)){
return 1;
}
return 0;
}

int func_1051(int iParam0){
if(iParam0==func_670(0)){
return 1;
}
return 0;
}

int func_1052(int iParam0){
if(iParam0==func_670(0)){
return 1;
}
return 0;
}

int func_1053(int iParam0){
if(iParam0==func_670(0)){
return 427;
}
return -1;
}

int func_1054(int iParam0){
if(iParam0==func_670(0)){
return 1;
}
return 0;
}

int func_1055(int iParam0){
if(iParam0==func_670(0)){
return 1;
}
return 0;
}


char* func_1056(int iParam0){
if(iParam0==func_670(0)){
return "FXR_BLIP_SPDBT";
}
return "BLIP_VEH";
}

int func_1057(int iParam0){
if(iParam0==func_670(0)){
switch (func_1049()){
case 2:
if(!func_1058()){
return 1;
}
break;
}}
return 0;
}

int func_1058(){
int iVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[func_670(0) /*8*/])){
iVar0=NETWORK::NET_TO_VEH(Local_2104.f_773[func_670(0) /*8*/]);
if(!func_509(iVar0, 1, 1, 0, 0, 0, 1, 0, 0)){
return 1;
}}
return 0;
}


void func_1059(int iParam0, int iParam1){
func_1060(iParam0, 1);
if(VEHICLE::IS_THIS_MODEL_A_BOAT(Local_171.f_891.f_1[iParam0 /*15*/].f_3)){
VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iParam1, 0);
VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iParam1, 100f);
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 0, 1, 0);
}
if(iParam0==func_670(14)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, false, 0);
}}


void func_1060(int iParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
iVar0=func_1061();
switch (iParam1){
case 0:
iVar0=Local_2104.f_22[iParam0 /*25*/];
bVar1=Local_171.f_38.f_1[iParam0 /*21*/].f_12==-1;
break;
case 1:
iVar0=Local_2104.f_773[iParam0 /*8*/];
bVar1=Local_171.f_891.f_1[iParam0 /*15*/].f_9==-1;
break;
case 2:
iVar0=Local_2104.f_926[iParam0 /*5*/];
bVar1=Local_171.f_1179.f_1[iParam0 /*12*/].f_11==-1;
break;
case 3:
iVar0=Local_2104.f_2[iParam0];
bVar1=Local_171.f_19.f_5[iParam0 /*13*/].f_12==-1;
break;
default:
return;
break;
}
if(iVar0==func_1061()){
return;
}
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0)){
return;
}
iVar2=NETWORK::NET_TO_ENT(iVar0);
PHYSICS::ACTIVATE_PHYSICS(iVar2);
INTERIOR::CLEAR_ROOM_FOR_ENTITY(iVar2);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar2, 1, 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar2, true);
ENTITY::SET_WAIT_FOR_COLLISIONS_BEFORE_PROBE(iVar2, 1);
switch (iParam1){
case 0:
case 2:
case 3:
INTERIOR::SET_IS_EXTERIOR_ONL(iVar2, bVar1);
break;
}
NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(iVar0, bVar1);
}

int func_1061(){
return -1;
}

int func_1062(int iParam0){
if(!func_1063(Local_171.f_1748.f_1[0 /*2*/], Local_171.f_1748.f_1[0 /*2*/].f_1)){
return 0;
}
if(iParam0==func_670(0)){
if(Local_2104.f_1234.f_6==-1){
return 0;
}}
return 1;
}

int func_1063(int iParam0, var uParam1){
int iVar0;
struct<4> Var1;
bool bVar2;
StringCopy(&Var1, "", 32);
while (func_1064(iParam0, uParam1, iVar0, &Var1, &bVar2)){
if(bVar2){
if(!STREAMING::IS_IPL_ACTIVE(&Var1)){
return 0;
}}elseif(STREAMING::IS_IPL_ACTIVE(&Var1)){
return 0;
}
iVar0++;
}
return 1;
}

int func_1064(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4){
*uParam4=1;
StringCopy(sParam3, "", 32);
switch (iParam0){
case 21:
switch (iParam2){
case 0:
StringCopy(sParam3, "vw_casino_carpark", 32);
return 1;
default:
}
break;
case 20:
switch (iParam2){
case 0:
StringCopy(sParam3, "vw_casino_main", 32);
return 1;
default:
}
break;
case 9:
switch (iParam2){
case 0:
StringCopy(sParam3, "vw_casino_penthouse", 32);
return 1;
default:
}
break;
case 1:
switch (iParam2){
case 0:
StringCopy(sParam3, "CS1_02_cf_onmission1", 32);
return 1;
case 1:
StringCopy(sParam3, "CS1_02_cf_onmission2", 32);
return 1;
case 2:
StringCopy(sParam3, "CS1_02_cf_onmission3", 32);
return 1;
case 3:
StringCopy(sParam3, "CS1_02_cf_onmission4", 32);
return 1;
case 4:
StringCopy(sParam3, "CS1_02_cf_offmission", 32);
*uParam4=0;
return 1;
default:
}
break;
case 11:
switch (iParam2){
case 0:
StringCopy(sParam3, "ex_sm_13_office_02b", 32);
return 1;
default:
}
break;
case 14:
switch (iParam2){
case 0:
StringCopy(sParam3, "farmint", 32);
return 1;
case 1:
StringCopy(sParam3, "farmint_cap", 32);
*uParam4=0;
return 1;
default:
}
break;
case 15:
switch (iParam2){
case 0:
StringCopy(sParam3, "h4_islandx_yacht_01", 32);
return 1;
case 1:
StringCopy(sParam3, "h4_islandx_yacht_01_int", 32);
return 1;
default:
}
break;
case 16:
switch (iParam2){
case 0:
StringCopy(sParam3, "h4_islandx_yacht_02", 32);
return 1;
case 1:
StringCopy(sParam3, "h4_islandx_yacht_02_int", 32);
return 1;
default:
}
break;
case 17:
switch (iParam2){
case 0:
StringCopy(sParam3, "h4_islandx_yacht_03", 32);
return 1;
case 1:
StringCopy(sParam3, "h4_islandx_yacht_03_int", 32);
return 1;
default:
}
break;
case 25:
switch (iParam2){
case 0:
StringCopy(sParam3, "bkr_bi_hw1_13_int", 32);
return 1;
case 1:
StringCopy(sParam3, "hei_bi_hw1_13_door", 32);
*uParam4=0;
return 1;
default:
}
break;
case 39:
switch (iParam2){
case 0:
StringCopy(sParam3, "hei_dt1_02_exshadowmesh", 32);
return 1;
case 1:
StringCopy(sParam3, "ex_dt1_02_office_01a", 32);
return 1;
case 2:
StringCopy(sParam3, "imp_dt1_02_modgarage", 32);
return 1;
case 3:
StringCopy(sParam3, "imp_dt1_02_cargarage_a", 32);
return 1;
default:
}
break;
case 40:
switch (iParam2){
case 0:
StringCopy(sParam3, "hei_dt1_11_exshadowmesh", 32);
return 1;
case 1:
StringCopy(sParam3, "ex_dt1_11_office_01a", 32);
return 1;
case 2:
StringCopy(sParam3, "imp_dt1_11_modgarage", 32);
return 1;
case 3:
StringCopy(sParam3, "imp_dt1_11_cargarage_a", 32);
return 1;
default:
}
break;
case 41:
switch (iParam2){
case 0:
StringCopy(sParam3, "hei_sm_15_exshadowmesh", 32);
return 1;
case 1:
StringCopy(sParam3, "ex_sm_15_office_01a", 32);
return 1;
case 2:
StringCopy(sParam3, "imp_sm_15_modgarage", 32);
return 1;
case 3:
StringCopy(sParam3, "imp_sm_15_cargarage_a", 32);
return 1;
default:
}
break;
case 44:
switch (iParam2){
case 0:
StringCopy(sParam3, "imp_dt1_11_modgarage", 32);
return 1;
case 1:
StringCopy(sParam3, "imp_dt1_11_cargarage_a", 32);
return 1;
default:
}
break;
case 37:
switch (iParam2){
case 0:
StringCopy(sParam3, "fakeint", 32);
*uParam4=0;
return 1;
case 1:
StringCopy(sParam3, "shr_int", 32);
return 1;
default:
}
break;
case 47:
switch (iParam2){
case 0:
StringCopy(sParam3, "sf_yacht_01", 32);
return 1;
case 1:
StringCopy(sParam3, "sf_yacht_01_int", 32);
return 1;
default:
}
break;
case 48:
switch (iParam2){
case 0:
StringCopy(sParam3, "sf_yacht_02", 32);
return 1;
case 1:
StringCopy(sParam3, "sf_yacht_02_int", 32);
return 1;
default:
}
break;
case 51:
switch (iParam2){
case 0:
StringCopy(sParam3, "Apa_V_mp_h_02_A", 32);
return 1;
default:
}
break;
}
return 0;
}

int func_1065(int iParam0){
switch (iParam0){
case 1:
if(func_871(12)){
return 2500;
}
return Global_262145.f_29721;
default:
}
if(func_124(iParam0, 2)){
return 3000;
}
if(func_124(iParam0, 6)){
return 6500;
}
return 10000;
}

int func_1066(int iParam0, int iParam1, bool bParam2){
switch (iParam0){
case 1:
switch (iParam1){
case 6:
if(func_1069()){
if(bParam2){
if(func_871(12)){
if(vdist2(Local_171.f_891.f_1[func_1068() /*15*/].f_4, Local_2051) > pow(3f, 2f)){
return 1;
}}else{
return 1;
}
}
elseif(func_1067()){
return 1;
}}
return 0;
default:
}
break;
}
return 1;
}

int func_1067(){
int iVar0;
iVar0=PED::GET_PED_PARACHUTE_STATE(iLocal_2048);
if(iVar0 !=-1 && iVar0 !=0){
return 1;
}
return 0;
}

int func_1068(){
return 15;
}

int func_1069(){
if(func_1071(0) || func_1070(0, iLocal_2050)){
return 0;
}
return func_42(Local_2104.f_1234.f_11, 10000, 0);
}


bool func_1070(int iParam0, int iParam1){
return func_150(&(Local_2109[iParam1 /*229*/].f_209), iParam0);
}


bool func_1071(int iParam0){
return func_150(&(Local_2104.f_1189), iParam0);
}

int func_1072(int iParam0){
switch (iParam0){
case 0:
if(func_710(29) || func_675(iLocal_2050, 22)){
return 1;
}
break;
}
return 0;
}


char* func_1073(int iParam0){
switch (iParam0){
case 0:
return "FXR_TXT_YAC_0";
default:
}
return "";
}

int func_1074(var uParam0){
return 176;
}


char* func_1075(int iParam0){
switch (iParam0){
case 0:
return "FXR_BLIP_TPEVD";
default:
}
return "R2P_MENU_DE99F";
}

int func_1076(int iParam0){
switch (iParam0){
case 0:
if(!func_168(iLocal_2050, 2)){
return 0;
}
break;
}
return 1;
}

int func_1077(){
return joaat("seashark");
}

int func_1078(){
if(func_1079(1)){
return 1;
}
return 0;
}

int func_1079(int iParam0){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2048, Local_171.f_1752.f_1[iParam0 /*9*/].f_2, Local_171.f_1752.f_1[iParam0 /*9*/].f_5, Local_171.f_1752.f_1[iParam0 /*9*/].f_8, 0, 1, 0)){
return 1;
}
return 0;
}


Vector3 func__1080(int iParam0){
switch (iParam0){
case 0:
return func_1081(Local_2104.f_1234.f_6);
case 2:
return 0f, 0f, 0f;
default:
}
return Local_171.f_1808.f_1[iParam0 /*18*/].f_4;
}


Vector3 func__1081(int iParam0){
switch (iParam0){
case 0:
return Local_171.f_891.f_1[func_670(0) /*15*/].f_4;
case 1:
switch (func_651()){
case 3:
return -957.793f, -1382.603f, 0.239f;
case 4:
return -766.367f, -1378.103f, 0.239f;
default:
}
break;
case 2:
switch (func_651()){
case 3:
return -920.423f, -1369.755f, 0.239f;
case 4:
return -792.666f, -1403.088f, 0.239f;
default:
}
break;
}
return 0f, 0f, 0f;
}

int func_1082(int iParam0){
switch (iParam0){
case 0:
if(func_167(func_670(0), 6) || func_704(func_670(0), iLocal_2050, 5)){
return 1;
}
break;
default:
if(Local_1955.f_1 < (Local_171.f_1808.f_1[iParam0 /*18*/].f_8 * Local_171.f_1808.f_1[iParam0 /*18*/].f_8)){
return 1;
}
break;
}
return 0;
}


Vector3 func__1083(int iParam0){
float fVar0;
float fVar1;
float fVar2;
struct<3> Var3;
switch (iParam0){
case 0:
switch (func_651()){
case 3:
return -952.6234f, -1378.573f, 0.6004f;
case 4:
return -762.6877f, -1376.378f, 0.6002f;
default:
}
break;
case 2:
return 0f, 0f, 0f;
}
fVar0=(Local_171.f_1808.f_1[iParam0 /*18*/].f_7 / 2f);
fVar1=(fVar0 * 0.25f);
fVar2=(fVar0 * 0.5f);
Var3={
Local_171.f_1808.f_1[iParam0 /*18*/].f_4 
};
if(func_119()){
Var3.f_0=(Var3.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}else{
Var3.f_0=(Var3.f_0 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}
if(func_119()){
Var3.f_1=(Var3.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}else{
Var3.f_1=(Var3.f_1 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}
return Var3;
}

int func_1084(int iParam0){
Call_Loc(Local_213.f_562);
Stack.Push(!StackVal);
Stack.Push(iParam0);
Call_Loc(Local_213.f_562.f_1);
if(StackVal || !StackVal){
return 0;
}
switch (iParam0){
case 1:
return func_1049()==4;
default:
}
return 0;
}

int func_1085(int iParam0){
switch (iParam0){
case 0:
return func_1049()==1;
case 1:
switch (func_1049()){
case 0:
case 1:
case 2:
case 4:
return 1;
default:
}
break;
case 2:
return 0;
}
return 0;
}

int func_1086(){
switch (func_1049()){
case 0:
case 1:
case 2:
case 4:
return 1;
default:
}
return 0;
}


float func_1087(){
if(!func_168(iLocal_2050, 2)){
return 60f;
}
return 1f;
}

int func_1088(){
return 1;
}

int func_1089(){
if(func_1090(iLocal_2050, 2)){
return 1;
}
return 0;
}


bool func_1090(int iParam0, int iParam1){
if(iParam0==iLocal_2050){
return func_150(&(Local_2109[iLocal_2049 /*229*/].f_176.f_2), iParam1);
}
return func_150(&(Local_2109[iParam0 /*229*/].f_176.f_2), iParam1);
}


float func_1091(int iParam0){
if(iParam0==func_670(func_1093())){
if(!func_1092(iParam0, iLocal_2050, 11) && func_168(iLocal_2050, 2)){
return Local_171.f_1808.f_1[2 /*18*/].f_8;
}else{
return -1f;
}}
return 10f;
}


bool func_1092(bool bParam0, int iParam1, int iParam2){
return func_4(&(Local_2109[iParam1 /*229*/].f_68[bParam0 /*2*/]), iParam2);
}

int func_1093(){
switch (Local_2104.f_1234.f_5){
case 0:
return 1;
case 1:
return 4;
case 2:
return 7;
default:
}
return 1;
}


float func_1094(int iParam0){
if(iParam0==func_670(func_1093())){
return 0.25f;
}
return 1f;
}

int func_1095(int iParam0, var uParam1){
if(iParam0==func_670(func_1093())){
switch (func_1049()){
case 7:
return 1;
}
default:
}
return 0;
}

int func_1096(int iParam0){
if(iParam0==func_670(func_1093()) && Local_2104.f_1234.f_5 !=1){
return 1;
}
return 0;
}


void func_1097(int iParam0, var uParam1){
func_1060(iParam0, 2);
}

int func_1098(int iParam0){
if(!func_1063(Local_171.f_1748.f_1[0 /*2*/], Local_171.f_1748.f_1[0 /*2*/].f_1)){
return 0;
}
if((iParam0==func_670(1) || iParam0==func_670(2)) || iParam0==func_670(3)){
if(Local_2104.f_1234.f_5 !=0){
return 0;
}}elseif((iParam0==func_670(4) || iParam0==func_670(5)) || iParam0==func_670(6)){
if(Local_2104.f_1234.f_5 !=1){
return 0;
}}elseif((iParam0==func_670(7) || iParam0==func_670(8)) || iParam0==func_670(9)){
if(Local_2104.f_1234.f_5 !=2){
return 0;
}}
return 1;
}


bool func_1099(int iParam0, struct<3> Param1){
switch (iParam0){
case 0:
if(!func_1071(1)){
return 0;
}
Stack.Push(iParam0);
Call_Loc(Local_213.f_777.f_18);
if(!StackVal){
return 0;
}
break;
case 1:
if(!func_168(iLocal_2050, 2)){
return 0;
}
break;
case 2:
if(func_1049() < 5){
return 0;
}
break;
case 3:
if(!func_1100()){
return 0;
}
break;
}
return ENTITY::IS_ENTITY_AT_COORD(iLocal_2048, Param1 + Vector(1f, 0f, 0f), 1f, 1f, 2f, 0, 1, 0);
}


bool func_1100(){
ENTITY::IS_ENTITY_DEAD(iLocal_2048, 0);
return INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_2048)==joaat("YachtRm_Bridge");
}


var func__1101(var uParam0){
Stack.Push(uParam0);
Call_Loc(Local_213.f_777.f_18);
return StackVal;
}

int func_1102(int iParam0){
switch (iParam0){
case 0:
switch (func_1049()){
case 5:
if(!func_168(iLocal_2050, 2) && !func_1104(1, 1)){
return 1;
}
break;
case 6:
case 7:
case 8:
if(!func_168(iLocal_2050, 2)){
return 1;
}
break;
}
break;
case 1:
switch (func_1049()){
case 10:
if(func_1103() && !func_1100()){
return 1;
}
break;
}
break;
case 2:
switch (func_1049()){
case 5:
if(!func_168(iLocal_2050, 2) && func_1104(1, 1)){
return 1;
}
break;
}
break;
}
return 0;
}

int func_1103(){
if((func_168(iLocal_2050, 2) && !func_168(iLocal_2050, 8)) && !func_168(iLocal_2050, 26)){
return 1;
}
return 0;
}

int func_1104(int iParam0, int iParam1){
if(iParam0 && func_675(iLocal_2050, 21)){
return 1;
}
if(iParam1 && func_710(28)){
return 1;
}
return 0;
}


void func_1105(int iParam0){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_14==func_1119()){
func_1117(iParam0, 204791);
func_1117(iParam0, 204717);
func_1117(iParam0, 204693);
}elseif(Local_171.f_38.f_1[iParam0 /*21*/].f_14==func_1114()){
func_1117(iParam0, 204622);
func_1117(iParam0, 204791);
func_1117(iParam0, 204693);
func_1117(iParam0, 204598);
func_1117(iParam0, 204561);
}elseif(func_56(iParam0, 3)){
func_1117(iParam0, 204622);
func_1117(iParam0, 204791);
func_1117(iParam0, 204693);
func_1117(iParam0, 204598);
func_1117(iParam0, 204505);
}else{
func_1106(iParam0);
func_1117(iParam0, 204598);
func_1117(iParam0, 204505);
}}


void func_1106(int iParam0){
func_1117(iParam0, 204473);
func_1117(iParam0, 204441);
func_1117(iParam0, 204791);
func_1117(iParam0, 204717);
func_1117(iParam0, 204693);
}

int func_1107(int iParam0){
func_93(iParam0, 15);
if(func_94(iParam0, 14)){
return 1;
}
return 0;
}

int func_1108(int iParam0){
func_93(iParam0, 18);
if(func_94(iParam0, 11)){
return 1;
}
return 0;
}

int func_1109(var uParam0){
if(func_1110()){
return 1;
}
return 0;
}

int func_1110(){
if(func_710(10) || func_675(iLocal_2050, 6)){
return 1;
}
return 0;
}

int func_1111(var uParam0){
if(func_710(18) || func_675(iLocal_2050, 14)){
return 1;
}
return 0;
}

int func_1112(int iParam0){
if(func_94(iParam0, 25)){
return 1;
}
return 0;
}

int func_1113(int iParam0){
func_93(iParam0, 16);
if(func_94(iParam0, 0)){
return 1;
}
return 0;
}

int func_1114(){
switch (func_651()){
case 3:
return 18;
case 4:
return 17;
default:
}
return 0;
}

int func_1115(int iParam0){
if(func_94(iParam0, 10)){
return 1;
}
return 0;
}

int func_1116(int iParam0){
if(func_94(iParam0, 13)){
return 1;
}
return 0;
}


void func_1117(int iParam0, int iParam1){
Local_217[iParam0 /*21*/].f_10[Local_217[iParam0 /*21*/].f_18]=iParam1;
Local_217[iParam0 /*21*/].f_18++;
}

int func_1118(int iParam0){
if(func_94(iParam0, 12)){
return 1;
}
return 0;
}

int func_1119(){
switch (func_651()){
case 3:
return 19;
case 4:
return 18;
default:
}
return 0;
}

int func_1120(int iParam0){
if(func_1121(iParam0)){
return 1;
}
return 0;
}

int func_1121(int iParam0){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_8==func_670(14) && Local_171.f_38.f_1[iParam0 /*21*/].f_9==-1){
return 1;
}
return 0;
}


float func_1122(int iParam0){
if(func_1121(iParam0)){
return 50f;
}
return 30f;
}


Vector3 func__1123(int iParam0, var uParam1){
if(func_1121(iParam0)){
return 0f, -1000f, 200f;
}
return 0f, 0f, 0f;
}


void func_1124(var uParam0, int iParam1){
PED::SET_PED_HEARING_RANGE(iParam1, 200f);
PED::SET_PED_SEEING_RANGE(iParam1, 200f);
}

int func_1125(int iParam0, var uParam1){
if(!func_1126(iParam0)){
return 1;
}
return 0;
}

int func_1126(bool bParam0){
int iVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[bParam0 /*25*/])){
iVar0=NETWORK::NET_TO_PED(Local_2104.f_22[bParam0 /*25*/]);
ENTITY::IS_ENTITY_DEAD(iVar0, 0);
ENTITY::IS_ENTITY_DEAD(iLocal_2048, 0);
if(func_1127(INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0))==func_1127(INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_2048))){
return 1;
}}
return 0;
}

int func_1127(int iParam0){
switch (iParam0){
case joaat("YachtRm_entry"):
case joaat("YachtRm_weebathroom"):
case joaat("YachtRm_Bath1"):
case joaat("YachtRm_Bath2"):
case joaat("YachtRm_Bed1"):
case joaat("YachtRm_Bed3"):
case joaat("YachtRm_Hall"):
case joaat("YachtRm_hallsmall"):
case joaat("YachtRm_Study"):
return 0;
case joaat("YachtRm_bar"):
case joaat("GtaMloRoom_Bar1"):
case joaat("YachtRm_kitch"):
case joaat("YachtRm_stairs"):
return 1;
case joaat("YachtRm_Bridge"):
return 2;
default:
}
return -1;
}

int func_1128(var uParam0){
return 1;
}

int func_1129(bool bParam0){
if(func_56(bParam0, 3)){
return 0;
}
if(func_185(bParam0) !=3){
return 0;
}
if(func_94(bParam0, 19)){
return 0;
}
if(func_1110()){
return 0;
}
if(!func_1079(1)){
return 0;
}
if(func_94(bParam0, 2)){
if(!func_168(iLocal_2050, 2)){
return 0;
}}elseif(func_168(iLocal_2050, 2)){
return 0;
}
if(func_1139(Local_171.f_38.f_1[bParam0 /*21*/].f_14)){
if(!func_1130()){
return 0;
}}
if(!func_1126(bParam0)){
return 0;
}
return 1;
}

int func_1130(){
if(func_1131(bLocal_2046, func_1137(), 0, 0) && Local_2051.f_2 > 2.3f){
return 1;
}
return 0;
}

int func_1131(bool bParam0, bool bParam1, float fParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
if(func_1136(bParam1)){
if(!bParam3){
return func_1132(func_104(bParam0), bParam1, fParam2);
}elseif(func_1132(func_104(bParam0), bParam1, fParam2)){
return 1;
}elseif(func_1132(func_104(bParam0), bParam1, 15f)){
if(func_9(bParam0, 1, 1)){
iVar0=PLAYER::GET_PLAYER_PED(bParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
iVar1=PED::GET_VEHICLE_PED_IS_USING(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Yacht")){
iVar2=DECORATOR::DECOR_GET_INT(iVar1, "PYV_Yacht");
if(iVar2==bParam1){
return 1;
}}
}}}}}}
return 0;
}

int func_1132(struct<3> Param0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(func_1136(iParam1)){
func_1133(iParam1, &Var0, &Var1, &fVar2, fParam2);
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1);
}
return 0;
}


void func_1133(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4){
struct<3> Var0;
float fVar1;
struct<3> Var2;
Var0={
func_1135(iParam0) 
};
fVar1=func_1134(iParam0);
Var2={
0f, 1f, 0f 
};
func_364(&Var2, 0f, 0f, fVar1);
Var2={
Var2 / FtoV(vmag(Var2)) 
};
*uParam1={
Var0 + Var2 * FtoV((0.5f * (120f + fParam4))) 
};
uParam1->f_2=(uParam1->f_2 - (0.5f * (34f + fParam4)));
*uParam2={
Var0 - Var2 * FtoV((0.5f * (120f + fParam4))) 
};
uParam2->f_2=(uParam2->f_2 + (0.5f * (34f + fParam4)));
*uParam3=(16.17f + fParam4);
}


var func__1134(int iParam0){
return Global_4280768[iParam0 /*45*/].f_7;
}


Vector3 func__1135(bool bParam0){
return Global_4280768[bParam0 /*45*/].f_4;
}

int func_1136(int iParam0){
if(iParam0 > -1 && iParam0 < 42){
return 1;
}
return 0;
}


bool func_1137(){
return func_1138(Local_171.f_1748.f_1[0 /*2*/]);
}

int func_1138(int iParam0){
switch (iParam0){
case 15:
return 37;
case 16:
return 38;
case 17:
return 39;
case 47:
return 40;
case 48:
return 41;
default:
}
return -1;
}

int func_1139(int iParam0){
if(iParam0==func_1119() || iParam0==func_1114()){
return 0;
}
return 1;
}


void func_1140(int iParam0){
switch (iParam0){
case 0:
func_769(iParam0, 0, 8);
func_754(iParam0, 0, 1);
func_769(iParam0, 1, 11);
break;
case 1:
func_753(iParam0);
break;
case 2:
func_769(iParam0, 0, 0);
func_767(iParam0, 0, 1, 206453);
func_769(iParam0, 1, 12);
func_767(iParam0, 1, 2, 206263);
func_769(iParam0, 2, 23);
break;
case 3:
func_769(iParam0, 0, 0);
func_767(iParam0, 0, 1, 206263);
func_769(iParam0, 1, 23);
break;
}}

int func_1141(int iParam0, var uParam1){
return func_1142(iParam0, 0);
}

int func_1142(bool bParam0, int iParam1){
if(func_88(Local_171.f_38.f_1[bParam0 /*21*/].f_14)){
if((func_13(&(Local_2104.f_22[bParam0 /*25*/].f_14), Local_2104.f_22[bParam0 /*25*/].f_16, 0) || func_1143(bParam0)) || iParam1){
return 1;
}}
return 0;
}

int func_1143(int iParam0){
if(((((func_94(iParam0, 1) || func_94(iParam0, 0)) || func_94(iParam0, 14)) || func_94(iParam0, 12)) || func_94(iParam0, 11)) || func_94(iParam0, 13)){
return 1;
}
return 0;
}

int func_1144(var uParam0, var uParam1){
if(func_710(25)){
return 1;
}
return 0;
}

int func_1145(int iParam0){
if(func_1121(iParam0)){
return 2;
}elseif(func_1146(iParam0)){
return 3;
}elseif(func_56(iParam0, 3)){
return 0;
}
return 1;
}

int func_1146(int iParam0){
if(Local_171.f_38.f_1[iParam0 /*21*/].f_8==func_670(14) && Local_171.f_38.f_1[iParam0 /*21*/].f_9 !=-1){
return 1;
}
return 0;
}


void func_1147(int iParam0, int iParam1, bool bParam2){
if(bParam2){
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 200);
PED::SET_PED_COMBAT_ABILITY(iParam1, 1);
PED::SET_PED_ACCURACY(iParam1, 10);
PED::SET_PED_SHOOT_RATE(iParam1, 60);
return;
}
func_1060(iParam0, 0);
if(func_56(iParam0, 3)){
PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
}else{
PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, 0);
PED::SET_PED_HEARING_RANGE(iParam1, 10f);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 9, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 79, 1);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 9, 2, 0, 0);
}}

int func_1148(int iParam0){
if(!func_1063(Local_171.f_1748.f_1[0 /*2*/], Local_171.f_1748.f_1[0 /*2*/].f_1)){
return 0;
}
if(iParam0==func_670(12) || iParam0==func_670(13)){
return func_710(19);
}
return 1;
}


void func_1149(){
func_1152();
func_1150();
}


void func_1150(){
if(!func_1151()){
return;
}
if(func_710(25)){
func_14(&(Local_2104.f_1234.f_11), 0, 0);
}}

int func_1151(){
if(func_15(&(Local_2104.f_1234.f_11))){
return 0;
}
return 1;
}


void func_1152(){
if(!func_1156()){
return;
}
if(func_1155()){
func_1154();
}
if(func_1153(1)){
func_1154();
}}


bool func_1153(int iParam0){
return func_150(&(Local_2104.f_1126), iParam0);
}


void func_1154(){
func_771(10);
}

int func_1155(){
int iVar0;
iVar0=0;
while (iVar0 < Local_171.f_38.f_632){
if(func_1139(iVar0)){
if(func_88(iVar0)){
return 1;
}}else{
}
iVar0++;
}
return 0;
}

int func_1156(){
if(func_1110()){
return 0;
}
return 1;
}


void func_1157(){
func_1193();
func_1190();
func_1186();
func_1184();
func_1182();
func_1181();
func_1178();
func_1176();
func_1174();
func_1171();
func_1169();
func_1167();
func_1163();
func_1161();
func_1158();
}


void func_1158(){
if(!func_1160()){
return;
}
Stack.Push(1);
Call_Loc(Local_213.f_484.f_2);
if(func_1159(StackVal, StackVal, StackVal, Local_2051) < pow(Local_171.f_2085.f_1[1 /*26*/].f_6, 2f)){
func_708(25);
}}


float func_1159(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3){
return vdist2(Param0.f_0, Param0.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
}

int func_1160(){
if(!func_710(32) && !func_675(iLocal_2050, 25)){
if(func_1100()){
return 1;
}}
return 0;
}


void func_1161(){
if(!func_1162()){
return;
}
if(func_15(&(Local_2109[iLocal_2049 /*229*/].f_176.f_4[1 /*4*/].f_2))){
func_708(24);
}}

int func_1162(){
if(!func_710(31) && !func_675(iLocal_2050, 24)){
if(func_1069()){
return 1;
}}
return 0;
}


void func_1163(){
bool bVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[func_1068() /*8*/]) && iLocal_2052==NETWORK::NET_TO_VEH(Local_2104.f_773[func_1068() /*8*/])){
bVar0=true;
}
if(bVar0){
func_859(12);
}else{
func_1166(12);
func_1164(4);
}}


void func_1164(int iParam0){
if(func_150(&uLocal_2020, iParam0)){
func_1165(&uLocal_2020, iParam0);
}}


void func_1165(var uParam0, int iParam1){
int iVar0;
bool bVar1;
iVar0=(iParam1 / 32);
bVar1=(iParam1 % 32);
MISC::CLEAR_BIT(uParam0[iVar0], bVar1);
}


void func_1166(int iParam0){
if(func_133(&uLocal_2070, iParam0)){}}


void func_1167(){
if(!func_1168()){
return;
}
if(vdist2(Local_171.f_1870[0 /*4*/], Local_2051) > pow(150f, 2f)){
func_708(22);
}}

int func_1168(){
switch (func_1049()){
case 10:
if(!func_710(29) && !func_675(iLocal_2050, 22)){
return 1;
}
break;
}
return 0;
}


void func_1169(){
if(!func_1170()){
return;
}
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_2048, Local_171.f_2846[0 /*42*/] + Vector(1f, 0f, 0f), 1f, 1f, 2f, 0, 1, 0)){
func_708(21);
}}

int func_1170(){
switch (func_1049()){
case 5:
if(!func_1104(1, 1)){
return 1;
}
break;
}
return 0;
}


void func_1171(){
if(!func_1173()){
return;
}
if(func_94(func_670(15), 5)){
if(func_1172(func_670(15)) && func_1172(func_670(16))){
func_708(20);
}}}

int func_1172(bool bParam0){
int iVar0;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[bParam0 /*25*/])){
return 1;
}
if(func_709(Local_2104.f_22[bParam0 /*25*/])){
iVar0=NETWORK::NET_TO_PED(Local_2104.f_22[bParam0 /*25*/]);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
PED::SET_PED_KEEP_TASK(iVar0, 0);
TASK::CLEAR_PED_TASKS(iVar0);
}
func_154(&(Local_2104.f_22[bParam0 /*25*/]));
return 1;
}
return 0;
}

int func_1173(){
if(func_710(26) || func_675(iLocal_2050, 20)){
return 0;
}
return 1;
}


void func_1174(){
if(!func_1175()){
return;
}
if(func_42(Local_2104.f_1234.f_11, 10000, 0)){
if(vdist2(Local_171.f_1808.f_1[1 /*18*/].f_4, Local_2051) < pow(200f, 2f)){
func_859(8);
}else{
func_859(7);
}}}

int func_1175(){
if(func_871(7) || func_871(8)){
return 0;
}
return 1;
}


void func_1176(){
if(!func_1177()){
return;
}
if(vdist2(Local_171.f_1808.f_1[1 /*18*/].f_4, Local_2051) < pow(200f, 2f)){
func_708(19);
}}

int func_1177(){
if(func_710(25) || func_675(iLocal_2050, 19)){
return 0;
}
return 1;
}


void func_1178(){
bool bVar0;
bool bVar1;
if(!func_1180()){
return;
}
bVar1=false;
while (bVar1 < Local_171.f_891){
if(func_1179(bVar1) && func_704(bVar1, iLocal_2050, 4)){
bVar0=true;
}else{
bVar1++;
}}
if(bVar0){
if(func_13(&(Local_114.f_14), 1000, 0)){
func_708(14);
}}elseif(func_15(&(Local_114.f_14))){
func_28(&(Local_114.f_14));
}}

int func_1179(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
return 1;
default:
}
return 0;
}

int func_1180(){
if(func_710(18) || func_675(iLocal_2050, 14)){
return 0;
}
return 1;
}


void func_1181(){
if(!func_881()){
if(Local_171.f_2846[0 /*42*/].f_5 !=0 || Local_171.f_2846[2 /*42*/].f_5 !=0){
if(func_1110()){
Local_171.f_2846[0 /*42*/].f_5=0;
Local_171.f_2846[2 /*42*/].f_5=0;
}}}}


void func_1182(){
if(!func_1183()){
return;
}
if(func_1103() && !func_1100()){
func_708(8);
}}

int func_1183(){
if(func_710(12) || func_675(iLocal_2050, 8)){
return 0;
}
return 1;
}


void func_1184(){
if(!func_1185()){
return;
}
if(func_1130()){
func_708(7);
}}

int func_1185(){
if(func_710(11) || func_675(iLocal_2050, 7)){
return 0;
}
return 1;
}


void func_1186(){
bool bVar0;
struct<6> Var1;
int iVar2;
if(!func_1188()){
return;
}
bVar0=func_1137();
if(bVar0==-1){
return;
}
Var1={
func_1187(bVar0) 
};
if(!func_168(iLocal_2050, 2)){
HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(-1747338582, Var1.f_0, Var1.f_1, round(Var1.f_3.f_2), 0);
HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
}else{
ENTITY::IS_ENTITY_DEAD(iLocal_2048, 0);
iVar2=func_1127(INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_2048));
if(iVar2 !=-1){
HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(joaat("apa_mpapa_yacht"), Var1.f_0, Var1.f_1, round(Var1.f_3.f_2), iVar2);
}}}


struct<6> func_1187(bool bParam0){
struct<6> Var0;
switch (bParam0){
case 0:
Var0={
-3556.266f, 1470.421f, 4.884f 
};
Var0.f_3={
0f, 0f, 57f 
};
break;
case 1:
Var0={
-3147.593f, 2829.87f, 4.884f 
};
Var0.f_3={
0f, 0f, -88f 
};
break;
case 2:
Var0={
-3277.773f, 2162.67f, 4.884f 
};
Var0.f_3={
0f, 0f, -93f 
};
break;
case 3:
Var0={
-2822.859f, 4052.038f, 4.884f 
};
Var0.f_3={
0f, 0f, 72f 
};
break;
case 4:
Var0={
-3249.902f, 3707.517f, 4.884f 
};
Var0.f_3={
0f, 0f, -98f 
};
break;
case 5:
Var0={
-2384.776f, 4682.65f, 4.884f 
};
Var0.f_3={
0f, 0f, 47f 
};
break;
case 6:
Var0={
-3227.506f, -216.282f, 4.884f 
};
Var0.f_3={
0f, 0f, -3f 
};
break;
case 7:
Var0={
-3447.091f, 289.203f, 4.884f 
};
Var0.f_3={
0f, 0f, 97f 
};
break;
case 8:
Var0={
-2715.69f, -527.168f, 4.884f 
};
Var0.f_3={
0f, 0f, -33f 
};
break;
case 9:
Var0={
-1979.136f, -1538.641f, 4.884f 
};
Var0.f_3={
0f, 0f, 142f 
};
break;
case 10:
Var0={
-2098.85f, -2531.191f, 4.884f 
};
Var0.f_3={
0f, 0f, -143f 
};
break;
case 11:
Var0={
-1598.179f, -1893.706f, 4.884f 
};
Var0.f_3={
0f, 0f, 112f 
};
break;
case 12:
Var0={
-730.969f, -3915.965f, 4.884f 
};
Var0.f_3={
0f, 0f, -168f 
};
break;
case 13:
Var0={
-364.504f, -3571.152f, 4.884f 
};
Var0.f_3={
0f, 0f, 57f 
};
break;
case 14:
Var0={
-1481.238f, -3753.098f, 4.884f 
};
Var0.f_3={
0f, 0f, -18f 
};
break;
case 15:
Var0={
1535.054f, -3064.56f, 4.884f 
};
Var0.f_3={
0f, 0f, 62f 
};
break;
case 16:
Var0={
2468.772f, -2431.949f, 4.884f 
};
Var0.f_3={
0f, 0f, 12f 
};
break;
case 17:
Var0={
2069.509f, -2811.147f, 4.884f 
};
Var0.f_3={
0f, 0f, -148f 
};
break;
case 18:
Var0={
3020.648f, -1516.404f, 4.884f 
};
Var0.f_3={
0f, 0f, 72f 
};
break;
case 19:
Var0={
3025.902f, -701.55f, 4.884f 
};
Var0.f_3={
0f, 0f, -98f 
};
break;
case 20:
Var0={
2960.287f, -2009.984f, 4.884f 
};
Var0.f_3={
0f, 0f, 47f 
};
break;
case 21:
Var0={
3397.975f, 1955.692f, 4.884f 
};
Var0.f_3={
0f, 0f, 77f 
};
break;
case 22:
Var0={
3430.819f, 1203.923f, 4.884f 
};
Var0.f_3={
0f, 0f, -148f 
};
break;
case 23:
Var0={
3787.53f, 2570.704f, 4.884f 
};
Var0.f_3={
0f, 0f, -93f 
};
break;
case 24:
Var0={
4236.866f, 4006.935f, 4.884f 
};
Var0.f_3={
0f, 0f, -118f 
};
break;
case 25:
Var0={
4243.688f, 4597.804f, 4.884f 
};
Var0.f_3={
0f, 0f, -68f 
};
break;
case 26:
Var0={
4209.004f, 3395.541f, 4.884f 
};
Var0.f_3={
0f, 0f, -98f 
};
break;
case 27:
Var0={
3736.457f, 5769.835f, 4.884f 
};
Var0.f_3={
0f, 0f, -43f 
};
break;
case 28:
Var0={
3470.213f, 6315.928f, 4.884f 
};
Var0.f_3={
0f, 0f, -23f 
};
break;
case 29:
Var0={
3695.331f, 5192.521f, 4.884f 
};
Var0.f_3={
0f, 0f, 122f 
};
break;
case 30:
Var0={
571.117f, 7144.276f, 4.884f 
};
Var0.f_3={
0f, 0f, -58f 
};
break;
case 31:
Var0={
2026.761f, 6908.321f, 4.884f 
};
Var0.f_3={
0f, 0f, -173f 
};
break;
case 32:
Var0={
1374.476f, 6862.931f, 4.884f 
};
Var0.f_3={
0f, 0f, -3f 
};
break;
case 33:
Var0={
-1169.905f, 6002.997f, 4.884f 
};
Var0.f_3={
0f, 0f, -88f 
};
break;
case 34:
Var0={
-756.928f, 6575.625f, 4.884f 
};
Var0.f_3={
0f, 0f, -153f 
};
break;
case 35:
Var0={
-373.403f, 6967.661f, 4.884f 
};
Var0.f_3={
0f, 0f, -108f 
};
break;
case 36:
Var0={
3637.816f, -4780.584f, 4.9112f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 37:
Var0={
50.6219f, -3312.563f, 9.7065f 
};
Var0.f_3={
0f, 0f, 90.05f 
};
break;
case 38:
Var0={
-3556.677f, 738.4581f, 9.7065f 
};
Var0.f_3={
0f, 0f, 0.05f 
};
break;
case 39:
Var0={
-1766.835f, 5334.093f, 9.7065f 
};
Var0.f_3={
0f, 0f, -9.95f 
};
break;
case 40:
Var0={
-3280.707f, -1580.809f, 9.7065f 
};
Var0.f_3={
0f, 0f, -12.45f 
};
break;
case 41:
Var0={
-833.0568f, -4809.808f, 9.7065f 
};
Var0.f_3={
0f, 0f, -147.45f 
};
break;
}
return Var0;
}

int func_1188(){
switch (func_1189()){
case 4:
case 5:
case 6:
case 7:
return 1;
default:
}
return 0;
}

int func_1189(){
return func_22();
}


void func_1190(){
if(!func_1192()){
return;
}
if(func_1191()){
if(func_13(&(Local_114.f_12), 3000, 0)){
func_708(15);
}}elseif(func_15(&(Local_114.f_12))){
func_28(&(Local_114.f_12));
}}

int func_1191(){
int iVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[func_670(0) /*8*/])){
iVar0=NETWORK::NET_TO_VEH(Local_2104.f_773[func_670(0) /*8*/]);
if(iLocal_2052==iVar0){
return 1;
}}
return 0;
}

int func_1192(){
switch (func_1049()){
case 2:
if(!func_710(20) && !func_675(iLocal_2050, 15)){
return 1;
}
break;
}
return 0;
}


void func_1193(){
if(!func_1195()){
if(HUD::DOES_BLIP_EXIST(Local_114.f_4)){
func_1194();
}
return;
}
if(!HUD::DOES_BLIP_EXIST(Local_114.f_4)){
Local_114.f_4=HUD::ADD_BLIP_FOR_COORD(Local_171.f_1588.f_1[0 /*11*/]);
func_837(&(Local_114.f_4), Local_171.f_1588.f_1[0 /*11*/].f_7.f_1);
HUD::SET_BLIP_ROUTE(Local_114.f_4, true);
HUD::SET_BLIP_PRIORITY(Local_114.f_4, 12);
HUD::SET_BLIP_SCALE(Local_114.f_4, Local_171.f_1588.f_1[0 /*11*/].f_7.f_2);
}}


void func_1194(){
if(HUD::DOES_BLIP_EXIST(Local_114.f_4)){
HUD::REMOVE_BLIP(&(Local_114.f_4));
}}

int func_1195(){
if(!bLocal_2055){
return 0;
}
switch (func_1049()){
case 1:
if(Local_1955.f_0 !=0 && vdist2(Local_2051, Local_171.f_1588.f_1[0 /*11*/]) > pow(Local_171.f_1588.f_1[0 /*11*/].f_3, 2f)){
return 1;
}
break;
}
return 0;
}

int func_1196(){
switch (func_1049()){
case 9:
case 10:
if(!func_187(bLocal_2046, 0, 0)){
return 1;
}
break;
}
return 0;
}

int func_1197(int iParam0){
switch (iParam0){
case 0:
case 1:
switch (Local_1967.f_15){
case 1:
return func_13(&Local_114, 5000, 0);
default:
}
break;
}
return 0;
}

int func_1198(int iParam0){
switch (iParam0){
case 0:
case 1:
switch (Local_1967.f_15){
case 1:
return 1;
default:
}
break;
}
return 0;
}


void func_1199(int iParam0){
switch (iParam0){
case 0:
case 1:
func_28(&Local_114);
break;
}}


void func_1200(int iParam0){
struct<3> Var0;
switch (iParam0){
case 0:
switch (Local_1967.f_15){
case 2:
Var0={
func_1202() 
};
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Air_Defences_Disabled", Var0, "DLC_Security_Investigation_The_Yacht_Sounds", 1, 0, 0);
break;
}
break;
case 1:
switch (Local_1967.f_15){
case 2:
Var0={
func_1201() 
};
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Upload_Complete", Var0, "DLC_Security_Investigations_The_Limo_Sounds", 1, 0, 0);
break;
}
break;
}}


Vector3 func__1201(){
switch (func_651()){
case 3:
return -3275.467f, -1584.136f, 12.59f;
case 4:
return -839.114f, -4811.171f, 12.59f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__1202(){
switch (func_651()){
case 3:
return -3274.531f, -1579.988f, 12.58f;
case 4:
return -836.844f, -4814.738f, 12.587f;
default:
}
return 0f, 0f, 0f;
}


void func_1203(int iParam0){
struct<2> Var0;
Var0=-1;
Var0.f_1=-1;
switch (iParam0){
case 0:
Var0.f_0=3;
func_971(5, &Var0);
break;
case 1:
Var0.f_0=1;
func_971(5, &Var0);
break;
}}


bool func_1204(var uParam0, float fParam1){
struct<3> Var0;
Stack.Push(uParam0);
Call_Loc(Local_213.f_484.f_2);
Var0={
StackVal, StackVal, StackVal 
};
return MISC::ABSF((fParam1 - Var0.f_2)) < 2f;
}


char* func_1205(int iParam0){
switch (iParam0){
case 0:
return "FXR_HT_INTAIRDF";
case 1:
return "FXR_HT_INTMNCBN";
default:
}
return "";
}


Vector3 func__1206(int iParam0){
struct<3> Var0;
switch (iParam0){
case 0:
Var0={
0f, 1f, 0f 
};
func_364(&Var0, 0f, 0f, func_1208());
Var0={
-Var0 
};
break;
case 1:
Var0={
0f, 1f, 0f 
};
func_364(&Var0, 0f, 0f, func_1207());
Var0={
-Var0 
};
break;
}
return Var0;
}


float func_1207(){
switch (func_651()){
case 3:
return 117.169f;
case 4:
return -12.24f;
default:
}
return 0f;
}


float func_1208(){
switch (func_651()){
case 3:
return 23.4f;
case 4:
return -103f;
default:
}
return 0f;
}


Vector3 func__1209(int iParam0){
switch (iParam0){
case 0:
return func_1202();
case 1:
return func_1201();
default:
}
Stack.Push(iParam0);
Call_Loc(Local_213.f_484.f_2);
return StackVal, StackVal, StackVal;
}

int func_1210(int iParam0){
switch (iParam0){
case 0:
return 0;
default:
}
Call_Loc(Local_213.f_484);
Stack.Push(iParam0);
Call_Loc(Local_213.f_484.f_1);
return (StackVal && StackVal);
}


float func_1211(int iParam0){
switch (iParam0){
case 0:
return func_1208();
case 1:
return func_1207();
default:
}
return Local_1967.f_20;
}


Vector3 func__1212(int iParam0){
switch (iParam0){
case 0:
return func_1202();
case 1:
return func_1201();
default:
}
return Local_171.f_2085.f_1[iParam0 /*26*/].f_3;
}


char* func_1213(int iParam0){
switch (iParam0){
case 0:
case 1:
return "anim@amb@warehouse@laptop@";
default:
}
return "";
}


char* func_1214(int iParam0){
switch (iParam0){
case 0:
case 1:
switch (Local_1967.f_15){
case 0:
return "enter";
case 1:
return "idle_a";
case 2:
return "exit";
default:
}
break;
}
return "";
}

int func_1215(int iParam0){
switch (iParam0){
case 0:
if(!func_1100()){
return 0;
}
break;
case 1:
if(!func_710(32) && !func_675(iLocal_2050, 25)){
return 0;
}
if(!func_1100()){
return 0;
}
break;
}
if(func_1070(iParam0, iLocal_2050)){
return 0;
}
if(func_1071(iParam0) && !func_1216(iParam0, 12)){
return 0;
}
return 1;
}


bool func_1216(int iParam0, int iParam1){
return func_4(&(Local_171.f_2085.f_1[iParam0 /*26*/]), iParam1);
}

int func_1217(){
return 1;
}

int func_1218(){
func_1221();
func_1220();
func_1219();
return 1;
}


void func_1219(){
Local_2104.f_1234.f_15=func_592();
Local_2104.f_1234.f_16=func_592();
}


void func_1220(){
Local_2104.f_1234.f_5=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}


void func_1221(){
int iVar0[3];
int iVar1;
float fVar2;
int iVar3;
func_1224(&iVar0, iVar0, 1);
iVar3=0;
while (iVar3 < 3){
iVar1=iVar0[iVar3];
switch (iVar1){
case 0:
Local_2104.f_1234.f_6=iVar1;
Jump @160;
//curOff=59 break;
default:
fVar2=func_1222(Local_171.f_891.f_1[func_670(0) /*15*/].f_3);
if(fVar2==0f){
fVar2=10f;
}
if(func_97(func_1081(iVar1), fVar2, fVar2, fVar2, 0f, 0, 0, 0, 0f, 0, -1, 0, fVar2, 0, 0, 0, 1)){
Local_2104.f_1234.f_6=iVar1;
}else{
break;
}
iVar3++;
}}}


var func__1222(int iParam0){
struct<2> Var0;
struct<2> Var1;
float fVar2;
float fVar3;
var uVar4;
MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
fVar2=(Var1.f_0 - Var0.f_0);
fVar3=(Var1.f_1 - Var0.f_1);
uVar4=func_1223(fVar2, fVar3);
return uVar4;
}


float func_1223(float fParam0, float fParam1){
if(fParam0 > fParam1){
return fParam0;
}
return fParam1;
}


void func_1224(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=0;
while (iVar0 < iParam1){
(*uParam0)[iVar0]=iVar0;
iVar0++;
}
if(bParam2){
func_1225(uParam0, iParam1);
}}


void func_1225(var uParam0, int iParam1){
int iVar0;
int iVar1;
if(iParam1 < 2){
return;
}
iVar0=(iParam1 - 1);
while (iVar0 >=1){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
func_36(uParam0[iVar0], uParam0[iVar1]);
iVar0=(iVar0 + -1);
}}

int func_1226(){
return 1;
}

int func_1227(){
func_1235();
func_1233();
func_1231();
func_1229();
func_1228();
return 1;
}


void func_1228(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::NETWORK_BLOCK_PROXY_MIGRATION_BETWEEN_TUTORIAL_SESSIONS(1);
}}


void func_1229(){
func_1230(5);
}


void func_1230(bool bParam0){
MISC::SET_BIT(&(Global_2793046.f_5225.f_48), bParam0);
}


void func_1231(){
switch (func_651()){
case 3:
func_1232(18);
break;
case 4:
func_1232(19);
break;
}}


void func_1232(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_48[iVar0]), bVar1);
}


void func_1233(){
switch (func_651()){
case 3:
func_1234(150);
func_1234(151);
func_1234(152);
func_1234(153);
break;
case 4:
func_1234(154);
func_1234(155);
func_1234(156);
func_1234(157);
break;
}}


void func_1234(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_205[iVar0]), bVar1);
}


void func_1235(){
Local_171.f_1808.f_1[2 /*18*/].f_4={
func_1237(Local_2104.f_1234.f_5) 
};
Local_171.f_1864.f_1[0 /*4*/]={
Local_171.f_1808.f_1[2 /*18*/].f_4 
};
Local_171.f_891.f_1[func_670(0) /*15*/].f_4={
func_1081(Local_2104.f_1234.f_6) 
};
Local_171.f_891.f_1[func_670(0) /*15*/].f_7=func_1236(Local_2104.f_1234.f_6);
}


float func_1236(int iParam0){
switch (iParam0){
case 0:
return Local_171.f_891.f_1[func_670(0) /*15*/].f_7;
case 1:
switch (func_651()){
case 3:
return 203.054f;
case 4:
return 50.1625f;
default:
}
break;
case 2:
switch (func_651()){
case 3:
return 27.4145f;
case 4:
return 235.5508f;
default:
}
break;
}
return 0f;
}


Vector3 func__1237(int iParam0){
switch (iParam0){
case 0:
return Local_171.f_1179.f_1[func_670(1) /*12*/].f_4;
case 1:
return Local_171.f_1179.f_1[func_670(4) /*12*/].f_4;
case 2:
return Local_171.f_1179.f_1[func_670(7) /*12*/].f_4;
default:
}
return 0f, 0f, 0f;
}


char* func_1238(var uParam0){
switch (*uParam0){
case 0:
return "FXR_TIC_LOCSPDR";
case 1:
return "FXR_TIC_ULMNCBR";
case 2:
return "FXR_TIC_LOCEVDR";
case 3:
return "FXR_TIC_DSARDFR";
default:
}
return "";
}


char* func_1239(var uParam0){
switch (*uParam0){
case 0:
return "FXR_TIC_LOCSPDL";
case 1:
return "FXR_TIC_ULMNCBL";
case 2:
return "FXR_TIC_LOCEVDL";
case 3:
return "FXR_TIC_DSARDFL";
default:
}
return "";
}

int func_1240(int iParam0){
switch (iParam0){
case 0:
switch (func_1049()){
case 1:
return 1;
default:
}
break;
case 1:
switch (func_1049()){
case 4:
return 1;
default:
}
break;
case 2:
if((func_1241(1) && func_1191()) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2052, -1, 0)==iLocal_2048){
return 1;
}
break;
case 3:
if((func_1069() && !func_871(12)) && func_15(&(Local_2109[iLocal_2049 /*229*/].f_176.f_4[1 /*4*/].f_2))){
return 1;
}
break;
case 4:
if(func_1069() && func_871(12)){
return 1;
}
break;
case 5:
if(func_710(11) || func_675(iLocal_2050, 7)){
return 1;
}
break;
case 6:
switch (func_1049()){
case 5:
return func_1104(1, 1);
default:
}
break;
case 7:
switch (func_1049()){
case 6:
return func_686(5);
default:
}
break;
case 8:
switch (func_1049()){
case 7:
return 1;
default:
}
break;
}
return 0;
}


bool func_1241(int iParam0){
return func_150(&uLocal_2020, iParam0);
}


char* func_1242(int iParam0){
switch (iParam0){
case 0:
return "FXR_HT_SERSPDBT";
case 1:
return "FXR_HT_SERYACHT";
case 2:
return "FXR_HT_SPDBTTRN";
case 3:
return "FXR_HT_ARDFAREA";
case 4:
return "FXR_HT_ARDFTKOF";
case 5:
return "FXR_HT_STEALTH";
case 6:
return "FXR_HT_ULMNCBN";
case 7:
return "FXR_HT_FNDEVD";
case 8:
return "FXR_HT_PHTEVD";
default:
}
return "";
}

int func_1243(int iParam0){
switch (iParam0){
case 3:
return 0;
default:
}
return 1;
}

int func_1244(int iParam0){
switch (iParam0){
case 0:
return 0;
default:
}
return 1;
}


char* func_1245(int iParam0){
switch (iParam0){
case 0:
return "FXFRAUD";
case 3:
return "APAIR";
case 4:
return "FXDL2AU";
default:
}
return "FXIMAUD";
return "";
}

int func_1246(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 4:
switch (func_1247(iParam0, iParam1)){
case 0:
return 2;
case 1:
return 3;
default:
}
break;
default:
switch (func_1247(iParam0, iParam1)){
case 0:
return 3;
case 1:
case 2:
return 2;
default:
}
break;
}
return 0;
}

int func_1247(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 2:
case 6:
case 7:
switch (iParam1){
case 0:
return 0;
case 1:
return 1;
default:
}
break;
case 3:
return 2;
case 4:
return 0;
}
return 1;
}

int func_1248(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
switch (func_1189()){
case 1:
return 1;
default:
}
break;
case 2:
switch (func_1189()){
case 3:
return 1;
default:
}
break;
case 3:
return func_871(8);
case 4:
if(func_710(31) || func_675(iLocal_2050, 24)){
return 1;
}
break;
case 5:
switch (func_1189()){
case 5:
if(func_710(12) || func_675(iLocal_2050, 8)){
return 1;
}
break;
}
break;
case 6:
switch (func_1189()){
case 4:
case 5:
if(func_710(11) || func_675(iLocal_2050, 7)){
if(func_1249()){
return 1;
}}
break;
}
break;
case 7:
switch (func_1189()){
case 7:
return 1;
default:
}
break;
}
return 0;
}

int func_1249(){
if(func_1250(func_1251())){
return 1;
}
return 0;
}


bool func_1250(int iParam0){
return Global_2657589[iParam0 /*466*/].f_272;
}


bool func_1251(){
if(func_83(1)){
return func_78();
}
return bLocal_2046;
}


char* func_1252(int iParam0){
switch (func_651()){
case 3:
switch (iParam0){
case 0:
return "FXFR_D1Y_1A";
case 1:
return "FXIM_D1Y_1A";
case 2:
return "FXIM_D1Y_2A";
case 3:
return "APAIR_ACTIVE";
case 4:
return "FXDL2_49_1A";
case 5:
return "FXIM_D1Y_3A";
case 6:
return "FXIM_D1Y_5A";
case 7:
if(func_1253()){
if(func_1249()){
return "FXIM_D1Y_4D";
}
return "FXIM_D1Y_4C";
}else{
return "FXIM_D1Y_4A";
}
break;
}
break;
case 4:
switch (iParam0){
case 0:
return "FXFR_D1Y_1B";
case 1:
return "FXIM_D1Y_1B";
case 2:
return "FXIM_D1Y_2B";
case 3:
return "APAIR_ACTIVE";
case 4:
return "FXDL2_49_1B";
case 5:
return "FXIM_D1Y_3B";
case 6:
return "FXIM_D1Y_5A";
case 7:
if(func_1253()){
if(func_1249()){
return "FXIM_D1Y_4D";
}
return "FXIM_D1Y_4C";
}else{
return "FXIM_D1Y_4B";
}
break;
}
break;
}
return "";
}

int func_1253(){
if(func_1254(func_1251())){
return 1;
}
return 0;
}

int func_1254(int iParam0){
if(iParam0 !=func_77()){
return Global_1853910[iParam0 /*862*/].f_267.f_404 !=0;
}
return 0;
}


void func_1255(int iParam0){
switch (iParam0){
case 0:
func_1256("FIX_CONF_JOIN", 0);
break;
}}

int func_1256(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_1257(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_1257(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_1260() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_100(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_1258(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944061.f_5[iVar0 /*53*/]=iParam0;
Global_1944061.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944061.f_5[iVar0 /*53*/].f_2[0]=iParam4;
Global_1944061.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944061.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944061.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944061.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_1258(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_1259(iVar0);
return iVar0;
}
iVar0++;
}
Global_1944061++;
if(Global_1944061 > 5){
Global_1944061=5;
return Global_1944061;
}
return (Global_1944061 - 1);
}


void func_1259(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_1260(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_1261(int iParam0){
switch (iParam0){
case 0:
case 2:
case 6:
case 7:
return 2;
default:
}
return 1;
}

int func_1262(int iParam0){
switch (iParam0){
case 2:
return 2000;
case 6:
return 3000;
case 7:
return 10000;
default:
}
return 0;
}


char* func_1263(int iParam0, int iParam1){
switch (func_1247(iParam0, iParam1)){
case 0:
return "FIX_FRANKLIN";
case 1:
return "FIX_IMANI";
case 2:
return "YACHTCAPTAIN";
default:
}
return "";
}

int func_1264(var uParam0){
return 177;
}

int func_1265(int iParam0){
int iVar0;
switch (iParam0){
case 0:
case 1:
iVar0=func_880();
if(iVar0 !=-1 && Local_171.f_2846[iVar0 /*42*/].f_5==iParam0){
return 1;
}
break;
}
return 0;
}


var func__1266(var uParam0){
Call_Loc(Local_213.f_629);
return StackVal;
}


bool func_1267(int iParam0){
switch (iParam0){
case 0:
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > 0.6f;
case 1:
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > 0.5f;
default:
}
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > 0.99f;
}


bool func_1268(int iParam0){
float fVar0;
float fVar1;
fVar0=(ENTITY::GET_ANIM_DURATION(Local_171.f_2243.f_1[iParam0 /*63*/].f_7, Local_171.f_2243.f_1[iParam0 /*63*/].f_9) * 1000f);
switch (iParam0){
case 0:
fVar1=((fVar0 * 0.6f) - IntToFloat(Local_171.f_2243.f_1[iParam0 /*63*/].f_13));
break;
case 1:
fVar1=((fVar0 * 0.5f) - IntToFloat(Local_171.f_2243.f_1[iParam0 /*63*/].f_13));
break;
}
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > (fVar1 / fVar0);
}


bool func_1269(var uParam0, var uParam1){
return bLocal_2046;
}


void func_1270(int iParam0){
switch (iParam0){
case 0:
case 1:
if(func_871(1)){
func_1166(1);
}
break;
}}


void func_1271(int iParam0){
switch (iParam0){
case 0:
if(Local_1968.f_2[iParam0 /*25*/].f_1 !=-1 && !func_871(1)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Barge_Door_Metal", "DLC_Security_Door_Barge_Sounds", 1);
func_859(1);
}
break;
case 1:
if(((Local_1968.f_2[iParam0 /*25*/].f_1 !=-1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1968.f_2[iParam0 /*25*/].f_1)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1968.f_2[iParam0 /*25*/].f_1) > 0.274f) && !func_871(1)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Metal_Door_Push", "GTAO_Script_Doors_Sounds", 1);
func_859(1);
}
break;
}}


float func_1272(int iParam0){
switch (iParam0){
case 0:
case 1:
switch (func_651()){
case 3:
switch (func_880()){
case 0:
return 70.8f;
case 2:
return 70.8f;
default:
}
break;
case 4:
switch (func_880()){
case 0:
return -58.48f;
case 2:
return -58.48f;
default:
}
break;
}
break;
}
return 0f;
}


Vector3 func__1273(int iParam0){
switch (iParam0){
case 0:
case 1:
switch (func_651()){
case 3:
switch (func_880()){
case 0:
return -3225.836f, -1593.62f, 6.316f;
case 2:
return -3261.705f, -1585.621f, 12.387f;
default:
}
break;
case 4:
switch (func_880()){
case 0:
return -880.9914f, -4839.619f, 6.325f;
case 2:
return -849.8585f, -4819.908f, 12.379f;
default:
}
break;
}
break;
}
return 0f, 0f, 0f;
}

int func_1274(){
if(func_1276(1) || func_1275(1, iLocal_2050)){
return 1;
}
return 0;
}


bool func_1275(int iParam0, int iParam1){
return func_150(&(Local_2109[iParam1 /*229*/].f_205), iParam0);
}


bool func_1276(int iParam0){
return func_150(&(Local_2104.f_1114), iParam0);
}


void func_1277(){
func_1285();
func_1283();
func_1282();
func_1281();
func_1279();
func_1194();
func_1278();
}


void func_1278(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::NETWORK_BLOCK_PROXY_MIGRATION_BETWEEN_TUTORIAL_SESSIONS(0);
}}


void func_1279(){
func_1280(7);
}


void func_1280(bool bParam0){
MISC::CLEAR_BIT(&(Global_2793046.f_5225.f_48), bParam0);
}


void func_1281(){
func_1280(6);
}


void func_1282(){
func_1280(5);
}


void func_1283(){
switch (func_651()){
case 3:
func_1284(18);
break;
case 4:
func_1284(19);
break;
}}


void func_1284(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_48[iVar0]), bVar1);
}


void func_1285(){
switch (func_651()){
case 3:
func_1286(150);
func_1286(151);
func_1286(152);
func_1286(153);
break;
case 4:
func_1286(154);
func_1286(155);
func_1286(156);
func_1286(157);
break;
}}


void func_1286(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_205[iVar0]), bVar1);
}

int func_1287(int iParam0){
switch (iParam0){
case 0:
case 1:
if(func_15(&Local_114)){
return func_1288(func_1289(&Local_114, 0, 0), 5000);
}
break;
}
return 0;
}

int func_1288(int iParam0, int iParam1){
if(iParam0 > iParam1){
return iParam1;
}
return iParam0;
}

int func_1289(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

int func_1290(int iParam0){
switch (iParam0){
case 0:
switch (Local_2109[iLocal_2049 /*229*/].f_208){
case 0:
switch (Local_1967.f_15){
case 1:
return 1;
default:
}
break;
}
break;
case 1:
switch (Local_2109[iLocal_2049 /*229*/].f_208){
case 1:
switch (Local_1967.f_15){
case 1:
return 1;
default:
}
break;
}
break;
}
return 0;
}

int func_1291(int iParam0){
switch (iParam0){
case 0:
return func_675(iLocal_2050, 15);
case 1:
return func_675(iLocal_2050, 21);
default:
}
return 0;
}

int func_1292(var uParam0){
return 0;
}

int func_1293(var uParam0, int iParam1){
struct<3> Var0;
switch (iParam1){
case 0:
return func_1295(uParam0, "GPS_Set", iLocal_2048, "DLC_Security_Investigation_The_Yacht_Sounds", 0, 0);
case 1:
switch (func_651()){
case 3:
Var0={
-3225.484f, -1592.636f, 5.9956f 
};
break;
case 4:
Var0={
-880.4415f, -4840.452f, 6.05631f 
};
break;
}
return func_1294(uParam0, "Try_Locked_Door", Var0, "DLC_Security_Investigation_The_Yacht_Sounds", 0, 0, 0);
default:
}
return 0;
}

int func_1294(var uParam0, char* sParam1, struct<3> Param2, char* sParam3, int iParam4, int iParam5, int iParam6){
if(*uParam0==-1){
*uParam0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_COORD(*uParam0, sParam1, Param2, sParam3, iParam4, iParam5, iParam6);
return 1;
}
return 0;
}

int func_1295(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if(*uParam0==-1){
*uParam0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, sParam1, iParam2, sParam3, iParam4, iParam5);
return 1;
}
return 0;
}


char* func_1296(){
return "FIXER_MUSIC_STOP";
}


char* func_1297(){
return "FIXER_FAIL";
}


char* func_1298(int iParam0){
switch (iParam0){
case 0:
return "FIXER_DELIVERING_START";
case 1:
return "FIXER_SUSPENSE";
case 2:
return "FIXER_DELIVERING";
case 3:
return "FIXER_SUSPENSE";
case 4:
return "FIXER_MED_INTENSITY";
case 5:
return "FIXER_VEHICLE_ACTION";
default:
}
return "";
}

int func_1299(int iParam0){
switch (iParam0){
case -1:
return 0;
case 0:
if(func_1049() >=1){
return 1;
}
break;
case 1:
if(func_1049() >=4){
return 2;
}
break;
case 2:
if(func_1049() >=5){
return 3;
}
break;
case 3:
if(func_1110()){
return 4;
}
break;
case 4:
if(func_1049() >=10 && !func_168(iLocal_2050, 2)){
return 5;
}
break;
}
return -1;
}

int func_1300(){
return 4;
}

int func_1301(bool bParam0, var uParam1){
if(func_1014(0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0))){
return 1;
}
return 0;
}

int func_1302(){
switch (func_1189()){
case 7:
return func_1110();
default:
}
return 0;
}

int func_1303(int iParam0, var uParam1){
bool bVar0;
if(iParam0==-1){
return 0;
}
bVar0=iParam0;
if(!func_9(bVar0, 0, 1)){
return 0;
}
if(!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0)){
return 0;
}
return 1;
}


void func_1304(){
func_820(0, 4, 219238);
func_819(0, 1, 1);
func_819(0, 5, 4);
func_820(1, 5, 219192);
func_1321(1, 219147);
func_819(1, 2, 2);
func_819(1, 5, 4);
func_820(2, 43, 219096);
func_819(2, 3, 3);
func_819(2, 5, 4);
func_820(3, 43, 175168);
func_816(3, 4, 219075);
func_819(3, 5, 4);
func_820(4, 5, 219058);
func_819(4, 5, 4);
func_820(5, 19, 218975);
func_819(5, 6, 5);
func_820(6, 43, 218879);
func_1321(6, 218834);
func_819(6, 7, 6);
func_820(7, 15, 218754);
func_819(7, 9, 7);
func_816(7, 8, 218740);
func_820(8, 15, 218660);
func_819(8, 9, 7);
func_816(8, 7, 218585);
func_820(9, 43, 218534);
func_816(9, 10, 218513);
func_820(10, 27, 218284);
func_819(10, 11, 8);
func_820(11, 48, 175168);
}


void func_1305(){
var uVar0[8];
int iVar1;
if(func_168(iLocal_2050, 2)){
if(func_1100()){
func_785("FXR_OT_EXTBRDG", 0);
}else{
func_785("FXR_OT_EXTMNCBN", 0);
}}elseif(!func_168(iLocal_2050, 4)){
func_785("TR_OT_LEAVEAREA", 0);
}elseif(func_1306(0)){
iVar1=func_1013(&uVar0);
if(iVar1 > 1){
if(func_284(func_1251(), 1)){
func_785("TR_OT_WAITLVARM", 0);
}else{
func_785("TR_OT_WAITLVARO", 0);
}}elseif(iVar1==1){
func_1010("TR_OT_WAITLVARP", NETWORK::NETWORK_GET_PLAYER_INDEX(uVar0[0]), 1, 0);
}}}

int func_1306(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(iVar0 !=iLocal_2049){
iVar1=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)){
if(func_1014(iParam0, iVar1)){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_1307(){
if(func_686(7)){
return 1;
}
return 0;
}


void func_1308(){
if(!func_1309(7)){
func_785("FXR_OT_WAITIMAN", 0);
}else{
func_775();
}}


bool func_1309(int iParam0){
int iVar0;
iVar0=iParam0;
return func_687(iVar0);
}

int func_1310(){
if(!func_2497(42) && !func_1311(iLocal_2050, 0)){
return 1;
}
return 0;
}


bool func_1311(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET(Local_2109[iParam0 /*229*/].f_222[iVar0], iVar1);
}


void func_1312(){
if(!func_168(iLocal_2050, 2)){
if(!func_1130()){
func_785("FXR_OT_BRDYACHT", 0);
}else{
func_785("FXR_OT_ENTMNCBN", 0);
}}elseif(func_1100()){
func_785("FXR_OT_EXTBRDG", 0);
}else{
func_785("FXR_OT_SENDIMAN", 0);
}}


bool func_1313(){
return func_2497(42);
}


void func_1314(){
if(!func_168(iLocal_2050, 2)){
if(!func_1130()){
func_785("FXR_OT_BRDYACHT", 0);
}else{
func_785("FXR_OT_ENTMNCBN", 0);
}}elseif(func_1100()){
func_785("FXR_OT_EXTBRDG", 0);
}else{
func_785("FXR_OT_PHOTEVD", 0);
}}


void func_1315(){
struct<2> Var0;
if(Local_2104.f_1234.f_16==iLocal_2050){
Var0=-1;
Var0.f_1=-1;
Var0.f_0=2;
func_971(5, &Var0);
}}


void func_1316(){
if(!func_168(iLocal_2050, 2)){
if(!func_1130()){
func_785("FXR_OT_BRDYACHT", 0);
}else{
func_785("FXR_OT_ENTMNCBN", 0);
}}elseif(func_1100()){
func_785("FXR_OT_EXTBRDG", 0);
}elseif(!func_686(5)){
func_775();
}else{
func_785("FXR_OT_FNDEVD", 0);
}}


void func_1317(){
if(!func_168(iLocal_2050, 2)){
if(!func_1130()){
func_785("FXR_OT_BRDYACHT", 0);
}elseif(!func_1104(1, 1)){
func_785("FXR_OT_ENTMNCBN", 0);
}else{
func_785("FXR_OT_ENTBRDG", 0);
}}else{
func_785("FXR_OT_LOCDRCT", 0);
}}


void func_1318(){
func_785("FXR_OT_SERYACHT", 0);
}

int func_1319(){
if(func_686(2)){
return 1;
}
return 0;
}


void func_1320(){
if(!func_1058()){
func_785("FXR_OT_ENTSPDBT", 0);
}else{
func_775();
}}


void func_1321(int iParam0, int iParam1){
Local_216[iParam0 /*30*/].f_27=iParam1;
}


void func_1322(){
struct<2> Var0;
if(Local_2104.f_1234.f_15==iLocal_2050){
Var0=-1;
Var0.f_1=-1;
Var0.f_0=0;
func_971(5, &Var0);
}}


void func_1323(){
if(HUD::DOES_BLIP_EXIST(Local_114.f_4)){
func_812("FXR_GOTO", "FXR_LOC_PDSMAR", 12, 0);
}else{
func_785("FXR_OT_SERSPDBT", 0);
}}


void func_1324(){
func_812("FXR_GOTO", "FXR_LOC_PDSMAR", 12, 0);
}


void func_1325(){
func_832(0, 4);
func_831(0, 1);
func_829(0, 4, 219713);
func_832(1, 5);
func_1030(1, 219653);
func_829(1, 2, 219632);
func_829(1, 4, 219713);
func_832(2, 43);
func_829(2, 3, 219610);
func_829(2, 4, 219713);
func_832(3, 5);
func_829(3, 4, 219713);
func_832(4, 19);
func_829(4, 5, 219589);
func_832(5, 43);
func_1030(5, 219505);
func_829(5, 6, 219476);
func_832(6, 15);
func_831(6, 7);
func_832(7, 27);
func_825(7, 219455);
func_831(7, 8);
func_832(8, 48);
}


void func_1326(){
if(func_1110()){
func_771(19);
}}

int func_1327(){
if(func_208(func_670(func_1093()), 6)){
return 1;
}
return 0;
}


void func_1328(){
bool bVar0;
int iVar1;
int iVar2;
bVar0=func_670(func_1093());
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar2=PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
if(func_1092(bVar0, iVar2, 11) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)){
Local_2104.f_1234.f_16=iVar2;
}else{
iVar1++;
}}}

int func_1329(){
if(func_1071(1)){
return 1;
}
return 0;
}

int func_1330(){
if(func_710(20)){
return 1;
}
return 0;
}

int func_1331(){
if(func_1276(0)){
return 1;
}
return 0;
}


void func_1332(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar1=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(func_1275(0, iVar1)){
Local_2104.f_1234.f_15=iVar1;
}else{
iVar0++;
}}}

int func_1333(){
if(func_1276(1)){
return 1;
}
return 0;
}


void func_1334(){
int iVar0;
Local_171.f_2371[0 /*6*/]=2;
Local_171.f_2371[0 /*6*/].f_2=5000;
Local_171.f_2371[0 /*6*/].f_1="FXR_HUD_DSAIRDF";
Local_171.f_2371[1 /*6*/]=2;
Local_171.f_2371[1 /*6*/].f_2=5000;
Local_171.f_2371[1 /*6*/].f_1="FXR_HUD_ULMNCBN";
Local_171.f_2243=2;
Local_171.f_2243.f_1[0 /*63*/].f_24=1;
Local_171.f_2243.f_1[0 /*63*/].f_7="anim@door_trans@hinge_l@";
Local_171.f_2243.f_1[0 /*63*/].f_9="charge_cam_left";
Local_171.f_2243.f_1[0 /*63*/].f_25[0 /*7*/].f_4="charge_player1";
func_1038(0, 3);
func_1038(0, 5);
Local_171.f_2243.f_1[1 /*63*/].f_24=1;
Local_171.f_2243.f_1[1 /*63*/].f_7="anim@door_trans@hinge_l@";
Local_171.f_2243.f_1[1 /*63*/].f_9="walk_cam_left";
Local_171.f_2243.f_1[1 /*63*/].f_25[0 /*7*/].f_4="walk_player1";
func_1038(1, 3);
func_1038(1, 5);
Local_171.f_2085=2;
Local_171.f_2085.f_1[0 /*26*/].f_2=3;
Local_171.f_2085.f_1[0 /*26*/].f_3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_1202(), func_1208(), 0f, -0.5f, -0.8f) 
};
Local_171.f_2085.f_1[0 /*26*/].f_7=75f;
Local_171.f_2085.f_1[0 /*26*/].f_6=1.25f;
Local_171.f_2085.f_1[0 /*26*/].f_16=3;
func_1338(0, 5);
func_1338(0, 14);
func_1338(0, 7);
Local_171.f_2085.f_1[1 /*26*/].f_2=3;
Local_171.f_2085.f_1[1 /*26*/].f_3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_1201(), func_1207(), 0f, -0.5f, -0.8f) 
};
Local_171.f_2085.f_1[1 /*26*/].f_7=75f;
Local_171.f_2085.f_1[1 /*26*/].f_6=1.25f;
Local_171.f_2085.f_1[1 /*26*/].f_16=3;
Local_171.f_2085.f_1[1 /*26*/].f_8.f_1=1;
func_1338(1, 5);
func_1338(1, 14);
func_1338(1, 7);
iVar0=0;
while (iVar0 < Local_171.f_38){
Local_171.f_38.f_1[iVar0 /*21*/].f_12=func_1337(iVar0);
Local_171.f_38.f_1[iVar0 /*21*/].f_3={
Local_171.f_38.f_1[iVar0 /*21*/].f_3 + Vector(0.1f, 0f, 0f) 
};
iVar0++;
}
switch (func_651()){
case 3:
Local_171.f_38.f_632[6 /*10*/].f_8=2000;
Local_171.f_38.f_632[11 /*10*/].f_8=2000;
Local_171.f_38.f_632[16 /*10*/].f_8=2000;
Local_171.f_38.f_632[17 /*10*/].f_8=2000;
break;
case 4:
Local_171.f_38.f_632[6 /*10*/].f_8=2000;
Local_171.f_38.f_632[10 /*10*/].f_8=2000;
Local_171.f_38.f_632[14 /*10*/].f_8=2000;
Local_171.f_38.f_632[19 /*10*/].f_8=2000;
break;
}
Local_171.f_2846[0 /*42*/].f_5=1;
func_1040(0, 0);
func_1039(1, 0);
Local_171.f_2846[2 /*42*/].f_5=1;
func_1040(2, 0);
func_1039(3, 0);
Local_171.f_1179.f_1[func_670(1) /*12*/].f_4={
Local_171.f_1179.f_1[func_670(1) /*12*/].f_4 + Vector(0.012f, 0f, 0f) 
};
Local_171.f_1179.f_1[func_670(4) /*12*/].f_4={
Local_171.f_1179.f_1[func_670(4) /*12*/].f_4 + Vector(0.012f, 0f, 0f) 
};
Local_171.f_1179.f_1[func_670(7) /*12*/].f_4={
Local_171.f_1179.f_1[func_670(7) /*12*/].f_4 + Vector(0.012f, 0f, 0f) 
};
switch (func_651()){
case 4:
Local_171.f_1179.f_1[5 /*12*/].f_4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_171.f_1179.f_1[5 /*12*/].f_4, Local_171.f_1179.f_1[5 /*12*/].f_7, 0f, -0.005f, 0f) 
};
break;
}
iVar0=0;
while (iVar0 < Local_171.f_1179){
Local_171.f_1179.f_1[iVar0 /*12*/].f_11=func_1336(iVar0);
iVar0++;
}
func_843(func_670(1), 30);
func_843(func_670(4), 30);
func_843(func_670(7), 30);
Local_171.f_1808.f_1[0 /*18*/].f_8=16f;
Local_171.f_1864=1;
Local_171.f_1864.f_1[0 /*4*/]={
0f, 0f, 0f 
};
Local_171.f_1864.f_1[0 /*4*/].f_3=0.5f;
iVar0=0;
while (iVar0 < Local_171.f_891){
Local_171.f_891.f_1[iVar0 /*15*/].f_9=-1;
iVar0++;
}
if(func_651()==4){
Local_171.f_891.f_1[func_670(0) /*15*/].f_4={
Local_171.f_891.f_1[func_670(0) /*15*/].f_4 + Vector(0f, -0.55f, 0.7f) 
};
}
func_841(func_670(0), 24);
func_1335(func_670(14), 10);
}


void func_1335(bool bParam0, int iParam1){
if(func_133(&(Local_171.f_891.f_1[bParam0 /*15*/]), iParam1)){}}

int func_1336(int iParam0){
switch (iParam0){
case 21:
case 22:
case 23:
case 24:
case 25:
case 26:
return -1;
default:
}
return 0;
}

int func_1337(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 25:
case 26:
case 27:
case 28:
return 0;
default:
}
return -1;
}


void func_1338(int iParam0, int iParam1){
if(func_17(&(Local_171.f_2085.f_1[iParam0 /*26*/]), iParam1)){}}


void func_1339(){
Local_213.f_13=368666;
Local_213.f_10=368567;
Local_213.f_11=368447;
Local_213.f_11.f_1=367894;
Local_213.f_3.f_1=365675;
Local_213.f_166.f_187=365604;
Local_213.f_166=365212;
Local_213.f_166.f_1=365146;
Local_213.f_166.f_142=364974;
Local_213.f_166.f_193=364858;
Local_213.f_166.f_192=364680;
Local_213.f_166.f_201=364437;
Local_213.f_166.f_178=364409;
Local_213.f_166.f_150=364313;
Local_213.f_166.f_150.f_5=364289;
Local_213.f_166.f_150.f_6=364257;
Local_213.f_166.f_150.f_4=364220;
Local_213.f_166.f_150.f_13=364139;
Local_213.f_166.f_200=364101;
Local_213.f_166.f_2=364016;
Local_213.f_166.f_2.f_59.f_1=363926;
Local_213.f_166.f_2.f_59.f_2=363917;
Local_213.f_166.f_2.f_59.f_3=363908;
Local_213.f_166.f_2.f_21.f_2=363850;
Local_213.f_166.f_142.f_1=363813;
Local_213.f_166.f_142.f_1.f_1=363804;
Local_213.f_166.f_142.f_1.f_2=363795;
Local_213.f_53.f_2.f_1=363749;
Local_213.f_53.f_2.f_2=363703;
Local_213.f_838=363694;
Local_213.f_838.f_4=363685;
Local_213.f_124.f_4=363675;
Local_213.f_124.f_13=363663;
Local_213.f_377.f_44=363481;
Local_213.f_377.f_31=363453;
Local_213.f_484.f_27=363419;
func_1503();
Local_213.f_484.f_21=362846;
Local_213.f_484.f_28=362837;
Local_213.f_484.f_53=362805;
Local_213.f_484.f_30=362779;
Local_213.f_484.f_22=362561;
Local_213.f_629=362548;
Local_213.f_629.f_9=224102;
Local_213.f_629.f_5=224070;
Local_213.f_629.f_8=224004;
Local_213.f_629.f_26=223950;
Local_213.f_629.f_25=223776;
Local_213.f_629.f_24=223712;
Local_213.f_629.f_15=223703;
Local_213.f_15.f_18=223690;
Local_213.f_15.f_18.f_3=223677;
Local_213.f_15.f_18.f_4=223667;
Local_213.f_15.f_18.f_1=223655;
Local_213.f_661=223622;
Local_213.f_679.f_1=223494;
Local_213.f_679=223410;
Local_213.f_688.f_4=223369;
Local_213.f_688.f_6=223337;
Local_213.f_688.f_5=223327;
Local_213.f_695.f_13=223196;
Local_213.f_695.f_2=223170;
Local_213.f_695.f_11=223160;
Local_213.f_695.f_9=223148;
Local_213.f_695.f_12=223069;
Local_213.f_695.f_14=223031;
Local_213.f_695.f_10=222970;
Local_213.f_695.f_7=222918;
Local_213.f_695.f_8=222892;
Local_213.f_15.f_27=222875;
Local_213.f_672.f_1=222801;
Local_213.f_562.f_2=222702;
Local_213.f_562.f_4=222558;
Local_213.f_562.f_3=222473;
Local_213.f_112.f_8=222460;
Local_213.f_112.f_7=222433;
Local_213.f_432.f_24=222359;
Local_213.f_432.f_35=222273;
Local_213.f_104.f_3=222182;
Local_213.f_104.f_3.f_1=166362;
}

int func_1340(int iParam0){
switch (iParam0){
case -1:
if(func_1341() >=0){
return 0;
}
break;
case 0:
if(func_1341() >=1){
return 8;
}
break;
case 8:
if(func_828()){
return 5;
}
break;
}
return -1;
}

int func_1341(){
return func_661();
}


void func_1342(int iParam0, var uParam1, var uParam2){
var uVar0;
var uVar1;
if((!func_710(16) && func_828()) && func_181(iParam0, 14)){
Stack.Push(Local_213.f_432.f_24 !=0);
Stack.Push(iParam0);
Stack.Push(&uVar0);
Stack.Push(&uVar1);
Call_Loc(Local_213.f_432.f_24);
if(StackVal && StackVal){
AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, 0);
func_708(12);
}}}

int func_1343(int iParam0, char* sParam1, char* sParam2){
if(iParam0==func_670(2)){
switch (func_651()){
case 7:
StringCopy(sParam1, "SE_DLC_Fixer_Investigation_Way_In_Music_01", 64);
break;
case 8:
StringCopy(sParam1, "SE_DLC_Fixer_Investigation_Way_In_Music_01", 64);
break;
}
StringCopy(sParam2, "RADIO_07_DANCE_01", 64);
return 1;
}
return 0;
}


Vector3 func__1344(){
return Local_171.f_1179.f_1[func_670(2) /*12*/].f_4;
}


float func_1345(){
return 100f;
}


Vector3 func__1346(int iParam0){
switch (iParam0){
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[func_670(0) /*25*/])){
return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_2104.f_22[func_670(0) /*25*/]), 0);
}
break;
}
return Local_171.f_38.f_1[func_670(0) /*21*/].f_3;
}

int func_1347(int iParam0){
switch (iParam0){
case 0:
if(Local_1955.f_1 < (Local_171.f_1808.f_1[iParam0 /*18*/].f_8 * Local_171.f_1808.f_1[iParam0 /*18*/].f_8)){
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[func_670(0) /*25*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_2104.f_22[func_670(0) /*25*/]), 0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_2048, NETWORK::NET_TO_ENT(Local_2104.f_22[func_670(0) /*25*/]), 283)){
return 1;
}}
break;
}
return 0;
}


Vector3 func__1348(int iParam0){
switch (iParam0){
case 0:
switch (func_651()){
case 7:
return -61.3877f, 811.2913f, 226.2497f;
case 8:
return -1331.091f, 492.7292f, 101.4475f;
default:
}
break;
}
return Local_171.f_38.f_1[func_670(0) /*21*/].f_3;
}

int func_1349(var uParam0, int iParam1, var uParam2){
if(iParam1==0){
return (func_1350() || uParam2);
}
return 1;
}


bool func_1350(){
int iVar0;
return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_2048, &iVar0, 0) && iVar0 !=joaat("weapon_unarmed")) && iVar0 !=joaat("object"));
}


bool func_1351(){
return func_168(iLocal_2050, 15);
}

int func_1352(int iParam0){
switch (iParam0){
case 1:
return 2;
default:
}
return 1;
}

int func_1353(int iParam0, int iParam1){
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return 2;
case 1:
return 3;
default:
}
break;
}
return 2;
}


char* func_1354(int iParam0, int iParam1){
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return "FIX_FRANKLIN";
case 1:
return "FIX_IMANI";
default:
}
break;
}
return "FIX_FRANKLIN";
}

int func_1355(int iParam0){
switch (iParam0){
case 1:
return 0;
case 2:
return 15000;
default:
}
return 0;
}

int func_1356(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return (func_1357() <=1 && func_710(13));
case 2:
return func_1357()==6;
default:
}
return 0;
}

int func_1357(){
return func_22();
}


char* func_1358(var uParam0){
return "FXFRAUD";
}

int func_1359(var uParam0){
return 175;
}

int func_1360(int iParam0){
switch (iParam0){
case 0:
return 0;
default:
}
return 1;
}


char* func_1361(int iParam0){
switch (func_651()){
case 7:
switch (iParam0){
case 0:
return "FXFR_D2W_1A";
case 1:
return "FXFR_D2W_2A";
case 2:
return "FXFR_D2W_3A";
default:
}
break;
case 8:
switch (iParam0){
case 0:
return "FXFR_D2W_1B";
case 1:
return "FXFR_D2W_2B";
case 2:
return "FXFR_D2W_3B";
default:
}
break;
}
return "";
}

int func_1362(var uParam0){
return 175;
}


char* func_1363(int iParam0){
switch (iParam0){
case 0:
return "FXR_TXT_WI1";
default:
}
return "";
}

int func_1364(int iParam0){
switch (iParam0){
case 0:
return (func_1357()==1 && Local_1955.f_0 !=-1);
default:
}
return 0;
}


char* func_1365(int iParam0){
switch (iParam0){
case 0:
return "FXR_HT_WI1";
case 1:
return "FXR_HT_WI2";
case 2:
return "FXR_HT_WI3";
case 3:
return "FXR_HT_WI4";
case 4:
return "FXR_HT_WI5";
default:
}
return "";
}

int func_1366(int iParam0){
switch (iParam0){
case 0:
return func_1357()==2;
case 1:
return func_1357() > 0;
case 2:
return (func_1357()==1 && func_1367(0));
case 3:
return (func_1357()==3 && Local_1945.f_0 > 1);
case 4:
return func_2497(55);
default:
}
return 0;
}


bool func_1367(int iParam0){
return func_150(&uLocal_2025, iParam0);
}


bool func_1368(){
return func_1369(0);
}


bool func_1369(int iParam0){
return func_150(&(Local_2104.f_1191), iParam0);
}


char* func_1370(){
return "FXR_TIC_WISG";
}

int func_1371(){
return 100;
}

int func_1372(){
return joaat("weapon_stungun_mp");
}


bool func_1373(){
return func_686(0);
}

int func_1374(var uParam0){
return 1;
}


void func_1375(int iParam0){
switch (iParam0){
case 0:
if(ENTITY::DOES_ENTITY_EXIST(iLocal_2144)){
VEHICLE::DELETE_VEHICLE(&iLocal_2144);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_2145)){
PED::DELETE_PED(&iLocal_2145);
}
func_495(40);
break;
}}


void func_1376(int iParam0){
switch (iParam0){
case 0:
if(ENTITY::DOES_ENTITY_EXIST(Local_1968.f_2[iParam0 /*25*/].f_5[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1968.f_2[iParam0 /*25*/].f_5[0], 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1968.f_2[iParam0 /*25*/].f_5[0], "MP_1", 0, 0, 64);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_2144) && !ENTITY::IS_ENTITY_DEAD(iLocal_2144, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2144, "Player_car", 0, 0, 64);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_2145) && !ENTITY::IS_ENTITY_DEAD(iLocal_2145, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2145, "Guard_1", 0, 0, 64);
}
break;
}}


void func_1377(int iParam0){
switch (iParam0){
case 0:
CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("Guard_1", 0, 1);
CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("Player_car", 0, 1);
break;
}}


bool func_1378(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
if(iLocal_2147 !=func_77()){
return iLocal_2147;
}
return bLocal_2046;
break;
}
break;
}
return func_77();
}


char* func_1379(int iParam0){
switch (iParam0){
case 0:
return "FIX_TRK_MCS2";
default:
}
return "";
}

int func_1380(int iParam0){
switch (iParam0){
case 0:
if(!func_1382()){
return 0;
}
if(!func_1381()){
return 0;
}
break;
}
return 1;
}

int func_1381(){
struct<3> Var0;
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_2145)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_2104.f_22[func_670(0) /*25*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_22[func_670(0) /*25*/])){
Var0={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_2104.f_22[func_670(0) /*25*/]), 0) 
};
Var0.f_2=(Var0.f_2 - 60f);
iLocal_2145=PED::CREATE_PED(26, Local_171.f_38.f_1[func_670(0) /*21*/].f_2, Var0, 0, 0, false);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2145, true);
ENTITY::SET_ENTITY_COORDS(iLocal_2145, Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_VISIBLE(iLocal_2145, true, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_2145, true);
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_2145);
PED::SET_PED_COMPONENT_VARIATION(iLocal_2145, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_2145, 3, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_2145, 4, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(iLocal_2145, 8, 1, 0, 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_2145)){
return 0;
}
return 1;
}

int func_1382(){
int iVar0;
struct<3> Var1;
struct<2> Var2;
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_2144)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_2104.f_773[func_670(1) /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2104.f_773[func_670(1) /*8*/])){
iVar0=NETWORK::NET_TO_VEH(Local_2104.f_773[func_670(1) /*8*/]);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
Var1.f_2=(Var1.f_2 - 60f);
Var2.f_1=10;
func_1383(&iVar0, &Var2, 33);
iLocal_2144=Var2.f_0;
VEHICLE::SET_VEHICLE_FIXED(iLocal_2144);
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2144, true);
ENTITY::SET_ENTITY_COORDS(iLocal_2144, Var1, 1, 0, 0, 1);
ENTITY::SET_ENTITY_VISIBLE(iLocal_2144, true, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2144, 0, 1, 0);
}}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_2144)){
return 0;
}
return 1;
}

int func_1383(int iParam0, var uParam1, int iParam2){
struct<101> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(func_1493(iParam2, 1)){
ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
}
if(!ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, 1);
}
if(func_1493(iParam2, 2)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 1084227584);
}
if(func_1493(iParam2, 4)){
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, 0)){
VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
}}
return 1;
}elseif(func_1491(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
Var0.f_9=49;
Var0.f_59=2;
Var0.f_78=-1;
Var0.f_79=-1;
Var0.f_96=-1;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_100=-1;
func_1471(*iParam0, &Var0);
func_251(*uParam1, &Var0, 1, 1, 0);
func_1470(*iParam0, uParam1);
ENTITY::SET_ENTITY_COLLISION(*uParam1, false, 0);
ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, 0);
ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, 0);
iVar1=ENTITY::GET_ENTITY_MODEL(*uParam1);
if(((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !func_1469(iVar1)) && !iVar1==joaat("oppressor")) && !iVar1==joaat("kosatka")){
VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, 0);
}
VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
if(iVar2 !=0){
VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
}
if(iVar3 !=0){
VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, 1);
}
VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, 1, 1, 0);
if(!func_1493(iParam2, 32)){
func_1385(iParam0, uParam1, &(uParam1->f_1), func_1493(iParam2, 16), func_1493(iParam2, 128), func_1493(iParam2, 64), !func_1493(iParam2, 256), 0, 1);
}
if(func_1493(iParam2, 4)){
func_1384(iParam0, &(uParam1->f_12));
if(func_1493(iParam2, 8)){
iVar4=0;
while (iVar4 <=7){
if(VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, 0)){
VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
}
iVar4++;
}}}
if(func_1493(iParam2, 8)){
iVar5=0;
while (iVar5 <=7){
if(VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, 0)){
VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
}
iVar5++;
}}}}
return 0;
}

int func_1384(var uParam0, var uParam1){
int iVar0;
struct<101> Var1;
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return 1;
}
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam0, &iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(func_1491(uParam1, iVar0, 10f, 10f, 15f, ENTITY::GET_ENTITY_HEADING(iVar0), 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
Var1.f_9=49;
Var1.f_59=2;
Var1.f_78=-1;
Var1.f_79=-1;
Var1.f_96=-1;
Var1.f_97=1;
Var1.f_99=132;
Var1.f_100=-1;
func_1471(iVar0, &Var1);
func_251(*uParam1, &Var1, 1, 1, 0);
return 1;
}}}}
return 0;
}

int func_1385(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
if(!ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return 0;
}
iVar2=8;
if(bParam7){
iVar2=-1;
}
iVar0=-1;
while (iVar0 <=iVar2){
iVar1=iVar0 + 1;
iVar3=iVar0;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, iVar3, 0)){
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar3, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar4) && (func_1468(iVar4) || bParam5)){
if(bParam3 && !PED::IS_PED_A_PLAYER(iVar4)){
}else{
if(!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1])){
func_1386(uParam2[iVar1], iVar4, iParam8, bParam6);
}
if(ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (func_1468((*uParam2)[iVar1]) || bParam5)){
if(!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1])){
if(bParam4){
return 0;
}
}
iVar5=VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, 0);
if(!ENTITY::DOES_ENTITY_EXIST(iVar5)){
if(func_1468(*uParam1)){
ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
}
}
if(iVar0==7 && ENTITY::GET_ENTITY_MODEL(*uParam0)==joaat("insurgent3")){
VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
}}}}}
iVar0++;
}
return 1;
}

int func_1386(var uParam0, int iParam1, var uParam2, bool bParam3){
struct<3> Var0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam1)){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 0;
}
*uParam0=PED::CLONE_PED(iParam1, 0, 0, uParam2);
if(func_1468(iParam1)){
ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
func_1467(*uParam0);
if(func_1401(iParam1) || func_1387(iParam1)){
PED::SET_PED_HELMET(*uParam0, 1);
}else{
PED::SET_PED_HELMET(*uParam0, 0);
PED::REMOVE_PED_HELMET(*uParam0, 1);
PED::CLEAR_PED_PROP(*uParam0, 0, 1);
}
if(bParam3){
Var0={
ENTITY::GET_ENTITY_COORDS(*uParam0, 0) 
};
Var0.f_2=(Var0.f_2 - 10f);
ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, 0, 0, 0, 1);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
ENTITY::SET_ENTITY_COLLISION(*uParam0, false, 0);
}
PED::FINALIZE_HEAD_BLEND(*uParam0);
return 1;
}
return 0;
}

int func_1387(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar5=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=0;
while (iVar1 <=8){
iVar2=iVar1;
iVar4=func_1395(iParam0, iVar2);
if(func_1391(iVar5, 14, iVar4, -1)){
return 1;
}
iVar1++;
}
iVar0=0;
while (iVar0 <=14){
iVar3=iVar0;
if((iVar3 !=12 && iVar3 !=13) && iVar3 !=14){
iVar4=func_1388(iParam0, iVar3);
if(func_1391(iVar5, iVar3, iVar4, -1)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_1388(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_1390(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_1389(iParam0, iVar1, iVar2, iParam1);
}

int func_1389(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_1390(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(uParam0, iVar0);
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(iVar3 !=iParam1){
iVar2=(iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(uParam0, iVar0, iVar3));
}else{
iVar2=(iVar2 + iParam2);
return iVar2;
}
iVar3++;
}
return -99;
}

int func_1390(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}

int func_1391(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 14:
if(iParam2==16){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 14:
if((iParam2==40 || (iParam2 >=41 && iParam2 <=56)) || (iParam2 >=64 && iParam2 <=79)){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 14:
if((iParam2 >=17 && iParam2 <=18) || (iParam2 >=71 && iParam2 <=86)){
return 1;
}
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1392(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1392(iParam0, iParam2, 1, 3), -1842686353, 0));
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam2 >=18 && iParam2 <=130){
return 1;
}elseif(iParam2 >=10 && iParam2 <=17){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1392(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_1392(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_1392(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_1394(iParam0));
if(iVar1 < 0){
return -1;
}
iVar2=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
if(iVar2 <=iVar1){
return -1;
}
FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
return Var0.f_1;
}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
iVar4=(iParam1 - func_1393(iParam0, func_1390(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_1390(iParam2));
if(iVar5 <=iVar4){
return -1;
}
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar4, &Var3);
Global_78491.f_13[iParam2]=Var3.f_1;
Global_78491[iParam2]=iParam1;
Global_78491.f_26[iParam2]=iParam0;
return Var3.f_1;
}
return -1;
}

int func_1393(int iParam0, int iParam1){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 181;
break;
case 4:
return 113;
break;
case 5:
return 14;
break;
case 6:
return 99;
break;
case 7:
return 1;
break;
case 8:
return 24;
break;
case 9:
return 20;
break;
case 10:
return 48;
break;
case 11:
return 45;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 5;
break;
case 2:
return 21;
break;
case 3:
return 318;
break;
case 4:
return 117;
break;
case 5:
return 7;
break;
case 6:
return 134;
break;
case 7:
return 1;
break;
case 8:
return 77;
break;
case 9:
return 12;
break;
case 10:
return 53;
break;
case 11:
return 63;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 6;
break;
case 2:
return 9;
break;
case 3:
return 242;
break;
case 4:
return 104;
break;
case 5:
return 7;
break;
case 6:
return 84;
break;
case 7:
return 1;
break;
case 8:
return 18;
break;
case 9:
return 17;
break;
case 10:
return 33;
break;
case 11:
return 1;
break;
}
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 91;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 92;
break;
case 8:
return 241;
break;
case 9:
return 46;
break;
case 10:
return 7;
break;
case 11:
return 237;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 92;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 55;
break;
case 8:
return 136;
break;
case 9:
return 36;
break;
case 10:
return 6;
break;
case 11:
return 256;
break;
}
break;
}
return -99;
}

int func_1394(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 113;
break;
case joaat("player_one"):
return 175;
break;
case joaat("player_two"):
return 155;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 327;
break;
case joaat("mp_f_freemode_01"):
return 327;
break;
}
return -99;
}

int func_1395(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_1400(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_1396(iParam0, iVar0, iVar1, iParam1);
}

int func_1396(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_1400(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_1398(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_1398(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
}}
iVar2=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
iVar4=0;
while (iVar4 <=(iVar2 - 1)){
iVar6=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
if(iVar4 !=iParam1){
iVar3=(iVar3 + iVar6);
}else{
iVar5=0;
while (iVar5 <=(iVar6 - 1)){
if(iVar4==iParam1 && iVar5==iParam2){
iVar3=(iVar3 + func_1397(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_1400(iParam3);
}

int func_1397(int iParam0, int iParam1){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iVar0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 58;
break;
case 2:
return 112;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 82;
break;
case 2:
return 158;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 88;
break;
case 2:
return 154;
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 155;
break;
case 6:
return 319;
break;
}
break;
}
return -99;
}

int func_1398(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==12){
iVar2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, 0);
iVar1=0;
while (iVar1 < iVar2){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
if(Var0.f_1==iParam1){
return (func_1399(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_1394(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_1390(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_1393(iParam0, func_1390(iParam2)) + iVar4);
}}
return -99;
}

int func_1399(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 53;
break;
case joaat("player_one"):
return 47;
break;
case joaat("player_two"):
return 48;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 26;
break;
case joaat("mp_f_freemode_01"):
return 28;
break;
}
return -99;
}

int func_1400(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
}
return 0;
}

int func_1401(int iParam0){
if(!PED::IS_PED_WEARING_HELMET(iParam0) && !func_1402(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_1403(iParam0, 14, 0), -1)){
return 0;
}
return 1;
}

int func_1402(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 14, 3);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1))){
return 1;
}
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 14, 4);
}
if((iParam2 >=131 && iParam2 <=154) || (iParam2 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("helmet"), 1))){
return 1;
}
break;
}
break;
}
return 0;
}

int func_1403(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_1404(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_1404(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_1395(iParam0, iParam2);
}}else{
return func_1388(iParam0, iParam1);
}}
return -99;
}

int func_1404(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
var uVar9;
int iVar10;
var uVar11;
int iVar12;
int iVar13;
var uVar14;
var uVar15;
int iVar16;
struct<5> Var17;
var uVar18;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_1419(iVar0, iParam1, iParam2, -1) 
};
uVar2=Global_2883588;
uVar3=Global_2883589;
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar8={
func_1415(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 < 7){
switch (iVar7){
case 0:
iVar4=1;
break;
case 1:
iVar4=4;
break;
case 2:
iVar4=6;
break;
case 3:
iVar4=7;
break;
case 4:
iVar4=8;
break;
case 5:
iVar4=11;
break;
case 6:
iVar4=13;
break;
}
if(uVar8[iVar4] !=-99){
if(!func_1404(iParam0, iVar4, uVar8[iVar4])){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
if(iVar4==13){
uVar9={
func_1412(iVar0, uVar8[iVar4]) 
};
iVar5=0;
while (iVar5 <=8){
if(!func_1404(iParam0, 14, uVar9[iVar5])){
iVar6=0;
while (iVar6 <=19){
Global_78341[2 /*14*/]={
func_1419(iVar0, 14, iVar6, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar5){
if(func_1404(iParam0, 14, iVar6)){
if(!func_1408(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}
}
}
iVar6++;
}}
iVar5++;
}}else{
iVar1=func_1388(iParam0, iVar4);
Global_78341[2 /*14*/]={
func_1419(iVar0, iVar4, iVar1, -1) 
};
if(!func_1408(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}}}
iVar7++;
}
if((uVar8[10] !=0 && uVar8[10] !=joaat("0")) && uVar8.f_16){
if(func_261(1759, Global_78338, 0) !=uVar8[10]){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}
Global_2883588=uVar2;
Global_2883589=uVar3;
return 1;
}elseif(iParam1==13){
uVar11={
func_1412(iVar0, iParam2) 
};
iVar10=0;
while (iVar10 <=8){
if(!func_1404(iParam0, 14, uVar11[iVar10])){
return 0;
}
iVar10++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}
if(((Global_78341[1 /*14*/].f_12==0 && MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("helmet"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0){
iVar16=FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
iVar12=0;
while (iVar12 < iVar16){
FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
if(iVar13 !=0 && iVar13 !=joaat("0")){
FILES::INIT_SHOP_PED_PROP(&Var17);
FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
if(Var17.f_3==PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1) && Var17.f_4==PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)){
return 1;
}}
iVar12++;
}}}else{
if(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_1390(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_1390(iParam1))){
return 1;
}
if(iParam1==4){
Global_78340++;
if(Global_78340==1){
if(func_1407(iVar0, 11, func_1388(iParam0, 11), -1)){
if(func_1406(iVar0, 4, iParam2, &uVar18)){
return func_1404(iParam0, 4, uVar18);
}}elseif(func_1405(iVar0, 4, iParam2, &uVar18)){
return func_1404(iParam0, 4, uVar18);
}}
Global_78340=(Global_78340 - 1);
}}
return 0;
}

int func_1405(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_1392(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_1398(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_1406(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_1392(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_1398(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_1407(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 11, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress"), 0);
}
break;
}
break;
}
return 0;
}

int func_1408(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
var uVar0;
int iVar1;
if((*uParam4)[iParam2]==iParam3){
return 1;
}
if(((*uParam4)[iParam2]==-99 && iParam2 !=14) && iParam2 !=13){
return 1;
}
if(iParam2==13 || (iParam2==14 && (*uParam4)[13]==31)){
if((((((((iParam3==0 || iParam3==1) || iParam3==2) || iParam3==3) || iParam3==4) || iParam3==5) || iParam3==6) || iParam3==7) || iParam3==8){
return 1;
}}
if(iParam3==-99 || uParam5->f_1==-1){
return 1;
}
if(iParam2==14){
uVar0={
func_1412(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_1411(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_1410(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_1409(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=0){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_1391(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_1410(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_1409(iParam0, iParam2, iParam3, -1)){
if((((iParam1==3 || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
if(iParam2==8){
if(iParam3==9){
if(iParam1==8 || iParam1==21){
return 1;
}}else{
return 0;
}}else{
return 0;
}}
if(iParam2==8){
if((*uParam4)[8] !=26){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=5 && iParam3 <=10){
return 0;
}}}elseif(iParam2==14){
if(((iParam1==43 || iParam1==44) || iParam1==45) || iParam1==46){
if(iParam3 >=26 && iParam3 <=39){
return 0;
}}}
return 1;
}elseif(func_1391(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==3 || iParam1==3) || iParam1==5) || iParam1==7) || iParam1==8) || iParam1==21){
return 0;
}
return 1;
}elseif(iParam2==14){
if(iParam3 >=159 && iParam3 <=174){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==2){
if(iParam2==14 && iParam3==0){
return 1;
}}
if(func_1410(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_1409(iParam0, iParam2, iParam3, -1)){
if(((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==45) || iParam1==12){
return 0;
}
if(iParam2==8){
if((*uParam4)[8] !=15){
return 0;
}}elseif(iParam2==9){
if((*uParam4)[9] !=0){
return 0;
}}
return 1;
}elseif(func_1391(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_1409(int iParam0, int iParam1, int iParam2, int iParam3){
if(iParam0==joaat("player_zero")){
if(iParam1==6){
if(iParam2==10){
return 1;
}}elseif(iParam1==8){
if((iParam2==9 || iParam2==7) || iParam2==23){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=9 && iParam2 <=14){
return 1;
}}elseif(iParam1==14){
if((((((((((((((((iParam2==12 || iParam2==59) || iParam2==60) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || iParam2==37) || iParam2==38) || iParam2==39) || iParam2==40) || iParam2==41) || (iParam2 >=42 && iParam2 <=44)) || iParam2==54) || iParam2==55){
return 1;
}}}elseif(iParam0==joaat("player_one")){
if(iParam1==2){
if(iParam2==20){
return 1;
}}elseif(iParam1==8){
if((iParam2==3 || iParam2==5) || iParam2==9){
return 1;
}}elseif(iParam1==9){
if(iParam2 >=5 && iParam2 <=10){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==82 || iParam2==10) || iParam2==26) || iParam2==27) || iParam2==28) || iParam2==29) || iParam2==30) || iParam2==31) || iParam2==32) || iParam2==33) || iParam2==34) || iParam2==35) || iParam2==36) || (iParam2 >=37 && iParam2 <=39)){
return 1;
}}}elseif(iParam0==joaat("player_two")){
if(iParam1==8){
if(iParam2==14 || iParam2==7){
return 1;
}}elseif(iParam1==9){
if(((iParam2==8 || (iParam2 >=9 && iParam2 <=14)) || iParam2==15) || iParam2==16){
return 1;
}}elseif(iParam1==14){
if(((((((((((((iParam2==88 || iParam2==12) || iParam2==47) || iParam2==48) || iParam2==49) || iParam2==50) || iParam2==51) || iParam2==52) || iParam2==53) || iParam2==54) || iParam2==55) || iParam2==56) || iParam2==57) || (iParam2 >=58 && iParam2 <=60)){
return 1;
}}}elseif(iParam0==joaat("mp_m_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 1, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}elseif(iParam0==joaat("mp_f_freemode_01")){
if(iParam1==1){
if(iParam2 > 0){
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_1410(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("player_zero"):
if(iParam1==14){
if((((((((iParam2==58 || iParam2==61) || (iParam2 >=62 && iParam2 <=69)) || (iParam2 >=70 && iParam2 <=79)) || (iParam2 >=80 && iParam2 <=89)) || iParam2==90) || (iParam2 >=91 && iParam2 <=102)) || (iParam2 >=103 && iParam2 <=110)) || iParam2==111){
return 1;
}}
break;
case joaat("player_one"):
if(iParam1==14){
if(((((((((((iParam2 >=83 && iParam2 <=92) || iParam2==93) || iParam2==94) || (iParam2 >=95 && iParam2 <=101)) || (iParam2 >=102 && iParam2 <=111)) || (iParam2 >=112 && iParam2 <=121)) || (iParam2 >=122 && iParam2 <=131)) || (iParam2 >=132 && iParam2 <=139)) || (iParam2 >=140 && iParam2 <=149)) || (iParam2 >=150 && iParam2 <=156)) || iParam2==157){
return 1;
}}
break;
case joaat("player_two"):
if(iParam1==14){
if(((((((((iParam2==89 || (iParam2 >=90 && iParam2 <=99)) || (iParam2 >=100 && iParam2 <=109)) || iParam2==111) || iParam2==112) || (iParam2 >=113 && iParam2 <=122)) || (iParam2 >=123 && iParam2 <=132)) || (iParam2 >=133 && iParam2 <=142)) || (iParam2 >=143 && iParam2 <=152)) || iParam2==153){
return 1;
}}
break;
case joaat("mp_m_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 14, 3);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1==14){
if(iParam2 >=155 && iParam2 <=318){
return 1;
}elseif(iParam2 >=327){
if(iParam3==-1){
iParam3=func_1392(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_1411(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 8:
if(iParam2==15){
return 1;
}
break;
case 9:
if(iParam2==6){
return 1;
}
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 8:
if(iParam2==1 || iParam2==10){
return 1;
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 8:
if(iParam2==4){
return 1;
}
break;
}
break;
}
return 0;
}


struct<10> func_1412(int iParam0, int iParam1){
int iVar0;
struct<10> Var1;
Var1=9;
iVar0=0;
while (iVar0 <=8){
Var1[iVar0]=-99;
iVar0++;
}
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 31:
func_1414(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_1414(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_1414(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_1414(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_1414(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_1414(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_1414(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_1414(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_1414(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_1414(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_1414(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_1413(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_1414(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_1414(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_1414(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_1414(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_1414(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_1414(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_1414(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_1414(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_1414(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_1414(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_1413(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_1414(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_1414(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_1414(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_1414(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_1414(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_1414(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_1414(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_1414(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_1414(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_1414(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_1413(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_1414(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_1414(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_1414(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_1414(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_1414(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_1414(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_1414(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_1414(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_1414(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_1414(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_1414(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_1414(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_1414(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_1414(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_1414(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_1414(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_1414(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_1414(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_1414(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_1414(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_1414(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_1414(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_1414(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_1414(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_1414(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_1414(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_1413(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_1414(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_1414(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_1414(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_1414(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_1414(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_1414(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_1414(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_1414(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_1414(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_1414(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_1414(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_1414(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_1414(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_1414(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_1414(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_1414(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_1414(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_1414(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_1414(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_1414(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_1414(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_1414(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_1414(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_1414(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_1414(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_1413(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_1413(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<4> Var1;
struct<3> Var2;
int iVar3;
if(iParam2 !=0 && iParam2 !=-99){
(*iParam0)[0]=0;
(*iParam0)[1]=1;
(*iParam0)[2]=2;
(*iParam0)[3]=3;
(*iParam0)[4]=4;
(*iParam0)[5]=5;
(*iParam0)[6]=6;
(*iParam0)[7]=7;
(*iParam0)[8]=8;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
}elseif(iParam1==joaat("player_one")){
iVar0=1;
}elseif(iParam1==joaat("player_two")){
iVar0=2;
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar3=0;
while (iVar3 < Var1.f_3){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 !=-1){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
(*iParam0)[Var2.f_2]=func_1398(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}


void func_1414(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
(*iParam0)[0]=iParam1;
(*iParam0)[1]=iParam2;
(*iParam0)[2]=iParam3;
(*iParam0)[3]=iParam4;
(*iParam0)[4]=iParam5;
(*iParam0)[5]=iParam6;
(*iParam0)[6]=iParam7;
(*iParam0)[7]=iParam8;
(*iParam0)[8]=iParam9;
}
struct<17> func_1415(int iParam0, int iParam1){
int iVar0;
struct<17> Var1;
Var1=15;
iVar0=0;
while (iVar0 <=14){
Var1[iVar0]=-99;
iVar0++;
}
Var1.f_16=0;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
if(Global_113648.f_9087.f_99.f_58[120]){
func_1418(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_1418(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_1418(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_1418(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_1418(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_1418(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_1418(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_1418(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_1418(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_1418(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_1418(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_1418(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_1418(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_1418(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_1418(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_1418(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_1418(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_1418(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_1418(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_1418(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_1418(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_1418(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_1418(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_1418(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_1418(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_1418(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_1418(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_1418(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_1418(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_1418(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_1418(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_1418(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_1418(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_1418(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_1418(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_1418(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_1418(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_1418(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_1418(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_1418(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_1418(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_1418(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_1418(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_1418(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_1418(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_1418(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_1418(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_1418(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_1418(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_1418(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_1418(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_1418(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_1418(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_1418(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_1416(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_1418(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_1418(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_1418(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_1418(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_1418(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_1418(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_1418(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_1418(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_1418(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_1418(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_1418(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_1418(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_1418(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_1418(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_1418(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_1418(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_1418(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_1418(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_1418(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_1418(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_1418(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_1418(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_1418(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_1418(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_1418(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_1418(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_1418(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_1418(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_1418(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_1418(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_1418(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_1418(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_1418(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_1418(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_1418(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_1418(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_1418(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_1418(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_1418(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_1418(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_1418(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_1418(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_1418(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_1418(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_1418(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_1418(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_1418(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_1416(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_1418(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_1418(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_1418(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_1418(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_1418(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_1418(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_1418(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_1418(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_1418(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_1418(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_1418(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_1418(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_1418(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_1418(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_1418(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_1418(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_1418(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_1418(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_1418(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_1418(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_1418(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_1418(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_1418(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_1418(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_1418(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_1418(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_1418(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_1418(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_1418(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_1418(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_1418(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_1418(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_1418(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_1418(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_1418(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_1418(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_1418(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_1418(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_1418(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_1418(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_1418(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_1418(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_1418(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_1418(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_1418(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_1418(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_1418(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_1418(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_1416(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_1418(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_1418(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_1418(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_1418(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_1418(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_1418(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_1418(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_1418(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_1418(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_1418(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_1418(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_1418(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_1418(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_1418(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_1418(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_1418(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_1418(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_1418(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_1418(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_1418(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_1418(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_1418(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_1418(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_1418(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_1418(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_1418(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_1416(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_1418(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_1418(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_1418(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_1418(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_1418(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_1418(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_1418(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_1418(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_1418(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_1418(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_1418(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_1418(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_1418(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_1418(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_1418(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_1418(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_1418(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_1418(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_1418(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_1418(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_1418(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_1418(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_1418(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_1418(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_1418(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_1418(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_1418(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_1418(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_1416(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_1416(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<5> Var1;
struct<3> Var2;
struct<2> Var3;
int iVar4;
(*uParam0)[0]=0;
(*uParam0)[2]=-99;
(*uParam0)[3]=0;
(*uParam0)[4]=0;
(*uParam0)[6]=0;
(*uParam0)[5]=0;
(*uParam0)[8]=0;
(*uParam0)[9]=0;
(*uParam0)[10]=0;
(*uParam0)[1]=0;
(*uParam0)[7]=0;
(*uParam0)[11]=0;
(*uParam0)[13]=-99;
(*uParam0)[14]=-99;
uParam0->f_16=0;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
(*uParam0)[13]=(10 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_one")){
iVar0=1;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_two")){
iVar0=2;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, 0);
FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar4=0;
while (iVar4 < Var1.f_4){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2)){
if((Var2.f_0 !=0 && Var2.f_0 !=-1) && Var2.f_0 !=joaat("0")){
if(Var2.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&Var3);
FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
if(Var2.f_0 !=Var3.f_1){
uParam0->f_16=1;
}}
if(Var2.f_2==10 && uParam0->f_16){
(*uParam0)[func_1417(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_1417(Var2.f_2)]=func_1398(iParam1, Var2.f_0, func_1417(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_1417(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_1417(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


void func_1418(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
(*uParam0)[0]=iParam1;
(*uParam0)[2]=iParam2;
(*uParam0)[3]=iParam3;
(*uParam0)[4]=iParam4;
(*uParam0)[6]=iParam5;
(*uParam0)[5]=iParam6;
(*uParam0)[8]=iParam7;
(*uParam0)[9]=iParam8;
(*uParam0)[10]=iParam9;
(*uParam0)[1]=iParam10;
(*uParam0)[7]=iParam11;
(*uParam0)[11]=iParam12;
(*uParam0)[13]=iParam13;
(*uParam0)[14]=-99;
}
struct<14> func_1419(int iParam0, int iParam1, int iParam2, int iParam3){
func_1466();
if(iParam0==joaat("mp_m_freemode_01")){
func_1450(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_1420(iParam1, iParam2, iParam3);
}
return Global_78341[0 /*14*/];
}


void func_1420(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_1449(iParam1, iParam2);
break;
case 11:
func_1448(iParam1, iParam2);
break;
case 8:
func_1443(iParam1, iParam2);
break;
case 9:
func_1442(iParam1, iParam2);
break;
case 3:
func_1441(iParam1, iParam2);
break;
case 4:
func_1440(iParam1, iParam2);
break;
case 6:
func_1439(iParam1, iParam2);
break;
case 1:
func_1438(iParam1, iParam2);
break;
case 7:
func_1437(iParam1, iParam2);
break;
case 10:
func_1436(iParam1, iParam2);
break;
case 14:
func_1435(iParam1, iParam2);
break;
case 12:
func_1434(iParam1, iParam2);
break;
case 5:
func_1433(iParam1, iParam2);
break;
case 0:
func_1431(iParam1, iParam2);
break;
case 13:
func_1421(iParam1);
break;
}}


void func_1421(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1422(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
int iVar0;
int iVar1;
uParam0->f_6=0;
*uParam0=iParam9;
uParam0->f_1=(iParam2 % 32);
uParam0->f_2=(iParam2 / 32);
uParam0->f_3=iParam4;
uParam0->f_4=iParam5;
uParam0->f_7=iParam6;
StringCopy(&(uParam0->f_8), sParam3, 16);
uParam0->f_13=iParam8;
uParam0->f_12=func_1430(iParam8);
if((uParam0->f_2 >=10 && uParam0->f_5 >=0) && uParam0->f_5 < 3){
if(!bParam10){
}
uParam0->f_2=0;
}
if(MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL")){}
if(bParam7){
MISC::SET_BIT(&(uParam0->f_6), 3);
}
if(bParam10){
MISC::SET_BIT(&(uParam0->f_6), false);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_1429(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_1427(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_1427(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_1427(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_1427(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_1427(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_1427(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_1426(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_1426(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_1426(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_1429(14)){
return;
}
iVar0=func_261(func_1425(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
iVar0=func_261(func_1424(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_1423(iParam1, uParam0->f_2, &iVar1)){
iVar0=func_261(iVar1, Global_78338, 0);
if(!MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_1423(int iParam0, int iParam1, var uParam2){
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}

int func_1424(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 928;
break;
case 3:
return 1415;
break;
case 4:
return 944;
break;
case 6:
return 952;
break;
case 8:
return 1416;
break;
case 9:
return 1424;
break;
case 10:
return 1426;
break;
case 1:
return 960;
break;
case 7:
return 1427;
break;
case 11:
return 936;
break;
case 14:
return 968;
break;
case 12:
return 979;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 929;
break;
case 4:
return 945;
break;
case 6:
return 953;
break;
case 8:
return 1417;
break;
case 9:
return 1425;
break;
case 7:
return 1428;
break;
case 11:
return 937;
break;
case 14:
return 969;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 930;
break;
case 4:
return 946;
break;
case 6:
return 954;
break;
case 8:
return 1418;
break;
case 7:
return 1429;
break;
case 11:
return 938;
break;
case 14:
return 970;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 947;
break;
case 6:
return 955;
break;
case 8:
return 1419;
break;
case 11:
return 939;
break;
case 14:
return 971;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 948;
break;
case 6:
return 956;
break;
case 8:
return 1420;
break;
case 11:
return 940;
break;
case 14:
return 972;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 949;
break;
case 6:
return 957;
break;
case 8:
return 1421;
break;
case 11:
return 941;
break;
case 14:
return 973;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 950;
break;
case 6:
return 958;
break;
case 8:
return 1422;
break;
case 11:
return 942;
break;
case 14:
return 974;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 951;
break;
case 6:
return 959;
break;
case 8:
return 1423;
break;
case 11:
return 943;
break;
case 14:
return 975;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 976;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 977;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 978;
break;
}
break;
}
return 936;
}

int func_1425(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 876;
break;
case 3:
return 1400;
break;
case 4:
return 892;
break;
case 6:
return 900;
break;
case 8:
return 1401;
break;
case 9:
return 1409;
break;
case 10:
return 1411;
break;
case 1:
return 908;
break;
case 7:
return 1412;
break;
case 11:
return 884;
break;
case 14:
return 916;
break;
case 12:
return 927;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 877;
break;
case 4:
return 893;
break;
case 6:
return 901;
break;
case 8:
return 1402;
break;
case 9:
return 1410;
break;
case 7:
return 1413;
break;
case 11:
return 885;
break;
case 14:
return 917;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 878;
break;
case 4:
return 894;
break;
case 6:
return 902;
break;
case 8:
return 1403;
break;
case 7:
return 1414;
break;
case 11:
return 886;
break;
case 14:
return 918;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 895;
break;
case 6:
return 903;
break;
case 8:
return 1404;
break;
case 11:
return 887;
break;
case 14:
return 919;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 896;
break;
case 6:
return 904;
break;
case 8:
return 1405;
break;
case 11:
return 888;
break;
case 14:
return 920;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 897;
break;
case 6:
return 905;
break;
case 8:
return 1406;
break;
case 11:
return 889;
break;
case 14:
return 921;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 898;
break;
case 6:
return 906;
break;
case 8:
return 1407;
break;
case 11:
return 890;
break;
case 14:
return 922;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 899;
break;
case 6:
return 907;
break;
case 8:
return 1408;
break;
case 11:
return 891;
break;
case 14:
return 923;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 924;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 925;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 926;
break;
}
break;
}
return 884;
}

int func_1426(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}

int func_1427(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_1428(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
iVar3=func_261(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(iVar3, uVar1);
}
return 0;
}


bool func_1428(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=14192;
if((bParam4 && Global_4539485) || (!bParam4 && bParam5)){
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_0"):
case joaat("dlc_mp_biker_m_special_2_0"):
case joaat("dlc_mp_biker_m_special_4_0"):
*uParam2=936;
*uParam3=0;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_1"):
case joaat("dlc_mp_biker_m_special_2_1"):
case joaat("dlc_mp_biker_m_special_4_1"):
*uParam2=936;
*uParam3=1;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_2"):
case joaat("dlc_mp_biker_m_special_2_2"):
case joaat("dlc_mp_biker_m_special_4_2"):
*uParam2=936;
*uParam3=2;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_3"):
case joaat("dlc_mp_biker_m_special_2_3"):
case joaat("dlc_mp_biker_m_special_4_3"):
*uParam2=936;
*uParam3=3;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_4"):
case joaat("dlc_mp_biker_m_special_2_4"):
case joaat("dlc_mp_biker_m_special_4_4"):
*uParam2=936;
*uParam3=4;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_5"):
case joaat("dlc_mp_biker_m_special_2_5"):
case joaat("dlc_mp_biker_m_special_4_5"):
*uParam2=936;
*uParam3=5;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_7"):
case joaat("dlc_mp_biker_m_special_2_7"):
case joaat("dlc_mp_biker_m_special_4_7"):
*uParam2=936;
*uParam3=7;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_8"):
case joaat("dlc_mp_biker_m_special_2_8"):
case joaat("dlc_mp_biker_m_special_4_8"):
*uParam2=936;
*uParam3=8;
return 1;
break;
case joaat("dlc_mp_biker_m_special_0_11"):
case joaat("dlc_mp_biker_m_special_2_11"):
case joaat("dlc_mp_biker_m_special_4_11"):
*uParam2=936;
*uParam3=11;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_m_phead_15_0"):
case joaat("dlc_mp_stunt_m_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_1"):
case joaat("dlc_mp_stunt_m_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_2"):
case joaat("dlc_mp_stunt_m_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_3"):
case joaat("dlc_mp_stunt_m_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_4"):
case joaat("dlc_mp_stunt_m_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_5"):
case joaat("dlc_mp_stunt_m_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_6"):
case joaat("dlc_mp_stunt_m_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_m_phead_15_7"):
case joaat("dlc_mp_stunt_m_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("dlc_mp_stunt_f_phead_15_0"):
case joaat("dlc_mp_stunt_f_phead_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_1"):
case joaat("dlc_mp_stunt_f_phead_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_2"):
case joaat("dlc_mp_stunt_f_phead_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_3"):
case joaat("dlc_mp_stunt_f_phead_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_4"):
case joaat("dlc_mp_stunt_f_phead_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_5"):
case joaat("dlc_mp_stunt_f_phead_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_6"):
case joaat("dlc_mp_stunt_f_phead_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("dlc_mp_stunt_f_phead_15_7"):
case joaat("dlc_mp_stunt_f_phead_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}
iVar0=-1;
if(bParam4){
if(Global_4539485){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}}elseif(bParam5){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (floor((to_float(iVar0) / 32f))){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (floor((to_float(bVar0) / 32f))){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (floor((to_float(bVar0) / 32f))){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=(bVar0 % 32);
return *uParam2 !=14192;
}


bool func_1429(int iParam0){
return Global_43257==iParam0;
}

int func_1430(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 0;
break;
case 10:
return 1;
break;
case 11:
return 0;
break;
case 12:
return 0;
break;
case 13:
return 0;
break;
}
return 0;
}


void func_1431(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar0, iParam0, 0, iParam1);
}


void func_1432(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
struct<8> Var2;
int iVar3;
int iVar4;
struct<10> Var5;
int iVar6;
int iVar7;
int iVar8;
struct<10> Var9;
int iVar10;
int iVar11;
iVar0=(iParam1 - iParam2);
iVar0=iVar0;
if(iVar0 < 0){
return;
}
uVar1=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
iVar3=(iParam1 - iParam2);
if(iVar3 >=0){
iVar4=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
if(iVar4 > iVar3){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_1422(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_1422(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var5);
iVar7=(iParam1 - iParam2);
if(iVar7 >=0){
iVar8=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 1, -1, -1);
if(iVar8 > iVar7){
FILES::GET_SHOP_PED_QUERY_PROP(iVar7, &Var5);
if(Var5.f_6==0){
iVar6=9;
}elseif(Var5.f_6==1){
iVar6=10;
}elseif(Var5.f_6==2){
iVar6=2;
}elseif(Var5.f_6==3){
iVar6=3;
}elseif(Var5.f_6==4){
iVar6=4;
}elseif(Var5.f_6==5){
iVar6=5;
}elseif(Var5.f_6==6){
iVar6=6;
}elseif(Var5.f_6==7){
iVar6=7;
}elseif(Var5.f_6==8){
iVar6=8;
}else{
iVar6=-1;
}
Global_2883588=Var5.f_1;
Global_2883589=Var5.f_0;
func_1422(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_1422(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_1390(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_1422(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}


void func_1433(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1434(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P1", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P2", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P3", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P4", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P5", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P6", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P7", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P8", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P9", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_P10", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B1", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B2", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B3", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B4", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B5", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B6", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B7", 16);
break;
case 26:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B8", 16);
break;
case 27:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMF_B9", 16);
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1435(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "HT_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "HT_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "HT_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "HT_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "HT_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "HT_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "HT_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 29:
StringCopy(&Var2, "HT_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "HT_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=120;
iVar5=0;
iVar8=1;
break;
case 35:
StringCopy(&Var2, "HT_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=400;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=375;
iVar5=0;
iVar8=1;
break;
case 38:
StringCopy(&Var2, "HT_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 39:
StringCopy(&Var2, "HT_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 40:
StringCopy(&Var2, "HT_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 41:
StringCopy(&Var2, "HT_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 42:
StringCopy(&Var2, "HT_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=325;
iVar5=0;
iVar8=1;
break;
case 43:
StringCopy(&Var2, "HT_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 46:
StringCopy(&Var2, "HT_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 47:
StringCopy(&Var2, "HT_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 48:
StringCopy(&Var2, "HT_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 49:
StringCopy(&Var2, "HT_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 50:
StringCopy(&Var2, "HT_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=255;
iVar5=0;
iVar8=1;
break;
case 51:
StringCopy(&Var2, "HT_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=360;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=3970;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=1355;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=230;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=515;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=545;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=1440;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 76:
StringCopy(&Var2, "HT_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 77:
StringCopy(&Var2, "HT_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 78:
StringCopy(&Var2, "HT_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 79:
StringCopy(&Var2, "HT_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=50;
iVar5=0;
iVar8=1;
break;
case 80:
StringCopy(&Var2, "HT_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=575;
iVar5=0;
iVar8=1;
break;
case 82:
StringCopy(&Var2, "HT_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=605;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "HT_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=285;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=2125;
iVar5=0;
iVar8=1;
break;
case 93:
StringCopy(&Var2, "HT_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "HT_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "HT_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 104:
StringCopy(&Var2, "HT_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=295;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=195;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=855;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=1615;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=1130;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=165;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=250;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=110;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=145;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=105;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=115;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=390;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=425;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMF_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMF_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMF_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMF_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMF_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMF_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMF_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMF_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMF_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMF_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMF_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMF_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMF_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMF_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMF_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMF_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMF_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMF_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMF_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMF_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMF_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMF_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMF_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMF_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 156:
StringCopy(&Var2, "G_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 157:
StringCopy(&Var2, "G_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 158:
StringCopy(&Var2, "G_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 159:
StringCopy(&Var2, "G_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 160:
StringCopy(&Var2, "G_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 161:
StringCopy(&Var2, "G_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 162:
StringCopy(&Var2, "G_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 163:
StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=820;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=435;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 167:
StringCopy(&Var2, "G_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=165;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 169:
StringCopy(&Var2, "G_FMF_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 170:
StringCopy(&Var2, "G_FMF_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 171:
StringCopy(&Var2, "G_FMF_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 172:
StringCopy(&Var2, "G_FMF_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 173:
StringCopy(&Var2, "G_FMF_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 174:
StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=970;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
iVar3=1;
iVar4=9;
iVar1=585;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
iVar3=1;
iVar4=10;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMF_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMF_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMF_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMF_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMF_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=595;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "G_FMF_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=160;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "G_FMF_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "G_FMF_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=590;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=1125;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=740;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=805;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMF_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=6250;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMF_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMF_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=3585;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMF_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=4075;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMF_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=4935;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "G_FMF_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "G_FMF_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=5600;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "G_FMF_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=4790;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMF_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=2245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMF_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMF_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMF_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMF_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=1205;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "G_FMF_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "G_FMF_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=2215;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "G_FMF_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMF_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 211:
StringCopy(&Var2, "G_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 212:
StringCopy(&Var2, "G_FMF_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "G_FMF_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 214:
StringCopy(&Var2, "G_FMF_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "G_FMF_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "G_FMF_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "G_FMF_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "G_FMF_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 219:
StringCopy(&Var2, "G_FMF_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 220:
StringCopy(&Var2, "G_FMF_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 221:
StringCopy(&Var2, "G_FMF_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=5000;
iVar5=1;
iVar8=3;
break;
case 222:
StringCopy(&Var2, "G_FMF_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMF_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMF_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMF_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMF_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "G_FMF_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 228:
StringCopy(&Var2, "G_FMF_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 229:
StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
iVar3=6;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
iVar3=6;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
iVar3=6;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMF_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=4815;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMF_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=4795;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "G_FMF_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "G_FMF_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=4305;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "G_FMF_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=4965;
iVar5=1;
iVar8=3;
break;
case 237:
StringCopy(&Var2, "G_FMF_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=480;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMF_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=465;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMF_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=4320;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=2390;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=2005;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 243:
StringCopy(&Var2, "G_FMF_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMF_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 245:
StringCopy(&Var2, "G_FMF_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 246:
StringCopy(&Var2, "G_FMF_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 247:
StringCopy(&Var2, "G_FMF_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 248:
StringCopy(&Var2, "G_FMF_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 249:
StringCopy(&Var2, "G_FMF_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 250:
StringCopy(&Var2, "G_FMF_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 251:
StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMF_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMF_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "G_FMF_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "G_FMF_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=570;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "G_FMF_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=525;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMF_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMF_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMF_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMF_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=4065;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMF_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "G_FMF_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "G_FMF_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4275;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "G_FMF_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMF_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=80;
iVar5=1;
iVar8=3;
break;
case 271:
StringCopy(&Var2, "G_FMF_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 272:
StringCopy(&Var2, "G_FMF_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 273:
StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 274:
StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 275:
StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 276:
StringCopy(&Var2, "G_FMF_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=3660;
iVar5=1;
iVar8=3;
break;
case 277:
StringCopy(&Var2, "G_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=4165;
iVar5=1;
iVar8=3;
break;
case 278:
StringCopy(&Var2, "G_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=3670;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMF_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMF_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=3620;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMF_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=3610;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMF_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=4140;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMF_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMF_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 285:
StringCopy(&Var2, "G_FMF_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 286:
StringCopy(&Var2, "G_FMF_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 287:
StringCopy(&Var2, "G_FMF_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 288:
StringCopy(&Var2, "G_FMF_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 289:
StringCopy(&Var2, "G_FMF_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 290:
StringCopy(&Var2, "G_FMF_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 291:
StringCopy(&Var2, "G_FMF_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 292:
StringCopy(&Var2, "G_FMF_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 293:
StringCopy(&Var2, "G_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 294:
StringCopy(&Var2, "G_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 295:
StringCopy(&Var2, "G_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 296:
StringCopy(&Var2, "G_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 297:
StringCopy(&Var2, "G_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 298:
StringCopy(&Var2, "G_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 299:
StringCopy(&Var2, "G_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 300:
StringCopy(&Var2, "G_FMF_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=325;
iVar5=1;
iVar8=3;
break;
case 301:
StringCopy(&Var2, "G_FMF_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 302:
StringCopy(&Var2, "G_FMF_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 303:
StringCopy(&Var2, "G_FMF_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 304:
StringCopy(&Var2, "G_FMF_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 305:
StringCopy(&Var2, "G_FMF_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 306:
StringCopy(&Var2, "G_FMF_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 307:
StringCopy(&Var2, "G_FMF_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 308:
StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
iVar3=14;
iVar4=8;
iVar1=1490;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
iVar3=14;
iVar4=9;
iVar1=1105;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
iVar3=14;
iVar4=10;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 312:
StringCopy(&Var2, "G_FMF_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 313:
StringCopy(&Var2, "G_FMF_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 314:
StringCopy(&Var2, "G_FMF_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 315:
StringCopy(&Var2, "G_FMF_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 316:
StringCopy(&Var2, "G_FMF_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 317:
StringCopy(&Var2, "G_FMF_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 318:
StringCopy(&Var2, "G_FMF_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 320:
StringCopy(&Var2, "W_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=825;
iVar5=6;
iVar8=4;
break;
case 324:
StringCopy(&Var2, "W_FMF_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 325:
StringCopy(&Var2, "W_FMF_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMF_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
}
if(iVar8==1){
iVar9=(iParam0 - 10);
if(iVar9 >=0 && iVar9 < 121){
if(iVar9 > 8){
iVar9=(iVar9 - 1);
}
bVar1=round(((to_float(iVar1) * Global_262145.f_2054[iVar9]) * Global_296940.f_26));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
bVar1=round(((to_float(bVar1) * Global_262145.f_2175[iVar10]) * Global_296940.f_27));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
bVar1=round(((to_float(bVar1) * Global_262145.f_2200[iVar11]) * Global_296940.f_56));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 10){
bVar1=round(((to_float(bVar1) * Global_262145.f_2329[iVar12]) * Global_296940.f_28));
}}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_28));
}}}else{
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}}


void func_1436(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=10;
switch (iParam0){
case 0:
StringCopy(&Var2, "D_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=1;
iVar4=0;
iVar1=10000;
break;
case 2:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=2;
iVar4=0;
iVar1=5000;
break;
case 3:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=3;
iVar4=0;
iVar1=10000;
break;
case 4:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=4;
iVar4=0;
iVar1=5000;
break;
case 5:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=5;
iVar4=0;
iVar1=10000;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1437(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=7;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
if(Global_262145.f_4151 !=-1){
iVar1=Global_262145.f_4151;
}else{
iVar1=310;
}
break;
case 2:
iVar3=1;
iVar4=1;
if(Global_262145.f_4152 !=-1){
iVar1=Global_262145.f_4152;
}else{
iVar1=125;
}
break;
case 3:
iVar3=1;
iVar4=2;
if(Global_262145.f_4153 !=-1){
iVar1=Global_262145.f_4153;
}else{
iVar1=145;
}
break;
case 4:
iVar3=1;
iVar4=3;
if(Global_262145.f_4154 !=-1){
iVar1=Global_262145.f_4154;
}else{
iVar1=130;
}
break;
case 5:
iVar3=1;
iVar4=4;
if(Global_262145.f_4155 !=-1){
iVar1=Global_262145.f_4155;
}else{
iVar1=265;
}
break;
case 6:
iVar3=1;
iVar4=5;
if(Global_262145.f_4156 !=-1){
iVar1=Global_262145.f_4156;
}else{
iVar1=280;
}
break;
case 7:
iVar3=2;
iVar4=0;
if(Global_262145.f_4157 !=-1){
iVar1=Global_262145.f_4157;
}else{
iVar1=295;
}
break;
case 8:
iVar3=2;
iVar4=1;
if(Global_262145.f_4158 !=-1){
iVar1=Global_262145.f_4158;
}else{
iVar1=95;
}
break;
case 9:
iVar3=2;
iVar4=2;
if(Global_262145.f_4159 !=-1){
iVar1=Global_262145.f_4159;
}else{
iVar1=85;
}
break;
case 10:
iVar3=2;
iVar4=3;
if(Global_262145.f_4160 !=-1){
iVar1=Global_262145.f_4160;
}else{
iVar1=95;
}
break;
case 11:
iVar3=2;
iVar4=4;
if(Global_262145.f_4161 !=-1){
iVar1=Global_262145.f_4161;
}else{
iVar1=105;
}
break;
case 12:
iVar3=2;
iVar4=5;
if(Global_262145.f_4162 !=-1){
iVar1=Global_262145.f_4162;
}else{
iVar1=95;
}
break;
case 13:
iVar3=3;
iVar4=0;
if(Global_262145.f_4163 !=-1){
iVar1=Global_262145.f_4163;
}else{
iVar1=35;
}
break;
case 14:
iVar3=3;
iVar4=1;
if(Global_262145.f_4164 !=-1){
iVar1=Global_262145.f_4164;
}else{
iVar1=35;
}
break;
case 15:
iVar3=3;
iVar4=2;
if(Global_262145.f_4165 !=-1){
iVar1=Global_262145.f_4165;
}else{
iVar1=30;
}
break;
case 16:
iVar3=3;
iVar4=3;
if(Global_262145.f_4166 !=-1){
iVar1=Global_262145.f_4166;
}else{
iVar1=40;
}
break;
case 17:
iVar3=3;
iVar4=4;
if(Global_262145.f_4167 !=-1){
iVar1=Global_262145.f_4167;
}else{
iVar1=35;
}
break;
case 18:
iVar3=3;
iVar4=5;
if(Global_262145.f_4168 !=-1){
iVar1=Global_262145.f_4168;
}else{
iVar1=35;
}
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=2;
if(Global_262145.f_4169 !=-1){
iVar1=Global_262145.f_4169;
}else{
iVar1=355;
}
break;
case 22:
iVar3=4;
iVar4=3;
if(Global_262145.f_4170 !=-1){
iVar1=Global_262145.f_4170;
}else{
iVar1=370;
}
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=4;
if(Global_262145.f_4171 !=-1){
iVar1=Global_262145.f_4171;
}else{
iVar1=110;
}
break;
case 30:
iVar3=5;
iVar4=5;
if(Global_262145.f_4172 !=-1){
iVar1=Global_262145.f_4172;
}else{
iVar1=160;
}
break;
case 31:
iVar3=6;
iVar4=0;
if(Global_262145.f_4173 !=-1){
iVar1=Global_262145.f_4173;
}else{
iVar1=385;
}
break;
case 32:
iVar3=6;
iVar4=1;
if(Global_262145.f_4174 !=-1){
iVar1=Global_262145.f_4174;
}else{
iVar1=190;
}
break;
case 33:
iVar3=6;
iVar4=2;
if(Global_262145.f_4175 !=-1){
iVar1=Global_262145.f_4175;
}else{
iVar1=235;
}
break;
case 34:
iVar3=6;
iVar4=3;
if(Global_262145.f_4176 !=-1){
iVar1=Global_262145.f_4176;
}else{
iVar1=220;
}
break;
case 35:
iVar3=6;
iVar4=4;
if(Global_262145.f_4177 !=-1){
iVar1=Global_262145.f_4177;
}else{
iVar1=250;
}
break;
case 36:
iVar3=6;
iVar4=5;
if(Global_262145.f_4178 !=-1){
iVar1=Global_262145.f_4178;
}else{
iVar1=205;
}
break;
case 37:
iVar3=7;
iVar4=0;
if(Global_262145.f_4179 !=-1){
iVar1=Global_262145.f_4179;
}else{
iVar1=445;
}
break;
case 38:
iVar3=7;
iVar4=1;
if(Global_262145.f_4180 !=-1){
iVar1=Global_262145.f_4180;
}else{
iVar1=175;
}
break;
case 39:
iVar3=7;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=8;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=9;
iVar4=0;
if(Global_262145.f_4181 !=-1){
iVar1=Global_262145.f_4181;
}else{
iVar1=340;
}
break;
case 50:
iVar3=9;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=9;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=9;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 55, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_58));
}
return;
break;
}
bVar1=round((to_float(iVar1) * Global_296940.f_58));
StringCopy(&Var2, "T_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}


void func_1438(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=1;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=0;
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=965;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=960;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=9500;
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=975;
break;
case 5:
iVar3=2;
iVar4=0;
iVar1=1185;
break;
case 6:
iVar3=2;
iVar4=1;
iVar1=15000;
break;
case 7:
iVar3=2;
iVar4=2;
iVar1=1115;
break;
case 8:
iVar3=2;
iVar4=3;
iVar1=1105;
break;
case 9:
iVar3=3;
iVar4=0;
iVar1=25000;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=510;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=530;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=5500;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=535;
break;
case 14:
iVar3=5;
iVar4=0;
iVar1=1510;
break;
case 15:
iVar3=5;
iVar4=1;
iVar1=1530;
break;
case 16:
iVar3=5;
iVar4=2;
iVar1=14500;
break;
case 17:
iVar3=5;
iVar4=3;
iVar1=13000;
break;
case 18:
iVar3=6;
iVar4=0;
iVar1=8000;
break;
case 19:
iVar3=6;
iVar4=1;
iVar1=1265;
break;
case 20:
iVar3=6;
iVar4=2;
iVar1=8500;
break;
case 21:
iVar3=6;
iVar4=3;
iVar1=1210;
break;
case 22:
iVar3=7;
iVar4=0;
iVar1=2360;
break;
case 23:
iVar3=7;
iVar4=1;
iVar1=22500;
break;
case 24:
iVar3=7;
iVar4=2;
iVar1=2375;
break;
case 25:
iVar3=7;
iVar4=3;
iVar1=2485;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 26, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_29));
}
return;
break;
}
StringCopy(&Var2, "M_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
bVar1=round(((to_float(iVar1) * Global_262145.f_2027[iVar8]) * Global_296940.f_29));
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}


void func_1439(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=6;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=1765;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=760;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=760;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=765;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=85;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=80;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=90;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=90;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=95;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=100;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=60;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=55;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=100;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=1255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=65;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=1050;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=1895;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=185;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=190;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=115;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=415;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=115;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=135;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=125;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=105;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=130;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=3530;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=2610;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=1295;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=120;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=160;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=160;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=145;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=105;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=115;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=150;
break;
case 48:
iVar3=3;
iVar4=0;
iVar1=540;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=110;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=120;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=460;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=120;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=120;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=415;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=135;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=140;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=160;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1025;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=1560;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=145;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=120;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=365;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=100;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=65;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=85;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=5;
iVar4=0;
iVar1=50;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=35;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=50;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=50;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=2395;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=3675;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=320;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=3875;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 112:
iVar3=7;
iVar4=0;
iVar1=2050;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=375;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=2105;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=345;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=380;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=340;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=385;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=4135;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=370;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=375;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=385;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=365;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=325;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=325;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=370;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=390;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=400;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=390;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=365;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=410;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=4125;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=4365;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=5365;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=6225;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=3755;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=405;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=4115;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=2240;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=3850;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=3110;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=1950;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=455;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=405;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=410;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=415;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=4425;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=115;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=65;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=85;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=75;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=0;
iVar1=115;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=135;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=175;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=675;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=100;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=400;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=340;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=195;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=215;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=120;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=165;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=100;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=1040;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=100;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=120;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=210;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=205;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=200;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=100;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=1420;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=435;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=420;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=425;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=435;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=425;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=430;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=3215;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=3320;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=440;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=440;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=450;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=450;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=1255;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=750;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=165;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=460;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=190;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=195;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=200;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=205;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=210;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=215;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=220;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=455;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=175;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=800;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=790;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=175;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=190;
break;
}
StringCopy(&Var2, "F_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
bVar1=round(((to_float(iVar1) * Global_262145.f_1770[iVar8]) * Global_296940.f_25));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_25));
}}else{
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}}


void func_1440(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=4;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=270;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=750;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=450;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=4875;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=1760;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=1090;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=2465;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=305;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=290;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=410;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=255;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=255;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=405;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=5000;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=4480;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=4335;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=375;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=265;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=275;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=280;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=300;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=265;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=255;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=250;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=260;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=250;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=225;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=230;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=650;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=425;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=345;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=115;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=110;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=250;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=290;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=115;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=135;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=125;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=120;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=130;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=110;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=525;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=115;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=535;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=135;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=120;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=130;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=140;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=130;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=520;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=215;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=220;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=225;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=245;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=215;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=630;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=250;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=260;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=200;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=225;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=230;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=725;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=650;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=230;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=230;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=280;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=330;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=320;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=315;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=850;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=530;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=890;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=440;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=455;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=295;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=180;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=150;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=155;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=840;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=150;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=950;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=580;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=200;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=665;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=780;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=615;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=250;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=435;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=420;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=390;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=485;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=380;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=1295;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=1135;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=1425;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1645;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1925;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=2250;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=365;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=360;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=2245;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=2170;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=50;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=100;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=65;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=275;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=300;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=145;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=150;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=110;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=95;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=155;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=155;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=510;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=165;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=465;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=250;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=110;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=470;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=480;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=155;
break;
case 192:
iVar3=12;
iVar4=0;
iVar1=275;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=395;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=285;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=560;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=595;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=295;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=230;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=215;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=270;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=295;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=285;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=215;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=210;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=290;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=230;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 224:
iVar3=14;
iVar4=0;
iVar1=90;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=105;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=100;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=105;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=230;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=350;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=335;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "L_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
bVar1=round(((to_float(iVar1) * Global_262145.f_1256[iVar8]) * Global_296940.f_23));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_23));
}}else{
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}}


void func_1441(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=3;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
case 9:
iVar3=9;
iVar4=0;
break;
case 10:
iVar3=10;
iVar4=0;
break;
case 11:
iVar3=11;
iVar4=0;
break;
case 12:
iVar3=12;
iVar4=0;
break;
case 13:
iVar3=13;
iVar4=0;
break;
case 14:
iVar3=14;
iVar4=0;
break;
case 15:
iVar3=15;
iVar4=0;
break;
}
if(iParam0 >=16){
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 16, iParam1);
return;
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1442(int iParam0, int iParam1){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=9;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=1;
iVar4=1;
break;
case 3:
iVar3=1;
iVar4=2;
break;
case 4:
iVar3=1;
iVar4=3;
break;
case 5:
iVar3=1;
iVar4=4;
break;
case 6:
iVar3=2;
iVar4=0;
break;
case 7:
iVar3=2;
iVar4=1;
break;
case 8:
iVar3=2;
iVar4=2;
break;
case 9:
iVar3=2;
iVar4=3;
break;
case 10:
iVar3=2;
iVar4=4;
break;
case 11:
iVar3=3;
iVar4=0;
break;
case 12:
iVar3=3;
iVar4=1;
break;
case 13:
iVar3=3;
iVar4=2;
break;
case 14:
iVar3=3;
iVar4=3;
break;
case 15:
iVar3=3;
iVar4=4;
break;
case 16:
iVar3=4;
iVar4=0;
break;
case 17:
iVar3=4;
iVar4=1;
break;
case 18:
iVar3=4;
iVar4=2;
break;
case 19:
iVar3=4;
iVar4=3;
break;
case 20:
iVar3=4;
iVar4=4;
break;
case 21:
iVar3=5;
iVar4=0;
break;
case 22:
iVar3=5;
iVar4=1;
break;
case 23:
iVar3=5;
iVar4=2;
break;
case 24:
iVar3=5;
iVar4=3;
break;
case 25:
iVar3=5;
iVar4=4;
break;
case 26:
iVar3=6;
iVar4=0;
break;
case 27:
iVar3=6;
iVar4=1;
break;
case 28:
iVar3=6;
iVar4=2;
break;
case 29:
iVar3=6;
iVar4=3;
break;
case 30:
iVar3=6;
iVar4=4;
break;
case 31:
iVar3=7;
iVar4=0;
break;
case 32:
iVar3=7;
iVar4=1;
break;
case 33:
iVar3=7;
iVar4=2;
break;
case 34:
iVar3=7;
iVar4=3;
break;
case 35:
iVar3=7;
iVar4=4;
break;
}
if(iParam0 >=36){
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 36, iParam1);
return;
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1443(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=0;
iVar4=15;
iVar1=125;
break;
case 16:
StringCopy(&Var2, "U_FMF_0_0", 16);
iVar3=1;
iVar4=0;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "U_FMF_0_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMF_0_2", 16);
iVar3=1;
iVar4=2;
iVar1=50;
break;
case 19:
StringCopy(&Var2, "U_FMF_0_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMF_0_4", 16);
iVar3=1;
iVar4=4;
iVar1=40;
break;
case 21:
StringCopy(&Var2, "U_FMF_0_5", 16);
iVar3=1;
iVar4=5;
iVar1=40;
break;
case 22:
StringCopy(&Var2, "U_FMF_0_6", 16);
iVar3=1;
iVar4=6;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "U_FMF_0_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMF_0_8", 16);
iVar3=1;
iVar4=8;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "U_FMF_0_9", 16);
iVar3=1;
iVar4=9;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "U_FMF_0_10", 16);
iVar3=1;
iVar4=10;
iVar1=135;
break;
case 27:
StringCopy(&Var2, "U_FMF_0_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMF_0_12", 16);
iVar3=1;
iVar4=12;
iVar1=220;
break;
case 29:
StringCopy(&Var2, "U_FMF_0_13", 16);
iVar3=1;
iVar4=13;
iVar1=45;
break;
case 30:
StringCopy(&Var2, "U_FMF_0_14", 16);
iVar3=1;
iVar4=14;
iVar1=45;
break;
case 31:
StringCopy(&Var2, "U_FMF_0_15", 16);
iVar3=1;
iVar4=15;
iVar1=125;
break;
case 32:
iVar3=2;
iVar4=0;
break;
case 33:
iVar3=3;
iVar4=0;
break;
case 34:
StringCopy(&Var2, "U_FMF_4_0", 16);
iVar3=4;
iVar4=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "U_FMF_4_1", 16);
iVar3=4;
iVar4=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "U_FMF_4_2", 16);
iVar3=4;
iVar4=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "U_FMF_4_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "U_FMF_4_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMF_4_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "U_FMF_4_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "U_FMF_4_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMF_4_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMF_4_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "U_FMF_4_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMF_4_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMF_4_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMF_4_13", 16);
iVar3=4;
iVar4=13;
iVar1=40;
bVar1=round((to_float(iVar1) * Global_262145.f_1513[77]));
break;
case 48:
StringCopy(&Var2, "U_FMF_4_14", 16);
iVar3=4;
iVar4=14;
bVar1=40;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[78]));
break;
case 49:
StringCopy(&Var2, "U_FMF_4_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "U_FMF_5_0", 16);
iVar3=5;
iVar4=0;
bVar1=45;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[80]));
break;
case 51:
StringCopy(&Var2, "U_FMF_5_1", 16);
iVar3=5;
iVar4=1;
bVar1=60;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[81]));
break;
case 52:
StringCopy(&Var2, "U_FMF_5_2", 16);
iVar3=5;
iVar4=2;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "U_FMF_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "U_FMF_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "U_FMF_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "U_FMF_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "U_FMF_5_7", 16);
iVar3=5;
iVar4=7;
bVar1=375;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[87]));
break;
case 58:
StringCopy(&Var2, "U_FMF_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "U_FMF_5_9", 16);
iVar3=5;
iVar4=9;
bVar1=90;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[89]));
break;
case 60:
StringCopy(&Var2, "U_FMF_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "U_FMF_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "U_FMF_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "U_FMF_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "U_FMF_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "U_FMF_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
case 66:
iVar3=6;
iVar4=0;
break;
case 67:
iVar3=7;
iVar4=0;
break;
case 68:
iVar3=8;
iVar4=0;
break;
case 69:
iVar3=9;
iVar4=0;
break;
case 70:
iVar3=10;
iVar4=0;
break;
case 71:
StringCopy(&Var2, "U_FMF_11_0", 16);
iVar3=11;
iVar4=0;
bVar1=90;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[176]));
break;
case 72:
StringCopy(&Var2, "U_FMF_11_1", 16);
iVar3=11;
iVar4=1;
bVar1=95;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[177]));
break;
case 73:
StringCopy(&Var2, "U_FMF_11_2", 16);
iVar3=11;
iVar4=2;
bVar1=95;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[178]));
break;
case 74:
StringCopy(&Var2, "U_FMF_11_3", 16);
iVar3=11;
iVar4=3;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "U_FMF_11_4", 16);
iVar3=11;
iVar4=4;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "U_FMF_11_5", 16);
iVar3=11;
iVar4=5;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "U_FMF_11_6", 16);
iVar3=11;
iVar4=6;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "U_FMF_11_7", 16);
iVar3=11;
iVar4=7;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "U_FMF_11_8", 16);
iVar3=11;
iVar4=8;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMF_11_9", 16);
iVar3=11;
iVar4=9;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "U_FMF_11_10", 16);
iVar3=11;
iVar4=10;
bVar1=150;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[186]));
break;
case 82:
StringCopy(&Var2, "U_FMF_11_11", 16);
iVar3=11;
iVar4=11;
bVar1=65;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[187]));
break;
case 83:
StringCopy(&Var2, "U_FMF_11_12", 16);
iVar3=11;
iVar4=12;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMF_11_13", 16);
iVar3=11;
iVar4=13;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMF_11_14", 16);
iVar3=11;
iVar4=14;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMF_11_15", 16);
iVar3=11;
iVar4=15;
bVar1=145;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[191]));
break;
case 87:
StringCopy(&Var2, "U_FMF_12_0", 16);
iVar3=12;
iVar4=0;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "U_FMF_12_1", 16);
iVar3=12;
iVar4=1;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMF_12_2", 16);
iVar3=12;
iVar4=2;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMF_12_3", 16);
iVar3=12;
iVar4=3;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMF_12_4", 16);
iVar3=12;
iVar4=4;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMF_12_5", 16);
iVar3=12;
iVar4=5;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMF_12_6", 16);
iVar3=12;
iVar4=6;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMF_12_7", 16);
iVar3=12;
iVar4=7;
bVar1=1560;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[199]));
break;
case 95:
StringCopy(&Var2, "U_FMF_12_8", 16);
iVar3=12;
iVar4=8;
bVar1=195;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[200]));
break;
case 96:
StringCopy(&Var2, "U_FMF_12_9", 16);
iVar3=12;
iVar4=9;
bVar1=200;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[201]));
break;
case 97:
StringCopy(&Var2, "U_FMF_12_10", 16);
iVar3=12;
iVar4=10;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "U_FMF_12_11", 16);
iVar3=12;
iVar4=11;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "U_FMF_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 100:
StringCopy(&Var2, "U_FMF_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 101:
StringCopy(&Var2, "U_FMF_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 102:
StringCopy(&Var2, "U_FMF_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "U_FMF_13_0", 16);
iVar3=13;
iVar4=0;
bVar1=975;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[208]));
break;
case 104:
StringCopy(&Var2, "U_FMF_13_1", 16);
iVar3=13;
iVar4=1;
bVar1=2670;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[209]));
break;
case 105:
StringCopy(&Var2, "U_FMF_13_2", 16);
iVar3=13;
iVar4=2;
bVar1=480;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[210]));
break;
case 106:
StringCopy(&Var2, "U_FMF_13_3", 16);
iVar3=13;
iVar4=3;
bVar1=400;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[211]));
break;
case 107:
StringCopy(&Var2, "U_FMF_13_4", 16);
iVar3=13;
iVar4=4;
bVar1=2500;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[212]));
break;
case 108:
StringCopy(&Var2, "U_FMF_13_5", 16);
iVar3=13;
iVar4=5;
bVar1=2060;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[213]));
break;
case 109:
StringCopy(&Var2, "U_FMF_13_6", 16);
iVar3=13;
iVar4=6;
bVar1=2620;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[214]));
break;
case 110:
StringCopy(&Var2, "U_FMF_13_7", 16);
iVar3=13;
iVar4=7;
bVar1=475;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[215]));
break;
case 111:
StringCopy(&Var2, "U_FMF_13_8", 16);
iVar3=13;
iVar4=8;
bVar1=490;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[216]));
break;
case 112:
StringCopy(&Var2, "U_FMF_13_9", 16);
iVar3=13;
iVar4=9;
bVar1=2280;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[217]));
break;
case 113:
StringCopy(&Var2, "U_FMF_13_10", 16);
iVar3=13;
iVar4=10;
bVar1=485;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[218]));
break;
case 114:
StringCopy(&Var2, "U_FMF_13_11", 16);
iVar3=13;
iVar4=11;
bVar1=2390;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[219]));
break;
case 115:
StringCopy(&Var2, "U_FMF_13_12", 16);
iVar3=13;
iVar4=12;
bVar1=2610;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[220]));
break;
case 116:
StringCopy(&Var2, "U_FMF_13_13", 16);
iVar3=13;
iVar4=13;
bVar1=1450;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[221]));
break;
case 117:
StringCopy(&Var2, "U_FMF_13_14", 16);
iVar3=13;
iVar4=14;
bVar1=2720;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[222]));
break;
case 118:
StringCopy(&Var2, "U_FMF_13_15", 16);
iVar3=13;
iVar4=15;
bVar1=4995;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[223]));
break;
case 119:
iVar3=14;
iVar4=0;
break;
case 120:
StringCopy(&Var2, "U_FMF_15_0", 16);
iVar3=15;
iVar4=0;
bVar1=325;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[240]));
break;
case 121:
StringCopy(&Var2, "U_FMF_15_1", 16);
iVar3=15;
iVar4=1;
bVar0=true;
break;
case 122:
StringCopy(&Var2, "U_FMF_15_2", 16);
iVar3=15;
iVar4=2;
bVar0=true;
break;
case 123:
StringCopy(&Var2, "U_FMF_15_3", 16);
iVar3=15;
iVar4=3;
bVar1=130;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[243]));
break;
case 124:
StringCopy(&Var2, "U_FMF_15_4", 16);
iVar3=15;
iVar4=4;
bVar0=true;
break;
case 125:
StringCopy(&Var2, "U_FMF_15_5", 16);
iVar3=15;
iVar4=5;
bVar0=true;
break;
case 126:
StringCopy(&Var2, "U_FMF_15_6", 16);
iVar3=15;
iVar4=6;
bVar0=true;
break;
case 127:
StringCopy(&Var2, "U_FMF_15_7", 16);
iVar3=15;
iVar4=7;
bVar0=true;
break;
case 128:
StringCopy(&Var2, "U_FMF_15_8", 16);
iVar3=15;
iVar4=8;
bVar0=true;
break;
case 129:
StringCopy(&Var2, "U_FMF_15_9", 16);
iVar3=15;
iVar4=9;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMF_15_10", 16);
iVar3=15;
iVar4=10;
bVar1=450;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[250]));
break;
case 131:
StringCopy(&Var2, "U_FMF_15_11", 16);
iVar3=15;
iVar4=11;
bVar1=465;
bVar1=round((to_float(bVar1) * Global_262145.f_1513[251]));
break;
case 132:
StringCopy(&Var2, "U_FMF_15_12", 16);
iVar3=15;
iVar4=12;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMF_15_13", 16);
iVar3=15;
iVar4=13;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMF_15_14", 16);
iVar3=15;
iVar4=14;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMF_15_15", 16);
iVar3=15;
iVar4=15;
bVar0=true;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 136, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_1444(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
bVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
bVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
bVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_1444(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
bVar1=round((to_float(500) * Global_262145.f_2988));
}else{
bVar1=round((to_float(40) * Global_262145.f_1513[9]));
}}elseif(iParam0 >=0 && iParam0 < 16){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
bVar1=round((to_float(bVar1) * Global_262145.f_1513[iVar8]));
}}elseif(iParam0 >=16 && iParam0 < 32){
iVar9=(iParam0 - 16);
if(iVar9 >=0 && iVar9 < 256){
bVar1=round((to_float(bVar1) * Global_262145.f_1513[iVar9]));
}}
bVar1=round((to_float(bVar1) * Global_296940.f_24));
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}

int func_1444(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_1446(iParam0)==14192){
return 0;
}
uVar0=func_1445(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_288(iVar1));
}

int func_1445(var uParam0, int iParam1){
int iVar0;
iVar0=func_261(func_1446(uParam0), iParam1, 0);
return iVar0;
}

int func_1446(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_291(iVar0);
if((func_264()==0 || func_1447()==0) || (func_264()==999 && func_1447()==999)){
switch (iVar1){
case 0:
return 1039;
break;
case 1:
return 1040;
break;
case 2:
return 1041;
break;
case 3:
return 1042;
break;
case 4:
return 1043;
break;
case 5:
return 1503;
break;
case 6:
return 1758;
break;
case 7:
return 1952;
break;
case 8:
return 1953;
break;
case 9:
return 1954;
break;
case 10:
return 1955;
break;
case 11:
return 1956;
break;
case 12:
return 1957;
break;
case 13:
return 2424;
break;
case 14:
return 2444;
break;
case 15:
return 2447;
break;
case 16:
return 2450;
break;
case 17:
return 2614;
break;
case 18:
return 2617;
break;
case 19:
return 2620;
break;
case 20:
return 3786;
break;
case 21:
return 3789;
break;
case 22:
return 3864;
break;
case 23:
return 3867;
break;
case 24:
return 3870;
break;
case 25:
return 3873;
break;
case 26:
return 5364;
break;
case 27:
return 5367;
break;
case 28:
return 5469;
break;
case 29:
return 5472;
break;
case 30:
return 6431;
break;
case 31:
return 6434;
break;
case 32:
return 7255;
break;
case 33:
return 7258;
break;
case 34:
return 7261;
break;
case 35:
return 7970;
break;
case 36:
return 7973;
break;
case 37:
return 7976;
break;
case 38:
return 7979;
break;
case 39:
return 8501;
break;
case 40:
return 8504;
break;
case 41:
return 8507;
break;
case 42:
return 8510;
break;
case 43:
return 8906;
break;
case 44:
return 8909;
break;
case 45:
return 8912;
break;
case 46:
return 10287;
break;
case 47:
return 10290;
break;
case 48:
return 10413;
break;
case 49:
return 10416;
break;
case 50:
return 11824;
break;
case 51:
return 11827;
break;
}}
return 14192;
}

int func_1447(){
return Global_32164;
}


void func_1448(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=11;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=225;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=40;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=40;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=40;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=40;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=45;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=40;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=40;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=135;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=60;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=220;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=45;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=45;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=125;
break;
}
switch (iParam0){
case 16:
iVar3=1;
iVar4=0;
iVar1=390;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=230;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=355;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=5000;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=2725;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=3265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=3625;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=4220;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=310;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=45;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=75;
break;
case 35:
iVar3=2;
iVar4=3;
iVar1=50;
break;
case 36:
iVar3=2;
iVar4=4;
iVar1=60;
break;
case 37:
iVar3=2;
iVar4=5;
iVar1=50;
break;
case 38:
iVar3=2;
iVar4=6;
iVar1=295;
break;
case 39:
iVar3=2;
iVar4=7;
iVar1=80;
break;
case 40:
iVar3=2;
iVar4=8;
iVar1=75;
break;
case 41:
iVar3=2;
iVar4=9;
iVar1=2250;
break;
case 42:
iVar3=2;
iVar4=10;
iVar1=275;
break;
case 43:
iVar3=2;
iVar4=11;
iVar1=445;
break;
case 44:
iVar3=2;
iVar4=12;
iVar1=50;
break;
case 45:
iVar3=2;
iVar4=13;
iVar1=40;
break;
case 46:
iVar3=2;
iVar4=14;
iVar1=45;
break;
case 47:
iVar3=2;
iVar4=15;
iVar1=470;
break;
}
switch (iParam0){
case 48:
iVar3=3;
iVar4=0;
iVar1=95;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=95;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=360;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=100;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=60;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=295;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=460;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=1980;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=2110;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=95;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 74:
iVar3=4;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 75:
iVar3=4;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 76:
iVar3=4;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=4;
iVar4=13;
iVar1=40;
break;
case 78:
iVar3=4;
iVar4=14;
iVar1=40;
break;
case 79:
iVar3=4;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=45;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=60;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=375;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=90;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 96:
iVar3=6;
iVar4=0;
iVar1=900;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=1000;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=1050;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=1000;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 103:
iVar3=6;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 104:
iVar3=6;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 106:
iVar3=6;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 107:
iVar3=6;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 108:
iVar3=6;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 109:
iVar3=6;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 110:
iVar3=6;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 111:
iVar3=6;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 112:
iVar3=7;
iVar4=0;
iVar1=2975;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=1100;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=1825;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=1750;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=1025;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=1075;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=2805;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=2250;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 144:
iVar3=9;
iVar4=0;
iVar1=495;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=95;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=95;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=525;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=100;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=110;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=100;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=110;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=130;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=560;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=295;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=975;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=160;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=100;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1700;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=380;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=95;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=95;
break;
case 163:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=7;
iVar1=110;
break;
case 168:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=10;
iVar1=95;
break;
case 171:
iVar3=10;
iVar4=11;
iVar1=90;
break;
case 172:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 173:
iVar3=10;
iVar4=13;
iVar1=85;
break;
case 174:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=10;
iVar4=15;
iVar1=215;
break;
}
switch (iParam0){
case 176:
iVar3=11;
iVar4=0;
iVar1=90;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=95;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=95;
break;
case 179:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 180:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=10;
iVar1=150;
break;
case 187:
iVar3=11;
iVar4=11;
iVar1=65;
break;
case 188:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 189:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 190:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=145;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=1560;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=195;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=200;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 208:
iVar3=13;
iVar4=0;
iVar1=975;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=2670;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=480;
break;
case 211:
iVar3=13;
iVar4=3;
iVar1=400;
break;
case 212:
iVar3=13;
iVar4=4;
iVar1=2500;
break;
case 213:
iVar3=13;
iVar4=5;
iVar1=2060;
break;
case 214:
iVar3=13;
iVar4=6;
iVar1=2620;
break;
case 215:
iVar3=13;
iVar4=7;
iVar1=475;
break;
case 216:
iVar3=13;
iVar4=8;
iVar1=490;
break;
case 217:
iVar3=13;
iVar4=9;
iVar1=2280;
break;
case 218:
iVar3=13;
iVar4=10;
iVar1=485;
break;
case 219:
iVar3=13;
iVar4=11;
iVar1=2390;
break;
case 220:
iVar3=13;
iVar4=12;
iVar1=2610;
break;
case 221:
iVar3=13;
iVar4=13;
iVar1=1450;
break;
case 222:
iVar3=13;
iVar4=14;
iVar1=2720;
break;
case 223:
iVar3=13;
iVar4=15;
iVar1=4995;
break;
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=265;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=385;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=345;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=330;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=430;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=375;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=375;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=295;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=360;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=325;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=340;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=300;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=315;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=415;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=420;
break;
}
switch (iParam0){
case 240:
iVar3=15;
iVar4=0;
iVar1=325;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=130;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=450;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=465;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
StringCopy(&Var2, "U_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==4){
if(func_1444(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_296940.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_24));
}elseif(iParam0==9){
if(func_1444(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[9]) * Global_296940.f_24));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
bVar1=round(((to_float(iVar1) * Global_262145.f_1513[iVar8]) * Global_296940.f_24));
}}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}}else{
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}}


void func_1449(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=2;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
iVar1=500;
bVar1=round((to_float(iVar1) * Global_262145.f_2466[0]));
break;
case 1:
iVar3=1;
iVar4=0;
bVar1=500;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[1]));
break;
case 2:
iVar3=1;
iVar4=1;
bVar1=495;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[2]));
break;
case 3:
iVar3=1;
iVar4=2;
bVar1=490;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[3]));
break;
case 4:
iVar3=1;
iVar4=3;
bVar1=485;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[4]));
break;
case 5:
iVar3=1;
iVar4=4;
bVar1=480;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[5]));
break;
case 6:
iVar3=1;
iVar4=5;
bVar1=false;
break;
case 7:
iVar3=2;
iVar4=0;
bVar1=440;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[6]));
break;
case 8:
iVar3=2;
iVar4=1;
bVar1=435;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[7]));
break;
case 9:
iVar3=2;
iVar4=2;
bVar1=430;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[8]));
break;
case 10:
iVar3=2;
iVar4=3;
bVar1=425;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[9]));
break;
case 11:
iVar3=2;
iVar4=4;
bVar1=420;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[10]));
break;
case 12:
iVar3=2;
iVar4=5;
bVar1=false;
break;
case 13:
iVar3=3;
iVar4=0;
bVar1=190;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[11]));
break;
case 14:
iVar3=3;
iVar4=1;
bVar1=185;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[12]));
break;
case 15:
iVar3=3;
iVar4=2;
bVar1=180;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[13]));
break;
case 16:
iVar3=3;
iVar4=3;
bVar1=175;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[14]));
break;
case 17:
iVar3=3;
iVar4=4;
bVar1=170;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[15]));
break;
case 18:
iVar3=4;
iVar4=0;
bVar1=295;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[16]));
break;
case 19:
iVar3=4;
iVar4=1;
bVar1=290;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[17]));
break;
case 20:
iVar3=4;
iVar4=2;
bVar1=285;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[18]));
break;
case 21:
iVar3=4;
iVar4=3;
bVar1=280;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[19]));
break;
case 22:
iVar3=4;
iVar4=4;
bVar1=275;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[20]));
break;
case 23:
iVar3=4;
iVar4=5;
bVar1=false;
break;
case 24:
iVar3=5;
iVar4=0;
bVar1=2000;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[21]));
break;
case 25:
iVar3=5;
iVar4=1;
bVar1=1995;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[22]));
break;
case 26:
iVar3=5;
iVar4=2;
bVar1=1990;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[23]));
break;
case 27:
iVar3=5;
iVar4=3;
bVar1=1985;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[24]));
break;
case 28:
iVar3=5;
iVar4=4;
bVar1=1980;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[25]));
break;
case 29:
iVar3=5;
iVar4=5;
bVar1=false;
break;
case 30:
iVar3=6;
iVar4=0;
bVar1=1150;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[26]));
break;
case 31:
iVar3=6;
iVar4=1;
bVar1=1145;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[27]));
break;
case 32:
iVar3=6;
iVar4=2;
bVar1=1140;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[28]));
break;
case 33:
iVar3=6;
iVar4=3;
bVar1=1135;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[29]));
break;
case 34:
iVar3=6;
iVar4=4;
bVar1=1130;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[30]));
break;
case 35:
iVar3=7;
iVar4=0;
bVar1=550;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[31]));
break;
case 36:
iVar3=7;
iVar4=1;
bVar1=545;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[32]));
break;
case 37:
iVar3=7;
iVar4=2;
bVar1=540;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[33]));
break;
case 38:
iVar3=7;
iVar4=3;
bVar1=535;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[34]));
break;
case 39:
iVar3=7;
iVar4=4;
bVar1=530;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[35]));
break;
case 40:
iVar3=7;
iVar4=5;
bVar1=false;
break;
case 41:
iVar3=8;
iVar4=0;
bVar1=580;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[36]));
break;
case 42:
iVar3=8;
iVar4=1;
bVar1=575;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[37]));
break;
case 43:
iVar3=8;
iVar4=2;
bVar1=570;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[38]));
break;
case 44:
iVar3=8;
iVar4=3;
bVar1=565;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[39]));
break;
case 45:
iVar3=8;
iVar4=4;
bVar1=560;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[40]));
break;
case 46:
iVar3=8;
iVar4=5;
bVar1=false;
break;
case 47:
iVar3=9;
iVar4=0;
bVar1=1100;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[41]));
break;
case 48:
iVar3=9;
iVar4=1;
bVar1=1095;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[42]));
break;
case 49:
iVar3=9;
iVar4=2;
bVar1=1090;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[43]));
break;
case 50:
iVar3=9;
iVar4=3;
bVar1=1085;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[44]));
break;
case 51:
iVar3=9;
iVar4=4;
bVar1=1080;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[45]));
break;
case 52:
iVar3=9;
iVar4=5;
bVar1=false;
break;
case 53:
iVar3=10;
iVar4=0;
bVar1=520;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[46]));
break;
case 54:
iVar3=10;
iVar4=1;
bVar1=515;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[47]));
break;
case 55:
iVar3=10;
iVar4=2;
bVar1=510;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[48]));
break;
case 56:
iVar3=10;
iVar4=3;
bVar1=505;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[49]));
break;
case 57:
iVar3=10;
iVar4=4;
bVar1=500;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[50]));
break;
case 58:
iVar3=10;
iVar4=5;
bVar1=false;
break;
case 59:
iVar3=10;
iVar4=6;
bVar1=false;
break;
case 60:
iVar3=11;
iVar4=0;
bVar1=395;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[51]));
break;
case 61:
iVar3=11;
iVar4=1;
bVar1=390;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[52]));
break;
case 62:
iVar3=11;
iVar4=2;
bVar1=385;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[53]));
break;
case 63:
iVar3=11;
iVar4=3;
bVar1=380;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[54]));
break;
case 64:
iVar3=11;
iVar4=4;
bVar1=375;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[55]));
break;
case 65:
iVar3=11;
iVar4=5;
bVar1=false;
break;
case 66:
iVar3=11;
iVar4=6;
bVar1=false;
break;
case 67:
iVar3=12;
iVar4=0;
bVar1=1050;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[56]));
break;
case 68:
iVar3=12;
iVar4=1;
bVar1=1045;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[57]));
break;
case 69:
iVar3=12;
iVar4=2;
bVar1=1040;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[58]));
break;
case 70:
iVar3=12;
iVar4=3;
bVar1=1035;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[59]));
break;
case 71:
iVar3=12;
iVar4=4;
bVar1=1030;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[60]));
break;
case 72:
iVar3=12;
iVar4=5;
bVar1=false;
break;
case 73:
iVar3=13;
iVar4=0;
bVar1=1200;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[61]));
break;
case 74:
iVar3=13;
iVar4=1;
bVar1=1195;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[62]));
break;
case 75:
iVar3=13;
iVar4=2;
bVar1=1190;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[63]));
break;
case 76:
iVar3=13;
iVar4=3;
bVar1=1185;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[64]));
break;
case 77:
iVar3=13;
iVar4=4;
bVar1=1180;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[65]));
break;
case 78:
iVar3=13;
iVar4=5;
bVar1=false;
break;
case 79:
iVar3=14;
iVar4=0;
bVar1=475;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[66]));
break;
case 80:
iVar3=14;
iVar4=1;
bVar1=470;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[67]));
break;
case 81:
iVar3=14;
iVar4=2;
bVar1=465;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[68]));
break;
case 82:
iVar3=14;
iVar4=3;
bVar1=460;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[69]));
break;
case 83:
iVar3=14;
iVar4=4;
bVar1=455;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[70]));
break;
case 84:
iVar3=14;
iVar4=5;
bVar1=false;
break;
case 85:
iVar3=15;
iVar4=0;
bVar1=950;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[71]));
break;
case 86:
iVar3=15;
iVar4=1;
bVar1=945;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[72]));
break;
case 87:
iVar3=15;
iVar4=2;
bVar1=940;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[73]));
break;
case 88:
iVar3=15;
iVar4=3;
bVar1=935;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[74]));
break;
case 89:
iVar3=15;
iVar4=4;
bVar1=930;
bVar1=round((to_float(bVar1) * Global_262145.f_2466[75]));
break;
case 90:
iVar3=15;
iVar4=5;
bVar1=false;
break;
case 91:
iVar3=15;
iVar4=6;
bVar1=false;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_1432(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, bVar1, bVar0, iVar5, iVar6, 0);
}


void func_1450(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_1465(iParam1, iParam2);
break;
case 11:
func_1464(iParam1, iParam2);
break;
case 8:
func_1463(iParam1, iParam2);
break;
case 9:
func_1462(iParam1, iParam2);
break;
case 3:
func_1461(iParam1, iParam2);
break;
case 4:
func_1460(iParam1, iParam2);
break;
case 6:
func_1459(iParam1, iParam2);
break;
case 1:
func_1458(iParam1, iParam2);
break;
case 7:
func_1457(iParam1, iParam2);
break;
case 10:
func_1456(iParam1, iParam2);
break;
case 14:
func_1455(iParam1, iParam2);
break;
case 12:
func_1454(iParam1, iParam2);
break;
case 5:
func_1453(iParam1, iParam2);
break;
case 0:
func_1452(iParam1, iParam2);
break;
case 13:
func_1451(iParam1);
break;
}}


void func_1451(int iParam0){
bool bVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=13;
switch (iParam0){
case 31:
iVar3=0;
iVar4=0;
break;
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=0;
iVar4=0;
break;
case 2:
iVar3=0;
iVar4=0;
break;
case 3:
iVar3=0;
iVar4=0;
break;
case 4:
iVar3=0;
iVar4=0;
break;
case 5:
iVar3=0;
iVar4=0;
break;
case 6:
iVar3=0;
iVar4=0;
break;
case 7:
iVar3=0;
iVar4=0;
break;
case 8:
iVar3=0;
iVar4=0;
break;
case 9:
iVar3=0;
iVar4=0;
break;
case 10:
iVar3=0;
iVar4=0;
break;
case 11:
iVar3=0;
iVar4=0;
break;
case 12:
iVar3=0;
iVar4=0;
break;
case 13:
iVar3=0;
iVar4=0;
break;
case 14:
iVar3=0;
iVar4=0;
break;
case 15:
iVar3=0;
iVar4=0;
break;
case 16:
iVar3=0;
iVar4=0;
break;
case 17:
iVar3=0;
iVar4=0;
break;
case 18:
iVar3=0;
iVar4=0;
break;
case 19:
iVar3=0;
iVar4=0;
break;
case 20:
iVar3=0;
iVar4=0;
break;
case 21:
iVar3=0;
iVar4=0;
break;
case 22:
iVar3=0;
iVar4=0;
break;
case 23:
iVar3=0;
iVar4=0;
break;
case 24:
iVar3=0;
iVar4=0;
break;
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1452(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=3;
func_1432(iVar0, iParam0, 0, iParam1);
}


void func_1453(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=5;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
break;
case 1:
iVar3=1;
iVar4=0;
break;
case 2:
iVar3=2;
iVar4=0;
break;
case 3:
iVar3=3;
iVar4=0;
break;
case 4:
iVar3=4;
iVar4=0;
break;
case 5:
iVar3=5;
iVar4=0;
break;
case 6:
iVar3=6;
iVar4=0;
break;
case 7:
iVar3=7;
iVar4=0;
break;
case 8:
iVar3=8;
iVar4=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_1432(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1454(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=12;
switch (iParam0){
case 0:
iVar3=0;
iVar4=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S1", 16);
break;
case 2:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S2", 16);
break;
case 3:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S3", 16);
break;
case 4:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S4", 16);
break;
case 5:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S5", 16);
break;
case 6:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S6", 16);
break;
case 7:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S7", 16);
break;
case 8:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S8", 16);
break;
case 9:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_S9", 16);
break;
case 10:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P1", 16);
break;
case 11:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P2", 16);
break;
case 12:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P3", 16);
break;
case 13:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P4", 16);
break;
case 14:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P5", 16);
break;
case 15:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P6", 16);
break;
case 16:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P7", 16);
break;
case 17:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_P8", 16);
break;
case 18:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B1", 16);
break;
case 19:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B2", 16);
break;
case 20:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B3", 16);
break;
case 21:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B4", 16);
break;
case 22:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B5", 16);
break;
case 23:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B6", 16);
break;
case 24:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B7", 16);
break;
case 25:
iVar3=0;
iVar4=0;
StringCopy(&Var2, "O_FMM_B8", 16);
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_1432(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_1422(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_1455(int iParam0, int iParam1){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=14;
iVar8=0;
switch (iParam0){
case 0:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=0;
break;
case 1:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=1;
break;
case 2:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=2;
break;
case 3:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=3;
break;
case 4:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=4;
break;
case 5:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=5;
break;
case 6:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=6;
break;
case 7:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=7;
break;
case 8:
iVar3=-1;
iVar4=0;
iVar1=0;
iVar5=8;
break;
case 10:
StringCopy(&Var2, "HT_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 11:
StringCopy(&Var2, "HT_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 12:
StringCopy(&Var2, "HT_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 13:
StringCopy(&Var2, "HT_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 14:
StringCopy(&Var2, "HT_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=235;
iVar5=0;
iVar8=1;
break;
case 15:
StringCopy(&Var2, "HT_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=80;
iVar5=0;
iVar8=1;
break;
case 16:
StringCopy(&Var2, "HT_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=85;
iVar5=0;
iVar8=1;
break;
case 17:
StringCopy(&Var2, "HT_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=90;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 18:
StringCopy(&Var2, "HT_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar5=0;
break;
case 19:
StringCopy(&Var2, "HT_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 20:
StringCopy(&Var2, "HT_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 21:
StringCopy(&Var2, "HT_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 22:
StringCopy(&Var2, "HT_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=320;
iVar5=0;
iVar8=1;
break;
case 23:
StringCopy(&Var2, "HT_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=185;
iVar5=0;
iVar8=1;
break;
case 24:
StringCopy(&Var2, "HT_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=245;
iVar5=0;
iVar8=1;
break;
case 25:
StringCopy(&Var2, "HT_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 26:
StringCopy(&Var2, "HT_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=40;
iVar5=0;
iVar8=1;
break;
case 27:
StringCopy(&Var2, "HT_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 28:
StringCopy(&Var2, "HT_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 29:
StringCopy(&Var2, "HT_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 30:
StringCopy(&Var2, "HT_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "HT_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "HT_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "HT_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "HT_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "HT_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=415;
iVar5=0;
iVar8=1;
break;
case 36:
StringCopy(&Var2, "HT_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=315;
iVar5=0;
iVar8=1;
break;
case 37:
StringCopy(&Var2, "HT_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "HT_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "HT_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "HT_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "HT_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "HT_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "HT_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=75;
iVar5=0;
iVar8=1;
break;
case 44:
StringCopy(&Var2, "HT_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar5=0;
iVar8=1;
break;
case 45:
StringCopy(&Var2, "HT_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "HT_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "HT_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "HT_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "HT_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "HT_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "HT_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 52:
StringCopy(&Var2, "HT_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=265;
iVar5=0;
iVar8=1;
break;
case 53:
StringCopy(&Var2, "HT_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=170;
iVar5=0;
iVar8=1;
break;
case 54:
StringCopy(&Var2, "HT_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=135;
iVar5=0;
iVar8=1;
break;
case 55:
StringCopy(&Var2, "HT_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=570;
iVar5=0;
iVar8=1;
break;
case 56:
StringCopy(&Var2, "HT_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=560;
iVar5=0;
iVar8=1;
break;
case 57:
StringCopy(&Var2, "HT_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=140;
iVar5=0;
iVar8=1;
break;
case 58:
StringCopy(&Var2, "HT_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=130;
iVar5=0;
iVar8=1;
break;
case 59:
StringCopy(&Var2, "HT_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=260;
iVar5=0;
iVar8=1;
break;
case 60:
StringCopy(&Var2, "HT_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=215;
iVar5=0;
iVar8=1;
break;
case 61:
StringCopy(&Var2, "HT_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=430;
iVar5=0;
iVar8=1;
break;
case 62:
StringCopy(&Var2, "HT_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=160;
iVar5=0;
iVar8=1;
break;
case 63:
StringCopy(&Var2, "HT_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=200;
iVar5=0;
iVar8=1;
break;
case 64:
StringCopy(&Var2, "HT_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 65:
StringCopy(&Var2, "HT_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=155;
iVar5=0;
iVar8=1;
break;
case 66:
StringCopy(&Var2, "HT_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=165;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 67:
StringCopy(&Var2, "HT_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "HT_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "HT_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "HT_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "HT_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "HT_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "HT_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "HT_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "HT_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "HT_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "HT_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "HT_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "HT_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "HT_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=100;
iVar5=0;
iVar8=1;
break;
case 81:
StringCopy(&Var2, "HT_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 82:
StringCopy(&Var2, "HT_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 83:
StringCopy(&Var2, "HT_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "HT_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "HT_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "HT_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "HT_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 88:
StringCopy(&Var2, "HT_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 89:
StringCopy(&Var2, "HT_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "HT_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=65;
iVar5=0;
iVar8=1;
break;
case 91:
StringCopy(&Var2, "HT_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "HT_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "HT_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "HT_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "HT_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "HT_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 97:
StringCopy(&Var2, "HT_FMM_11_6", 16);
iVar3=11;
iVar4=6;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "HT_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 99:
StringCopy(&Var2, "HT_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=1715;
iVar5=0;
iVar8=1;
break;
case 100:
StringCopy(&Var2, "HT_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=3900;
iVar5=0;
iVar8=1;
break;
case 101:
StringCopy(&Var2, "HT_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=1550;
iVar5=0;
iVar8=1;
break;
case 102:
StringCopy(&Var2, "HT_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 103:
StringCopy(&Var2, "HT_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=4250;
iVar5=0;
iVar8=1;
break;
case 104:
StringCopy(&Var2, "HT_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=0;
iVar5=0;
iVar8=1;
bVar0=true;
break;
case 105:
StringCopy(&Var2, "HT_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=4460;
iVar5=0;
iVar8=1;
break;
case 106:
StringCopy(&Var2, "HT_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=4970;
iVar5=0;
iVar8=1;
break;
case 107:
StringCopy(&Var2, "HT_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=290;
iVar5=0;
iVar8=1;
break;
case 108:
StringCopy(&Var2, "HT_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=305;
iVar5=0;
iVar8=1;
break;
case 109:
StringCopy(&Var2, "HT_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=4170;
iVar5=0;
iVar8=1;
break;
case 110:
StringCopy(&Var2, "HT_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=335;
iVar5=0;
iVar8=1;
break;
case 111:
StringCopy(&Var2, "HT_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=4940;
iVar5=0;
iVar8=1;
break;
case 112:
StringCopy(&Var2, "HT_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=275;
iVar5=0;
iVar8=1;
break;
case 113:
StringCopy(&Var2, "HT_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=5000;
iVar5=0;
iVar8=1;
break;
case 114:
StringCopy(&Var2, "HT_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=3620;
iVar5=0;
iVar8=1;
break;
case 115:
StringCopy(&Var2, "HT_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 116:
StringCopy(&Var2, "HT_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=25;
iVar5=0;
iVar8=1;
break;
case 117:
StringCopy(&Var2, "HT_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 118:
StringCopy(&Var2, "HT_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 119:
StringCopy(&Var2, "HT_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 120:
StringCopy(&Var2, "HT_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=30;
iVar5=0;
iVar8=1;
break;
case 121:
StringCopy(&Var2, "HT_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=350;
iVar5=0;
iVar8=1;
break;
case 122:
StringCopy(&Var2, "HT_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=35;
iVar5=0;
iVar8=1;
break;
case 123:
StringCopy(&Var2, "HT_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=365;
iVar5=0;
iVar8=1;
break;
case 124:
StringCopy(&Var2, "HT_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=380;
iVar5=0;
iVar8=1;
break;
case 125:
StringCopy(&Var2, "HT_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 126:
StringCopy(&Var2, "HT_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=595;
iVar5=0;
iVar8=1;
break;
case 127:
StringCopy(&Var2, "HT_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=600;
iVar5=0;
iVar8=1;
break;
case 128:
StringCopy(&Var2, "HT_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=590;
iVar5=0;
iVar8=1;
break;
case 129:
StringCopy(&Var2, "HT_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=395;
iVar5=0;
iVar8=1;
break;
case 130:
StringCopy(&Var2, "HT_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=555;
iVar5=0;
iVar8=1;
break;
}
switch (iParam0){
case 131:
StringCopy(&Var2, "HE_FMM_16_0", 16);
iVar3=16;
iVar4=0;
iVar1=1060;
iVar5=0;
iVar8=2;
break;
case 132:
StringCopy(&Var2, "HE_FMM_16_1", 16);
iVar3=16;
iVar4=1;
iVar1=1400;
iVar5=0;
iVar8=2;
break;
case 133:
StringCopy(&Var2, "HE_FMM_16_2", 16);
iVar3=16;
iVar4=2;
iVar1=1315;
iVar5=0;
iVar8=2;
break;
case 134:
StringCopy(&Var2, "HE_FMM_16_3", 16);
iVar3=16;
iVar4=3;
iVar1=1230;
iVar5=0;
iVar8=2;
break;
case 135:
StringCopy(&Var2, "HE_FMM_16_4", 16);
iVar3=16;
iVar4=4;
iVar1=1145;
iVar5=0;
iVar8=2;
break;
case 136:
StringCopy(&Var2, "HE_FMM_16_5", 16);
iVar3=16;
iVar4=5;
iVar1=8450;
iVar5=0;
iVar8=2;
break;
case 137:
StringCopy(&Var2, "HE_FMM_16_6", 16);
iVar3=16;
iVar4=6;
iVar1=675;
iVar5=0;
iVar8=2;
break;
case 138:
StringCopy(&Var2, "HE_FMM_16_7", 16);
iVar3=16;
iVar4=7;
iVar1=8750;
iVar5=0;
iVar8=2;
break;
case 139:
StringCopy(&Var2, "HE_FMM_17_0", 16);
iVar3=17;
iVar4=0;
iVar1=975;
iVar5=0;
iVar8=2;
break;
case 140:
StringCopy(&Var2, "HE_FMM_17_1", 16);
iVar3=17;
iVar4=1;
iVar1=750;
iVar5=0;
iVar8=2;
break;
case 141:
StringCopy(&Var2, "HE_FMM_17_2", 16);
iVar3=17;
iVar4=2;
iVar1=865;
iVar5=0;
iVar8=2;
break;
case 142:
StringCopy(&Var2, "HE_FMM_17_3", 16);
iVar3=17;
iVar4=3;
iVar1=890;
iVar5=0;
iVar8=2;
break;
case 143:
StringCopy(&Var2, "HE_FMM_17_4", 16);
iVar3=17;
iVar4=4;
iVar1=730;
iVar5=0;
iVar8=2;
break;
case 144:
StringCopy(&Var2, "HE_FMM_17_5", 16);
iVar3=17;
iVar4=5;
iVar1=650;
iVar5=0;
iVar8=2;
break;
case 145:
StringCopy(&Var2, "HE_FMM_17_6", 16);
iVar3=17;
iVar4=6;
iVar1=645;
iVar5=0;
iVar8=2;
break;
case 146:
StringCopy(&Var2, "HE_FMM_17_7", 16);
iVar3=17;
iVar4=7;
iVar1=755;
iVar5=0;
iVar8=2;
break;
case 147:
StringCopy(&Var2, "HE_FMM_18_0", 16);
iVar3=18;
iVar4=0;
iVar1=13850;
iVar5=0;
iVar8=2;
break;
case 148:
StringCopy(&Var2, "HE_FMM_18_1", 16);
iVar3=18;
iVar4=1;
iVar1=2900;
iVar5=0;
iVar8=2;
break;
case 149:
StringCopy(&Var2, "HE_FMM_18_2", 16);
iVar3=18;
iVar4=2;
iVar1=2895;
iVar5=0;
iVar8=2;
break;
case 150:
StringCopy(&Var2, "HE_FMM_18_3", 16);
iVar3=18;
iVar4=3;
iVar1=12500;
iVar5=0;
iVar8=2;
break;
case 151:
StringCopy(&Var2, "HE_FMM_18_4", 16);
iVar3=18;
iVar4=4;
iVar1=15000;
iVar5=0;
iVar8=2;
break;
case 152:
StringCopy(&Var2, "HE_FMM_18_5", 16);
iVar3=18;
iVar4=5;
iVar1=14750;
iVar5=0;
iVar8=2;
break;
case 153:
StringCopy(&Var2, "HE_FMM_18_6", 16);
iVar3=18;
iVar4=6;
iVar1=13150;
iVar5=0;
iVar8=2;
break;
case 154:
StringCopy(&Var2, "HE_FMM_18_7", 16);
iVar3=18;
iVar4=7;
iVar1=2925;
iVar5=0;
iVar8=2;
break;
}
switch (iParam0){
case 155:
StringCopy(&Var2, "G_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 156:
StringCopy(&Var2, "G_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 157:
StringCopy(&Var2, "G_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 158:
StringCopy(&Var2, "G_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 159:
StringCopy(&Var2, "G_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 160:
StringCopy(&Var2, "G_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 161:
StringCopy(&Var2, "G_FMM_0_6", 16);
iVar3=0;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 162:
StringCopy(&Var2, "G_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 163:
StringCopy(&Var2, "G_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 164:
StringCopy(&Var2, "G_FMM_0_9", 16);
iVar3=0;
iVar4=9;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 165:
StringCopy(&Var2, "G_FMM_0_10", 16);
iVar3=0;
iVar4=10;
iVar1=50;
iVar5=1;
iVar8=3;
break;
case 166:
StringCopy(&Var2, "G_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 167:
StringCopy(&Var2, "G_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 168:
StringCopy(&Var2, "G_FMM_1_2", 16);
iVar3=1;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 169:
StringCopy(&Var2, "G_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 170:
StringCopy(&Var2, "G_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "G_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 172:
StringCopy(&Var2, "G_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 173:
StringCopy(&Var2, "G_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 174:
StringCopy(&Var2, "G_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 175:
StringCopy(&Var2, "G_FMM_2_1", 16);
iVar3=2;
iVar4=1;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 176:
StringCopy(&Var2, "G_FMM_2_2", 16);
iVar3=2;
iVar4=2;
iVar1=380;
iVar5=1;
iVar8=3;
break;
case 177:
StringCopy(&Var2, "G_FMM_2_3", 16);
iVar3=2;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 178:
StringCopy(&Var2, "G_FMM_2_4", 16);
iVar3=2;
iVar4=4;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 179:
StringCopy(&Var2, "G_FMM_2_5", 16);
iVar3=2;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 180:
StringCopy(&Var2, "G_FMM_2_6", 16);
iVar3=2;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 181:
StringCopy(&Var2, "G_FMM_2_7", 16);
iVar3=2;
iVar4=7;
iVar1=390;
iVar5=1;
iVar8=3;
break;
case 182:
StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
iVar3=2;
iVar4=8;
iVar1=950;
iVar5=1;
iVar8=3;
break;
case 183:
StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
iVar3=2;
iVar4=9;
iVar1=565;
iVar5=1;
iVar8=3;
break;
case 184:
StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
iVar3=2;
iVar4=10;
iVar1=630;
iVar5=1;
iVar8=3;
break;
case 185:
StringCopy(&Var2, "G_FMM_3_0", 16);
iVar3=3;
iVar4=0;
iVar1=70;
iVar5=1;
iVar8=3;
break;
case 186:
StringCopy(&Var2, "G_FMM_3_1", 16);
iVar3=3;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 187:
StringCopy(&Var2, "G_FMM_3_2", 16);
iVar3=3;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 188:
StringCopy(&Var2, "G_FMM_3_3", 16);
iVar3=3;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 189:
StringCopy(&Var2, "G_FMM_3_4", 16);
iVar3=3;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 190:
StringCopy(&Var2, "G_FMM_3_5", 16);
iVar3=3;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 191:
StringCopy(&Var2, "G_FMM_3_6", 16);
iVar3=3;
iVar4=6;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 192:
StringCopy(&Var2, "G_FMM_3_7", 16);
iVar3=3;
iVar4=7;
iVar1=90;
iVar5=1;
iVar8=3;
break;
case 193:
StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
iVar3=3;
iVar4=8;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 194:
StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
iVar3=3;
iVar4=9;
iVar1=265;
iVar5=1;
iVar8=3;
break;
case 195:
StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
iVar3=3;
iVar4=10;
iVar1=330;
iVar5=1;
iVar8=3;
break;
case 196:
StringCopy(&Var2, "G_FMM_4_0", 16);
iVar3=4;
iVar4=0;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 197:
StringCopy(&Var2, "G_FMM_4_1", 16);
iVar3=4;
iVar4=1;
iVar1=250;
iVar5=1;
iVar8=3;
break;
case 198:
StringCopy(&Var2, "G_FMM_4_2", 16);
iVar3=4;
iVar4=2;
iVar1=210;
iVar5=1;
iVar8=3;
break;
case 199:
StringCopy(&Var2, "G_FMM_4_3", 16);
iVar3=4;
iVar4=3;
iVar1=245;
iVar5=1;
iVar8=3;
break;
case 200:
StringCopy(&Var2, "G_FMM_4_4", 16);
iVar3=4;
iVar4=4;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 201:
StringCopy(&Var2, "G_FMM_4_5", 16);
iVar3=4;
iVar4=5;
iVar1=205;
iVar5=1;
iVar8=3;
break;
case 202:
StringCopy(&Var2, "G_FMM_4_6", 16);
iVar3=4;
iVar4=6;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 203:
StringCopy(&Var2, "G_FMM_4_7", 16);
iVar3=4;
iVar4=7;
iVar1=215;
iVar5=1;
iVar8=3;
break;
case 204:
StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
iVar3=4;
iVar4=8;
iVar1=995;
iVar5=1;
iVar8=3;
break;
case 205:
StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
iVar3=4;
iVar4=9;
iVar1=610;
iVar5=1;
iVar8=3;
break;
case 206:
StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
iVar3=4;
iVar4=10;
iVar1=675;
iVar5=1;
iVar8=3;
break;
case 207:
StringCopy(&Var2, "G_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=4050;
iVar5=1;
iVar8=3;
break;
case 208:
StringCopy(&Var2, "G_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=4060;
iVar5=1;
iVar8=3;
break;
case 209:
StringCopy(&Var2, "G_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=170;
iVar5=1;
iVar8=3;
break;
case 210:
StringCopy(&Var2, "G_FMM_5_3", 16);
iVar3=5;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 211:
StringCopy(&Var2, "G_FMM_5_4", 16);
iVar3=5;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 212:
StringCopy(&Var2, "G_FMM_5_5", 16);
iVar3=5;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 213:
StringCopy(&Var2, "G_FMM_5_6", 16);
iVar3=5;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 214:
StringCopy(&Var2, "G_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 215:
StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
iVar3=5;
iVar4=8;
iVar1=1760;
iVar5=1;
iVar8=3;
break;
case 216:
StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
iVar3=5;
iVar4=9;
iVar1=1375;
iVar5=1;
iVar8=3;
break;
case 217:
StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
iVar3=5;
iVar4=10;
iVar1=1440;
iVar5=1;
iVar8=3;
break;
case 218:
StringCopy(&Var2, "G_FMM_6_0", 16);
iVar3=6;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "G_FMM_6_1", 16);
iVar3=6;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "G_FMM_6_2", 16);
iVar3=6;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "G_FMM_6_3", 16);
iVar3=6;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 222:
StringCopy(&Var2, "G_FMM_6_4", 16);
iVar3=6;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "G_FMM_6_5", 16);
iVar3=6;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 224:
StringCopy(&Var2, "G_FMM_6_6", 16);
iVar3=6;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 225:
StringCopy(&Var2, "G_FMM_6_7", 16);
iVar3=6;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 226:
StringCopy(&Var2, "G_FMM_7_0", 16);
iVar3=7;
iVar4=0;
iVar1=180;
iVar5=1;
iVar8=3;
break;
case 227:
StringCopy(&Var2, "G_FMM_7_1", 16);
iVar3=7;
iVar4=1;
iVar1=500;
iVar5=1;
iVar8=3;
break;
case 228:
StringCopy(&Var2, "G_FMM_7_2", 16);
iVar3=7;
iVar4=2;
iVar1=115;
iVar5=1;
iVar8=3;
break;
case 229:
StringCopy(&Var2, "G_FMM_7_3", 16);
iVar3=7;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 230:
StringCopy(&Var2, "G_FMM_7_4", 16);
iVar3=7;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 231:
StringCopy(&Var2, "G_FMM_7_5", 16);
iVar3=7;
iVar4=5;
iVar1=1445;
iVar5=1;
iVar8=3;
break;
case 232:
StringCopy(&Var2, "G_FMM_7_6", 16);
iVar3=7;
iVar4=6;
iVar1=530;
iVar5=1;
iVar8=3;
break;
case 233:
StringCopy(&Var2, "G_FMM_7_7", 16);
iVar3=7;
iVar4=7;
iVar1=650;
iVar5=1;
iVar8=3;
break;
case 234:
StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
iVar3=7;
iVar4=8;
iVar1=1170;
iVar5=1;
iVar8=3;
break;
case 235:
StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
iVar3=7;
iVar4=9;
iVar1=785;
iVar5=1;
iVar8=3;
break;
case 236:
StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
iVar3=7;
iVar4=10;
iVar1=850;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 237:
StringCopy(&Var2, "G_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=4260;
iVar5=1;
iVar8=3;
break;
case 238:
StringCopy(&Var2, "G_FMM_8_1", 16);
iVar3=8;
iVar4=1;
iVar1=4310;
iVar5=1;
iVar8=3;
break;
case 239:
StringCopy(&Var2, "G_FMM_8_2", 16);
iVar3=8;
iVar4=2;
iVar1=4130;
iVar5=1;
iVar8=3;
break;
case 240:
StringCopy(&Var2, "G_FMM_8_3", 16);
iVar3=8;
iVar4=3;
iVar1=135;
iVar5=1;
iVar8=3;
break;
case 241:
StringCopy(&Var2, "G_FMM_8_4", 16);
iVar3=8;
iVar4=4;
iVar1=120;
iVar5=1;
iVar8=3;
break;
case 242:
StringCopy(&Var2, "G_FMM_8_5", 16);
iVar3=8;
iVar4=5;
iVar1=110;
iVar5=1;
iVar8=3;
break;
case 243:
StringCopy(&Var2, "G_FMM_8_6", 16);
iVar3=8;
iVar4=6;
iVar1=140;
iVar5=1;
iVar8=3;
break;
case 244:
StringCopy(&Var2, "G_FMM_8_7", 16);
iVar3=8;
iVar4=7;
iVar1=130;
iVar5=1;
iVar8=3;
break;
case 245:
StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
iVar3=8;
iVar4=8;
iVar1=1885;
iVar5=1;
iVar8=3;
break;
case 246:
StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
iVar3=8;
iVar4=9;
iVar1=1500;
iVar5=1;
iVar8=3;
break;
case 247:
StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=1565;
iVar5=1;
iVar8=3;
break;
case 248:
StringCopy(&Var2, "G_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 249:
StringCopy(&Var2, "G_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 250:
StringCopy(&Var2, "G_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 251:
StringCopy(&Var2, "G_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 252:
StringCopy(&Var2, "G_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 253:
StringCopy(&Var2, "G_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=4290;
iVar5=1;
iVar8=3;
break;
case 254:
StringCopy(&Var2, "G_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=4150;
iVar5=1;
iVar8=3;
break;
case 255:
StringCopy(&Var2, "G_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=4295;
iVar5=1;
iVar8=3;
break;
case 256:
StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
iVar3=9;
iVar4=8;
iVar1=2315;
iVar5=1;
iVar8=3;
break;
case 257:
StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
iVar3=9;
iVar4=9;
iVar1=1930;
iVar5=1;
iVar8=3;
break;
case 258:
StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=1995;
iVar5=1;
iVar8=3;
break;
case 259:
StringCopy(&Var2, "G_FMM_10_0", 16);
iVar3=10;
iVar4=0;
iVar1=6240;
iVar5=1;
iVar8=3;
break;
case 260:
StringCopy(&Var2, "G_FMM_10_1", 16);
iVar3=10;
iVar4=1;
iVar1=4955;
iVar5=1;
iVar8=3;
break;
case 261:
StringCopy(&Var2, "G_FMM_10_2", 16);
iVar3=10;
iVar4=2;
iVar1=5590;
iVar5=1;
iVar8=3;
break;
case 262:
StringCopy(&Var2, "G_FMM_10_3", 16);
iVar3=10;
iVar4=3;
iVar1=4920;
iVar5=1;
iVar8=3;
break;
case 263:
StringCopy(&Var2, "G_FMM_10_4", 16);
iVar3=10;
iVar4=4;
iVar1=4990;
iVar5=1;
iVar8=3;
break;
case 264:
StringCopy(&Var2, "G_FMM_10_5", 16);
iVar3=10;
iVar4=5;
iVar1=4780;
iVar5=1;
iVar8=3;
break;
case 265:
StringCopy(&Var2, "G_FMM_10_6", 16);
iVar3=10;
iVar4=6;
iVar1=4775;
iVar5=1;
iVar8=3;
break;
case 266:
StringCopy(&Var2, "G_FMM_10_7", 16);
iVar3=10;
iVar4=7;
iVar1=4800;
iVar5=1;
iVar8=3;
break;
case 267:
StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
iVar3=10;
iVar4=8;
iVar1=2835;
iVar5=1;
iVar8=3;
break;
case 268:
StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
iVar3=10;
iVar4=9;
iVar1=2450;
iVar5=1;
iVar8=3;
break;
case 269:
StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
iVar3=10;
iVar4=10;
iVar1=2515;
iVar5=1;
iVar8=3;
break;
case 270:
StringCopy(&Var2, "G_FMM_11_0", 16);
iVar3=11;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 271:
iVar3=11;
iVar4=1;