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
int iLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
int iLocal_118=0;
int iLocal_119=0;
int iLocal_120=0;
int iLocal_121=0;
int iLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
float fLocal_125=0f;
int iLocal_126[5]={
0, 0, 0, 0, 0 
};
float fLocal_127=0f;
float fLocal_128=0f;
float fLocal_129=0f;
var uLocal_130=0;
var uLocal_131=0;
int iLocal_132=0;
int iLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
int iLocal_136=0;
struct<2> Local_137={
0, 0 
};
struct<2> Local_138[8];
struct<2> Local_139={
0, 0 
};
struct<4> Local_140[8];
float fLocal_141=0f;
float fLocal_142=0f;
float fLocal_143=0f;
float fLocal_144=0f;
float fLocal_145=0f;
int iLocal_146=0;
int iLocal_147[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_148=0;
int iLocal_149=0;
int iLocal_150=0;
struct<1816> Local_151={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 30, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 2, 1443296302, 5, -1, -1, -1, -1, -1, 0, -1, 1443296302, 5, -1, -1, -1, -1, -1, 0, -1, 0, 15, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 23, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 2, -1, -1, 3, 15000, 5000, 1128792064, 0, 0, 1, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 0, 3, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 0, 1, 1, 0, 0, 5, 1, -1, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 
};
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=-1;
var uLocal_157=-1;
var uLocal_158=1;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=-1;
var uLocal_165=-1;
var uLocal_166=1;
var uLocal_167=0;
struct<657> Local_168={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<20> Local_169={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<20> Local_170[5];
struct<21> Local_171[7];
struct<19> Local_172={
30, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_173=0;
var uLocal_174=1;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=5;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=1;
var uLocal_194=0;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=0;
var uLocal_201=0;
var uLocal_202=0;
var uLocal_203=5;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=1;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=0;
var uLocal_217=0;
var uLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=5;
var uLocal_223=0;
var uLocal_224=0;
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=0;
var uLocal_230=0;
var uLocal_231=1;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
var uLocal_236=0;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
var uLocal_241=5;
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=1;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=5;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=0;
var uLocal_267=0;
var uLocal_268=0;
var uLocal_269=1;
var uLocal_270=0;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=0;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=0;
var uLocal_278=0;
var uLocal_279=5;
var uLocal_280=0;
var uLocal_281=0;
var uLocal_282=0;
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
var uLocal_286=0;
var uLocal_287=0;
var uLocal_288=1;
var uLocal_289=0;
var uLocal_290=0;
var uLocal_291=0;
var uLocal_292=0;
var uLocal_293=0;
var uLocal_294=0;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=5;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=1;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
var uLocal_314=0;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=5;
var uLocal_318=0;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=1;
var uLocal_327=0;
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=5;
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
var uLocal_355=5;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=0;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=0;
var uLocal_363=0;
var uLocal_364=1;
var uLocal_365=0;
var uLocal_366=0;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
var uLocal_371=0;
var uLocal_372=0;
var uLocal_373=0;
var uLocal_374=5;
var uLocal_375=0;
var uLocal_376=0;
var uLocal_377=0;
var uLocal_378=0;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=0;
var uLocal_383=1;
var uLocal_384=0;
var uLocal_385=0;
var uLocal_386=0;
var uLocal_387=0;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=0;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=5;
var uLocal_394=0;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=0;
var uLocal_398=0;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=1;
var uLocal_403=0;
var uLocal_404=0;
var uLocal_405=0;
var uLocal_406=0;
var uLocal_407=0;
var uLocal_408=0;
var uLocal_409=0;
var uLocal_410=0;
var uLocal_411=0;
var uLocal_412=5;
var uLocal_413=0;
var uLocal_414=0;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=0;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=1;
var uLocal_422=0;
var uLocal_423=0;
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=0;
var uLocal_430=0;
var uLocal_431=5;
var uLocal_432=0;
var uLocal_433=0;
var uLocal_434=0;
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=0;
var uLocal_439=0;
var uLocal_440=1;
var uLocal_441=0;
var uLocal_442=0;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
var uLocal_447=0;
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=5;
var uLocal_451=0;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=0;
var uLocal_455=0;
var uLocal_456=0;
var uLocal_457=0;
var uLocal_458=0;
var uLocal_459=1;
var uLocal_460=0;
var uLocal_461=0;
var uLocal_462=0;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=0;
var uLocal_467=0;
var uLocal_468=0;
var uLocal_469=5;
var uLocal_470=0;
var uLocal_471=0;
var uLocal_472=0;
var uLocal_473=0;
var uLocal_474=0;
var uLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=1;
var uLocal_479=0;
var uLocal_480=0;
var uLocal_481=0;
var uLocal_482=0;
var uLocal_483=0;
var uLocal_484=0;
var uLocal_485=0;
var uLocal_486=0;
var uLocal_487=0;
var uLocal_488=5;
var uLocal_489=0;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=0;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=1;
var uLocal_498=0;
var uLocal_499=0;
var uLocal_500=0;
var uLocal_501=0;
var uLocal_502=0;
var uLocal_503=0;
var uLocal_504=0;
var uLocal_505=0;
var uLocal_506=0;
var uLocal_507=5;
var uLocal_508=0;
var uLocal_509=0;
var uLocal_510=0;
var uLocal_511=0;
var uLocal_512=0;
var uLocal_513=0;
var uLocal_514=0;
var uLocal_515=0;
var uLocal_516=1;
var uLocal_517=0;
var uLocal_518=0;
var uLocal_519=0;
var uLocal_520=0;
var uLocal_521=0;
var uLocal_522=0;
var uLocal_523=0;
var uLocal_524=0;
var uLocal_525=0;
var uLocal_526=5;
var uLocal_527=0;
var uLocal_528=0;
var uLocal_529=0;
var uLocal_530=0;
var uLocal_531=0;
var uLocal_532=0;
var uLocal_533=0;
var uLocal_534=0;
var uLocal_535=1;
var uLocal_536=0;
var uLocal_537=0;
var uLocal_538=0;
var uLocal_539=0;
var uLocal_540=0;
var uLocal_541=0;
var uLocal_542=0;
var uLocal_543=0;
var uLocal_544=0;
var uLocal_545=5;
var uLocal_546=0;
var uLocal_547=0;
var uLocal_548=0;
var uLocal_549=0;
var uLocal_550=0;
var uLocal_551=0;
var uLocal_552=0;
var uLocal_553=0;
var uLocal_554=1;
var uLocal_555=0;
var uLocal_556=0;
var uLocal_557=0;
var uLocal_558=0;
var uLocal_559=0;
var uLocal_560=0;
var uLocal_561=0;
var uLocal_562=0;
var uLocal_563=0;
var uLocal_564=5;
var uLocal_565=0;
var uLocal_566=0;
var uLocal_567=0;
var uLocal_568=0;
var uLocal_569=0;
var uLocal_570=0;
var uLocal_571=0;
var uLocal_572=0;
var uLocal_573=1;
var uLocal_574=0;
var uLocal_575=0;
var uLocal_576=0;
var uLocal_577=0;
var uLocal_578=0;
var uLocal_579=0;
var uLocal_580=0;
var uLocal_581=0;
var uLocal_582=0;
var uLocal_583=5;
var uLocal_584=0;
var uLocal_585=0;
var uLocal_586=0;
var uLocal_587=0;
var uLocal_588=0;
var uLocal_589=0;
var uLocal_590=0;
var uLocal_591=0;
var uLocal_592=1;
var uLocal_593=0;
var uLocal_594=0;
var uLocal_595=0;
var uLocal_596=0;
var uLocal_597=0;
var uLocal_598=0;
var uLocal_599=0;
var uLocal_600=0;
var uLocal_601=0;
var uLocal_602=5;
var uLocal_603=0;
var uLocal_604=0;
var uLocal_605=0;
var uLocal_606=0;
var uLocal_607=0;
var uLocal_608=0;
var uLocal_609=0;
var uLocal_610=0;
var uLocal_611=1;
var uLocal_612=0;
var uLocal_613=0;
var uLocal_614=0;
var uLocal_615=0;
var uLocal_616=0;
var uLocal_617=0;
var uLocal_618=0;
var uLocal_619=0;
var uLocal_620=0;
var uLocal_621=5;
var uLocal_622=0;
var uLocal_623=0;
var uLocal_624=0;
var uLocal_625=0;
var uLocal_626=0;
var uLocal_627=0;
var uLocal_628=0;
var uLocal_629=0;
var uLocal_630=1;
var uLocal_631=0;
var uLocal_632=0;
var uLocal_633=0;
var uLocal_634=0;
var uLocal_635=0;
var uLocal_636=0;
var uLocal_637=0;
var uLocal_638=0;
var uLocal_639=0;
var uLocal_640=5;
var uLocal_641=0;
var uLocal_642=0;
var uLocal_643=0;
var uLocal_644=0;
var uLocal_645=0;
var uLocal_646=0;
var uLocal_647=0;
var uLocal_648=0;
var uLocal_649=1;
var uLocal_650=0;
var uLocal_651=0;
var uLocal_652=0;
var uLocal_653=0;
var uLocal_654=0;
var uLocal_655=0;
var uLocal_656=0;
var uLocal_657=0;
var uLocal_658=0;
var uLocal_659=5;
var uLocal_660=0;
var uLocal_661=0;
var uLocal_662=0;
var uLocal_663=0;
var uLocal_664=0;
var uLocal_665=0;
var uLocal_666=0;
var uLocal_667=0;
var uLocal_668=1;
var uLocal_669=0;
var uLocal_670=0;
var uLocal_671=0;
var uLocal_672=0;
var uLocal_673=0;
var uLocal_674=0;
var uLocal_675=0;
var uLocal_676=0;
var uLocal_677=0;
var uLocal_678=5;
var uLocal_679=0;
var uLocal_680=0;
var uLocal_681=0;
var uLocal_682=0;
var uLocal_683=0;
var uLocal_684=0;
var uLocal_685=0;
var uLocal_686=0;
var uLocal_687=1;
var uLocal_688=0;
var uLocal_689=0;
var uLocal_690=0;
var uLocal_691=0;
var uLocal_692=0;
var uLocal_693=0;
var uLocal_694=0;
var uLocal_695=0;
var uLocal_696=0;
var uLocal_697=5;
var uLocal_698=0;
var uLocal_699=0;
var uLocal_700=0;
var uLocal_701=0;
var uLocal_702=0;
var uLocal_703=0;
var uLocal_704=0;
var uLocal_705=0;
var uLocal_706=1;
var uLocal_707=0;
var uLocal_708=0;
var uLocal_709=0;
var uLocal_710=0;
var uLocal_711=0;
var uLocal_712=0;
var uLocal_713=0;
var uLocal_714=0;
var uLocal_715=0;
var uLocal_716=5;
var uLocal_717=0;
var uLocal_718=0;
var uLocal_719=0;
var uLocal_720=0;
var uLocal_721=0;
var uLocal_722=0;
var uLocal_723=0;
var uLocal_724=0;
var uLocal_725=0;
var uLocal_726=0;
var uLocal_727=0;
var uLocal_728=2;
var uLocal_729=0;
var uLocal_730=5;
var uLocal_731=-1;
var uLocal_732=6;
var uLocal_733=-1;
var uLocal_734=0;
var uLocal_735=-1;
var uLocal_736=0;
var uLocal_737=-1;
var uLocal_738=0;
var uLocal_739=-1;
var uLocal_740=0;
var uLocal_741=-1;
var uLocal_742=0;
var uLocal_743=-1;
var uLocal_744=0;
var uLocal_745=0;
var uLocal_746=0;
var uLocal_747=0;
var uLocal_748=0;
var uLocal_749=0;
var uLocal_750=-1;
var uLocal_751=6;
var uLocal_752=-1;
var uLocal_753=0;
var uLocal_754=-1;
var uLocal_755=0;
var uLocal_756=-1;
var uLocal_757=0;
var uLocal_758=-1;
var uLocal_759=0;
var uLocal_760=-1;
var uLocal_761=0;
var uLocal_762=-1;
var uLocal_763=0;
var uLocal_764=0;
var uLocal_765=0;
var uLocal_766=0;
var uLocal_767=0;
var uLocal_768=0;
var uLocal_769=-1;
var uLocal_770=6;
var uLocal_771=-1;
var uLocal_772=0;
var uLocal_773=-1;
var uLocal_774=0;
var uLocal_775=-1;
var uLocal_776=0;
var uLocal_777=-1;
var uLocal_778=0;
var uLocal_779=-1;
var uLocal_780=0;
var uLocal_781=-1;
var uLocal_782=0;
var uLocal_783=0;
var uLocal_784=0;
var uLocal_785=0;
var uLocal_786=0;
var uLocal_787=0;
var uLocal_788=-1;
var uLocal_789=6;
var uLocal_790=-1;
var uLocal_791=0;
var uLocal_792=-1;
var uLocal_793=0;
var uLocal_794=-1;
var uLocal_795=0;
var uLocal_796=-1;
var uLocal_797=0;
var uLocal_798=-1;
var uLocal_799=0;
var uLocal_800=-1;
var uLocal_801=0;
var uLocal_802=0;
var uLocal_803=0;
var uLocal_804=0;
var uLocal_805=0;
var uLocal_806=0;
var uLocal_807=-1;
var uLocal_808=6;
var uLocal_809=-1;
var uLocal_810=0;
var uLocal_811=-1;
var uLocal_812=0;
var uLocal_813=-1;
var uLocal_814=0;
var uLocal_815=-1;
var uLocal_816=0;
var uLocal_817=-1;
var uLocal_818=0;
var uLocal_819=-1;
var uLocal_820=0;
var uLocal_821=0;
var uLocal_822=0;
var uLocal_823=0;
var uLocal_824=0;
var uLocal_825=0;
var uLocal_826=0;
var uLocal_827=5;
var uLocal_828=-1;
var uLocal_829=6;
var uLocal_830=-1;
var uLocal_831=0;
var uLocal_832=-1;
var uLocal_833=0;
var uLocal_834=-1;
var uLocal_835=0;
var uLocal_836=-1;
var uLocal_837=0;
var uLocal_838=-1;
var uLocal_839=0;
var uLocal_840=-1;
var uLocal_841=0;
var uLocal_842=0;
var uLocal_843=0;
var uLocal_844=0;
var uLocal_845=0;
var uLocal_846=0;
var uLocal_847=-1;
var uLocal_848=6;
var uLocal_849=-1;
var uLocal_850=0;
var uLocal_851=-1;
var uLocal_852=0;
var uLocal_853=-1;
var uLocal_854=0;
var uLocal_855=-1;
var uLocal_856=0;
var uLocal_857=-1;
var uLocal_858=0;
var uLocal_859=-1;
var uLocal_860=0;
var uLocal_861=0;
var uLocal_862=0;
var uLocal_863=0;
var uLocal_864=0;
var uLocal_865=0;
var uLocal_866=-1;
var uLocal_867=6;
var uLocal_868=-1;
var uLocal_869=0;
var uLocal_870=-1;
var uLocal_871=0;
var uLocal_872=-1;
var uLocal_873=0;
var uLocal_874=-1;
var uLocal_875=0;
var uLocal_876=-1;
var uLocal_877=0;
var uLocal_878=-1;
var uLocal_879=0;
var uLocal_880=0;
var uLocal_881=0;
var uLocal_882=0;
var uLocal_883=0;
var uLocal_884=0;
var uLocal_885=-1;
var uLocal_886=6;
var uLocal_887=-1;
var uLocal_888=0;
var uLocal_889=-1;
var uLocal_890=0;
var uLocal_891=-1;
var uLocal_892=0;
var uLocal_893=-1;
var uLocal_894=0;
var uLocal_895=-1;
var uLocal_896=0;
var uLocal_897=-1;
var uLocal_898=0;
var uLocal_899=0;
var uLocal_900=0;
var uLocal_901=0;
var uLocal_902=0;
var uLocal_903=0;
var uLocal_904=-1;
var uLocal_905=6;
var uLocal_906=-1;
var uLocal_907=0;
var uLocal_908=-1;
var uLocal_909=0;
var uLocal_910=-1;
var uLocal_911=0;
var uLocal_912=-1;
var uLocal_913=0;
var uLocal_914=-1;
var uLocal_915=0;
var uLocal_916=-1;
var uLocal_917=0;
var uLocal_918=0;
var uLocal_919=0;
var uLocal_920=0;
var uLocal_921=0;
var uLocal_922=0;
var uLocal_923=1203982208;
var uLocal_924=-1;
var uLocal_925=15;
var uLocal_926=0;
var uLocal_927=0;
var uLocal_928=0;
var uLocal_929=0;
var uLocal_930=0;
var uLocal_931=0;
var uLocal_932=0;
var uLocal_933=0;
var uLocal_934=0;
var uLocal_935=0;
var uLocal_936=0;
var uLocal_937=0;
var uLocal_938=0;
var uLocal_939=0;
var uLocal_940=0;
var uLocal_941=-1;
struct<7> Local_942={
8, 0, 1203982208, 1203982208, 1203982208, 0, 0 
};
var uLocal_943=0;
var uLocal_944=0;
var uLocal_945=1203982208;
var uLocal_946=1203982208;
var uLocal_947=1203982208;
var uLocal_948=0;
var uLocal_949=0;
var uLocal_950=0;
var uLocal_951=0;
var uLocal_952=1203982208;
var uLocal_953=1203982208;
var uLocal_954=1203982208;
var uLocal_955=0;
var uLocal_956=0;
var uLocal_957=0;
var uLocal_958=0;
var uLocal_959=1203982208;
var uLocal_960=1203982208;
var uLocal_961=1203982208;
var uLocal_962=0;
var uLocal_963=0;
var uLocal_964=0;
var uLocal_965=0;
var uLocal_966=1203982208;
var uLocal_967=1203982208;
var uLocal_968=1203982208;
var uLocal_969=0;
var uLocal_970=0;
var uLocal_971=0;
var uLocal_972=0;
var uLocal_973=1203982208;
var uLocal_974=1203982208;
var uLocal_975=1203982208;
var uLocal_976=0;
var uLocal_977=0;
var uLocal_978=0;
var uLocal_979=0;
var uLocal_980=1203982208;
var uLocal_981=1203982208;
var uLocal_982=1203982208;
var uLocal_983=0;
var uLocal_984=0;
var uLocal_985=0;
var uLocal_986=0;
var uLocal_987=1203982208;
var uLocal_988=1203982208;
var uLocal_989=1203982208;
var uLocal_990=0;
var uLocal_991=0;
var uLocal_992=0;
var uLocal_993=0;
var uLocal_994=0;
var uLocal_995=0;
var uLocal_996=-1;
var uLocal_997=0;
var uLocal_998=0;
var uLocal_999=0;
var uLocal_1000=0;
var uLocal_1001[23]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<2> Local_1002[2];
struct<2> Local_1003={
0, 0 
};
var uLocal_1004=0;
var uLocal_1005=0;
struct<6> Local_1006={
0, 0, 0, 0, 0, 0 
};
var uLocal_1007=0;
var uLocal_1008=0;
struct<7> Local_1009={
0, -1, -1, 0, 0, 0, 0 
};
var uLocal_1010=0;
int iLocal_1011=0;
struct<2> Local_1012={
-1, -1 
};
struct<12> Local_1013={
0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 
};
int iLocal_1014[1]={
-1 
};
struct<18> Local_1015={
1, 0, 1, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<997> Local_1016={
0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1015222895, 1021665346, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, -1, 996499522, 1002740646, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1016296636, 220, 255, 255, 255, 255, 255, 255, 4096, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1056964608, 1056964608, 0, -1, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0 
};
var uLocal_1017=1;
var uLocal_1018=0;
var uLocal_1019=0;
var uLocal_1020=0;
struct<5> Local_1021[3];
var uLocal_1022[6]={
-1, -1, -1, -1, -1, -1 
};
struct<4> Local_1023[1];
struct<3> Local_1024={
1, 0, 3 
};
var uLocal_1025=0;
var uLocal_1026=0;
var uLocal_1027=0;
int iLocal_1028=-1;
struct<8> Local_1029={
-1, -1, -1, 0, 2, 0, 0, 1 
};
var uLocal_1030=0;
struct<3> Local_1031={
1, 0, 1 
};
var uLocal_1032=0;
var uLocal_1033=-1;
bool bLocal_1034=0;
bool bLocal_1035=0;
bool bLocal_1036=0;
bool bLocal_1037=0;
bool bLocal_1038=0;
int iLocal_1039=0;
int iLocal_1040=0;
int iLocal_1041=0;
int iLocal_1042=0;
struct<3> Local_1043={
0, 0, 0 
};
int iLocal_1044=0;
int iLocal_1045=0;
bool bLocal_1046=0;
bool bLocal_1047=0;
struct<2> Local_1048={
-1, -1 
};
int iLocal_1049=0;
int iLocal_1050=0;
var uLocal_1051=3;
var uLocal_1052=0;
var uLocal_1053=0;
var uLocal_1054=0;
int iLocal_1055=0;
int iLocal_1056=0;
var uLocal_1057=0;
int iLocal_1058=0;
int iLocal_1059=0;
var uLocal_1060=0;
var uLocal_1061=0;
int iLocal_1062[2]={
0, 0 
};
int iLocal_1063=0;
float fLocal_1064=0f;
float fLocal_1065=0f;
float fLocal_1066=0f;
float fLocal_1067=0f;
float fLocal_1068=0f;
int iLocal_1069=0;
int iLocal_1070[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_1071[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_1072=0;
var uLocal_1073=0;
var uLocal_1074=0;
var uLocal_1075=0;
var uLocal_1076=0;
var uLocal_1077=0;
var uLocal_1078=0;
var uLocal_1079=0;
var uLocal_1080=0;
struct<16> Local_1081={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<1225> Local_1082={
0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 23, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, -1, -1, 1232348144, 1232348144, 0, -1, -1, 1232348144, 1232348144, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, -1, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 
};
var uLocal_1083=8;
var uLocal_1084=0;
var uLocal_1085=-1;
var uLocal_1086=-1;
var uLocal_1087=-1;
var uLocal_1088=0;
var uLocal_1089=0;
var uLocal_1090=-1;
var uLocal_1091=-1;
var uLocal_1092=-1;
var uLocal_1093=0;
var uLocal_1094=0;
var uLocal_1095=-1;
var uLocal_1096=-1;
var uLocal_1097=-1;
var uLocal_1098=0;
var uLocal_1099=0;
var uLocal_1100=-1;
var uLocal_1101=-1;
var uLocal_1102=-1;
var uLocal_1103=0;
var uLocal_1104=0;
var uLocal_1105=-1;
var uLocal_1106=-1;
var uLocal_1107=-1;
var uLocal_1108=0;
var uLocal_1109=0;
var uLocal_1110=-1;
var uLocal_1111=-1;
var uLocal_1112=-1;
var uLocal_1113=0;
var uLocal_1114=0;
var uLocal_1115=-1;
var uLocal_1116=-1;
var uLocal_1117=-1;
var uLocal_1118=0;
var uLocal_1119=0;
var uLocal_1120=-1;
var uLocal_1121=-1;
var uLocal_1122=-1;
var uLocal_1123=0;
struct<209> Local_1124[32];
int iLocal_1125=0;
float fLocal_1126=0f;
var uLocal_1127=0;
var uLocal_1128=0;
var uLocal_1129=0;
var uLocal_1130=0;
int iLocal_1131=0;
struct<21> Local_1132={
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
fLocal_125=0f;
fLocal_127=0f;
fLocal_128=0f;
fLocal_129=0f;
fLocal_142=0.62f;
fLocal_143=0.51f;
fLocal_144=0.55f;
fLocal_145=25f;
iLocal_1055=-1;
iLocal_1056=-1;
iLocal_1059=-1;
fLocal_1064=-1f;
fLocal_1065=99999f;
fLocal_1066=99999f;
fLocal_1067=99999f;
fLocal_1068=999999f;
StringCopy(&Local_1081, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
Local_1081={
Local_1081 
};
Local_169={
Local_169 
};
func_3911(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(bLocal_1034){
if(!func_3899(ScriptParam_1132)){
func_3813(0, 1);
func_3743();
}}else{
func_3743();
}}else{
func_3813(0, 1);
func_3743();
}
func_3742(&(Local_1082.f_1199));
func_3577();
while (true){
func_3576();
if(func_3571()){
func_3813(0, 1);
func_3743();
}
if(func_3566()){
func_3813(0, 1);
func_3743();
}
if(Local_168.f_112.f_4 !=0){
Call_Loc(Local_168.f_112.f_4);
if(StackVal){
func_3813(0, 1);
func_3743();
}}
func_3911(1);
switch (func_3565()){
case 0:
switch (func_3564()){
case 1:
if(func_3295()){
func_3294(1);
}
break;
case 2:
case 3:
func_3294(3);
break;
}
break;
case 1:
func_3248();
func_2293();
func_2230();
if(func_3564() !=1){
func_2227();
if(Local_168.f_112.f_5 !=0){
Call_Loc(Local_168.f_112.f_5);
}
func_3294(func_3564());
}
break;
case 2:
func_3248();
func_2095();
func_1161();
if(func_3564() > 2){
func_3813(func_1160(11), 0);
func_3294(3);
}
break;
case 3:
func_3743();
break;
}
if(bLocal_1036){
switch (func_3564()){
case 0:
if(func_559()){
func_558(1);
}
break;
case 1:
if(func_557()==0){
func_6();
}else{
func_558(2);
}
break;
case 2:
if(func_2()){
func_558(3);
}
break;
case 3:
func_3743();
break;
}}
func_1();
}}


void func_1(){
Local_172.f_573++;
if(Local_172.f_573 >=Local_151.f_129){
Local_172.f_573=0;
}}

int func_2(){
if(Local_168.f_3.f_2 !=0){
Call_Loc(Local_168.f_3.f_2);
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
return func_4(&(Local_1082.f_1146), iParam0);
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
func_556();
if(Local_168.f_3 !=0){
Call_Loc(Local_168.f_3);
}
func_503();
func_501();
func_197();
func_180();
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
if(!bLocal_1036){
return;
}
Local_1082.f_1138=iParam0;
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
return 0;
}


void func_12(){
if(func_19()==-1){
return;
}
if(Local_168.f_92==0){
return;
}
Call_Loc(Local_168.f_92);
if(!StackVal){
return;
}
if(!func_3(5) && Local_168.f_92.f_1 !=0){
Call_Loc(Local_168.f_92.f_1);
if(StackVal){
func_18(&(Local_1082.f_1171), 0, 0);
func_16(5);
}}
if(!func_15(&(Local_1082.f_1171))){
func_14(&(Local_1082.f_1171), 0, 0);
}elseif(func_15(&(Local_1082.f_1171))){
if(func_13(&(Local_1082.f_1171), func_19(), 0)){
if(Local_168.f_92.f_3 !=0){
Call_Loc(Local_168.f_92.f_3);
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
if(func_17(&(Local_1082.f_1146), iParam0)){}}

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
if(Local_151.f_1289 !=-1){
return Local_151.f_1289 * 60 * 1000;
}
return Local_151.f_1289;
}


void func_20(){
int iVar0;
if(func_22()==-1){
func_21(0);
Call_Loc(Local_170[func_22() /*20*/].f_17);
return;
}
while ((func_22() < iLocal_1049 && iVar0 < Local_170[func_22() /*20*/].f_19) && Local_170[func_22() /*20*/].f_1[iVar0 /*3*/] !=-1){
Call_Loc(Local_170[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
if(StackVal){
if(func_22() !=Local_170[func_22() /*20*/].f_1[iVar0 /*3*/]){
Call_Loc(Local_170[func_22() /*20*/].f_18);
Local_1082.f_1144=func_22();
func_21(Local_170[func_22() /*20*/].f_1[iVar0 /*3*/]);
MISC::SET_BIT(&(Local_1082.f_1145), func_22());
Call_Loc(Local_170[func_22() /*20*/].f_17);
}
return;
}
iVar0++;
}}


void func_21(int iParam0){
if(!bLocal_1036){
return;
}
Local_1082.f_1143=iParam0;
}

int func_22(){
return Local_1082.f_1143;
}


void func_23(){
}


void func_24(){
bool bVar0;
if(func_32()){
if(func_29()){
if(func_15(&(Local_1082.f_1090.f_11))){
func_28(&(Local_1082.f_1090.f_11));
func_27();
Local_1082.f_1090.f_13++;
}}}else{
bVar0=false;
while (bVar0 < 2){
if(func_26(bVar0) && Local_1082.f_1090[bVar0 /*5*/].f_1 !=-1){
func_25(bVar0);
Local_1082.f_1090.f_13++;
}
bVar0++;
}}}


void func_25(bool bParam0){
Local_1082.f_1090[bParam0 /*5*/].f_3=999999f;
Local_1082.f_1090[bParam0 /*5*/].f_4=999999f;
Local_1082.f_1090[bParam0 /*5*/].f_1=-1;
}

int func_26(bool bParam0){
if(!MISC::IS_BIT_SET(Local_1082.f_1090.f_15, bParam0)){
return 0;
}
return 1;
}


void func_27(){
int iVar0;
iVar0=0;
while (iVar0 < 2){
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
while (bVar0 < 2){
if(!MISC::IS_BIT_SET(Local_1082.f_1090.f_15, bVar0)){
return 0;
}
bVar0++;
}
return 1;
}


var func__31(){
return Local_1082.f_1090.f_16;
}

int func_32(){
if(func_33(13)){
return 0;
}
return 1;
}


bool func_33(int iParam0){
return func_4(&(Local_151.f_16), iParam0);
}


void func_34(){
if(!func_40()){
return;
}
if(!func_3(2)){
if(func_35(&(Local_1082.f_1081), &(Local_1082.f_1081.f_3))){
func_16(2);
}}}

int func_35(var uParam0, var uParam1){
int iVar0[8];
int iVar1;
int iVar2;
int iVar3;
iVar2=0;
while (iVar2 < 8){
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
return Local_151.f_19;
}

int func_39(int iParam0){
return 0;
}

int func_40(){
return 0;
}


void func_41(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
func_179(&uVar5);
iVar7=0;
while (iVar7 < Local_151.f_129){
func_178(iVar7, &bVar2, &bVar3, &iVar0, &iVar4);
if(bVar2){
if(Local_168.f_166.f_194 !=0){
Stack.Push(iVar7);
Stack.Push(iVar0);
Stack.Push(bVar3);
Call_Loc(Local_168.f_166.f_194);
}}
if(iVar4 > 2){
if(iVar4 !=6 && iVar4 !=4){
if(!bVar2){
func_177(iVar7, 6);
}elseif(bVar3){
func_177(iVar7, 6);
}elseif(func_153(iVar7, iVar0)){
func_177(iVar7, 6);
}else{
func_152(&uVar5, iVar7);
}}}else{
func_152(&uVar5, iVar7);
}
switch (iVar4){
case 0:
if(func_148(iVar7)){
func_177(iVar7, 2);
}
break;
case 1:
if(!bVar2){
if(func_145(iVar7)){
func_144(iVar7);
func_177(iVar7, 2);
}}elseif(func_143(iVar7)){
func_142(&(Local_1082.f_92[iVar7 /*25*/]));
}
break;
case 2:
if(!bVar1){
if(func_132(iVar7)){
if(func_82(iVar7)){
func_177(iVar7, 3);
if(func_81(iVar7, 8)){
func_80(iVar7, 31);
}
func_79(iVar7);
bVar1=true;
}}}
break;
case 3:
if(bVar2){
if(func_76(iVar7, iVar0)){
func_177(iVar7, 6);
break;
}
if(!bVar3){
func_58(iVar7);
func_53(iVar7, iVar0, 1);
if(func_52(iVar7)){
func_177(iVar7, 4);
}}}
break;
case 6:
if(!func_81(iVar7, 19)){
iVar6++;
}
func_80(iVar7, 8);
if(bVar2){
if(func_76(iVar7, iVar0)){
break;
}
if(func_52(iVar7)){
func_177(iVar7, 4);
}}
if(func_81(iVar7, 19) && func_51()){
func_142(&(Local_1082.f_92[iVar7 /*25*/]));
}
if(func_44(iVar7)){
if(func_143(iVar7)){
func_142(&(Local_1082.f_92[iVar7 /*25*/]));
}
func_177(iVar7, 1);
}
if(func_557()==0){
if(func_43(iVar7, 0)){
func_8(9);
}}
break;
case 4:
if(!func_43(iVar7, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0)){
func_80(iVar7, 26);
func_177(iVar7, 5);
}
break;
case 5:
break;
}
iVar7++;
}
if(Local_1082.f_1162 !=iVar6){
Local_1082.f_1162=iVar6;
}
func_42(&uVar5);
iVar7=Local_172.f_573;
func_178(iVar7, &bVar2, &bVar3, &iVar0, &iVar4);
switch (iVar4){
case 3:
if(bVar2){
if(!bVar3){
func_53(iVar7, iVar0, 0);
}}
break;
}}


void func_42(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 2){
if(MISC::IS_BIT_SET(*uParam0, bVar0)){
if(!MISC::IS_BIT_SET(Local_1082.f_1090.f_15, bVar0)){
MISC::SET_BIT(&(Local_1082.f_1090.f_15), bVar0);
}}elseif(MISC::IS_BIT_SET(Local_1082.f_1090.f_15, bVar0)){
MISC::CLEAR_BIT(&(Local_1082.f_1090.f_15), bVar0);
}
bVar0++;
}}


bool func_43(int iParam0, int iParam1){
return func_4(&(Local_151.f_129.f_1[iParam0 /*21*/]), iParam1);
}

int func_44(int iParam0){
if(func_557() !=0){
return 0;
}
if(func_81(iParam0, 19)){
return func_45(Local_151.f_129.f_1[iParam0 /*21*/].f_8);
}
if(func_43(iParam0, 10)){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_181);
return StackVal;
}
return 0;
}

int func_45(int iParam0){
if(!func_50()){
return 0;
}
if(func_51()){
return 0;
}
if(func_32() && func_48()){
return 0;
}
if(!func_46(iParam0)){
return 0;
}
if(func_32() && !func_29()){
return 0;
}
return 1;
}

int func_46(int iParam0){
int iVar0;
iVar0=func_47(1, iParam0);
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Local_1082.f_1090.f_15, iVar0);
}
return 0;
}

int func_47(int iParam0, int iParam1){
int iVar0;
switch (iParam0){
case 1:
iVar0=0;
while (iVar0 < 2){
if(Local_151.f_1298[iVar0]==iParam1){
return iVar0;
}
iVar0++;
}
break;
case 0:
iVar0=0;
while (iVar0 < 2){
if(Local_151.f_1298[iVar0]==Local_151.f_129.f_1[iParam1 /*21*/].f_8){
return iVar0;
}
iVar0++;
}
break;
}
return -1;
}


bool func_48(){
return Local_1082.f_1090.f_13 >=func_49();
}

int func_49(){
return Local_1082.f_1090.f_14;
}

int func_50(){
if(func_1160(58)){
if(Local_168.f_562.f_9==0){
return 1;
}
Call_Loc(Local_168.f_562.f_9);
return StackVal;
}
return 0;
}

int func_51(){
if(func_1160(58)){
Stack.Push(Local_168.f_562.f_8 !=0);
Call_Loc(Local_168.f_562.f_8);
if(StackVal && StackVal){
return 1;
}}
return 0;
}

int func_52(int iParam0){
if(Local_168.f_166.f_178 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_178);
return StackVal;
}
return 0;
}


void func_53(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_57(iParam0);
if(func_56(iParam0)==-1){
func_55(iParam0, 0);
if(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14);
}
return;
}
if(func_54(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/]) !=iParam2){
return;
}
if(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_17 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_17);
}
while ((func_56(iParam0) < Local_172.f_574[iVar0 /*97*/] && iVar1 < Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_18) && Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_1[iVar1 /*2*/] !=-1){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_1[iVar1 /*2*/].f_1);
if(StackVal){
if(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_15 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_15);
}
func_55(iParam0, Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_1[iVar1 /*2*/]);
if(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_172.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14);
}
return;
}
iVar1++;
}}

int func_54(int iParam0){
switch (iParam0){
case 12:
case 26:
return 1;
default:
}
return 0;
}


void func_55(int iParam0, int iParam1){
if(!bLocal_1036){
return;
}
Local_1082.f_92[iParam0 /*25*/].f_2=iParam1;
}

int func_56(int iParam0){
return Local_1082.f_92[iParam0 /*25*/].f_2;
}

int func_57(int iParam0){
if(func_4(&(Local_1082.f_92[iParam0 /*25*/].f_3), 19)){
return 1;
}
if(Local_168.f_166.f_1 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_1);
return StackVal;
}
return 0;
}


void func_58(int iParam0){
bool bVar0;
int iVar1;
bVar0=Local_151.f_129.f_1[iParam0 /*21*/].f_14;
if(func_75(bVar0)){
return;
}
iVar1=0;
while (iVar1 < Local_172[iParam0 /*19*/].f_16){
if(Local_172[iParam0 /*19*/].f_10[iVar1] !=0){
Stack.Push(iParam0);
Call_Loc(Local_172[iParam0 /*19*/].f_10[iVar1]);
if(StackVal){
if(!MISC::IS_BIT_SET(Local_1082.f_1080, bVar0)){
func_59(iParam0);
}
MISC::SET_BIT(&(Local_1082.f_1080), bVar0);
if(Local_168.f_166.f_186 !=0){
Stack.Push(iParam0);
Stack.Push(bVar0);
Stack.Push(iVar1);
Call_Loc(Local_168.f_166.f_186);
}}}
iVar1++;
}}


void func_59(int iParam0){
if(func_33(28)){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_92[iParam0 /*25*/])){
if(func_74(NETWORK::NET_TO_PED(Local_1082.f_92[iParam0 /*25*/]))){
func_60(func_72(), 1, 0);
}}}


void func_60(int iParam0, int iParam1, int iParam2){
if(func_70(1)){
func_62(Local_1048.f_0, func_63(1), iParam0, iParam1, iParam2);
}else{
func_62(Local_1048.f_0, func_61(bLocal_1038), iParam0, iParam1, iParam2);
}}

int func_61(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}


void func_62(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
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

int func_63(bool bParam0){
var uVar0;
int iVar1;
bool bVar2;
bool bVar3;
if(func_70(1)){
iVar1=0;
while (iVar1 < 32){
bVar3=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_9(bVar3, 0, 0)){
if(func_68()){
if(func_66(bVar3, PLAYER::PLAYER_ID(), bParam0)){
MISC::SET_BIT(&uVar0, bVar3);
}}else{
bVar2=func_65();
if(bVar2 !=func_64()){
if(func_66(bVar3, bVar2, bParam0)){
MISC::SET_BIT(&uVar0, bVar3);
}}}}
iVar1++;
}}
return uVar0;
}

int func_64(){
return -1;
}


bool func_65(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

int func_66(bool bParam0, bool bParam1, bool bParam2){
if(bParam1 !=func_64()){
if(!bParam2){
if(func_67(bParam0, bParam1)){
return 0;
}}
if(Global_1894573[bParam0 /*608*/].f_10 !=func_64()){
return bParam1==Global_1894573[bParam0 /*608*/].f_10;
}}
return 0;
}

int func_67(int iParam0, int iParam1){
if(iParam1 !=func_64()){
if(iParam0 !=func_64()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_64()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


bool func_68(){
return func_69(PLAYER::PLAYER_ID());
}

int func_69(bool bParam0){
if(bParam0 !=func_64()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_64()){
return Global_1894573[bParam0 /*608*/].f_10==bParam0;
}}
return 0;
}


bool func_70(bool bParam0){
return func_71(PLAYER::PLAYER_ID(), bParam0);
}


bool func_71(bool bParam0, bool bParam1){
if(!bParam1){
if(func_69(bParam0)){
return 0;
}}
return Global_1894573[bParam0 /*608*/].f_10 !=func_64();
}

int func_72(){
int iVar0;
iVar0=func_73();
if(iVar0==0){
iVar0=3;
}
return iVar0;
}

int func_73(){
Call_Loc(Local_168.f_74);
return StackVal;
}

int func_74(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if((PED::GET_PED_TYPE(iParam0)==6 || PED::GET_PED_TYPE(iParam0)==29) || PED::GET_PED_TYPE(iParam0)==27){
return 1;
}}
return 0;
}


bool func_75(int iParam0){
return MISC::IS_BIT_SET(Local_1082.f_1080, iParam0);
}

int func_76(int iParam0, int iParam1){
Stack.Push(Local_168.f_166.f_205 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_168.f_166.f_205);
if(StackVal && StackVal){
if(Local_168.f_166.f_204 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_204);
}
if(func_78(iParam0)){
func_77(&(Local_1082.f_92[iParam0 /*25*/]));
}else{
func_142(&(Local_1082.f_92[iParam0 /*25*/]));
}
return 1;
}
return 0;
}


void func_77(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0)){
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&uVar0);
}}

int func_78(int iParam0){
if(func_43(iParam0, 18)){
return 1;
}
Stack.Push(Local_168.f_166.f_208 !=0);
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_208);
if(StackVal && StackVal){
return 1;
}
return 0;
}


void func_79(int iParam0){
}


void func_80(int iParam0, int iParam1){
if(func_17(&(Local_1082.f_92[iParam0 /*25*/].f_3), iParam1)){}}


bool func_81(int iParam0, int iParam1){
return func_4(&(Local_1082.f_92[iParam0 /*25*/].f_3), iParam1);
}

int func_82(int iParam0){
int iVar0;
int iVar1;
struct<3> Var2;
var uVar3;
func_131(0, iParam0);
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_188);
iVar0=StackVal;
if(func_130(iVar0)){
iVar1=Local_151.f_129.f_1[iParam0 /*21*/].f_8;
if(iVar1 !=-1){
if(func_129(Local_1082.f_843[iVar1 /*8*/])){
if(func_128(&(Local_1082.f_92[iParam0 /*25*/]), Local_1082.f_843[iVar1 /*8*/], 26, iVar0, Local_151.f_129.f_1[iParam0 /*21*/].f_9, 1, 1, 1)){
func_102(iParam0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
func_101();
return 1;
}}}else{
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_189);
Var2={
StackVal, StackVal, StackVal 
};
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_190);
uVar3=StackVal;
if(!func_100(Var2)){
if(!func_99(iParam0) || func_84(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
if(func_83(&(Local_1082.f_92[iParam0 /*25*/]), 26, iVar0, Var2, uVar3, 1, 1, 1)){
func_102(iParam0);
func_101();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
return 1;
}}else{
func_101();
return 0;
}}}}
return 0;
}

int func_83(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
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

int func_84(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_93(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_85(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}

int func_85(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
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
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_90(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_9(bVar1, 1, 1)){
if(!func_87(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_86(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_90(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_90(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_86(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}


bool func_87(bool bParam0, int iParam1){
bool bVar0;
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_88(-1, 0)==8;
}else{
bVar0=Global_1853910[bParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_88(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_89();
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

int func_89(){
return Global_1574918;
}


Vector3 func__90(bool bParam0){
int iVar0;
iVar0=bParam0;
if((func_92() && Global_1853910[iVar0 /*862*/].f_832) && !func_100(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_91(bParam0);
}


Vector3 func__91(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}


bool func_92(){
return Global_2683864.f_19;
}

int func_93(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam6==0){
if(func_9(bVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_86(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam7) && bParam4) && func_94(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_91(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_94(bool bParam0){
if(func_98(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
Global_2764203={
func_97(bParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_95(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
return 0;
}

int func_95(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_96(bParam0);
if(!iVar0==func_64()){
if(iVar0==func_96(bParam1)){
return 1;
}}
return 0;
}

int func_96(bool bParam0){
if(bParam0 !=func_64()){
return Global_1894573[bParam0 /*608*/].f_10;
}
return func_64();
}
struct<13> func_97(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}

int func_98(bool bParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_97(bParam0) 
};
Global_2764216={
func_97(iParam1) 
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

int func_99(int iParam0){
if((func_43(iParam0, 10) && func_81(iParam0, 8)) && !func_43(iParam0, 19)){
return 1;
}
return 0;
}

int func_100(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_101(){
if(Local_1082.f_1157 !=-1){
Local_1082.f_1177={
0f, 0f, 0f 
};
Local_1082.f_1186=0f;
iLocal_1058=0;
Local_1082.f_1140=-1;
Local_1082.f_1157=-1;
}}


void func_102(int iParam0){
int iVar0;
bool bVar1;
iVar0=NETWORK::NET_TO_PED(Local_1082.f_92[iParam0 /*25*/]);
bVar1=func_81(iParam0, 19);
func_122(iParam0, iVar0);
if(bVar1){
func_119(iParam0, iVar0);
}else{
func_109(iParam0, iVar0);
}
if(func_108(iParam0, iVar0)){
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, 1);
PED::SET_PED_FIRING_PATTERN(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
}
if(Local_168.f_166.f_192 !=0){
Stack.Push(iParam0);
Stack.Push(iVar0);
Stack.Push(bVar1);
Call_Loc(Local_168.f_166.f_192);
}
if(func_43(iParam0, 5)){
if(!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
}
ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
func_103(iVar0, iParam0, 1, 0, 1, 1);
}}


void func_103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(Local_151.f_129.f_1[iParam1 /*21*/].f_8 !=-1){
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
func_106(Var2, &Var3, &Var4, 0);
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var4, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
if(bParam3){
PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
}
PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
}
if(bParam4){
func_104(iParam0, -1, 0);
}}}


void func_104(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
if(iParam1 !=-1){
iVar0=iParam1;
}
if(bParam2){
iVar1=0;
while (iVar1 < 11){
func_105(iVar1, iParam0);
iVar1++;
}}else{
func_105(iVar0, iParam0);
}}


void func_105(int iParam0, var uParam1){
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


void func_106(struct<3> Param0, var uParam1, var uParam2, bool bParam3){
float fVar0;
int iVar1;
float fVar2;
float fVar3;
float fVar4;
int iVar5;
fVar0=0.1f;
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
fVar2=0.5f;
fVar3=0.1f;
fVar4=0.4f;
if(bParam3){
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
fVar2=(to_float(iVar5) / 10f);
if(func_107()){
fVar2=(fVar2 * -1f);
}
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
fVar3=(to_float(iVar5) / 15f);
if(func_107()){
fVar3=(fVar3 * -1f);
}
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
fVar4=(to_float(iVar5) / 10f);
if(func_107()){
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

int func_107(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_108(int iParam0, int iParam1){
if(func_43(iParam0, 9)){
return 1;
}
return 0;
}


void func_109(int iParam0, int iParam1){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
PED::SET_PED_KEEP_TASK(iParam1, 1);
if(func_43(iParam0, 21)){
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, 1);
}else{
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, 0);
}
if(func_43(iParam0, 6)){
PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 1);
}else{
PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, 1);
PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_151.f_129.f_1[iParam0 /*21*/].f_15);
PED::SET_PED_COMBAT_ABILITY(iParam1, func_118());
PED::SET_PED_ACCURACY(iParam1, func_117(iParam0));
PED::SET_PED_SHOOT_RATE(iParam1, func_116());
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, 0);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_115());
ENTITY::SET_ENTITY_HEALTH(iParam1, func_115(), 0);
PED::SET_PED_DIES_WHEN_INJURED(iParam1, 1);
if(func_114(iParam0)){
AUDIO::STOP_PED_SPEAKING_SYNCED(iParam1, 1);
}
func_110(iParam0, iParam1);
}


void func_110(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
struct<9> Var3;
if(func_81(iParam0, 19)){
return;
}
if(Local_151.f_129.f_1[iParam0 /*21*/].f_20 >=0.75f){
PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, 0), Local_151.f_129.f_1[iParam0 /*21*/].f_20, 0, 0);
return;
}elseif(Local_151.f_129.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_151.f_129.f_1[iParam0 /*21*/].f_20 > -1f){}
iVar0=Local_151.f_129.f_1[iParam0 /*21*/].f_14;
iVar1=0;
while (iVar1 < 5){
iVar2=Local_151.f_129.f_632[iVar0 /*9*/].f_1[iVar1];
if(iVar2 !=-1){
if(func_112(iVar2, 4)){
Var3={
func_111(iVar2) 
};
PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, 0, 0);
}}
iVar1++;
}}


struct<9> func_111(int iParam0){
struct<9> Var0;
Var0=1;
if(Local_168.f_573.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_573.f_2);
Var0={
StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal 
};
}else{
Var0={
Local_151.f_1421.f_1[iParam0 /*9*/] 
};
Var0.f_2={
Local_151.f_1421.f_1[iParam0 /*9*/].f_2 
};
Var0.f_5={
Local_151.f_1421.f_1[iParam0 /*9*/].f_5 
};
Var0.f_8=Local_151.f_1421.f_1[iParam0 /*9*/].f_8;
}
return Var0;
}


bool func_112(int iParam0, int iParam1){
struct<9> Var0;
Var0={
func_113(iParam0) 
};
return func_4(&Var0, iParam1);
}


struct<9> func_113(int iParam0){
return Local_151.f_1421.f_1[iParam0 /*9*/];
}

int func_114(int iParam0){
if(func_33(35)){
return (iParam0 % 2)==0;
}
return 0;
}

int func_115(){
switch (Local_1082.f_1139){
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

int func_116(){
switch (Local_1082.f_1139){
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

int func_117(int iParam0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_191);
Stack.Push(StackVal==joaat("weapon_rpg"));
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_191);
if(StackVal || StackVal==joaat("weapon_railgun")){
return 2;
}
switch (Local_1082.f_1139){
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

int func_118(){
switch (Local_1082.f_1139){
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


void func_119(int iParam0, int iParam1){
func_120(iParam0, 32);
PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
PED::SET_PED_KEEP_TASK(iParam1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 1);
PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, 1);
PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
PED::SET_DRIVER_ABILITY(iParam1, 1f);
PED::SET_PED_ACCURACY(iParam1, func_117(iParam0));
PED::SET_PED_SHOOT_RATE(iParam1, func_116());
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_115());
ENTITY::SET_ENTITY_HEALTH(iParam1, func_115(), 0);
PED::SET_PED_COMBAT_ABILITY(iParam1, func_118());
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}


void func_120(int iParam0, int iParam1){
if(func_121(&(Local_1082.f_92[iParam0 /*25*/].f_3), iParam1)){}}

int func_121(var uParam0, var uParam1){
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


void func_122(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(func_125(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_1082.f_92[iParam0 /*25*/]), 1);
}
if(!func_74(iParam1)){
PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
}
if(Local_151.f_129.f_1[iParam0 /*21*/].f_2==joaat("mp_g_m_pros_01")){
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
if(Local_151.f_129.f_1[iParam0 /*21*/].f_12 !=-1){
func_80(iParam0, 2);
PHYSICS::ACTIVATE_PHYSICS(iParam1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam1, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 1, 1);
}
if(func_43(iParam0, 11)){
NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, 1, 1);
}
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_191);
iVar0=StackVal;
if(iVar0 !=0){
if(iVar0==joaat("weapon_unarmed")){
WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, 1);
}else{
WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_124(iParam0), 1);
}}
PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
PED::SET_PED_SEEING_RANGE(iParam1, Local_151.f_129.f_1[iParam0 /*21*/].f_17);
PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_151.f_129.f_1[iParam0 /*21*/].f_18);
PED::SET_PED_HEARING_RANGE(iParam1, Local_151.f_129.f_1[iParam0 /*21*/].f_19);
PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
iVar1=func_123(iParam0);
if(iVar1 !=joaat("COP")){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
}}


var func__123(int iParam0){
return Local_151.f_129.f_632[Local_151.f_129.f_1[iParam0 /*21*/].f_14 /*9*/];
}

int func_124(int iParam0){
if(Local_168.f_166.f_206 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_206);
return StackVal;
}
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_2);
Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_2);
if(StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H")){
return 1;
}
if(func_81(iParam0, 21)){
return 1;
}
return 0;
}

int func_125(int iParam0){
if(Local_151.f_129.f_1[iParam0 /*21*/].f_12 !=-1){
if(func_126(Local_151.f_1417.f_1[Local_151.f_129.f_1[iParam0 /*21*/].f_12 /*2*/])){
return 1;
}}
if(func_33(22)){
return 1;
}
return 0;
}


bool func_126(int iParam0){
return func_127(iParam0)==-1;
}

int func_127(int iParam0){
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

int func_128(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7){
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

int func_129(int iParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
}
return 0;
}


bool func_130(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}


void func_131(int iParam0, var uParam1){
if(Local_1082.f_1157==-1){
Local_1082.f_1140=iParam0;
Local_1082.f_1157=uParam1;
}}

int func_132(int iParam0){
int iVar0;
if(!func_141(0, iParam0)){
return 0;
}
if(Local_151.f_129.f_1[iParam0 /*21*/].f_8 !=-1){
if(func_140(Local_151.f_129.f_1[iParam0 /*21*/].f_8) !=4){
return 0;
}}
iVar0=Local_151.f_129.f_1[iParam0 /*21*/].f_12;
if(iVar0 !=-1){
if(!func_133(Local_151.f_1417.f_1[iVar0 /*2*/]) || !func_13(&(Local_1082.f_1169), 2000, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1038)){
return 0;
}
Stack.Push(Local_168.f_166.f_207 !=0);
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_207);
if(StackVal && !StackVal){
return 0;
}
return 1;
}

int func_133(int iParam0){
int iVar0;
if(func_139(iParam0)){
return func_134(func_127(iParam0));
}else{
iVar0=0;
while (iVar0 < Local_151.f_1417){
if(Local_151.f_1417.f_1[iVar0 /*2*/]==iParam0){
if(INTERIOR::IS_VALID_INTERIOR(Local_1031[iVar0 /*3*/]) && !INTERIOR::IS_INTERIOR_CAPPED(Local_1031[iVar0 /*3*/])){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_134(int iParam0){
if(iParam0==28){
return func_138(&(Global_1955050.f_54), iParam0);
}
if(iParam0 !=-1){
func_135(iParam0);
return (func_138(&(Global_1955050.f_54), iParam0) && INTERIOR::IS_INTERIOR_READY(Global_1955050[iParam0]));
}
return 0;
}


void func_135(int iParam0){
int iVar0;
iVar0=iParam0;
if(Global_1955050[iVar0]==0){
Global_1955050[iVar0]=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_137(iParam0), func_136(iParam0));
}}


char* func_136(int iParam0){
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


Vector3 func__137(int iParam0){
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


bool func_138(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}


bool func_139(int iParam0){
return func_127(iParam0) !=-1;
}

int func_140(int iParam0){
return Local_1082.f_843[iParam0 /*8*/].f_1;
}

int func_141(int iParam0, int iParam1){
if(Local_1082.f_1140==-1){
return 1;
}
if(Local_1082.f_1140==iParam0){
if(Local_1082.f_1157==iParam1){
return 1;
}}
return 0;
}


void func_142(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_143(int iParam0){
if(Local_151.f_129.f_1[iParam0 /*21*/].f_12 !=-1 && func_126(Local_151.f_1417.f_1[Local_151.f_129.f_1[iParam0 /*21*/].f_12 /*2*/])){
return 0;
}
return 1;
}


void func_144(int iParam0){
func_55(iParam0, 0);
if(Local_168.f_166.f_181.f_3 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_181.f_3);
}}

int func_145(int iParam0){
int iVar0;
if(func_81(iParam0, 19)){
if(!func_146(Local_1082.f_1090.f_11, func_147(), 0)){
return 0;
}}
if(Local_168.f_166.f_181.f_4 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_181.f_4);
iVar0=StackVal;
if(iVar0 !=-1){
if(!func_13(&(Local_1082.f_92[iParam0 /*25*/].f_23), iVar0, 0)){
return 0;
}else{
func_28(&(Local_1082.f_92[iParam0 /*25*/].f_23));
}}}
return 1;
}

int func_146(var uParam0, var uParam1, int iParam2, bool bParam3){
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

int func_147(){
return Local_151.f_1298.f_5;
}

int func_148(int iParam0){
if(func_81(iParam0, 19)){
return func_149();
}
if(Local_168.f_166.f_187 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_166.f_187);
return StackVal;
}
return 1;
}

int func_149(){
Call_Loc(Local_168.f_562);
if(StackVal){
if(func_13(&(Local_1082.f_1090.f_11), func_151(), 0)){
func_150(58);
return 1;
}}
return 0;
}


void func_150(int iParam0){
if(func_17(&uLocal_1051, iParam0)){}}

int func_151(){
return Local_151.f_1298.f_4;
}


void func_152(var uParam0, int iParam1){
bool bVar0;
if(func_81(iParam1, 19)){
bVar0=func_47(0, iParam1);
if(bVar0 !=-1){
MISC::CLEAR_BIT(uParam0, bVar0);
}}}

int func_153(int iParam0, int iParam1){
int iVar0;
if(func_81(iParam0, 19)){
iVar0=func_47(0, iParam0);
if(iVar0 !=-1){
if(func_175(iVar0)){
if((Local_1082.f_1090[iVar0 /*5*/].f_2 !=-1 && func_174(Local_1082.f_1090[iVar0 /*5*/].f_2)==6) && Local_1082.f_1090[iVar0 /*5*/].f_3 >=299f){
return 1;
}
if(func_140(Local_151.f_129.f_1[iParam0 /*21*/].f_8) !=4){
return 1;
}
if(Local_1082.f_1090[iVar0 /*5*/].f_3 !=999999f && Local_1082.f_1090[iVar0 /*5*/].f_3 > func_173()){
return 1;
}
if(Local_1082.f_1090[iVar0 /*5*/].f_4 !=999999f && Local_1082.f_1090[iVar0 /*5*/].f_4 < func_172()){
func_80(iParam0, 32);
return 1;
}}
if(func_154(iVar0)){
return 1;
}
if(func_51()){
func_80(iParam0, 32);
return 1;
}}}
return 0;
}

int func_154(int iParam0){
if(!func_155(func_165(iParam0, 1), func_162(iParam0))){
return 1;
}
return 0;
}

int func_155(bool bParam0, int iParam1){
bool bVar0;
int iVar1;
if(Local_168.f_562.f_1 !=0){
Stack.Push(bParam0);
Stack.Push(iParam1);
Call_Loc(Local_168.f_562.f_1);
return StackVal;
}
if(bParam0==-1){
return 0;
}
switch (func_161()){
case 3:
if(func_160(bParam0, 23)){
return 0;
}
if(func_172()==-1f || Local_942[bParam0 /*7*/].f_2 > func_172()){
if(Local_942[bParam0 /*7*/].f_4 !=func_64()){
if(func_158(Local_942[bParam0 /*7*/].f_4)){
return 0;
}}}
break;
case 4:
bVar0=bParam0;
if(func_9(bVar0, 0, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0)){
iVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
if(func_157(iVar1, 2) || func_157(iVar1, 8)){
return 0;
}}else{
return 0;
}
break;
case 0:
if(func_81(bParam0, 2)){
return 0;
}
break;
case 1:
if(func_156(bParam0, 2)){
return 0;
}
break;
}
return 1;
}


bool func_156(int iParam0, int iParam1){
return func_4(&(Local_1082.f_843[iParam0 /*8*/].f_2), iParam1);
}


bool func_157(int iParam0, int iParam1){
return func_4(&(Local_1124[iParam0 /*209*/].f_1), iParam1);
}

int func_158(int iParam0){
if(iParam0 > -1){
if(Global_2657589[iParam0 /*466*/].f_246 > -1){
if(func_159(Global_2657589[iParam0 /*466*/].f_246)==4){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 4)){
return 1;
}}
return 0;
}

int func_159(int iParam0){
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


bool func_160(int iParam0, int iParam1){
return func_4(&(Local_1082.f_2.f_26[iParam0 /*3*/]), iParam1);
}

int func_161(){
if(Local_168.f_562.f_3 !=0){
Call_Loc(Local_168.f_562.f_3);
return StackVal;
}
return 3;
}

int func_162(int iParam0){
return func_163(func_165(iParam0, 0));
}

int func_163(bool bParam0){
return func_164(func_161(), bParam0);
}

int func_164(int iParam0, bool bParam1){
int iVar0;
if(bParam1==-1){
return iVar0;
}
switch (iParam0){
case 3:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_2[bParam1])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1082.f_2[bParam1]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1082.f_2[bParam1]);
}}
break;
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_92[bParam1 /*25*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1082.f_92[bParam1 /*25*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1082.f_92[bParam1 /*25*/]);
}}
break;
case 1:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_843[bParam1 /*8*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1082.f_843[bParam1 /*8*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1082.f_843[bParam1 /*8*/]);
}}
break;
case 2:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_964[bParam1 /*5*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1082.f_964[bParam1 /*5*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1082.f_964[bParam1 /*5*/]);
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

int func_165(int iParam0, bool bParam1){
if(iParam0 !=-1){
if(!bParam1){
if(!ENTITY::DOES_ENTITY_EXIST(func_163(Local_1082.f_1090[iParam0 /*5*/].f_1))){
Local_1082.f_1090[iParam0 /*5*/].f_1=func_166(iParam0);
}}
return Local_1082.f_1090[iParam0 /*5*/].f_1;
}
return -1;
}


bool func_166(int iParam0){
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
while (bVar2 < func_171()){
if(func_168(bVar2)){
iVar7=func_163(bVar2);
if(ENTITY::DOES_ENTITY_EXIST(iVar7)){
if(func_155(bVar2, iVar7)){
if(func_167(bVar2, iVar7)){
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

int func_167(bool bParam0, int iParam1){
if(Local_168.f_562.f_2 !=0){
Stack.Push(bParam0);
Stack.Push(iParam1);
Call_Loc(Local_168.f_562.f_2);
return StackVal;
}
switch (func_161()){
case 3:
if(Local_942[bParam0 /*7*/].f_4 !=func_64()){
return 1;
}
break;
}
return 0;
}

int func_168(int iParam0){
switch (func_161()){
case 3:
return 1;
case 0:
return func_43(iParam0, 2);
case 2:
return func_170(iParam0, 24);
case 1:
return func_169(iParam0, 2);
case 4:
return 1;
default:
}
return 0;
}


bool func_169(int iParam0, int iParam1){
return func_4(&(Local_151.f_780.f_1[iParam0 /*15*/]), iParam1);
}


bool func_170(int iParam0, int iParam1){
return func_4(&(Local_151.f_1008.f_1[iParam0 /*12*/]), iParam1);
}

int func_171(){
switch (func_161()){
case 3:
return Local_151.f_19;
case 0:
return Local_151.f_129;
case 2:
return Local_151.f_1008;
case 1:
return Local_151.f_780;
case 4:
return 32;
default:
}
return 0;
}


float func_172(){
if(Local_168.f_562.f_4 !=0){
Call_Loc(Local_168.f_562.f_4);
return StackVal;
}
return 200f;
}


float func_173(){
if(Local_168.f_562.f_7 !=0){
Call_Loc(Local_168.f_562.f_7);
return StackVal;
}
return 400f;
}

int func_174(int iParam0){
return Local_1082.f_92[iParam0 /*25*/].f_1;
}

int func_175(int iParam0){
bool bVar0;
bool bVar1;
if(func_161()==4){
bVar0=func_165(iParam0, 1);
if(bVar0 !=-1){
bVar1=bVar0;
if(!func_9(bVar1, 1, 1) || func_176(bVar1, 0, 0)){
return 0;
}}}
return 1;
}

int func_176(bool bParam0, bool bParam1, int iParam2){
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


void func_177(int iParam0, int iParam1){
if(!bLocal_1036){
return;
}
Local_1082.f_92[iParam0 /*25*/].f_1=iParam1;
}


void func_178(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4){
*iParam4=func_174(iParam0);
*bParam1=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_92[iParam0 /*25*/]);
if(*bParam1){
*iParam3=NETWORK::NET_TO_PED(Local_1082.f_92[iParam0 /*25*/]);
*bParam2=PED::IS_PED_INJURED(*iParam3);
}}


void func_179(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 2){
MISC::SET_BIT(uParam0, bVar0);
bVar0++;
}}


void func_180(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
iVar4=0;
while (iVar4 < Local_151.f_1008){
bVar3=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_964[iVar4 /*5*/]);
if(bVar3){
iVar0=NETWORK::NET_TO_ENT(Local_1082.f_964[iVar4 /*5*/]);
bVar2=ENTITY::IS_ENTITY_DEAD(iVar0, 0);
if(Local_168.f_432.f_36 !=0){
Stack.Push(iVar4);
Stack.Push(iVar0);
Stack.Push(bVar2);
Call_Loc(Local_168.f_432.f_36);
}}
if(func_196(iVar4) > 1 && func_196(iVar4) !=3){
if(bVar3){
if(bVar2){
func_195(iVar4, 3);
}elseif(func_194(iVar4)){
func_195(iVar4, 3);
}}else{
func_195(iVar4, 3);
}}
func_191(iVar4, iVar0);
switch (func_196(iVar4)){
case 0:
if(func_190(iVar4)){
func_195(iVar4, 1);
}
break;
case 1:
if((!bVar1 && func_189(iVar4)) && func_181(iVar4)){
func_195(iVar4, 2);
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

int func_181(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
int iVar3;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_964[iParam0 /*5*/])){
Var1={
func_188(iParam0) 
};
Var2={
func_187(iParam0) 
};
if(func_100(Var1)){
return 0;
}
iVar3=Local_151.f_1008.f_1[iParam0 /*12*/].f_3;
if(!func_130(iVar3)){
return 0;
}
if(func_186(&(Local_1082.f_964[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, func_170(iParam0, 22), 1, 0, 0)){
iVar0=NETWORK::NET_TO_OBJ(Local_1082.f_964[iParam0 /*5*/]);
ENTITY::SET_ENTITY_ROTATION(iVar0, Var2, 2, 1);
func_182(iParam0, iVar0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_964[iParam0 /*5*/])){
return 1;
}
return 0;
}


void func_182(int iParam0, int iParam1){
var uVar0;
var uVar1;
NETWORK::NETWORK_SET_OBJECT_SCOPE_DISTANCE(NETWORK::NET_TO_OBJ(Local_1082.f_964[iParam0 /*5*/]), 300);
ENTITY::SET_ENTITY_PROOFS(iParam1, func_170(iParam0, 17), func_170(iParam0, 18), func_170(iParam0, 19), func_170(iParam0, 20), func_170(iParam0, 21), 0, 0, 0);
func_185(iParam0, 0);
if(Local_151.f_1008.f_1[iParam0 /*12*/].f_11 !=-1 && func_126(Local_151.f_1417.f_1[Local_151.f_1008.f_1[iParam0 /*12*/].f_11 /*2*/])){
func_184(iParam0, 8);
}
if(func_170(iParam0, 32)){
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
}
if(!func_170(iParam0, 1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_1082.f_964[iParam0 /*5*/]));
}
if(func_170(iParam0, 2)){
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1082.f_964[iParam0 /*5*/], 1, 1);
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Local_1082.f_964[iParam0 /*5*/], 1);
NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, 1, 1);
}
if(func_170(iParam0, 3)){
ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
}
if(func_170(iParam0, 4)){
ENTITY::SET_ENTITY_LIGHTS(iParam1, 1);
}
if(func_170(iParam0, 5)){
ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, 0);
}
if(func_170(iParam0, 6)){
ENTITY::SET_ENTITY_DYNAMIC(iParam1, 1);
}
if(func_170(iParam0, 7)){
ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
}
if(func_170(iParam0, 15)){
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1082.f_964[iParam0 /*5*/]), 1200);
}
if(func_170(iParam0, 8)){
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
}
if(func_170(iParam0, 9)){
ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_1082.f_964[iParam0 /*5*/]), 1);
}
if(func_170(iParam0, 34)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, func_188(iParam0), 0, 0, 1);
}elseif(func_170(iParam0, 16)){
ENTITY::SET_ENTITY_COORDS(iParam1, func_188(iParam0), 1, 0, 0, 1);
}
if(func_170(iParam0, 33)){
ENTITY::SET_ENTITY_ROTATION(iParam1, func_187(iParam0), 2, 1);
}
if(func_170(iParam0, 10)){
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
}
if(func_170(iParam0, 11)){
ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLE(iParam1, 1);
}
if(func_183(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, 1);
}
if(func_170(iParam0, 13)){
ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
}
if(func_170(iParam0, 14)){
Stack.Push(Local_168.f_432.f_24 !=0);
Stack.Push(iParam0);
Stack.Push(&uVar0);
Stack.Push(&uVar1);
Call_Loc(Local_168.f_432.f_24);
if(StackVal && StackVal){
AUDIO::LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, 1);
AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar1, 0);
}}
if(Local_168.f_432.f_33 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_168.f_432.f_33);
}}

int func_183(int iParam0){
if(func_170(iParam0, 12)){
return 1;
}
if(Local_151.f_1008.f_1[iParam0 /*12*/].f_11 !=-1 && func_126(Local_151.f_1417.f_1[Local_151.f_1008.f_1[iParam0 /*12*/].f_11 /*2*/])){
return 1;
}
if(func_33(22)){
return 1;
}
return 0;
}


void func_184(int iParam0, int iParam1){
if(func_17(&(Local_1082.f_964[iParam0 /*5*/].f_2), iParam1)){}}


void func_185(int iParam0, int iParam1){
if(func_121(&(Local_1082.f_964[iParam0 /*5*/].f_2), iParam1)){}}

int func_186(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9){
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


Vector3 func__187(int iParam0){
struct<3> Var0;
if(Local_168.f_432.f_38 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_432.f_38);
Var0={
StackVal, StackVal, StackVal 
};
}
if(func_100(Var0)){
Var0={
Local_151.f_1008.f_1[iParam0 /*12*/].f_8 
};
}
return Var0;
}


Vector3 func__188(int iParam0){
struct<3> Var0;
if(Local_168.f_432.f_37 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_432.f_37);
Var0={
StackVal, StackVal, StackVal 
};
}
if(func_100(Var0)){
Var0={
Local_151.f_1008.f_1[iParam0 /*12*/].f_4 
};
}
return Var0;
}

int func_189(int iParam0){
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1038)){
return 0;
}
return 1;
}

int func_190(int iParam0){
int iVar0;
if(Local_151.f_1008.f_1[iParam0 /*12*/].f_11 !=-1){
iVar0=Local_151.f_1008.f_1[iParam0 /*12*/].f_11;
if(!func_133(Local_151.f_1417.f_1[iVar0 /*2*/])){
return 0;
}}
if(Local_168.f_432.f_23 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_432.f_23);
return StackVal;
}
return 1;
}


void func_191(int iParam0, int iParam1){
if(Local_151.f_1008.f_1[iParam0 /*12*/].f_11==-1){
return;
}
if(func_196(iParam0) > 1 && func_196(iParam0) < 3){
if(func_192(iParam0, iParam1)){
func_184(iParam0, 8);
}else{
func_185(iParam0, 8);
}}}


bool func_192(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){}
return func_193(iParam0, 8);
}


bool func_193(int iParam0, int iParam1){
return func_4(&(Local_1082.f_964[iParam0 /*5*/].f_2), iParam1);
}

int func_194(int iParam0){
if(Local_168.f_432.f_27 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_432.f_27);
return StackVal;
}
return 0;
}


void func_195(int iParam0, int iParam1){
Local_1082.f_964[iParam0 /*5*/].f_1=iParam1;
}

int func_196(int iParam0){
return Local_1082.f_964[iParam0 /*5*/].f_1;
}


void func_197(){
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
while (iVar0 < Local_151.f_780){
bVar6=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_843[iVar0 /*8*/]);
if(bVar6){
iVar3=NETWORK::NET_TO_VEH(Local_1082.f_843[iVar0 /*8*/]);
bVar5=func_499(Local_1082.f_843[iVar0 /*8*/]);
bVar7=func_497(iVar3, 1, 1, 0, 0, 0, 1, 0, 0);
if(bVar5){
iVar1=func_494(iVar0, 2);
}}
if(func_140(iVar0) > 2){
if(func_140(iVar0) !=5 && func_140(iVar0) !=3){
if(!bVar6){
func_493(iVar0, 5);
}elseif(!bVar5){
func_493(iVar0, 5);
}elseif(func_492(iVar0, iVar3, bVar7)){
func_493(iVar0, 5);
}else{
func_491(iVar0, &iVar2);
}}}else{
func_491(iVar0, &iVar2);
}
if(Local_168.f_377.f_46 !=0){
Stack.Push(iVar0);
Stack.Push(iVar3);
Stack.Push(bVar5);
Stack.Push(iVar1);
Call_Loc(Local_168.f_377.f_46);
}
func_488(iVar0, iVar3);
switch (func_140(iVar0)){
case 0:
if(func_487(iVar0)){
func_493(iVar0, 2);
}
break;
case 1:
if(!bVar6){
if(func_486(iVar0)){
func_493(iVar0, 2);
}}else{
func_142(&(Local_1082.f_843[iVar0 /*8*/]));
}
break;
case 2:
if(!bVar4){
if(func_485(iVar0)){
if(func_214(iVar0)){
func_493(iVar0, 4);
bVar4=true;
}}}
break;
case 4:
if(bVar6){
if(func_213(iVar0, iVar3)){
func_493(iVar0, 5);
}else{
if(bVar5){
func_212(iVar0, iVar3);
func_203(iVar0, iVar3);
}
break;
case 5:
if(func_169(iVar0, 0)){
func_8(10);
}
if(bVar6){
if(func_213(iVar0, iVar3)){
}else{
if(func_169(iVar0, 23)){
if(bVar6){
func_142(&(Local_1082.f_843[iVar0 /*8*/]));
}}
if(func_202(iVar0)){
func_142(&(Local_1082.f_843[iVar0 /*8*/]));
func_493(iVar0, 1);
}
break;
case 3:
break;
case 6:
if(bVar6 && func_201(iVar0, iVar3)){
func_142(&(Local_1082.f_843[iVar0 /*8*/]));
}
break;
case 7:
break;
}
if(bVar7){
func_200(iVar0, 13);
}
else{
func_199(iVar0, 13);
}}
iVar0++;
func_198(&iVar2);
}


void func_198(int iParam0){
if(Local_1082.f_1090.f_16 !=*iParam0){
Local_1082.f_1090.f_16=*iParam0;
}
if(func_13(&uLocal_1078, 3000, 0)){
func_28(&uLocal_1078);
}}


void func_199(int iParam0, int iParam1){
if(func_121(&(Local_1082.f_843[iParam0 /*8*/].f_2), iParam1)){}}


void func_200(int iParam0, int iParam1){
if(func_17(&(Local_1082.f_843[iParam0 /*8*/].f_2), iParam1)){}}

int func_201(int iParam0, int iParam1){
if(func_169(iParam0, 23) || func_156(iParam0, 15)){
return 1;
}
Stack.Push(Local_168.f_377.f_52 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_168.f_377.f_52);
if(StackVal && StackVal){
return 1;
}
return 0;
}

int func_202(int iParam0){
if(func_557() !=0){
return 0;
}
if(func_156(iParam0, 15)){
return func_45(iParam0);
}
if(func_169(iParam0, 13)){
if(Local_168.f_377.f_33 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_33);
return StackVal;
}
return 1;
}
return 0;
}


void func_203(int iParam0, int iParam1){
int iVar0;
struct<3> Var1;
int iVar2;
if(!func_156(iParam0, 15)){
return;
}
iVar0=func_47(1, iParam0);
if(iVar0==-1){
return;
}
if(!func_13(&uLocal_1078, 3000, 0)){
return;
}
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
Local_1082.f_1090[iVar0 /*5*/].f_4=vdist(Var1, func_204());
iVar2=func_162(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
Local_1082.f_1090[iVar0 /*5*/].f_3=vdist(Var1, ENTITY::GET_ENTITY_COORDS(iVar2, 0));
}}


Vector3 func__204(){
if(Local_168.f_593.f_4.f_2 !=0){
Call_Loc(Local_168.f_593.f_4.f_2);
return StackVal, StackVal, StackVal;
}
return func_205(func_211());
}


Vector3 func__205(int iParam0){
struct<3> Var0;
struct<3> Var1;
if(bLocal_1035 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_1040, 0)){
if(VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_1045)){
Var0={
func_208(iParam0) 
};
if(!func_100(Var0)){
return Var0;
}}
Var1={
func_207(iParam0) 
};
if(!func_100(Var1)){
return Var1;
}}
return func_206(iParam0);
}


Vector3 func__206(int iParam0){
if(iParam0 !=0){
return Global_1956139.f_1[iParam0 /*6*/];
}
return 0f, 0f, 0f;
}


Vector3 func__207(int iParam0){
if(iParam0 !=0){
return Global_1956139.f_1[iParam0 /*6*/].f_3;
}
return 0f, 0f, 0f;
}


Vector3 func__208(int iParam0){
switch (iParam0){
case 795:
case 796:
case 797:
case 798:
case 799:
case 800:
case 801:
case 802:
return func_209(func_210(iParam0));
default:
}
return 0f, 0f, 0f;
}


Vector3 func__209(int iParam0){
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

int func_210(int iParam0){
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

int func_211(){
if(Local_168.f_593.f_4.f_1 !=0){
Call_Loc(Local_168.f_593.f_4.f_1);
return StackVal;
}
if(iLocal_1041 !=-1){
return Local_1013.f_1[Local_1124[iLocal_1041 /*209*/].f_137 /*4*/];
}
return 0;
}


void func_212(int iParam0, int iParam1){
struct<3> Var0;
float fVar1;
if(iParam0 !=Local_151.f_780.f_227){
return;
}
Var0={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
fVar1=500f;
if(func_100(Local_1082.f_1183)){
Local_1082.f_1183={
5000f, 8500f, 0f 
};
}
if(vdist2(Var0, Local_1082.f_1183) > (550f * 550f)){
if(Local_1082.f_1161 !=-1){
MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_1082.f_1161, 0);
}
Local_1082.f_1183={
Var0 
};
Local_1082.f_1161=MISC::ADD_POP_MULTIPLIER_SPHERE(Local_1082.f_1183, fVar1, 1f, 0.02f, 0, 1);
}}

int func_213(int iParam0, int iParam1){
Stack.Push(Local_168.f_377.f_52 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_168.f_377.f_52);
if(StackVal && StackVal){
func_142(&(Local_1082.f_843[iParam0 /*8*/]));
return 1;
}
return 0;
}

int func_214(int iParam0){
int iVar0;
bool bVar1;
int iVar2;
func_131(1, iParam0);
iVar0=Local_151.f_780.f_1[iParam0 /*15*/].f_3;
func_484(&iVar0, iParam0);
if(!func_130(iVar0)){
return 0;
}
bVar1=true;
if(func_100(Local_1082.f_1177)){
if(func_156(iParam0, 15)){
func_482(1);
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
if(!func_477(iParam0)){
bVar1=false;
}}elseif(!func_469(iParam0)){
bVar1=false;
}}else{
if(func_169(iParam0, 35) && !func_156(iParam0, 24)){
if(!func_84(Local_151.f_780.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1)){
func_200(iParam0, 24);
}}
if(func_169(iParam0, 17) || func_156(iParam0, 24)){
if(!func_341(iParam0, &(Local_1082.f_1177), &(Local_1082.f_1186))){
bVar1=false;
}}elseif(func_169(iParam0, 25)){
Stack.Push(iParam0);
Stack.Push(&(Local_1082.f_1177));
Stack.Push(&(Local_1082.f_1186));
Call_Loc(Local_168.f_377.f_37);
if(!StackVal){
bVar1=false;
}}elseif(func_169(iParam0, 18)){
if(!func_469(iParam0)){
bVar1=false;
}}elseif(func_169(iParam0, 19)){
if(!func_477(iParam0)){
bVar1=false;
}}else{
Local_1082.f_1177={
Local_151.f_780.f_1[iParam0 /*15*/].f_4 
};
Local_1082.f_1186=Local_151.f_780.f_1[iParam0 /*15*/].f_7;
}}}
if(bVar1){
if(!func_169(iParam0, 30)){
func_318(Local_1082.f_1177, 30f, 0);
MISC::CLEAR_AREA(Local_1082.f_1177, 30f, 0, 0, 0, 1);
}
if(func_315(&(Local_1082.f_843[iParam0 /*8*/]), iVar0, Local_1082.f_1177, Local_1082.f_1186, 1, 1, 1, 0, 1, 1, 0, 0, Local_1082.f_1177.f_2 <=-100f, 0)){
iVar2=NETWORK::NET_TO_VEH(Local_1082.f_843[iParam0 /*8*/]);
func_482(0);
func_215(iParam0, iVar2);
func_101();
return 1;
}}else{
func_101();
}
return 0;
}


void func_215(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam1);
if(!func_238(iParam0, iParam1)){
func_237(iParam0, iParam1);
}
if(Local_151.f_780.f_1[iParam0 /*15*/].f_9 !=-1 && func_126(Local_151.f_1417.f_1[Local_151.f_780.f_1[iParam0 /*15*/].f_9 /*2*/])){
func_200(iParam0, 2);
}
if(func_236(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, 1);
}
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_169(iParam0, 10));
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_169(iParam0, 3));
VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, func_169(iParam0, 6));
VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_169(iParam0, 5));
if(VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0)){
VEHICLE::ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(iParam1);
}
if(func_169(iParam0, 4)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
}
if(func_169(iParam0, 25)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_1082.f_1177, 0, 0, 1);
}
if(func_169(iParam0, 8)){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam1, 0);
}
if(func_169(iParam0, 28)){
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1082.f_843[iParam0 /*8*/], 1, 1);
NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, 1, 1);
}
if(func_156(iParam0, 14)){
ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam1, 1);
VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(iParam1, 0);
if(func_235(iParam0, iVar0)){
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, func_234(iParam0, iVar0));
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, 0);
VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
}
func_232(iParam1, iVar0);
func_231(iParam1, 1);
VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, 0);
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, func_169(iParam0, 7), 0);
func_227(iParam0, iParam1);
iVar1=func_226(iParam0);
if(iVar1 !=-1 && func_225(iVar1) !=-1){
func_224(NETWORK::NET_TO_ENT(Local_1082.f_843[iParam0 /*8*/]), Local_1082.f_1224.f_1[func_225(iVar1) /*5*/].f_1);
}}
if(func_169(iParam0, 11)){
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
}
if(func_169(iParam0, 32)){
VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, 1);
}
if(func_169(iParam0, 33)){
VEHICLE::SET_VEHICLE_SIREN(iParam1, 1);
}
if(func_223(iParam1)){
if(func_169(iParam0, 34)){
VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, 1, 1);
}else{
VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, 0, 1);
}}
if(func_156(iParam0, 15)){
iVar2=func_222(iParam0);
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
if(func_169(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1)){
VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam1, 2);
}}
if(VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)){
VEHICLE::SET_BOAT_ANCHOR(iParam1, 1);
}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iParam1, 1);
}
if(func_156(iParam0, 15) || func_169(iParam0, 19)){
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
if(!func_221() || func_220()){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, 1);
}
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_151.f_780.f_1[iParam0 /*15*/].f_3)){
func_218(iParam0, iParam1);
}
ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(iParam1, 1);
func_216(iParam1);
NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_1082.f_843[iParam0 /*8*/], 1);
if(Local_168.f_377.f_43 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_168.f_377.f_43);
}}


void func_216(int iParam0){
int iVar0;
func_217(iParam0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 11);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
}}


void func_217(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh")){
DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", 1);
}}}


void func_218(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 6){
if(VEHICLE::GET_IS_DOOR_VALID(iParam1, iVar0)){
iVar1=func_219(iParam0, iVar0);
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

int func_219(int iParam0, int iParam1){
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
if(MISC::IS_BIT_SET(Local_151.f_780.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1))){
return iVar1;
}
iVar1++;
}
return -1;
}

int func_220(){
return 0;
}

int func_221(){
return 0;
}

int func_222(int iParam0){
return func_163(func_165(func_47(1, iParam0), 0));
}

int func_223(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("akula") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("annihilator2")){
return 1;
}else{
return 0;
}}
return 0;
}


void func_224(int iParam0, int iParam1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
}}

int func_225(int iParam0){
return Local_1082.f_2.f_69[iParam0];
}

int func_226(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(Local_1082.f_2.f_51[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_227(int iParam0, int iParam1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("BBCarrier", 2)){
DECORATOR::DECOR_SET_BOOL(iParam1, "BBCarrier", 1);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2)){
DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", 1);
}
func_228(iParam1, func_494(iParam0, 2), 935751890, 0, 0);
}


void func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3)){
iVar0=func_10();
func_230(iParam1, &iVar0);
DECORATOR::DECOR_SET_INT(iParam0, "ContrabandOwner", iVar0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "ContrabandDeliveryType", iParam2);
}
func_229(iParam2);
if(iParam2==-81613951){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ExportVehicle", 3)){
iVar1=iParam3;
iVar1=(iVar1 + iParam4);
DECORATOR::DECOR_SET_INT(iParam0, "ExportVehicle", iVar1);
}}}}


void func_229(int iParam0){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_463 !=iParam0){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_463=iParam0;
}}


void func_230(int iParam0, int iParam1){
bool bVar0;
if(iParam0 >=0 && iParam0 < 8){
bVar0=(24 + iParam0);
MISC::SET_BIT(iParam1, bVar0);
}}


void func_231(int iParam0, bool bParam1){
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


void func_232(int iParam0, int iParam1){
switch (iParam1){
case joaat("phantom2"):
case joaat("dune5"):
VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(iParam0, 0);
break;
}
func_233(iParam0);
}


void func_233(int iParam0){
if(!Global_262145.f_4712){
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
}}


float func_234(int iParam0, int iParam1){
if(Local_168.f_377.f_36 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_36);
return StackVal;
}
switch (iParam1){
case joaat("insurgent3"):
return 1f;
default:
}
return 0.2f;
}


bool func_235(int iParam0, int iParam1){
return func_234(iParam0, iParam1) !=1f;
}

int func_236(int iParam0){
if(Local_151.f_780.f_1[iParam0 /*15*/].f_9 !=-1){
if(func_126(Local_151.f_1417.f_1[Local_151.f_780.f_1[iParam0 /*15*/].f_9 /*2*/])){
return 1;
}}
if(func_33(22)){
return 1;
}
return 0;
}


void func_237(int iParam0, int iParam1){
if(Local_151.f_780.f_1[iParam0 /*15*/].f_8 !=-1){
VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_151.f_780.f_1[iParam0 /*15*/].f_8, Local_151.f_780.f_1[iParam0 /*15*/].f_8);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_151.f_780.f_1[iParam0 /*15*/].f_8, Local_151.f_780.f_1[iParam0 /*15*/].f_8);
}}

int func_238(var uParam0, int iParam1){
struct<101> Var0;
if(Local_168.f_377.f_44 !=0){
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
Call_Loc(Local_168.f_377.f_44);
if(StackVal){
func_239(iParam1, &Var0, 0, 1, 1);
return 1;
}}
return 0;
}


void func_239(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(PLAYER::PLAYER_ID() !=func_64()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_292(iParam0, uParam1, bParam2, bParam3);
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
if(func_291(ENTITY::GET_ENTITY_MODEL(iParam0))){
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
if(func_290(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
}
if(func_289(iParam0)){
func_283(iParam0, func_286(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
}
if(MISC::IS_BIT_SET(uParam1->f_95, 0)){
func_254(iParam0, &(uParam1->f_81));
}
if((!func_246(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_243(iParam0);
}
if(func_242(iVar0)){
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
if(func_241(ENTITY::GET_ENTITY_MODEL(iParam0))){
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
if(func_240(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
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


bool func_240(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_241(int iParam0){
return func_291(iParam0);
}

int func_242(int iParam0){
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


void func_243(int iParam0){
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
func_244(Var0);
}}}}


void func_244(struct<3> Param0){
struct<3> Var0;
Var0.f_0=-1745262668;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=Param0.f_0;
Var0.f_2.f_1=Param0.f_1;
Var0.f_2.f_2=Param0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_245(1, 1));
}

int func_245(int iParam0, bool bParam1){
var uVar0;
bool bVar1;
int iVar2;
bVar1=false;
while (bVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_9(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_87(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}

int func_246(int iParam0){
int iVar0;
if(func_253()){
iVar0=0;
while (iVar0 < 60){
if(func_159(iVar0)==iParam0){
if(func_247(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_247(int iParam0){
return func_248(iParam0, 6, 1);
}

int func_248(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_252()==0){
return MISC::IS_BIT_SET(func_249(func_251(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_249(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_250(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_250(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_89();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_251(int iParam0){
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

int func_252(){
return Global_32163;
}


bool func_253(){
return Global_100733.f_388 > 0;
}

int func_254(int iParam0, var uParam1){
int iVar0;
bool bVar1;
if(!func_264(iParam0, uParam1)){
return 1;
}
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==0){
if(!func_262(iParam0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
if(func_257(&iParam0, bVar1)){
}else{
return 1;
}}else{
return 1;
}}elseif(iVar0 >=3){
return 1;
}elseif(func_255(iParam0)){}
return 0;
}

int func_255(int iParam0){
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
func_256(iParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_256(int iParam0){
int iVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}}}
if(!MISC::IS_BIT_SET(iVar0, 16)){
MISC::SET_BIT(&iVar0, 16);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
}}

int func_257(int iParam0, bool bParam1){
func_261();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0)){
Global_1949998.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
if(Global_1949998.f_11 < 0f){
Global_1949998.f_11=0f;
}}
func_259(*iParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
Global_1949998.f_1.f_2=(Global_1949998.f_1.f_2 - Global_1949998.f_11);
if(Global_1949998.f_4.f_2 < 0f){
Global_1949998.f_12=1;
}
Global_1949998.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("comet4")){
Global_1949998.f_13=255;
}
if(Global_1949998.f_12){
if(func_258(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)){
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
if(((Global_1949998.f_23==0 && func_258(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)) || Global_1949998.f_23 !=0) && ((Global_1949998.f_24==0 && func_258(iParam0, bParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13)) || Global_1949998.f_24 !=0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577913=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577913=MISC::GET_GAME_TIMER();
}
return 1;
}}
return 0;
}


bool func_258(var uParam0, bool bParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8){
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(bParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_259(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
if(((!func_260(Global_1950024, 0f, 0f, 0f, 0) && !func_260(Global_1950027, 0f, 0f, 0f, 0)) && !func_260(Global_1950030, 0f, 0f, 0f, 0)) && !Global_1950033==0f){
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


bool func_260(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_261(){
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

int func_262(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_263(iParam0)){
return 1;
}}
return 0;
}

int func_263(int iParam0){
int iVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
return MISC::IS_BIT_SET(iVar0, 16);
}}}
return 0;
}

int func_264(int iParam0, var uParam1){
bool bVar0;
bool bVar1;
if(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
bVar0=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
}else{
bVar0=func_64();
}
bVar1=false;
if(bVar0==PLAYER::PLAYER_ID()){
if(func_275(15, 0)){
bVar1=true;
}elseif(func_271(1)){
bVar1=true;
}}else{
bVar1=true;
}
if(((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || bVar0==func_64()) || !func_9(bVar0, 0, 0)) || !bVar1) || func_265(iParam0)){
return 0;
}
return 1;
}

int func_265(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
if(func_267(PLAYER::PLAYER_ID())==3){
if(func_266(iParam0) !=-1){
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

int func_266(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_267(bool bParam0){
if(func_270(bParam0)==233){
return func_268(bParam0);
}
return -1;
}

int func_268(bool bParam0){
if(func_269(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_269(bool bParam0, int iParam1){
if(Global_1894573[bParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_270(bool bParam0){
if(func_269(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_33;
}
return -1;
}


bool func_271(bool bParam0){
return func_272(PLAYER::PLAYER_ID(), bParam0);
}

int func_272(bool bParam0, bool bParam1){
return func_273(bParam0, bParam1, 1);
}

int func_273(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_64()){
return 0;
}
if(!bParam1){
if(func_274(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_64() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_274(bool bParam0, int iParam1){
if(bParam0 !=func_64()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_64()){
if(Global_1894573[bParam0 /*608*/].f_10==bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_275(int iParam0, bool bParam1){
var uVar0;
int iVar1;
if(bParam1){
if(iParam0==15){
return 1;
}}
if(func_280(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return 1;
break;
}}
uVar0=func_277(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_276(iVar1));
}

int func_276(int iParam0){
return (iParam0 % 32);
}

int func_277(int iParam0){
int iVar0;
iVar0=func_249(func_278(iParam0), -1, 0);
return iVar0;
}

int func_278(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_279(iVar0);
switch (iVar1){
case 0:
return 1291;
break;
}
return 1291;
}

int func_279(int iParam0){
return (iParam0 / 32);
}

int func_280(bool bParam0){
if(bParam0 !=func_64()){
if(func_281(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10==bParam0){
return 1;
}}
return 0;
}

int func_281(bool bParam0){
if(bParam0 !=func_64()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_282(Global_2657589[bParam0 /*466*/].f_321.f_7)==22;
}}}
return 0;
}

int func_282(int iParam0){
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


void func_283(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_285(iParam1);
func_284(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uVar0);
}


bool func_284(int iParam0, var uParam1){
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

int func_285(int iParam0){
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

int func_286(int iParam0, int iParam1, int iParam2){
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
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_287()) && Global_1576216){
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 13;
}}
return 0;
}

int func_287(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_288() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_288(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_289(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_290(int iParam0, var uParam1){
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

int func_291(int iParam0){
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


void func_292(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_313(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_312(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_312(iVar6));
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
if(func_310(uParam1->f_5) || func_310(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_309(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_308()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_307(uParam1->f_66)){
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
func_306(iParam0, uParam1->f_69);
}}else{
func_306(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_298(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_312(iVar7 + 1))){
if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 0);
}}elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 1);
}
iVar7++;
}}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("le7b")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0)==-1){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, 0);
}}
if(((func_293() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
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

int func_293(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_297(7)){
if(func_295(Global_2672505.f_4.f_16) || func_294(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_294(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_295(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return func_296(bParam0, 9);
}
return 0;
}


var func__296(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_297(int iParam0){
return func_4(&(Global_2672505.f_184), iParam0);
}

int func_298(int iParam0, var uParam1, var uParam2){
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
}elseif(func_304(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_303(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_301(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_301(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_300(iParam0);
if(func_299(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_299(int iParam0){
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


void func_300(var uParam0){
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

int func_301(int iParam0, int iParam1){
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
iVar0=func_302(iParam0, 38) + 1;
iVar1=func_302(iParam0, 24) + 1;
fVar2=(to_float(iParam1 + 1) / to_float(iVar0));
iVar3=(floor((to_float(iVar1) * fVar2)) - 1);
if(iVar3 < 0){
iVar3=0;
}
if(iVar3 >=iVar0){
iVar3=(iVar0 - 1);
}
return iVar3;
}
return 0;
}

int func_302(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_304(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_303(int iParam0, int iParam1){
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

int func_304(int iParam0, int iParam1, int iParam2){
if(!func_305() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_305(){
return 0;
}


void func_306(int iParam0, var uParam1){
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

int func_307(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


bool func_308(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_309(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(iVar0, 4);
}}}
return 0;
}

int func_310(int iParam0){
if(!func_305() && func_311(iParam0)){
return 1;
}
return 0;
}

int func_311(int iParam0){
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

int func_312(int iParam0){
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

int func_313(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_314(PLAYER::PLAYER_ID(), -1)){
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
if(func_267(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_266(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_314(bool bParam0, int iParam1){
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

int func_315(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13){
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
func_316(Param2, fParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_316(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_317(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_317(bool bParam0, struct<3> Param1, int iParam2){
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


void func_318(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_337(&(Global_77348.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77348.f_555[0 /*21*/], iParam2) <=fParam1){
func_319(iVar0);
}}
iVar0++;
}}


void func_319(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_337(&(Global_77348.f_555[0 /*21*/]), iParam0)){
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
if(((((iParam0==24 && func_336(iParam0, 0)) && Global_78257.f_66==0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] !=0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3) && (!func_323(0, Global_77348.f_555[0 /*21*/].f_12) || !func_323(1, Global_77348.f_555[0 /*21*/].f_12))){
func_322(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), &Global_78257);
Global_78335=Global_113648.f_32751.f_5591;
}
func_320(iParam0, 0);
}}}


void func_320(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_336(iParam0, 0)){
func_321(iParam0, 1, 0);
func_321(iParam0, 2, 0);
func_321(iParam0, 3, 0);
func_321(iParam0, 4, 0);
func_321(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_321(iParam0, 0, 0);
}}


void func_321(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}}


void func_322(var uParam0, var uParam1){
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

int func_323(int iParam0, int iParam1){
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
if(iParam0 < 0 || iParam0 >=func_335(&(Global_113648.f_32751.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_324(Global_113648.f_32751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_324(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_334()){
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
if((((!func_333() && !func_332()) && !func_331()) && !func_330()) && !func_334()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_329() || MISC::IS_PC_VERSION()) || func_328()){
}elseif(!func_331()){
return 0;
}}
if(bParam1){
if(!func_327(iParam0, iParam2)){
return 0;
}}
if(!func_325(iParam0)){
return 0;
}
return 1;
}

int func_325(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_326()){
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

int func_326(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_327(int iParam0, int iParam1){
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


bool func_328(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


bool func_329(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_330(){
return 0;
}

int func_331(){
return 1;
}

int func_332(){
return 1;
}

int func_333(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_334(){
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

int func_335(var uParam0){
return *uParam0;
}

int func_336(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

int func_337(var uParam0, int iParam1){
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
uParam0->f_4=func_338(0, 1);
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
uParam0->f_4=func_338(0, 1);
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
uParam0->f_4=func_338(1, 1);
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
uParam0->f_4=func_338(1, 2);
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
uParam0->f_4=func_338(1, 1);
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
uParam0->f_4=func_338(1, 2);
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
uParam0->f_4=func_338(2, 1);
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
uParam0->f_4=func_338(2, 1);
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
uParam0->f_4=func_338(2, 1);
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
if(func_334()){
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
if(func_334()){
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
if(!func_260(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_260(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_260(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_338(int iParam0, int iParam1){
struct<82> Var0;
if(func_340(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_339(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_339(int iParam0, var uParam1, int iParam2){
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


bool func_340(int iParam0){
return iParam0 < 3;
}


bool func_341(int iParam0, var uParam1, var uParam2){
struct<35> Var0;
func_482(1);
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_38);
Var0={
StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal 
};
return func_342(Local_151.f_780.f_1[iParam0 /*15*/].f_4, Local_151.f_780.f_1[iParam0 /*15*/].f_4, Local_151.f_780.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_342(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6){
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
if(!func_466()){
return 0;
}
if(func_465() && !Global_2635559.f_680==MISC::GET_FRAME_COUNT()){
if(!Global_2635559.f_676==0){
Global_2635559.f_676=0;
func_464();
func_463();
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_675){
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) < func_462(0)){
return 0;
}else{
Global_2635559.f_676=0;
}}}else{
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_677) > 30000){
Global_2635559.f_676=0;
}
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) > func_462(1)){
Global_2635559.f_676=0;
}}}
if(uParam6->f_6){
if(func_456(Param0)){
if(func_455(&Param0, 1)){
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
func_454();
func_464();
if(!uParam6->f_27 || (((((((((func_453(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2793046.f_936) && !Global_2793046.f_925) && !Global_2793046.f_933) && !Global_2793046.f_937) && !Global_2793046.f_954) && !Global_2793046.f_966) && !Global_2793046.f_938) && !Global_2793046.f_988)){
func_434(Param0, iParam2);
}
if(func_420(Param0)){
func_434(Param0, iParam2);
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
if(((uParam6->f_3 && func_84(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_418(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0)){
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
func_362(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var5);
}
func_360(Global_2635559.f_683, Global_2635559.f_686, iParam2, &(Global_2635559.f_673));
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
if(func_359(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 1036831949)){
Global_2635559.f_676=4;
Global_2635559.f_700=NETWORK::GET_NETWORK_TIME_ACCURATE();
}else{
bVar0=true;
}
}
else{
bVar0=true;
}}else{
func_357(Global_2635559.f_683, 0);
func_356(-1);
}}else{
Global_2635559.f_671=0;
Global_2635559.f_672=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_678) > 3000){
func_356(-1);
}
break;
case 4:
if(uParam6->f_12 && !uParam6->f_11){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_700) < 10000){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_699)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635559.f_699)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635559.f_699)){
if(func_355(Global_2635559.f_683, Global_2635559.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_344(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 0, 0, 0, 1, 0)){
func_357(Global_2635559.f_683, 0);
func_356(-1);
}else{
bVar0=true;
}}else{
func_357(Global_2635559.f_683, 0);
func_356(-1);
}
}}else{
func_356(-1);
}}else{
func_356(1);
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
func_362(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var6);
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
func_343(1);
return 1;
}
return 0;
}


void func_343(bool bParam0){
Global_2635559.f_676=0;
func_454();
func_464();
if(bParam0){
func_463();
}}

int func_344(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
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
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_86(bVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_94(bVar1)){
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
if(func_354(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_345(func_91(bVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_345(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_353(iParam3, 1008981770)){
func_346(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_346(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_352(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_347(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
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


void func_347(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_350(iParam0);
if(iVar0 !=0){
func_348(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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


void func_348(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_349(iParam0, &Global_1577994);
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


void func_349(int iParam0, var uParam1){
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

int func_350(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_351(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_351(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


void func_352(var uParam0, struct<3> Param1){
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


float func_353(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_347(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}

int func_354(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_345(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_346(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_346(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)){
return 1;
}
return 0;
}

int func_355(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar1=iVar0;
if(func_9(bVar1, 0, 1) && func_9(bParam3, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(func_345(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_345(func_91(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(func_345(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_9(bVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(func_345(func_91(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_356(int iParam0){
if(Global_2635559.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_681) < 30000){
if(iParam0==-1 || (iParam0 > -1 && Global_2635559.f_682 < iParam0)){
Global_2635559.f_676=2;
}else{
Global_2635559.f_676=5;
}}else{
Global_2635559.f_676=5;
}}


void func_357(struct<3> Param0, int iParam1){
struct<3> Var0;
if(iParam1==0 && func_358(Param0, 0.01f)){
return;
}
if(iParam1 < 30 && vmag(Param0) > 0f){
Var0={
Global_2635559.f_2737[iParam1 /*3*/] 
};
Global_2635559.f_2737[iParam1 /*3*/]={
Param0 
};
func_357(Var0, iParam1 + 1);
}}

int func_358(struct<3> Param0, float fParam1){
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

int func_359(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
float fVar4;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 0;
}else{
func_464();
iVar3=0;
while (iVar3 < 3){
if(Global_2635559.f_687[iVar3]==-1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_346(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
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


void func_360(struct<3> Param0, var uParam1, int iParam2, var uParam3){
struct<8> Var0;
*uParam3=func_361(&Param0, &uParam1, &iParam2);
Var0.f_0=1556360603;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=uParam1;
Var0.f_6=iParam2;
Var0.f_7=*uParam3;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_245(1, 1));
}

int func_361(var uParam0, var uParam1, var uParam2){
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


void func_362(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635559.f_1754 > 0){
iVar0=0;
while (func_413(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_363(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_363(var uParam0, var uParam1, var uParam2){
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
if(func_409(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_404(uParam0, 1)){
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
if(func_350(uParam2->f_34) !=0){
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
if(!func_397(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_394(Var1)){
Var1={
func_389(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_388(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_384(Var1, uParam2)){
if((uParam2->f_48 && !func_404(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_383(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_409(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_382(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_84(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_84(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_344(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_372(Var1, uParam2->f_54, &fVar23);
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
func_371(Var1, fVar2, iVar14);
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
if(func_384(Var1, uParam2)){
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
func_369(0, uParam2);
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
func_368(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
if(func_409(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_404(&Var27, bVar29)){
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
func_364(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643122.f_164=iVar6;
}
return 0;
}


void func_364(var uParam0, var uParam1, var uParam2, struct<3> Param3){
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
if(!func_365(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
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

int func_365(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4){
if(func_367(Param0, fParam1, bParam2, iParam3, 0) || func_366(Param0, bParam2, iParam4)){
return 1;
}
return 0;
}

int func_366(struct<3> Param0, bool bParam1, int iParam2){
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
if(func_345(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
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

int func_367(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4){
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
}}elseif(vdist(func_91(bVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_9(bVar1, 0, 1)){
if(vdist(func_91(bVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_368(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_389(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_394(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_369(int iParam0, var uParam1){
if(!func_384(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=(Global_2643122.f_162 - 1);
func_370(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163){
func_369(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_369(iParam0 + 1, uParam1);
}}


void func_370(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_371(struct<3> Param0, float fParam1, int iParam2){
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
func_371(Var0, uVar1, iParam2 + 1);
}}}

int func_372(struct<3> Param0, float fParam1, float fParam2){
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
if(func_373(bVar3)){
Var1={
func_91(bVar3) 
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

int func_373(bool bParam0){
if(func_9(bParam0, 0, 1)){
if(!func_380(bParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam0)){
if(!PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_377(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_374(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_377(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_94(bParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_374(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_375(iParam0, bVar0, iParam1, bVar1) || !func_375(iParam1, bVar1, iParam0, bVar0)){
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

int func_375(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_9(iVar1, 1, 1) || func_87(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_376(iVar1)){
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


var func__376(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_377(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_378(bParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[bParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_378(int iParam0){
return func_379(iParam0);
}


var func__379(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_380(bool bParam0){
if(func_87(bParam0, 0)){
return 1;
}
if(func_381()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_381(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_382(struct<3> Param0, float fParam1, int iParam2){
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
if(func_354(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
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
if(func_354(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_383(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
if(func_355(Param0, fParam1, iParam2, bParam3, iParam4) || func_418(Param0, fParam1, iParam2, bParam3, iParam5)){
return 1;
}
return 0;
}

int func_384(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_387(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_385(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
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

int func_385(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_386(&Param1, &Param2);
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


void func_386(var uParam0, var uParam1){
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


bool func_387(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
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

int func_388(struct<3> Param0, float fParam1){
int iVar0;
if(func_377(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_39172 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_39172){
if(Global_4980736.f_39173[iVar0 /*148*/].f_7 !=0){
if(func_345(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_5991 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_5991){
if(Global_4980736.f_5994[iVar0 /*492*/].f_15 !=0){
if(func_345(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_84915 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[iVar0 /*499*/].f_12 !=0){
if(func_345(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[iVar0], 0)){
if(func_345(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[iVar0], 0)){
if(func_345(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}


Vector3 func__389(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
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
if(!func_392(Param0, *uParam1, Param4)){
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
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_391(Param0)){
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
fVar7=(4.2f * to_float(iVar4));
}
if(bVar9){
if(iVar4 > 2){
fVar7=(fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
}}elseif(iVar4 > 1){
fVar7=(fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
}}else{
if(bVar9){
fVar7=(4.2f * (to_float(iVar5) * 0.5f));
}else{
fVar7=(4.2f * to_float(iVar5));
}
if(bVar9){
if(iVar5 > 2){
fVar7=(fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
}}elseif(iVar5 > 1){
fVar7=(fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
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
fVar10=func_390(iParam7, 3.5f);
}else{
fVar10=func_390(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_392(Param0, *uParam1, Param4)){
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
fVar10=func_390(iParam7, 3.5f);
}else{
fVar10=func_390(iParam7, 1.5f);
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


float func_390(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_347(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_391(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_392(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_352(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_393(Var1, Var0) >=0f){
return 1;
}
return 0;
}


float func_393(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_394(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_396(Param0);
iVar0=0;
while (iVar0 < Global_2642829[iVar1]){
if(func_395(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642829[8]){
if(func_395(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_395(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_396(struct<2> Param0, var uParam1){
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

int func_397(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_403(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_402(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
if(func_398(Var1, &uVar0) || func_403(Var1)){
Var1={
*uParam0 
};
func_402(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_398(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_401()){
return 0;
}
iVar1=func_400();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635559.f_368[iVar0 /*12*/].f_9==1){
if(func_399(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_399(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_387(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_385(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_400(){
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


bool func_401(){
return Global_1950108.f_528;
}


void func_402(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
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
func_352(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_352(&Var0, 0f, 0f, fParam5);
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

int func_403(struct<3> Param0){
float fVar0;
if(Global_2635559.f_596 > 0f){
fVar0=vdist(Param0, Global_2635559.f_593);
if(fVar0 < Global_2635559.f_596){
return 1;
}}
return 0;
}


bool func_404(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_387(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_385(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0)){
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
func_405(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}


Vector3 func__405(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_402(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_408(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_406(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_387(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_385(Var1, Param1, Param2, 0, 0)){
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


void func_406(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
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
func_407(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_393(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_393(Var2, Var1) >=0f){
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
func_407(0f, 0f, 1f, Var0) 
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
func_407(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_393(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_393(Var2, Var11) >=0f){
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


Vector3 func__407(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_408(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
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

int func_409(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_456(Param0)){
if(func_412(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_410(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_358(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_402(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_410(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_398(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_411(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_398(Var2, &uVar1) || func_403(Var2)){
Var2={
*uParam0 
};
func_411(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}


void func_411(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_405(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_405(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_405(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_402(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_408(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_406(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}

int func_412(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16)){
if(func_399(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0)){
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
func_411(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_412(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_411(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_413(var uParam0, var uParam1, var uParam2){
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
if(func_409(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_404(uParam0, 1)){
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
func_416(*uParam0);
}elseif(uParam2->f_29){
func_415();
}else{
func_414();
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
if((uParam2->f_12 && !func_383(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_409(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_382(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_84(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_84(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_344(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_372(Var3, uParam2->f_54, &fVar12);
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
func_371(Var3, fVar4, iVar5);
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
func_369(0, uParam2);
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


void func_414(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}}


void func_415(){
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


void func_416(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635559.f_1754){
uVar1=func_417(Param0, fVar0, &fVar0);
Global_2635559.f_2160[iVar2]=uVar1;
iVar2++;
}}

int func_417(struct<3> Param0, float fParam1, float fParam2){
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

int func_418(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_419(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_354(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
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

int func_419(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_353(iParam1, 1008981770);
fVar1=func_353(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_420(struct<3> Param0){
var uVar0;
if(Global_2793046.f_936 && func_421(Param0, &uVar0)){
return 1;
}
return 0;
}

int func_421(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
*iParam1=-1;
iVar2=func_433(Param0, 0);
if(!iVar2==-1){
iVar0=83;
while (iVar0 <=87){
iVar1=iVar0;
if(func_422(iVar1)){
if(func_433(Global_1950108.f_542[iVar0 /*3*/], 0)==iVar2){
*iParam1=iVar0 + 1000;
return 1;
}}
iVar0++;
}}
return 0;
}

int func_422(int iParam0){
int iVar0;
int iVar1;
iVar0=func_432(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_293==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_64()){
if(Global_1853910[iVar1 /*862*/].f_267.f_293==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
if(func_431(PLAYER::PLAYER_ID(), 0) || (func_428(PLAYER::PLAYER_ID()) && func_282(func_427(PLAYER::PLAYER_ID()))==12)){
return 1;
}
if(func_426(PLAYER::PLAYER_ID()) || (func_428(PLAYER::PLAYER_ID()) && func_282(func_427(PLAYER::PLAYER_ID()))==8)){
return 1;
}
if(func_425(PLAYER::PLAYER_ID()) || (func_428(PLAYER::PLAYER_ID()) && func_282(func_427(PLAYER::PLAYER_ID()))==5)){
return 1;
}
if(func_424(PLAYER::PLAYER_ID()) || (func_428(PLAYER::PLAYER_ID()) && func_282(func_427(PLAYER::PLAYER_ID()))==10)){
return 1;
}
if(func_423(PLAYER::PLAYER_ID()) || (func_428(PLAYER::PLAYER_ID()) && func_282(func_427(PLAYER::PLAYER_ID()))==6)){
return 1;
}
return 0;
}

int func_423(bool bParam0){
if(bParam0 !=func_64()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_282(Global_2657589[bParam0 /*466*/].f_321.f_7)==6;
}}}
return 0;
}

int func_424(bool bParam0){
if(bParam0 !=func_64()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_282(Global_2657589[bParam0 /*466*/].f_321.f_7)==10;
}}}
return 0;
}

int func_425(bool bParam0){
if(bParam0 !=func_64()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_64()){
return func_282(Global_2657589[bParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_426(bool bParam0){
if(bParam0 !=func_64()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_64()){
return func_282(Global_2657589[bParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_427(bool bParam0){
if(bParam0 !=func_64() && func_9(bParam0, 1, 1)){
return Global_2657589[bParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_428(bool bParam0){
if(bParam0 !=func_64() && func_9(bParam0, 1, 1)){
if(func_430(bParam0) && !func_429(bParam0)){
return 1;
}}
return 0;
}

int func_429(int iParam0){
if(iParam0 !=func_64() && func_9(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 4);
}
return 0;
}

int func_430(int iParam0){
if(iParam0 !=func_64() && func_9(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_431(bool bParam0, bool bParam1){
int iVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("terbyte")){
return 1;
}}}
if(bParam0 !=func_64()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_64()){
return func_282(Global_2657589[bParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_432(int iParam0){
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

int func_433(struct<3> Param0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1 || iParam1==0){
if(func_399(Param0, &(Global_2640505[iVar0 /*17*/]), 0.1f, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_434(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2[3];
int iVar3[3];
if(Global_2635559.f_45.f_319){
return;
}
if(!func_452()){
if(iParam1==0){
}
iVar1=func_451(Param0);
if(iVar1 > -1){
func_463();
switch (iVar1){
case 0:
func_450(-1139.678f, -2694.165f, 12.949f, 283.4298f);
func_450(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
func_450(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
func_450(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
func_450(-1110.51f, -2693.236f, 12.9595f, 298.84f);
func_450(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
func_450(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
func_450(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
func_450(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
break;
case 1:
func_450(-1411.731f, -533.6462f, 30.2703f, 215.116f);
func_450(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
func_450(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
func_450(-1438.8f, -584.4678f, 29.595f, 118.1207f);
break;
case 2:
func_450(-780.5905f, 292.8159f, 84.673f, 97.2697f);
func_450(-788.6147f, 291.8073f, 84.72f, 97.7348f);
func_450(-765.572f, 294.4459f, 84.5182f, 93.9327f);
func_450(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
break;
case 3:
func_450(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
func_450(-647.239f, 49.2068f, 40.7135f, 355.9723f);
func_450(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
func_450(-610.5603f, 5.1258f, 41.2404f, 98.696f);
break;
case 4:
func_450(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
func_450(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
func_450(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
func_450(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
break;
case 5:
func_450(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
func_450(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
func_450(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
func_450(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
break;
case 6:
func_450(-58.1347f, -573.486f, 36.5789f, 341.8442f);
func_450(-64.227f, -590.2214f, 35.1654f, 338.972f);
func_450(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
func_450(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
break;
case 7:
func_450(-232.1917f, -978.1431f, 28.166f, 160.2115f);
func_450(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
func_450(-251.993f, -998.3963f, 28.3747f, 249.3297f);
func_450(-262.222f, -994.5226f, 29.23f, 249.4673f);
break;
case 8:
func_450(151.624f, -1309.343f, 28.2023f, 243.201f);
func_450(152.7886f, -1305.608f, 28.2023f, 243.9973f);
func_450(145.8017f, -1287.19f, 28.312f, 120.6275f);
func_450(142.8935f, -1282.286f, 28.3156f, 120.3024f);
break;
case 9:
func_450(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
func_450(-2322.187f, 277.638f, 168.4671f, 23.4249f);
func_450(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
func_450(-2314.396f, 290.9f, 168.4671f, 114.3983f);
func_450(-2316.81f, 296.424f, 168.4671f, 113.6228f);
func_450(-2318.572f, 299.2423f, 168.4671f, 293.83f);
func_450(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
func_450(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
func_450(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
func_450(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
func_450(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
func_450(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
break;
case 10:
func_448(78);
break;
case 11:
func_448(79);
break;
case 12:
func_448(82);
break;
case 13:
func_448(81);
break;
case 14:
func_448(73);
break;
case 15:
func_450(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_450(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_450(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_450(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 16:
func_448(75);
break;
case 17:
func_448(76);
break;
case 18:
func_448(77);
break;
case 19:
func_450(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
func_450(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
func_450(-931.6637f, 703.693f, 151.369f, 87.7447f);
func_450(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
break;
case 20:
func_448(80);
break;
case 21:
case 25:
func_448(87);
break;
case 22:
case 26:
func_448(88);
break;
case 23:
case 27:
func_448(89);
break;
case 24:
case 28:
func_448(90);
break;
case 29:
case 30:
if(func_447(iParam1)){
func_448(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
}
break;
case 31:
func_450(-352.53f, -1836.742f, 21.924f, 274.8f);
func_450(-336.412f, -1837.341f, 22.497f, 264.6f);
func_450(-320.707f, -1840.342f, 23.195f, 257.4f);
func_450(-304.646f, -1843.295f, 24.219f, 261.599f);
func_450(-288.991f, -1844.123f, 25.228f, 269.599f);
func_450(-273.031f, -1842.69f, 26.27f, 278.199f);
func_450(-361.271f, -1814.526f, 21.63f, 96.399f);
func_450(-343.939f, -1813.331f, 22.368f, 87.999f);
func_450(-326.881f, -1814.914f, 23.106f, 78.799f);
func_450(-310.941f, -1818.223f, 23.957f, 78.799f);
func_450(-294.16f, -1820.207f, 25.092f, 89.199f);
func_450(-277.392f, -1819.237f, 26.283f, 100.199f);
func_450(-257.213f, -1838.977f, 27.318f, 285.799f);
func_450(-261.286f, -1815.615f, 27.439f, 110.399f);
func_450(-246.086f, -1808.691f, 28.576f, 117.398f);
func_450(-231.901f, -1800.767f, 28.619f, 119.398f);
func_450(-199.77f, -1989.34f, 26.62f, 180.997f);
func_450(-201.159f, -1971.41f, 26.62f, 190.798f);
func_450(-205.571f, -1954.537f, 26.62f, 199.998f);
func_450(-197.879f, -1940.822f, 26.62f, 114.998f);
func_450(-141.311f, -1967.41f, 21.805f, 91.997f);
func_450(-141.145f, -1977.861f, 21.813f, 91.997f);
func_450(-140.565f, -1988.289f, 21.815f, 91.997f);
func_450(-145.045f, -2032.168f, 21.956f, 73.597f);
func_450(-147.923f, -2041.781f, 21.956f, 73.597f);
func_450(-185.791f, -1948.005f, 26.62f, 18.596f);
func_450(-181.155f, -1965.422f, 26.62f, 8.196f);
func_450(-179.172f, -1984.332f, 26.62f, 1.396f);
func_450(-225.88f, -1824.637f, 28.897f, 299.596f);
func_450(-211.722f, -1816.401f, 28.859f, 300.796f);
func_450(-217.99f, -1792.624f, 28.649f, 119.196f);
func_450(-203.828f, -1784.264f, 28.678f, 119.996f);
func_450(-194.254f, -2018.756f, 26.62f, 75f);
func_450(-186.956f, -2031.369f, 26.62f, 338f);
func_450(-194.916f, -2047.94f, 26.62f, 329.8f);
func_450(-205.565f, -2064.553f, 26.62f, 320.2f);
func_450(-218.606f, -2077.97f, 26.62f, 311.2f);
func_450(-233.372f, -2089.601f, 26.62f, 304f);
func_450(-207.822f, -2002.11f, 26.62f, 173.799f);
func_450(-207.567f, -2027.579f, 26.62f, 158.599f);
func_450(-215.235f, -2042.272f, 26.62f, 148.999f);
func_450(-227.643f, -2058.498f, 26.62f, 138.799f);
func_450(-242.977f, -2071.452f, 26.62f, 125.798f);
func_450(-256.624f, -2087.982f, 26.62f, 204.198f);
func_450(-249.549f, -2098.767f, 26.62f, 294.198f);
func_450(-228.998f, -2048.889f, 26.62f, 141.198f);
func_450(-176.963f, -2009.239f, 24.519f, 261.597f);
func_450(-195.128f, -1806.447f, 28.814f, 299.997f);
func_450(-180.02f, -1797.414f, 28.797f, 299.997f);
func_450(-165.796f, -1787.672f, 28.788f, 304.597f);
func_450(-188.124f, -1774.765f, 28.711f, 123.197f);
func_450(-417.428f, -1836.374f, 19.238f, 121.797f);
func_450(-430.967f, -1844.844f, 18.468f, 121.797f);
func_450(-444.94f, -1853.739f, 17.786f, 121.797f);
break;
}}elseif(func_444(Param0, &iVar2, &iVar3) || (func_421(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)))){
func_463();
iVar0=0;
while (iVar0 < iVar2){
if(iVar2[iVar0] > 1000){
iVar2[iVar0]=(iVar2[iVar0] - 1000);
iVar3[iVar0]=1;
}
if(iVar2[iVar0] >=83 && iVar2[iVar0] <=87){
Global_2635559.f_516=1;
}
if(!iVar3[iVar0] && func_443(iVar2[iVar0], -1)){
if(func_447(iParam1)){
func_448(iVar2[iVar0]);
}}elseif(iVar3[iVar0]){
if(((func_442(PLAYER::PLAYER_PED_ID()) || func_441(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)){
if(func_440(iParam1)){
func_439(iVar2[iVar0]);
}
elseif(func_438(iParam1)){
func_437(iVar2[iVar0]);
func_439(iVar2[iVar0]);
}
else{
func_437(iVar2[iVar0]);
func_439(iVar2[iVar0]);
}}else{
func_435(iVar2[iVar0], iParam1);
}}else{
func_448(iVar2[iVar0]);
}
iVar0++;
}}}}


void func_435(int iParam0, int iParam1){
switch (iParam0){
case 23:
func_450(434.1898f, 6535.824f, 27.0084f, 66.9998f);
func_450(434.9146f, 6539.661f, 26.9691f, 66.9998f);
func_450(435.1928f, 6543.298f, 26.889f, 66.9998f);
func_450(429.8495f, 6506.581f, 27.1807f, 59.7997f);
func_450(429.8463f, 6511.11f, 27.0717f, 60.9997f);
func_450(434.2748f, 6581.816f, 26.1303f, 85.1993f);
func_450(443.1016f, 6580.717f, 26.0739f, 85.1993f);
func_450(451.9748f, 6579.937f, 26.0319f, 85.1993f);
break;
case 26:
func_450(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
func_450(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
func_450(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
func_450(-142.1459f, 6342.532f, 30.49f, 44.7982f);
func_450(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
func_450(-151.1909f, 6358.461f, 30.4907f, 223.398f);
func_450(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
func_450(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
break;
case 24:
func_450(60.7522f, 6465.807f, 30.3941f, 213.3973f);
func_450(57.4131f, 6462.55f, 30.3663f, 213.3973f);
func_450(48.0438f, 6452.668f, 30.3245f, 213.3973f);
func_450(40.6765f, 6445.235f, 30.3475f, 213.3973f);
func_450(37.8298f, 6442.521f, 30.3489f, 213.3973f);
func_450(35.0212f, 6439.866f, 30.3332f, 213.3973f);
func_450(32.1837f, 6437.21f, 30.2991f, 213.3973f);
func_450(29.4732f, 6434.526f, 30.3702f, 213.3973f);
break;
case 25:
func_450(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
func_450(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
func_450(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
func_450(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
func_450(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
func_450(-360.983f, 6130.575f, 30.4401f, 45.7965f);
func_450(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
func_450(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
break;
case 22:
func_450(45.2181f, 6341.107f, 30.2296f, 14.3964f);
func_450(41.6057f, 6339.476f, 30.2306f, 14.3964f);
func_450(39.2508f, 6359.469f, 30.2398f, 207.3965f);
func_450(36.3203f, 6356.893f, 30.2398f, 207.3965f);
func_450(51.6043f, 6365.022f, 30.2399f, 33.5965f);
func_450(65.6465f, 6380.626f, 30.2398f, 212.9964f);
func_450(24.8587f, 6366.36f, 30.2286f, 32.7965f);
func_450(19.6254f, 6360.736f, 30.2305f, 32.7965f);
break;
case 28:
func_450(94.0245f, 181.2181f, 103.5566f, 160.3953f);
func_450(91.0039f, 182.2811f, 103.6179f, 160.3953f);
func_450(68.365f, 148.2105f, 103.5812f, 339.9951f);
func_450(62.2104f, 150.5185f, 103.6101f, 339.9951f);
func_450(69.5198f, 186.4278f, 103.9415f, 69.7949f);
func_450(62.59f, 189.0833f, 103.9981f, 69.7949f);
func_450(55.6095f, 191.8089f, 104.2827f, 69.7949f);
func_450(154.7309f, 182.1333f, 104.6903f, 160.1945f);
break;
case 31:
func_450(322.4916f, -714.5293f, 28.1574f, 158.5941f);
func_450(329.5591f, -694.4284f, 28.1656f, 158.5941f);
func_450(324.565f, -684.3934f, 28.3133f, 247.194f);
func_450(326.4054f, -679.9403f, 28.3192f, 247.194f);
func_450(297.1177f, -804.3891f, 28.4859f, 160.594f);
func_450(288.5461f, -814.6994f, 28.1563f, 163.194f);
func_450(286.0127f, -821.7357f, 28.3093f, 163.194f);
func_450(283.6725f, -828.9533f, 28.1247f, 158.994f);
break;
case 29:
func_450(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
func_450(-1454.819f, -359.998f, 42.7885f, 311.3925f);
func_450(-1462.675f, -360.1352f, 42.9255f, 223.392f);
func_450(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
func_450(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
func_450(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
func_450(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
func_450(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
break;
case 30:
func_450(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
func_450(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
func_450(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
func_450(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
func_450(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
func_450(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
func_450(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
func_450(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
break;
case 27:
func_450(1414.237f, -1656.344f, 60.2449f, 332.7893f);
func_450(1416.668f, -1659.933f, 60.6982f, 332.7893f);
func_450(1419.327f, -1663.972f, 61.2382f, 332.7893f);
func_450(1421.557f, -1667.367f, 61.7479f, 332.7893f);
func_450(1423.744f, -1670.853f, 62.3125f, 332.7893f);
func_450(1412.157f, -1652.746f, 59.9105f, 332.7893f);
func_450(1426.201f, -1673.598f, 62.7133f, 330.1893f);
func_450(1435.804f, -1694.73f, 65.0743f, 352.5892f);
break;
case 33:
func_450(2810.787f, 4435.92f, 47.5295f, 20.7996f);
func_450(2808.413f, 4443.922f, 47.3732f, 14.7995f);
func_450(2806.298f, 4451.786f, 47.1865f, 15.3995f);
func_450(2803.925f, 4459.858f, 46.9823f, 15.3995f);
func_450(2801.756f, 4467.755f, 46.8147f, 15.3995f);
func_450(2893.563f, 4430.258f, 47.338f, 105.9994f);
func_450(2903.725f, 4425.854f, 47.3523f, 23.1992f);
func_450(2907.076f, 4418.059f, 47.6301f, 23.1992f);
break;
case 36:
func_450(1680.448f, 4821.131f, 41.0599f, 186.399f);
func_450(1679.76f, 4829.447f, 40.9167f, 186.399f);
func_450(1678.668f, 4838.03f, 41.0221f, 187.7989f);
func_450(1677.612f, 4846.028f, 41.0452f, 187.7989f);
func_450(1675.851f, 4860.434f, 41.0901f, 187.7989f);
func_450(1674.843f, 4868.343f, 41.0684f, 187.7989f);
func_450(1673.543f, 4875.752f, 41.0684f, 186.7986f);
func_450(1672.525f, 4884.972f, 41.0478f, 186.7986f);
break;
case 34:
func_450(422.863f, 3583.901f, 32.2386f, 313.5986f);
func_450(426.6211f, 3583.208f, 32.2386f, 313.5986f);
func_450(430.466f, 3582.042f, 32.2386f, 313.5986f);
func_450(434.2751f, 3580.881f, 32.2386f, 313.5986f);
func_450(438.1525f, 3579.911f, 32.2386f, 313.5986f);
func_450(442.0173f, 3578.948f, 32.2386f, 313.5986f);
func_450(420.2694f, 3572.995f, 32.2385f, 353.7984f);
func_450(424.4825f, 3572.1f, 32.2386f, 348.1984f);
break;
case 35:
func_450(627.005f, 2726.019f, 40.7692f, 4.3984f);
func_450(620.9771f, 2725.759f, 40.7897f, 4.3984f);
func_450(614.8536f, 2725.355f, 40.8321f, 4.3984f);
func_450(611.1158f, 2737.387f, 40.9734f, 185.3984f);
func_450(598.9713f, 2736.261f, 41.0602f, 186.5986f);
func_450(592.6151f, 2735.886f, 41.0602f, 186.5986f);
func_450(586.0421f, 2735.9f, 41.0535f, 186.5986f);
func_450(627.4468f, 2742.742f, 40.8963f, 183.5979f);
break;
case 32:
func_450(214.3318f, 2492.26f, 53.9736f, 312.7978f);
func_450(213.9953f, 2496.666f, 53.8128f, 312.7978f);
func_450(213.7524f, 2501.251f, 53.5958f, 312.7978f);
func_450(213.6645f, 2505.908f, 53.3477f, 312.7978f);
func_450(213.4478f, 2510.734f, 53.1055f, 312.7978f);
func_450(212.9148f, 2515.268f, 52.9376f, 312.7978f);
func_450(211.5983f, 2519.216f, 52.6753f, 312.7978f);
func_450(210.1288f, 2523.187f, 52.3493f, 312.7978f);
break;
case 38:
func_450(153.6785f, -2476.192f, 4.9877f, 178.4004f);
func_450(150.9209f, -2516.979f, 4.9909f, 179.9999f);
func_450(150.9499f, -2524.965f, 4.9905f, 179.9999f);
func_450(153.866f, -2467.242f, 4.9877f, 178.4004f);
func_450(150.8115f, -2533.139f, 4.9895f, 180.0004f);
func_450(153.8647f, -2433.386f, 5.2336f, 170.2002f);
func_450(142.7427f, -2536.147f, 5f, 205.0002f);
func_450(138.8267f, -2535.865f, 5f, 205.0002f);
break;
case 41:
func_450(-341.4255f, -2734.451f, 5.0413f, 314.8f);
func_450(-334.0134f, -2741.43f, 5.0269f, 314.8f);
func_450(-329.7832f, -2745.604f, 5.0196f, 314.8f);
func_450(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
func_450(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
func_450(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
func_450(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
func_450(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
break;
case 39:
func_450(1143.73f, -3105.091f, 4.8989f, 146.1979f);
func_450(1140.009f, -3104.954f, 4.8985f, 146.1979f);
func_450(1136.267f, -3104.69f, 4.8969f, 146.1979f);
func_450(1132.732f, -3104.277f, 4.8944f, 146.1979f);
func_450(1128.724f, -3104.54f, 4.896f, 146.1979f);
func_450(1125.106f, -3104.057f, 4.8942f, 146.1979f);
func_450(1117.8f, -3103.674f, 4.8922f, 146.1979f);
func_450(1114.015f, -3103.448f, 4.8931f, 146.1979f);
break;
case 40:
func_450(653.1188f, -2700.255f, 5.2101f, 24.7971f);
func_450(656.1305f, -2707.245f, 5.214f, 24.7971f);
func_450(659.3307f, -2714.378f, 5.2188f, 22.7968f);
func_450(662.2627f, -2722.228f, 5.2188f, 19.1968f);
func_450(649.2115f, -2728.359f, 5.1124f, 20.5967f);
func_450(646.2606f, -2720.833f, 5.1103f, 21.3967f);
func_450(643.4582f, -2713.846f, 5.1099f, 21.3967f);
func_450(640.3513f, -2706.571f, 5.108f, 21.3967f);
break;
case 37:
func_450(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
func_450(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
func_450(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
func_450(-238.214f, -2614.847f, 5.0502f, 271.5953f);
func_450(-238.013f, -2630.961f, 5.0331f, 271.3949f);
func_450(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
func_450(-253.401f, -2631.108f, 5.0319f, 272.195f);
func_450(-245.5563f, -2631.06f, 5.0323f, 272.195f);
break;
case 83:
func_450(-1190.795f, -3371.393f, 12.945f, 348.399f);
func_450(-1185.634f, -3373.893f, 12.945f, 348.399f);
func_450(-1114.818f, -3414.185f, 12.945f, 314.199f);
func_450(-1110.976f, -3416.37f, 12.945f, 314.199f);
func_450(-1098.621f, -3460.792f, 12.9453f, 329.799f);
func_450(-1093.31f, -3463.464f, 12.9453f, 329.799f);
func_450(-1089.433f, -3443.234f, 12.945f, 329.799f);
func_450(-1084.271f, -3446.31f, 12.945f, 329.799f);
func_450(-1093.808f, -3452.407f, 12.9451f, 329.799f);
func_450(-1088.383f, -3455.466f, 12.9451f, 329.799f);
func_450(-1118.474f, -3411.385f, 12.9451f, 313.199f);
func_450(-1181.003f, -3375.658f, 12.945f, 346.799f);
func_450(-1212.071f, -3382.283f, 12.9451f, 328.999f);
func_450(-1217.708f, -3378.623f, 12.9451f, 328.999f);
func_450(-1216.986f, -3390.396f, 12.9452f, 328.999f);
func_450(-1222.566f, -3386.707f, 12.9452f, 328.999f);
func_450(-1222.06f, -3398.882f, 12.9452f, 328.999f);
func_450(-1227.698f, -3394.946f, 12.9451f, 328.999f);
func_450(-1097.517f, -3472.086f, 12.9453f, 328.999f);
func_450(-1102.951f, -3468.619f, 12.9452f, 328.999f);
func_450(-1227.253f, -3407.38f, 12.9452f, 328.999f);
func_450(-1232.836f, -3403.572f, 12.9452f, 328.999f);
break;
case 84:
func_450(-1364.879f, -3285.201f, 12.945f, 330.2f);
func_450(-1359.229f, -3288.52f, 12.945f, 330.2f);
func_450(-1369.636f, -3293.617f, 12.945f, 330.2f);
func_450(-1363.881f, -3296.796f, 12.945f, 330.2f);
func_450(-1432.898f, -3247.702f, 12.945f, 330.2f);
func_450(-1437.282f, -3255.429f, 12.945f, 330.2f);
func_450(-1441.623f, -3262.969f, 12.945f, 330.2f);
func_450(-1443.954f, -3251.006f, 12.945f, 330.2f);
func_450(-1374.159f, -3301.61f, 12.945f, 330.2f);
func_450(-1368.508f, -3304.924f, 12.945f, 330.2f);
func_450(-1359.905f, -3276.118f, 12.9448f, 330.4f);
func_450(-1354.228f, -3279.63f, 12.9448f, 330.4f);
func_450(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
func_450(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
func_450(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
func_450(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
func_450(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
func_450(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
func_450(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
func_450(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
func_450(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
func_450(-1444.064f, -3273.751f, 12.945f, 330.7996f);
break;
case 85:
func_450(-2060.105f, 3186.159f, 31.81f, 329.599f);
func_450(-2065.521f, 3189.007f, 31.81f, 150.199f);
func_450(-2055.006f, 3194.989f, 31.81f, 329.599f);
func_450(-2060.471f, 3197.816f, 31.81f, 150.199f);
func_450(-2049.611f, 3204.032f, 31.81f, 329.599f);
func_450(-2055.048f, 3206.958f, 31.81f, 150.199f);
func_450(-2049.627f, 3216.253f, 31.81f, 150.199f);
func_450(-2039.024f, 3222.121f, 31.81f, 329.599f);
func_450(-2044.17f, 3213.208f, 31.81f, 329.599f);
func_450(-2044.672f, 3224.638f, 31.81f, 150.199f);
func_450(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
func_450(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
func_450(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
func_450(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
func_450(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
func_450(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
func_450(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
func_450(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
func_450(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
func_450(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
func_450(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
func_450(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
break;
case 86:
func_450(-1843.828f, 3085.094f, 31.81f, 165.8f);
func_450(-1828.571f, 3084.114f, 31.841f, 329.2f);
func_450(-1823.414f, 3092.762f, 31.843f, 330f);
func_450(-1819.045f, 3100.435f, 31.845f, 330f);
func_450(-1833.313f, 3075.722f, 31.838f, 330f);
func_450(-1847.648f, 3076.8f, 31.835f, 165.8f);
func_450(-1838.479f, 3078.576f, 31.863f, 150.599f);
func_450(-1833.605f, 3086.784f, 31.863f, 150.599f);
func_450(-1828.424f, 3095.617f, 31.863f, 150.599f);
func_450(-1823.95f, 3102.821f, 31.862f, 150.599f);
func_450(-1819.284f, 3110.67f, 31.8615f, 150.2f);
func_450(-1814.545f, 3108.229f, 31.8476f, 330.6f);
func_450(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
func_450(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
func_450(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
func_450(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
func_450(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
func_450(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
func_450(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
func_450(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
func_450(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
func_450(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
break;
case 87:
func_450(-2538.561f, 3303.172f, 31.814f, 296.999f);
func_450(-2530.309f, 3307.445f, 31.816f, 296.999f);
func_450(-2521.733f, 3311.833f, 31.817f, 296.999f);
func_450(-2512.881f, 3316.428f, 31.819f, 296.999f);
func_450(-2502.952f, 3321.518f, 31.821f, 296.999f);
func_450(-2542.613f, 3310.728f, 31.814f, 296.999f);
func_450(-2534.195f, 3314.753f, 31.815f, 296.999f);
func_450(-2525.635f, 3318.97f, 31.817f, 296.999f);
func_450(-2516.674f, 3323.545f, 31.819f, 296.999f);
func_450(-2507.153f, 3328.454f, 31.82f, 296.999f);
func_450(-2547.689f, 3298.791f, 31.812f, 296.999f);
func_450(-2551.261f, 3306.304f, 31.8123f, 296.999f);
func_450(-2497.446f, 3333.296f, 31.821f, 296.999f);
func_450(-2494.089f, 3326.065f, 31.8218f, 296.999f);
func_450(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
func_450(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
func_450(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
func_450(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
func_450(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
func_450(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
func_450(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
func_450(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
break;
case 89:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(1284.416f, 2890.299f, 45.0276f, 336.3999f);
func_450(1273.248f, 2901.428f, 45.0426f, 338.3999f);
func_450(1262.945f, 2911.535f, 43.2959f, 341.9999f);
func_450(1272.094f, 2873.387f, 45.3443f, 328.5991f);
func_450(1259.785f, 2892.217f, 45.1126f, 339.9999f);
func_450(1231.279f, 2910.881f, 43.3085f, 12f);
func_450(1306.515f, 2839.475f, 46.8947f, 132.3996f);
func_450(1307.453f, 2825.276f, 45.1566f, 127.1998f);
func_450(1257.029f, 2872.157f, 45.9766f, 338.5992f);
func_450(1225.764f, 2930.095f, 41.6173f, 14.7999f);
}else{
func_450(1265.123f, 2836.949f, 47.1021f, 119.9996f);
func_450(1258.145f, 2831.643f, 46.4503f, 135.7993f);
func_450(1240.847f, 2828.721f, 46.4388f, 39.5992f);
func_450(1236.877f, 2835.49f, 46.3491f, 22.9991f);
func_450(1235.697f, 2843.403f, 46.0231f, 2.7991f);
func_450(1237.686f, 2850.607f, 45.5261f, 335.5991f);
func_450(1241.126f, 2858.816f, 45.0176f, 339.7991f);
func_450(1249.715f, 2810.588f, 47.2648f, 255.1992f);
func_450(1257.696f, 2808.609f, 47.014f, 266.1992f);
func_450(1265.577f, 2808.353f, 46.7598f, 277.199f);
func_450(1273.808f, 2808.484f, 46.3872f, 263.999f);
func_450(1282.535f, 2807.134f, 45.9705f, 250.7989f);
func_450(1290.168f, 2803.745f, 45.8005f, 238.7988f);
func_450(1296.445f, 2798.777f, 46.0903f, 228.9988f);
func_450(1302.041f, 2792.33f, 45.957f, 221.7987f);
func_450(1251.389f, 2825.818f, 45.9856f, 119.1982f);
func_450(1285.48f, 2819.238f, 45.044f, 228.3993f);
func_450(1293.023f, 2814.164f, 44.8859f, 233.399f);
func_450(1242.18f, 2814.153f, 47.7108f, 227.3991f);
func_450(1236.362f, 2819.623f, 47.6845f, 224.399f);
func_450(1231.532f, 2825.855f, 47.4649f, 210.5992f);
func_450(1228.177f, 2833.423f, 47.3171f, 197.5993f);
func_450(1243.095f, 2866.749f, 44.6219f, 353.7992f);
func_450(1307.346f, 2785.787f, 46.1136f, 219.9997f);
func_450(1300.752f, 2808.224f, 44.5688f, 228.9997f);
func_450(1306.571f, 2802.468f, 44.6275f, 224.1992f);
func_450(1244.465f, 2875.697f, 44.5839f, 353.7992f);
func_450(1312.441f, 2795.427f, 45.2701f, 218.5991f);
}
break;
case 90:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(14.4916f, 2660.726f, 79.0178f, 310.1999f);
func_450(3.855f, 2672.388f, 78.437f, 319.2f);
func_450(-7.057f, 2682.247f, 77.472f, 319.2f);
func_450(-14.041f, 2663.43f, 77.4221f, 319.2f);
func_450(41.8086f, 2597.059f, 81.3524f, 301.9997f);
func_450(60.2273f, 2609.745f, 79.5672f, 305.9998f);
func_450(34.0188f, 2659.723f, 78.9894f, 314.2f);
func_450(29.4879f, 2675.34f, 76.0202f, 314.2f);
func_450(19.0088f, 2686.16f, 75.6897f, 314.2f);
func_450(7.6101f, 2697.113f, 76.2923f, 314.2f);
}else{
func_450(50.6405f, 2633.902f, 79.4503f, 305.1998f);
func_450(46.2894f, 2639.951f, 79.9122f, 305.1998f);
func_450(55.3668f, 2627.773f, 79.6363f, 305.1998f);
func_450(59.9522f, 2620.408f, 80.0499f, 305.1998f);
func_450(42.1486f, 2646.073f, 80.108f, 305.1998f);
func_450(68.1481f, 2630.07f, 77.0725f, 305.1998f);
func_450(62.6048f, 2637.014f, 76.1722f, 305.1998f);
func_450(57.3543f, 2643.56f, 75.5301f, 305.1998f);
func_450(52.611f, 2649.698f, 76.1354f, 305.1998f);
func_450(74.5845f, 2640.475f, 72.602f, 305.1998f);
func_450(68.5462f, 2646.784f, 71.6298f, 305.1998f);
func_450(62.426f, 2652.977f, 71.7029f, 305.1998f);
func_450(79.5597f, 2650.835f, 68.668f, 305.1998f);
func_450(72.6035f, 2656.857f, 67.3294f, 305.1998f);
func_450(83.4156f, 2660.237f, 64.3198f, 305.1998f);
func_450(102.851f, 2688.009f, 51.732f, 224f);
func_450(109.815f, 2681.012f, 51.112f, 224f);
func_450(116.355f, 2674.26f, 50.529f, 224f);
func_450(125.138f, 2665.98f, 49.8f, 224f);
func_450(132.228f, 2659.865f, 49.26f, 228.4f);
func_450(139.354f, 2653.536f, 48.737f, 228.4f);
func_450(88.512f, 2702.995f, 53.042f, 224.199f);
func_450(81.565f, 2710.357f, 53.67f, 224.199f);
func_450(75.156f, 2716.981f, 54.223f, 224.199f);
func_450(68.442f, 2723.806f, 54.775f, 226.199f);
func_450(61.449f, 2730.606f, 55.308f, 226.199f);
func_450(53.702f, 2738.167f, 55.855f, 226.199f);
func_450(91.2443f, 2667.262f, 59.9931f, 314.599f);
}
break;
case 91:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(2772.011f, 3889.062f, 42.94f, 145.4f);
func_450(2785.592f, 3880.409f, 43.695f, 146.199f);
func_450(2788.387f, 3898.107f, 45.364f, 140.999f);
func_450(2801.558f, 3912.485f, 44.931f, 131.999f);
func_450(2805.531f, 3892.253f, 47.01f, 106.399f);
func_450(2824.791f, 3894.787f, 47.4293f, 105.3989f);
func_450(2761.739f, 3945.948f, 44.59f, 135.398f);
func_450(2814.589f, 3930.404f, 44.816f, 134.9978f);
func_450(2747.627f, 3930.92f, 43.8497f, 138.3978f);
func_450(2796.312f, 3928.316f, 42.6106f, 134.5979f);
}else{
func_450(2730.174f, 3890.294f, 42.435f, 54.6f);
func_450(2714.633f, 3918.283f, 42.938f, 16f);
func_450(2716.533f, 3910.15f, 42.699f, 19.6f);
func_450(2757.499f, 3874.045f, 42.724f, 64.8f);
func_450(2747.99f, 3878.676f, 42.561f, 62.8f);
func_450(2738.337f, 3884.314f, 42.614f, 57.2f);
func_450(2711.836f, 3926.255f, 42.931f, 21.6f);
func_450(2707.586f, 3934.558f, 42.984f, 27.6f);
func_450(2702.361f, 3943.039f, 42.951f, 30.6f);
func_450(2696.696f, 3951.317f, 43.012f, 34.8f);
func_450(2766.778f, 3868.911f, 42.822f, 59.8f);
func_450(2775.397f, 3863.697f, 43.204f, 54.2f);
func_450(2738.841f, 3869.927f, 42.492f, 242.799f);
func_450(2746.49f, 3865.861f, 42.808f, 239.599f);
func_450(2754.829f, 3861.039f, 42.906f, 240.799f);
func_450(2762.616f, 3856.316f, 42.895f, 240.799f);
func_450(2770.463f, 3851.383f, 43.216f, 233.199f);
func_450(2778.129f, 3844.914f, 43.26f, 229.199f);
func_450(2785.341f, 3837.918f, 43.141f, 224.999f);
func_450(2730.65f, 3875.186f, 42.437f, 231.999f);
func_450(2724.14f, 3880.885f, 42.469f, 224.599f);
func_450(2718.541f, 3887.508f, 42.614f, 217.399f);
func_450(2783.246f, 3857.409f, 43.175f, 45.199f);
func_450(2790.716f, 3850.631f, 43.125f, 45.199f);
func_450(2690.655f, 3959.246f, 43.255f, 40.199f);
func_450(2797.912f, 3842.523f, 43.166f, 40.199f);
func_450(2791.836f, 3830.845f, 43.14f, 221.999f);
func_450(2712.952f, 3894.566f, 42.484f, 14.799f);
}
break;
case 92:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(3374.661f, 5559.709f, 12.3726f, 138.7999f);
func_450(3366.365f, 5569.449f, 13.9704f, 112.8f);
func_450(3358.493f, 5581.463f, 16.1783f, 112.8f);
func_450(3356.705f, 5595.363f, 15.4029f, 112.8f);
func_450(3336.662f, 5552.357f, 19.491f, 249.6f);
func_450(3336.791f, 5567.825f, 20.432f, 249.6f);
func_450(3335.259f, 5599.046f, 22.4606f, 249.6f);
func_450(3336.811f, 5613.029f, 22.2159f, 249.6f);
func_450(3354.696f, 5609.699f, 15.9453f, 111.3999f);
func_450(3354.006f, 5624.206f, 16.018f, 111.3999f);
}else{
func_450(3372.053f, 5506.134f, 20.8174f, 99.5999f);
func_450(3374.923f, 5520.177f, 20.3207f, 86f);
func_450(3350.643f, 5490.432f, 18.8423f, 139.9997f);
func_450(3364.189f, 5502.98f, 19.648f, 125.7999f);
func_450(3354.101f, 5484.773f, 19.619f, 116.399f);
func_450(3365.919f, 5519.949f, 18.8008f, 102.9988f);
func_450(3341.889f, 5506.809f, 19.584f, 161.199f);
func_450(3338.581f, 5497.709f, 19.376f, 161.199f);
func_450(3335.674f, 5489.348f, 19.542f, 161.199f);
func_450(3332.019f, 5479.563f, 19.738f, 150.998f);
func_450(3327.404f, 5470.857f, 19.302f, 159.398f);
func_450(3323.903f, 5461.49f, 18.492f, 156.398f);
func_450(3320.016f, 5452.957f, 17.834f, 153.198f);
func_450(3315.782f, 5444.61f, 17.115f, 150.798f);
func_450(3335.451f, 5455.723f, 18.2323f, 162.1979f);
func_450(3338.788f, 5464.803f, 18.8631f, 163.7977f);
func_450(3362.476f, 5488.211f, 20.4432f, 108.5979f);
func_450(3371.259f, 5491.274f, 21.5286f, 104.9989f);
func_450(3342.201f, 5517.014f, 19.642f, 170.199f);
func_450(3343.267f, 5526.085f, 18.902f, 175.598f);
func_450(3343.531f, 5536.075f, 18.217f, 178.598f);
func_450(3357.257f, 5496.71f, 18.9729f, 132.5977f);
func_450(3342.346f, 5473.345f, 19.1235f, 159.3987f);
func_450(3347.236f, 5480.447f, 19.4672f, 131.199f);
func_450(3357.623f, 5516.9f, 16.9016f, 118.7991f);
func_450(3361.366f, 5545.886f, 15.5532f, 118.7991f);
func_450(3352.612f, 5541.013f, 16.3238f, 131.999f);
func_450(3343.349f, 5546.494f, 17.8738f, 173.9988f);
}
break;
case 93:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(43.848f, 6845.657f, 13.379f, 247.2f);
func_450(50.379f, 6861.146f, 15.105f, 247.2f);
func_450(32.501f, 6871.777f, 13.3283f, 247.2f);
func_450(38.437f, 6885.796f, 13.3627f, 247.2f);
func_450(55.806f, 6875.081f, 14.824f, 247.2f);
func_450(11.616f, 6877.079f, 11.466f, 247.2f);
func_450(18.954f, 6891.633f, 11.37f, 247.2f);
func_450(26.68f, 6907.587f, 11.869f, 247.2f);
func_450(7.479f, 6907.895f, 12.024f, 247.2f);
func_450(44.9981f, 6901.352f, 11.9426f, 247.2f);
}else{
func_450(35.591f, 6836.608f, 13.288f, 274.4f);
func_450(36.028f, 6830.135f, 13.801f, 270.8f);
func_450(35.114f, 6823.884f, 14.527f, 260.8f);
func_450(48.779f, 6838.693f, 14.337f, 273.6f);
func_450(56.738f, 6821.8f, 15.244f, 244.8f);
func_450(48.377f, 6825.895f, 14.656f, 249.8f);
func_450(49.11f, 6831.439f, 13.991f, 274.8f);
func_450(53.544f, 6818.275f, 16.342f, 243f);
func_450(46.162f, 6821.945f, 15.483f, 249.8f);
func_450(60.129f, 6836.8f, 15.605f, 269.6f);
func_450(40.88f, 6802.952f, 20.113f, 242.6f);
func_450(48.203f, 6799.134f, 20.897f, 244.4f);
func_450(70.449f, 6809.271f, 16.846f, 243f);
func_450(61.436f, 6814.266f, 16.71f, 244.2f);
func_450(56.142f, 6793.458f, 19.806f, 242.6f);
func_450(65.759f, 6791.12f, 18.433f, 276.4f);
func_450(77.305f, 6805.391f, 18.558f, 245.6f);
func_450(85.893f, 6800.243f, 18.535f, 249.8f);
func_450(56.85f, 6780.582f, 18.822f, 297.999f);
func_450(65.636f, 6784.669f, 18.789f, 293.799f);
func_450(74.121f, 6788.498f, 18.739f, 293.799f);
func_450(97.779f, 6796.32f, 19.02f, 276.799f);
func_450(106.76f, 6796.983f, 18.914f, 272.599f);
func_450(112.387f, 6802.858f, 18.994f, 210.599f);
func_450(117.58f, 6802.644f, 18.663f, 209.399f);
func_450(122.481f, 6802.693f, 18.468f, 209.399f);
func_450(127.182f, 6802.686f, 18.218f, 209.399f);
func_450(132.429f, 6801.882f, 17.949f, 209.399f);
}
break;
case 94:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
func_450(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
func_450(-2232.397f, 2274.252f, 31.602f, 296.7993f);
func_450(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
func_450(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
func_450(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
func_450(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
func_450(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
func_450(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
func_450(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
}else{
func_450(-2239.671f, 2390.292f, 10.756f, 189.2002f);
func_450(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
func_450(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
func_450(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
func_450(-2238.044f, 2372.67f, 15.07f, 187.4004f);
func_450(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
func_450(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
func_450(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
func_450(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
func_450(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
func_450(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
func_450(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
func_450(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
func_450(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
func_450(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
func_450(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
func_450(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
func_450(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
func_450(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
func_450(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
func_450(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
func_450(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
func_450(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
func_450(-2255.106f, 2285.415f, 31.617f, 130.3999f);
func_450(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
func_450(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
func_450(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
func_450(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
}
break;
case 95:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(4.0332f, 3378.618f, 41.0822f, 247.1989f);
func_450(38.819f, 3321.2f, 37.0283f, 203.999f);
func_450(26.877f, 3309.062f, 37.93f, 191.9991f);
func_450(15.6727f, 3297.846f, 39.0535f, 191.9991f);
func_450(-24.2865f, 3367.527f, 41.4783f, 264.399f);
func_450(-23.1279f, 3352.254f, 40.52f, 280.399f);
func_450(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
func_450(97.4844f, 3335.385f, 34.6164f, 7.9981f);
func_450(20.409f, 3370.839f, 38.8393f, 235.799f);
func_450(48.457f, 3336.586f, 35.8912f, 270.3979f);
}else{
func_450(25.9869f, 3349.706f, 36.0366f, 273.9994f);
func_450(25.0176f, 3356.915f, 36.4258f, 276.9998f);
func_450(36.2443f, 3351.358f, 36.2386f, 272.5997f);
func_450(35.9352f, 3358.816f, 37.0033f, 276.7998f);
func_450(25.9651f, 3342.673f, 36.2157f, 270.7997f);
func_450(30.027f, 3292.351f, 38.604f, 140.199f);
func_450(49.1614f, 3358.589f, 35.9759f, 263.5988f);
func_450(48.288f, 3352.494f, 35.5841f, 261.1988f);
func_450(23.897f, 3283.152f, 39.381f, 145.399f);
func_450(60.9182f, 3356.21f, 35.8814f, 255.3988f);
func_450(18.723f, 3274.025f, 40.054f, 155.799f);
func_450(59.0177f, 3350.004f, 35.3204f, 255.7989f);
func_450(36.958f, 3298.847f, 38.001f, 127.799f);
func_450(54.165f, 3311.582f, 36.517f, 303.799f);
func_450(61.607f, 3317.105f, 35.916f, 306.999f);
func_450(68.994f, 3323.129f, 35.364f, 308.199f);
func_450(76.266f, 3329.467f, 34.805f, 311.399f);
func_450(82.757f, 3335.915f, 34.344f, 316.598f);
func_450(46.5977f, 3306.196f, 37.1628f, 304.9976f);
func_450(14.664f, 3263.688f, 40.931f, 160.398f);
func_450(50.8234f, 3324.118f, 36.2129f, 305.1976f);
func_450(11.7852f, 3256.101f, 41.7031f, 159.198f);
func_450(89.575f, 3343.311f, 33.932f, 318.398f);
func_450(58.4154f, 3329.423f, 35.6197f, 305.5979f);
func_450(65.3201f, 3334.253f, 35.1903f, 306.5977f);
func_450(72.1063f, 3339.793f, 34.8449f, 308.5977f);
func_450(95.6614f, 3349.917f, 33.696f, 316.1977f);
func_450(85.4387f, 3353.183f, 33.8047f, 317.9978f);
}
break;
case 96:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(2135.708f, 1757.503f, 102.073f, 40.999f);
func_450(2148.674f, 1764.557f, 102.75f, 40.999f);
func_450(2160.511f, 1771.173f, 104.149f, 40.999f);
func_450(2172.842f, 1777.391f, 105.369f, 40.999f);
func_450(2127.938f, 1736.353f, 100.835f, 222.199f);
func_450(2141.682f, 1739.865f, 99.833f, 222.199f);
func_450(2152.786f, 1747.776f, 99.785f, 222.199f);
func_450(2166.356f, 1754.682f, 100.07f, 220.399f);
func_450(2090.66f, 1701.805f, 101.681f, 243.199f);
func_450(2066.149f, 1716.735f, 102.112f, 228.2f);
}else{
func_450(2073.044f, 1725.935f, 102.5096f, 225.2f);
func_450(2077.24f, 1730.299f, 102.5247f, 225.2f);
func_450(2081.68f, 1734.742f, 102.5588f, 225.2f);
func_450(2086.052f, 1739.045f, 102.6618f, 225.2f);
func_450(2090.55f, 1743.53f, 102.6058f, 225.2f);
func_450(2095.295f, 1748.274f, 102.3022f, 225.2f);
func_450(2101.779f, 1721.807f, 101.927f, 225.2f);
func_450(2107.08f, 1727.001f, 101.932f, 225.2f);
func_450(2095.867f, 1716.475f, 101.925f, 225.2f);
func_450(2112.387f, 1732.492f, 101.849f, 225.2f);
func_450(2089.718f, 1710.779f, 101.978f, 225.2f);
func_450(2111.639f, 1717.132f, 100.855f, 225.2f);
func_450(2117.297f, 1722.655f, 100.704f, 225.2f);
func_450(2105.821f, 1711.672f, 101.065f, 225.2f);
func_450(2098.759f, 1704.866f, 101.209f, 225.2f);
func_450(2121.208f, 1713.145f, 99.65f, 225.2f);
func_450(2115.34f, 1707.542f, 99.829f, 225.2f);
func_450(2109.211f, 1702.247f, 100.079f, 225.2f);
func_450(2124.167f, 1704.036f, 98.584f, 225.2f);
func_450(2118.181f, 1698.253f, 98.645f, 225.2f);
func_450(2127.253f, 1694.878f, 97.078f, 225.2f);
func_450(2117.786f, 1738.219f, 101.839f, 225.2f);
func_450(2122.34f, 1728.011f, 100.627f, 225.2f);
func_450(2126.288f, 1718.542f, 99.501f, 225.2f);
func_450(2129.762f, 1709.847f, 98.352f, 225.2f);
func_450(2132.765f, 1700.777f, 96.999f, 225.2f);
func_450(2120.399f, 1689.165f, 97.388f, 225.2f);
func_450(2098.994f, 1747.929f, 102.2403f, 225.2f);
}
break;
case 97:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_450(1871.691f, 358.5369f, 162.1067f, 153.1979f);
func_450(1858.966f, 351.2935f, 161.7614f, 166.598f);
func_450(1873.611f, 342.6637f, 161.6936f, 142.998f);
func_450(1887.645f, 343.1557f, 162.1659f, 138.5979f);
func_450(1888.644f, 328.0839f, 161.7489f, 139.398f);
func_450(1898.596f, 315.2232f, 161.4418f, 173.7979f);
func_450(1896.729f, 266.5388f, 161.1619f, 113.5978f);
func_450(1900.167f, 281.3884f, 161.7807f, 115.197f);
func_450(1856.286f, 294.624f, 161.442f, 167.9966f);
func_450(1868.622f, 309.7907f, 162.6084f, 155.1968f);
}else{
func_450(1856.378f, 255.9146f, 162.7158f, 147.6202f);
func_450(1837.279f, 227.3696f, 165.2592f, 164.3995f);
func_450(1835.192f, 219.3931f, 167.5468f, 169.9994f);
func_450(1833.557f, 211.859f, 169.864f, 169.9994f);
func_450(1839.534f, 194.4053f, 171.3841f, 172.9989f);
func_450(1838.289f, 185.8157f, 171.2585f, 174.1989f);
func_450(1837.478f, 177.0607f, 170.7063f, 174.1989f);
func_450(1840.463f, 202.6959f, 170.8702f, 174.1989f);
func_450(1836.296f, 168.7307f, 170.5786f, 174.1989f);
func_450(1835.412f, 159.3162f, 170.4163f, 171.1989f);
func_450(1826.91f, 214.9648f, 172.2502f, 18.7986f);
func_450(1823.805f, 223.0288f, 172.0794f, 21.7986f);
func_450(1820.599f, 231.144f, 172.2987f, 21.7986f);
func_450(1817.245f, 239.1232f, 172.0878f, 21.7986f);
func_450(1814.089f, 247.0423f, 171.7386f, 24.9986f);
func_450(1810.879f, 255.6553f, 171.7517f, 19.3986f);
func_450(1807.729f, 265.4899f, 172.2307f, 15.1986f);
func_450(1823.147f, 197.3122f, 172.235f, 192.3984f);
func_450(1824.641f, 184.4241f, 171.5948f, 183.3985f);
func_450(1825.019f, 171.2314f, 170.5843f, 183.3985f);
func_450(1824.748f, 162.8998f, 170.4961f, 173.1985f);
func_450(1817.345f, 214.6964f, 172.5223f, 203.9982f);
func_450(1813.466f, 222.3717f, 172.3316f, 200.9982f);
func_450(1809.114f, 230.8225f, 172.346f, 205.1983f);
func_450(1805.594f, 239.3896f, 172.0033f, 197.9984f);
func_450(1802.515f, 247.4269f, 171.8964f, 197.9984f);
func_450(1833.982f, 150.4025f, 170.411f, 163.7985f);
func_450(1823.079f, 154.5105f, 170.8194f, 163.7985f);
}
break;
case 123:
case 124:
case 125:
func_436(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
func_436(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
func_436(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
func_436(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
func_436(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
func_436(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
func_436(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
func_436(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
func_436(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
func_436(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
func_436(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
func_436(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
func_436(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
func_436(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
func_436(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
func_436(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
func_436(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
func_436(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
func_436(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
func_436(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
func_436(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
func_436(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
func_436(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
func_436(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
func_436(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
func_436(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
func_436(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
func_436(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
func_436(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
func_436(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
func_436(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
func_436(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
break;
default:
break;
}}


void func_436(struct<3> Param0, float fParam1, int iParam2, bool bParam3){
struct<2> Var0;
struct<2> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
if(!iParam2==0){
func_347(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
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
func_450(Var4, fParam1);
}else{
func_450(Param0, fParam1);
}}


void func_437(int iParam0){
switch (iParam0){
case 83:
func_450(-1133.454f, -3371.672f, 12.945f, 329.799f);
func_450(-1119.748f, -3379.991f, 12.945f, 329.799f);
func_450(-1147.602f, -3363.505f, 12.945f, 329.799f);
func_450(-1161.988f, -3354.852f, 12.945f, 329.799f);
func_450(-1116.563f, -3358.99f, 12.945f, 329.799f);
func_450(-1131.23f, -3350.104f, 12.945f, 329.799f);
func_450(-1145.252f, -3341.608f, 12.945f, 329.799f);
func_450(-1115.202f, -3339.265f, 12.945f, 329.799f);
func_450(-1129.559f, -3330.697f, 12.945f, 329.799f);
func_450(-1114.664f, -3320.954f, 12.945f, 329.799f);
func_450(-1199.923f, -3369.502f, 12.945f, 350.399f);
func_450(-1212.069f, -3363.568f, 12.945f, 350.399f);
func_450(-1223.637f, -3356.694f, 12.945f, 350.399f);
func_450(-1102.284f, -3420.613f, 12.945f, 354.599f);
func_450(-1091.131f, -3427.396f, 12.945f, 354.599f);
func_450(-1079.372f, -3434.306f, 12.945f, 354.599f);
func_450(-1067.498f, -3441.878f, 13.114f, 354.599f);
func_450(-1055.714f, -3448.819f, 12.977f, 354.599f);
func_450(-1043.37f, -3455.796f, 13.146f, 354.599f);
func_450(-1017.023f, -3382.777f, 12.8401f, 330.6f);
func_450(-1010.608f, -3386.103f, 12.8401f, 330.6f);
func_450(-1004.658f, -3389.823f, 12.8401f, 330.6f);
func_450(-998.3798f, -3393.644f, 12.8401f, 330.6f);
func_450(-991.5242f, -3397.297f, 12.8401f, 330.6f);
func_450(-985.0826f, -3401.247f, 12.8401f, 330.6f);
func_450(-978.2733f, -3405.031f, 12.8401f, 330.6f);
func_450(-971.724f, -3409.109f, 12.8401f, 330.6f);
func_450(-964.4719f, -3413.202f, 13.1463f, 330.6f);
func_450(-1022.94f, -3392.372f, 12.8401f, 330.6f);
func_450(-1016.219f, -3395.82f, 12.8401f, 330.6f);
func_450(-1009.873f, -3399.143f, 12.8401f, 330.6f);
func_450(-1003.436f, -3402.982f, 12.8401f, 330.6f);
func_450(-997.0872f, -3406.928f, 12.8401f, 330.6f);
func_450(-990.2305f, -3410.548f, 12.8401f, 330.6f);
func_450(-983.4429f, -3414.093f, 12.8401f, 330.6f);
func_450(-976.8809f, -3417.846f, 12.8401f, 330.6f);
func_450(-969.4039f, -3421.727f, 13.1463f, 330.6f);
func_450(-1028.251f, -3401.834f, 12.8401f, 330.6f);
func_450(-1021.631f, -3405.433f, 12.8401f, 330.6f);
func_450(-1015.209f, -3408.563f, 12.8401f, 330.6f);
func_450(-1008.81f, -3412.484f, 12.8401f, 330.6f);
func_450(-1002.277f, -3415.987f, 12.8401f, 330.6f);
func_450(-995.7023f, -3419.97f, 12.8401f, 330.6f);
func_450(-989.1453f, -3423.988f, 12.8401f, 330.6f);
func_450(-982.6298f, -3427.981f, 12.8401f, 330.6f);
func_450(-974.9305f, -3431.833f, 13.1463f, 330.6f);
break;
case 84:
func_450(-1356.991f, -3242.228f, 12.945f, 330f);
func_450(-1369.313f, -3234.758f, 12.945f, 330f);
func_450(-1381.751f, -3227.408f, 12.945f, 330f);
func_450(-1394.302f, -3220.021f, 12.945f, 330f);
func_450(-1354.339f, -3223.129f, 12.945f, 330f);
func_450(-1366.302f, -3215.809f, 12.945f, 330f);
func_450(-1378.492f, -3208.645f, 12.945f, 330f);
func_450(-1350.322f, -3203.405f, 12.945f, 330f);
func_450(-1362.684f, -3196.451f, 12.945f, 330f);
func_450(-1347.089f, -3182.69f, 12.945f, 330f);
func_450(-1452.642f, -3222.367f, 12.945f, 347.799f);
func_450(-1464.229f, -3215.108f, 12.945f, 347.799f);
func_450(-1476.133f, -3207.652f, 12.945f, 347.799f);
func_450(-1488.295f, -3200.033f, 12.945f, 347.799f);
func_450(-1336.877f, -3272.344f, 12.945f, 8.199f);
func_450(-1323.381f, -3279.614f, 12.945f, 8.199f);
func_450(-1309.671f, -3287.749f, 12.945f, 8.199f);
func_450(-1296.963f, -3294.511f, 12.945f, 8.199f);
func_450(-1501.978f, -3193.849f, 12.945f, 350.599f);
func_450(-1344.716f, -3288.333f, 12.9445f, 331.2f);
func_450(-1338.141f, -3290.335f, 12.9445f, 331.2f);
func_450(-1331.473f, -3294.178f, 12.9445f, 331.2f);
func_450(-1324.921f, -3297.998f, 12.9445f, 331.2f);
func_450(-1318.129f, -3301.957f, 12.9445f, 331.2f);
func_450(-1350.466f, -3294.226f, 12.9445f, 331.2f);
func_450(-1343.482f, -3297.576f, 12.9445f, 331.2f);
func_450(-1336.398f, -3302.456f, 12.9445f, 331.2f);
func_450(-1329.82f, -3306.82f, 12.945f, 331.2f);
func_450(-1322.761f, -3310.353f, 12.945f, 331.2f);
func_450(-1316.587f, -3314.556f, 12.945f, 331.2f);
func_450(-1326.538f, -3318.499f, 12.945f, 331.2f);
func_450(-1335.74f, -3313.678f, 12.945f, 331.2f);
func_450(-1350.848f, -3302.619f, 12.9446f, 331.2f);
func_450(-1357.961f, -3306.886f, 12.945f, 331.2f);
func_450(-1335.202f, -3322.428f, 12.9452f, 331.2f);
func_450(-1351.401f, -3311.566f, 12.9452f, 331.2f);
func_450(-1344.255f, -3305.965f, 12.9451f, 331.2f);
func_450(-1299.832f, -3305.573f, 12.945f, 331.2f);
func_450(-1293.414f, -3309.413f, 12.945f, 331.2f);
func_450(-1286.835f, -3313.157f, 12.945f, 331.2f);
func_450(-1303.988f, -3313.1f, 12.945f, 331.2f);
func_450(-1297.402f, -3316.699f, 12.945f, 331.2f);
func_450(-1290.969f, -3320.519f, 12.945f, 331.2f);
func_450(-1308.27f, -3320.612f, 12.945f, 331.2f);
func_450(-1301.968f, -3324.714f, 12.945f, 331.2f);
func_450(-1295.483f, -3328.422f, 12.945f, 331.2f);
break;
case 85:
func_450(-2039.992f, 3132.191f, 31.81f, 149.399f);
func_450(-2025.075f, 3128.63f, 31.81f, 197.599f);
func_450(-2049.589f, 3142.464f, 31.81f, 109.199f);
func_450(-2088.648f, 3081.327f, 31.81f, 150.599f);
func_450(-2070.669f, 3111.575f, 31.81f, 123.399f);
func_450(-2053.385f, 3109.703f, 31.81f, 150.599f);
func_450(-2044.448f, 3094.012f, 31.81f, 181.799f);
func_450(-2071.825f, 3093.477f, 31.81f, 150.599f);
func_450(-2060.579f, 3085.924f, 31.81f, 150.599f);
func_450(-2062.712f, 3066.073f, 31.81f, 150.599f);
func_450(-2094.385f, 3190.445f, 31.81f, 117.799f);
func_450(-2083.056f, 3182.885f, 31.81f, 117.799f);
func_450(-2071.578f, 3175.554f, 31.81f, 117.799f);
func_450(-2120.249f, 3173.97f, 31.81f, 25.199f);
func_450(-2067.547f, 3146.325f, 31.81f, 14.998f);
func_450(-2080.506f, 3154.591f, 31.81f, 15.798f);
func_450(-2093.278f, 3159.793f, 31.81f, 14.798f);
func_450(-2106.614f, 3167.605f, 31.81f, 21.198f);
func_450(-2106.347f, 3196.902f, 31.81f, 117.799f);
func_450(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
func_450(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
func_450(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
func_450(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
func_450(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
func_450(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
func_450(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
func_450(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
func_450(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
func_450(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
func_450(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
func_450(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
func_450(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
func_450(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
func_450(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
func_450(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
func_450(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
func_450(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
func_450(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
func_450(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
func_450(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
func_450(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
func_450(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
func_450(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
func_450(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
func_450(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
func_450(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
break;
case 86:
func_450(-1885.187f, 3095.344f, 31.81f, 150.2f);
func_450(-1898.637f, 3072.816f, 31.811f, 150.2f);
func_450(-1886.469f, 3065.78f, 31.811f, 150.2f);
func_450(-1874.621f, 3058.437f, 31.81f, 150.2f);
func_450(-1862.818f, 3051.244f, 31.81f, 150.2f);
func_450(-1915.317f, 3041.652f, 31.811f, 150.2f);
func_450(-1896.724f, 2997.848f, 31.81f, 150.2f);
func_450(-1932.975f, 3011.781f, 31.81f, 150.2f);
func_450(-1875.668f, 3034.438f, 31.811f, 150.2f);
func_450(-1886.144f, 3016.285f, 31.81f, 150.2f);
func_450(-1913.706f, 3104.196f, 31.81f, 118.599f);
func_450(-1925.44f, 3112.236f, 31.81f, 118.599f);
func_450(-1938.08f, 3119.383f, 31.81f, 118.599f);
func_450(-1927.822f, 3072.679f, 31.81f, 13.399f);
func_450(-1940.575f, 3079.031f, 31.81f, 13.399f);
func_450(-1953.344f, 3084.888f, 31.81f, 13.399f);
func_450(-1965.91f, 3091.929f, 31.81f, 13.399f);
func_450(-1978.86f, 3100.029f, 31.81f, 13.399f);
func_450(-1950.928f, 3126.457f, 31.81f, 118.999f);
func_450(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
func_450(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
func_450(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
func_450(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
func_450(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
func_450(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
func_450(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
func_450(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
func_450(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
func_450(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
func_450(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
func_450(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
func_450(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
func_450(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
func_450(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
func_450(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
func_450(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
func_450(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
func_450(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
func_450(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
func_450(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
func_450(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
func_450(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
func_450(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
func_450(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
func_450(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
func_450(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
break;
case 87:
func_450(-2484.323f, 3249.294f, 31.828f, 151f);
func_450(-2495.313f, 3255.746f, 31.828f, 151f);
func_450(-2472.644f, 3242.684f, 31.828f, 151f);
func_450(-2506.313f, 3262.27f, 31.823f, 151f);
func_450(-2461.494f, 3235.93f, 31.828f, 151f);
func_450(-2505.602f, 3238.049f, 31.828f, 151f);
func_450(-2481.937f, 3224.8f, 31.828f, 151f);
func_450(-2516.813f, 3244.266f, 31.823f, 151f);
func_450(-2470.03f, 3217.899f, 31.828f, 151f);
func_450(-2493.933f, 3231.308f, 31.828f, 151f);
func_450(-2443.467f, 3227.753f, 31.828f, 175.8f);
func_450(-2431.365f, 3220.9f, 31.828f, 175.8f);
func_450(-2419.883f, 3214.708f, 31.828f, 175.8f);
func_450(-2501.903f, 3272.865f, 31.822f, 123.999f);
func_450(-2513.555f, 3280.176f, 31.817f, 123.999f);
func_450(-2524.776f, 3287.276f, 31.973f, 123.999f);
func_450(-2407.718f, 3208.055f, 31.827f, 176.199f);
func_450(-2395.689f, 3201.125f, 31.827f, 176.199f);
func_450(-2383.498f, 3194.211f, 31.833f, 176.199f);
func_450(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
func_450(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
func_450(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
func_450(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
func_450(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
func_450(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
func_450(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
func_450(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
func_450(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
func_450(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
func_450(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
func_450(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
func_450(-2383.986f, 3223.995f, 31.986f, 150.5996f);
func_450(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
func_450(-2370.524f, 3215.946f, 32.002f, 150.5996f);
func_450(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
func_450(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
func_450(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
func_450(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
func_450(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
func_450(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
func_450(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
func_450(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
func_450(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
func_450(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
func_450(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
func_450(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
break;
default:
break;
}}

int func_438(int iParam0){
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


void func_439(int iParam0){
switch (iParam0){
case 83:
case 84:
func_450(-947.712f, -3367.704f, 12.944f, 60f);
func_450(-904.692f, -3293.072f, 12.944f, 60f);
func_450(-863.71f, -3221.978f, 12.944f, 60f);
func_450(-966.418f, -3162.773f, 12.944f, 60f);
func_450(-1007.435f, -3233.93f, 12.944f, 60f);
func_450(-1050.455f, -3308.559f, 12.944f, 60f);
func_450(-1145.673f, -3253.456f, 12.944f, 60f);
func_450(-1098.386f, -3181.428f, 12.944f, 60f);
func_450(-1060.474f, -3108.903f, 12.944f, 60f);
func_450(-1155.391f, -3053.632f, 12.944f, 60f);
func_450(-1196.114f, -3125.146f, 12.948f, 60f);
func_450(-1235.552f, -3201.86f, 12.944f, 60f);
func_450(-1344.446f, -3139.177f, 12.944f, 60f);
func_450(-1301.308f, -3064.341f, 12.944f, 60f);
func_450(-1260.135f, -2992.912f, 12.944f, 60f);
func_450(-1364.244f, -2932.9f, 12.98f, 60f);
func_450(-1405.284f, -3004.108f, 12.96f, 60f);
func_450(-1448.29f, -3078.72f, 12.95f, 60f);
func_450(-1535.732f, -3028.318f, 12.945f, 60f);
func_450(-1492.639f, -2953.558f, 12.945f, 60f);
func_450(-1451.506f, -2882.2f, 12.944f, 60f);
func_450(-1553.927f, -2823.12f, 13.002f, 60f);
func_450(-1595.097f, -2894.571f, 12.944f, 60f);
func_450(-1637.836f, -2968.714f, 12.945f, 60f);
func_450(-1740.971f, -2911.484f, 12.944f, 330f);
func_450(-1696.293f, -2833.978f, 12.944f, 330f);
func_450(-1651.502f, -2756.273f, 12.945f, 330f);
func_450(-1588.258f, -2647.575f, 12.944f, 330f);
func_450(-1536.862f, -2681.378f, 12.945f, 330f);
func_450(-1529.025f, -2544.485f, 12.944f, 330f);
break;
case 85:
case 86:
case 87:
func_450(-1970.422f, 2825.696f, 31.81f, 60.4f);
func_450(-2033.307f, 2855.526f, 31.83f, 60.4f);
func_450(-2091.018f, 2888.691f, 31.81f, 60.4f);
func_450(-2206.717f, 2955.363f, 31.81f, 60.4f);
func_450(-2268.817f, 2990.846f, 31.81f, 60.4f);
func_450(-2324.039f, 3023.154f, 31.811f, 60.4f);
func_450(-2435.806f, 3087.705f, 31.824f, 60.4f);
func_450(-2543.753f, 3149.909f, 31.821f, 60.4f);
func_450(-1944.848f, 2898.798f, 31.81f, 125.398f);
func_450(-1978.705f, 2924.367f, 31.846f, 151.999f);
func_450(-2064.849f, 2955.153f, 31.867f, 151.199f);
func_450(-2106.165f, 2980.687f, 31.81f, 104.599f);
func_450(-2302.367f, 3088.676f, 31.814f, 150.598f);
func_450(-2152.113f, 2924.162f, 31.81f, 60.198f);
func_450(-2488.232f, 3118.146f, 31.822f, 59.798f);
func_450(-2277.922f, 3133.756f, 31.811f, 120.598f);
func_450(-2604.776f, 3185.186f, 31.812f, 59.998f);
func_450(-2608.107f, 3305.049f, 31.812f, 60.198f);
func_450(-2718.936f, 3323.203f, 31.81f, 201.198f);
func_450(-2658.718f, 3216.499f, 31.812f, 59.998f);
func_450(-2380.372f, 3055.341f, 31.826f, 60.4f);
func_450(-2790.616f, 3286.24f, 31.812f, 240.397f);
func_450(-2770.946f, 3322.605f, 31.812f, 240.397f);
func_450(-2678.805f, 3339.186f, 31.812f, 199.597f);
func_450(-2743.882f, 3224.094f, 31.81f, 303.397f);
func_450(-2701.354f, 3203.092f, 31.994f, 328.397f);
func_450(-2249.816f, 2944.609f, 31.937f, 330.196f);
func_450(-2586.579f, 3137.286f, 31.935f, 330.196f);
func_450(-2134.76f, 2878.728f, 31.81f, 330.196f);
func_450(-1949.075f, 2861.21f, 31.811f, 58.798f);
break;
default:
break;
}}

int func_440(int iParam0){
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

int func_441(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f){
return 1;
}
return 0;
}

int func_442(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f){
return 1;
}
return 0;
}

int func_443(int iParam0, int iParam1){
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

int func_444(struct<2> Param0, var uParam1, var uParam2, var uParam3){
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
if(func_422(iVar0)){
fVar3=300f;
}else{
fVar3=0f;
}}
if(iVar0 >=89 && iVar0 <=97){
if(func_445(iVar0)){
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

int func_445(int iParam0){
int iVar0;
int iVar1;
iVar0=func_446(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_300==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_64()){
if(Global_1853910[iVar1 /*862*/].f_267.f_300==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
return 0;
}

int func_446(int iParam0){
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

int func_447(int iParam0){
if((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 1;
}
return 0;
}


void func_448(int iParam0){
switch (iParam0){
case 78:
func_450(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
func_450(-612.8933f, 692.116f, 148.7577f, 79.1005f);
func_450(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
func_450(-639.3558f, 696.9992f, 150.5134f, 77.481f);
break;
case 79:
func_450(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_450(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_450(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_450(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 82:
func_450(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_450(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_450(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_450(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 81:
func_450(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
func_450(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
func_450(-1283.894f, 467.2136f, 95.4036f, 95.058f);
func_450(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
break;
case 73:
func_450(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
func_450(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
func_450(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
func_450(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
break;
case 75:
func_450(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_450(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_450(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_450(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 76:
func_450(-668.575f, 668.7567f, 149.4004f, 69.8844f);
func_450(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_450(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_450(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
break;
case 77:
func_450(128.4334f, 578.7522f, 182.2934f, 106.5458f);
func_450(97.7791f, 576.8907f, 181.5599f, 91.3539f);
func_450(83.5896f, 576.4791f, 181.0832f, 89.7262f);
func_450(69.9599f, 575.9902f, 180.5019f, 91.4926f);
break;
case 80:
func_450(-872.1293f, 698.7591f, 148.5084f, 339.673f);
func_450(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
func_450(-907.3458f, 695.8158f, 150.396f, 270.6491f);
func_450(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
break;
case 87:
if(func_449()){
func_450(-1608.297f, -556.875f, 33.406f, 310f);
func_450(-1616.095f, -563.402f, 33.049f, 309.4f);
func_450(-1560.29f, -531.69f, 34.576f, 35.3994f);
func_450(-1555.303f, -538.781f, 34.044f, 35.3994f);
}else{
func_450(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
func_450(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
func_450(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
func_450(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
func_450(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
func_450(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
func_450(-1611.769f, -601.588f, 31.2908f, 50.7362f);
func_450(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
}
break;
case 88:
if(func_449()){
func_450(-1402.362f, -511.396f, 30.888f, 35.4f);
func_450(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
func_450(-1407.634f, -503.839f, 31.35f, 35.4f);
func_450(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
}else{
func_450(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
func_450(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
func_450(-1346.236f, -523.9114f, 30.6f, 124.7302f);
func_450(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
func_450(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
func_450(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
func_450(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
func_450(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
}
break;
case 89:
if(func_449()){
func_450(-102.737f, -597.379f, 35.053f, 160.999f);
func_450(-97.793f, -589.568f, 35.082f, 134.799f);
func_450(-110.357f, -619.402f, 35.055f, 160.599f);
func_450(-112.561f, -627.723f, 35.046f, 165.399f);
}else{
func_450(-108.2604f, -613.6386f, 35.055f, 160.8063f);
func_450(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
func_450(-112.84f, -629.6357f, 35.0662f, 174.9843f);
func_450(-98.7403f, -590.3209f, 35.075f, 139.7632f);
func_450(-98.3748f, -612.642f, 35.137f, 161.1124f);
func_450(-92.595f, -595.4065f, 35.1888f, 161.3083f);
func_450(-104.4742f, -630.1472f, 35.1396f, 161.184f);
func_450(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
}
break;
case 90:
if(func_449()){
func_450(-59.349f, -779.238f, 43.134f, 228.398f);
func_450(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
func_450(-65.212f, -772.66f, 43.151f, 219.398f);
func_450(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
}else{
func_450(-59.684f, -779.4568f, 43.114f, 228.7591f);
func_450(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
func_450(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
func_450(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
func_450(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
func_450(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
func_450(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
func_450(-9.239f, -773.0505f, 43.0788f, 318.0367f);
}
break;
case 91:
func_450(246.5035f, -1798.749f, 26.1131f, 212.5996f);
func_450(247.8968f, -1797.017f, 26.1131f, 212.5996f);
func_450(249.3848f, -1795.374f, 26.1131f, 212.5996f);
func_450(250.8498f, -1793.695f, 26.1131f, 212.5996f);
func_450(262.9285f, -1784.205f, 26.1131f, 164.5991f);
func_450(266.8129f, -1787.476f, 26.1131f, 164.5991f);
func_450(264.814f, -1785.801f, 26.1131f, 164.5991f);
func_450(269.0069f, -1789.16f, 26.1131f, 164.5991f);
break;
case 92:
func_450(-1464.5f, -927.9f, 9f, 296.7991f);
func_450(-1466f, -926.1f, 9f, 296.7991f);
func_450(-1467.9f, -924.7f, 9f, 296.7991f);
func_450(-1469.7f, -923.7f, 9f, 296.7991f);
func_450(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
func_450(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
func_450(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
func_450(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
break;
case 93:
func_450(30.0784f, -1024.16f, 28.4469f, 234.5994f);
func_450(29.1695f, -1026.719f, 28.4453f, 234.5994f);
func_450(28.2538f, -1029.296f, 28.4421f, 234.5994f);
func_450(27.3737f, -1031.767f, 28.3937f, 234.5994f);
func_450(32.6932f, -1017.063f, 28.4531f, 234.5994f);
func_450(33.672f, -1014.399f, 28.4552f, 234.5994f);
func_450(37.488f, -1014.344f, 28.4781f, 175.5986f);
func_450(39.4909f, -1015.097f, 28.484f, 175.5986f);
break;
case 94:
func_450(45.0033f, 2784.392f, 56.8782f, 103.5999f);
func_450(43.316f, 2785.903f, 56.8782f, 103.5999f);
func_450(41.6126f, 2787.36f, 56.8782f, 103.5999f);
func_450(39.9584f, 2788.773f, 56.8782f, 103.5999f);
func_450(35.2347f, 2792.135f, 56.8781f, 208.7997f);
func_450(33.7771f, 2790.379f, 56.8781f, 208.7997f);
func_450(30.7578f, 2786.8f, 56.8781f, 208.7997f);
func_450(29.3121f, 2785.045f, 56.8745f, 208.7997f);
break;
case 95:
func_450(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
func_450(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
func_450(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
func_450(-337.675f, 6074.252f, 30.2727f, 152.9999f);
func_450(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
func_450(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
func_450(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
func_450(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
break;
case 96:
func_450(1738.422f, 3716.779f, 33.0787f, 6.9999f);
func_450(1736.207f, 3715.989f, 33.094f, 6.9999f);
func_450(1748.442f, 3714.17f, 33.0889f, 39.399f);
func_450(1750.475f, 3715.007f, 33.1067f, 39.399f);
func_450(1747.18f, 3721.102f, 33.007f, 95.199f);
func_450(1746.413f, 3723.255f, 32.9738f, 95.199f);
func_450(1740.67f, 3717.613f, 33.0616f, 8.199f);
func_450(1733.937f, 3715.08f, 33.1236f, 8.199f);
break;
case 97:
func_450(947.9371f, -1452.737f, 30.143f, 331.5991f);
func_450(950.2141f, -1452.826f, 30.1364f, 331.5991f);
func_450(952.4588f, -1452.882f, 30.129f, 331.5991f);
func_450(954.6608f, -1452.869f, 30.1303f, 331.5991f);
func_450(935.1006f, -1452.701f, 30.1907f, 316.999f);
func_450(932.5459f, -1452.579f, 30.2194f, 316.999f);
func_450(929.9319f, -1452.567f, 30.2647f, 316.999f);
func_450(927.4857f, -1452.446f, 30.3167f, 316.999f);
break;
case 98:
func_450(186.6051f, 306.8702f, 104.389f, 162.3999f);
func_450(184.3881f, 306.7666f, 104.3845f, 162.3999f);
func_450(182.1681f, 306.6823f, 104.375f, 162.3999f);
func_450(183.3219f, 296.2871f, 104.3707f, 350.7995f);
func_450(180.9933f, 296.3411f, 104.3704f, 350.7995f);
func_450(178.6569f, 296.4709f, 104.3701f, 350.7995f);
func_450(195.1475f, 304.4284f, 104.4644f, 77.3989f);
func_450(195.0814f, 301.8218f, 104.5287f, 77.3989f);
break;
case 99:
func_450(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
func_450(-33.3895f, -199.7716f, 51.355f, 5.3995f);
func_450(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
func_450(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
func_450(-17.9628f, -206.2525f, 51.3702f, 29.399f);
func_450(-14.8043f, -207.5648f, 51.4707f, 29.399f);
func_450(-11.8482f, -208.6405f, 51.5633f, 29.399f);
func_450(-9.1304f, -209.4894f, 51.6472f, 29.399f);
break;
case 100:
func_450(2478.52f, 4082.137f, 36.8208f, 227.5999f);
func_450(2477.557f, 4079.946f, 36.8014f, 227.5999f);
func_450(2465.123f, 4081.35f, 37.0655f, 167.4f);
func_450(2463.017f, 4082.271f, 37.0653f, 167.4f);
func_450(2467.7f, 4080.332f, 37.0649f, 167.4f);
func_450(2469.587f, 4079.538f, 37.061f, 167.4f);
func_450(2481.354f, 4088.553f, 36.9131f, 209.4f);
func_450(2482.442f, 4091.023f, 36.9472f, 209.4f);
break;
case 101:
func_450(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
func_450(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
func_450(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
func_450(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
func_450(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
func_450(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
func_450(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
func_450(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
break;
case 102:
func_450(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
func_450(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
func_450(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
func_450(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
func_450(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
func_450(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
func_450(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
func_450(-1127.039f, -1564.395f, 3.292f, 168.9988f);
break;
default:
break;
}}


bool func_449(){
return Global_2683864.f_17;
}


void func_450(struct<3> Param0, float fParam1){
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

int func_451(struct<3> Param0){
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
if(func_395(Param0, &(Global_2642883[iVar0 /*7*/]))){
Global_2635559.f_2907=iVar0;
return iVar0;
}
iVar0++;
}
Global_2635559.f_2907=-1;
return -1;
}

int func_452(){
if(MISC::IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2684801.f_6436){
return 0;
}
return 0;
}

int func_453(struct<2> Param0, var uParam1, bool bParam2, float fParam3){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=0;
iVar0=83;
while (iVar0 <=84 + 1){
if(bParam2){
if(func_422(iVar0)){
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


void func_454(){
int iVar0;
iVar0=0;
while (iVar0 < 30){
Global_2635559.f_2737[iVar0 /*3*/]={
0f, 0f, 0f 
};
iVar0++;
}}

int func_455(var uParam0, bool bParam1){
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
if(func_395(Var1, &(Global_2642839[iVar0 /*7*/]))){
if(bParam1){
func_406(&Var1, Global_2642839[iVar0 /*7*/], Global_2642839[iVar0 /*7*/].f_3, Global_2642839[iVar0 /*7*/].f_6, 1036831949, 0);
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

int func_456(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_460(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_459(Param0, 1008981770)){
if(!func_412(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_412(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_458(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_457(&(Global_2635559.f_45[iVar0 /*12*/])) 
};
if(!func_412(&Var1, 0, 0, 0, 1)){
if(!func_412(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__457(var uParam0){
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

int func_458(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_399(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_459(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_399(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_460(bool bParam0, bool bParam1){
if(func_252() !=0){
return func_461(bParam0) !=0;
}
return func_377(bParam0, bParam1, 0);
}

int func_461(int iParam0){
if(func_9(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}

int func_462(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}


void func_463(){
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


void func_464(){
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

int func_465(){
if(!Global_2635559.f_606==0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_611) < func_462(0)){
return 1;
}
return 0;
}

int func_466(){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE()==5){
return 0;
}}
if(Global_2635559.f_517==MISC::GET_FRAME_COUNT()){
return 0;
}
if(!func_468(PLAYER::PLAYER_ID()) && !func_467(0)){
return 0;
}
return 1;
}


bool func_467(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_468(bool bParam0){
if(bParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, bParam0);
}
return 1;
}

int func_469(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
var uVar4;
if(func_475(iParam0, &Var1, &Var2, &uVar4, &iVar0)){
if(MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var2, Var1, uVar4, &Var3)){
if(func_471(iParam0, Var3, Var2, iVar0)){
Local_1082.f_1177={
Var3 
};
Local_1082.f_1186=func_470(Var3, Var2);
return 1;
}}}
return 0;
}


float func_470(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_471(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
if(func_156(iParam0, 15)){
if(!func_472(iParam0, Param1, Param2, iParam3)){
return 0;
}}
if(Local_168.f_377.f_42 !=0){
Stack.Push(iParam0);
Stack.Push(Param1);
Call_Loc(Local_168.f_377.f_42);
if(!StackVal){
return 0;
}}elseif(!func_84(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
return 0;
}
return 1;
}

int func_472(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=vdist(Param1, Param2);
if(fVar0 > func_474()){
return 0;
}
fVar1=vdist(Param1, func_204());
if(fVar1 < func_172()){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam3)){
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam3, Param1) 
};
if(MISC::ABSF(Var2.f_0) > func_473()){
return 0;
}}
return 1;
}


float func_473(){
if(Local_168.f_562.f_6 !=0){
Call_Loc(Local_168.f_562.f_6);
return StackVal;
}
return 100f;
}


float func_474(){
if(Local_168.f_562.f_5 !=0){
Call_Loc(Local_168.f_562.f_5);
return StackVal;
}
return Local_151.f_1298.f_6;
}

int func_475(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4){
if(func_156(iParam0, 15)){
*uParam4=func_222(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(*uParam4) && !ENTITY::IS_ENTITY_DEAD(*uParam4, 0)){
*uParam1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam4) 
};
*uParam2={
ENTITY::GET_ENTITY_COORDS(*uParam4, 0) 
};
}else{
return 0;
}}elseif(Local_168.f_377.f_39 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_39);
*uParam1={
StackVal, StackVal, StackVal 
};
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_39);
*uParam2={
StackVal, StackVal, StackVal 
};
}else{
*uParam1={
Local_151.f_780.f_1[iParam0 /*15*/].f_4 
};
*uParam2={
Local_151.f_780.f_1[iParam0 /*15*/].f_4 
};
}
if(iLocal_1058 > 0){
func_476(uParam1);
}
if(!func_156(iParam0, 15) && Local_168.f_377.f_41 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_41);
*uParam3=StackVal;
}elseif((uParam1->f_2 >=0f && uParam1->f_2 < 90f) || (uParam1->f_2 >=270f && uParam1->f_2 < 360f)){
*uParam3=120f;
}else{
*uParam3=60f;
}
return 1;
}


void func_476(var uParam0){
if(iLocal_1058 < 5){
switch (iLocal_1058){
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
iLocal_1058=0;
}
iLocal_1058++;
}

int func_477(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
if(func_479(iParam0, &Var2, &Var1, &iVar0)){
if(func_478(iParam0, Var2, Var1, iVar0)){
Local_1082.f_1177={
Var2 
};
Local_1082.f_1186=func_470(Var2, Var1);
return 1;
}}
return 0;
}

int func_478(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
float fVar0;
if(func_156(iParam0, 15)){
if(!func_472(iParam0, Param1, Param2, iParam3)){
return 0;
}}
if(!func_84(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0)){
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

int func_479(int iParam0, var uParam1, var uParam2, var uParam3){
float fVar0;
bool bVar1;
bool bVar2;
int iVar3;
fVar0=200f;
if(func_156(iParam0, 15)){
*uParam3=func_222(iParam0);
if(!ENTITY::DOES_ENTITY_EXIST(*uParam3)){
return 0;
}
if(func_161()==4){
bVar1=func_165(func_47(1, iParam0), 0);
bVar2=bVar1;
if(!func_9(bVar2, 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2)){
return 0;
}
iVar3=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar2);
*uParam2={
Local_1124[iVar3 /*209*/].f_139 
};
}else{
*uParam2={
ENTITY::GET_ENTITY_COORDS(*uParam3, 0) 
};
}
fVar0=(func_474() / 2f);
}else{
*uParam2={
Local_151.f_780.f_1[iParam0 /*15*/].f_4 
};
}
*uParam1={
func_481(*uParam2, 0f, ((-1f * fVar0) * sin((to_float(iLocal_1058) * 30f))), (fVar0 * cos((to_float(iLocal_1058) * 30f))), 0f) 
};
uParam1->f_2=(uParam1->f_2 + func_480());
iLocal_1058++;
if(iLocal_1058 >=12){
iLocal_1058=0;
}
return 1;
}


float func_480(){
return 60f;
}


Vector3 func__481(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3){
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


void func_482(bool bParam0){
if(!func_1160(83)){
if(bParam0){
PATHFIND::LOAD_ALL_PATH_NODES(1);
func_150(83);
}}elseif(!bParam0){
PATHFIND::LOAD_ALL_PATH_NODES(0);
func_483(83);
}}


void func_483(int iParam0){
if(func_121(&uLocal_1051, iParam0)){}}


void func_484(var uParam0, int iParam1){
int iVar0;
if(!func_156(iParam1, 15)){
return;
}
if(Local_168.f_562.f_10==0){
return;
}
Call_Loc(Local_168.f_562.f_10);
iVar0=StackVal;
if(iVar0==0 || !STREAMING::IS_MODEL_VALID(iVar0)){
return;
}
*uParam0=iVar0;
}

int func_485(int iParam0){
int iVar0;
if(!func_141(1, iParam0)){
return 0;
}
iVar0=Local_151.f_780.f_1[iParam0 /*15*/].f_9;
if(iVar0 !=-1){
if(!func_133(Local_151.f_1417.f_1[iVar0 /*2*/]) || !func_13(&(Local_1082.f_1169), 2000, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1038)){
return 0;
}
Stack.Push(Local_168.f_377.f_54 !=0);
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_54);
if(StackVal && !StackVal){
return 0;
}
return 1;
}

int func_486(int iParam0){
int iVar0;
if(func_156(iParam0, 15)){
if(!func_13(&(Local_1082.f_1090.f_11), func_147(), 0)){
return 0;
}}
if(Local_168.f_377.f_34 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_34);
iVar0=StackVal;
if(iVar0 !=-1){
if(!func_13(&(Local_1082.f_843[iParam0 /*8*/].f_6), iVar0, 0)){
return 0;
}else{
func_28(&(Local_1082.f_843[iParam0 /*8*/].f_6));
}}}
return 1;
}

int func_487(int iParam0){
if(func_156(iParam0, 15)){
return func_149();
}
if(Local_168.f_377.f_23 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_377.f_23);
return StackVal;
}
return 1;
}


void func_488(int iParam0, int iParam1){
if(Local_151.f_780.f_1[iParam0 /*15*/].f_9==-1){
return;
}
if(func_140(iParam0) > 2 && func_140(iParam0) < 5){
if(func_489(iParam0, iParam1)){
func_200(iParam0, 2);
}else{
func_199(iParam0, 2);
}}}


bool func_489(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
iVar0=func_490(iParam1);
if(iVar0 !=func_64() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0)){
iVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
return func_157(iVar1, 2);
}}
return func_156(iParam0, 2);
}


bool func_490(int iParam0){
int iVar0;
bool bVar1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!PED::IS_PED_INJURED(iVar0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
if(bVar1 !=func_64() && func_9(bVar1, 0, 1)){
return bVar1;
}}}
return func_64();
}


void func_491(int iParam0, int iParam1){
if(func_156(iParam0, 15)){
*iParam1=0;
}}

int func_492(int iParam0, int iParam1, bool bParam2){
var uVar0;
var uVar1;
if(func_156(iParam0, 15)){
if(!bParam2){
uVar0=func_47(1, iParam0);
return 1;
}
if(func_46(iParam0)){
uVar1=func_47(1, iParam0);
return 1;
}
return 0;
}
return 0;
}


void func_493(int iParam0, int iParam1){
Local_1082.f_843[iParam0 /*8*/].f_1=iParam1;
}

int func_494(int iParam0, int iParam1){
int iVar0;
if(iParam1 !=func_496()){
return -1;
}
iVar0=0;
while (iVar0 < Local_151.f_19){
if(iParam0==func_495(iVar0)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_495(int iParam0){
return Local_1082.f_2.f_51[iParam0];
}

int func_496(){
return Local_151.f_19.f_5[0 /*13*/].f_11;
}

int func_497(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
if(iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=0;
while (iVar0 < iVar1){
iVar2=func_498(iParam0, (iVar0 - 1), bParam6, iParam7);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(iParam3 && iVar2==PLAYER::PLAYER_PED_ID()){
}elseif(bParam2){
if(PED::IS_PED_A_PLAYER(iVar2)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
if(((!PED::IS_PED_INJURED(iVar2) && iVar3 !=func_64()) && func_9(iVar3, 1, 1)) || iParam8){
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

int func_498(int iParam0, int iParam1, bool bParam2, int iParam3){
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

int func_499(int iParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_500(NETWORK::NET_TO_VEH(iParam0));
}
return 0;
}

int func_500(int iParam0){
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


void func_501(){
func_502();
}


void func_502(){
}


void func_503(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
func_514(iVar0);
func_509(iVar0);
iVar0++;
}
func_504();
}


void func_504(){
if(Local_151.f_19 <=0){
return;
}
if(!func_508()){
return;
}
Stack.Push(Local_168.f_124.f_36 !=0);
Call_Loc(Local_168.f_124.f_36);
if(StackVal && StackVal){
return;
}
if(func_507()){
if(func_506()){
func_8(5);
}}elseif(func_505()){
func_8(5);
}}

int func_505(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(func_160(iVar0, 3)){
return 1;
}
iVar0++;
}
return 0;
}

int func_506(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(!func_160(iVar0, 3)){
return 0;
}
iVar0++;
}
return 1;
}


bool func_507(){
return func_33(0);
}

int func_508(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(!func_160(iVar0, 6)){
return 0;
}
iVar0++;
}
return 1;
}


void func_509(int iParam0){
if(func_160(iParam0, 29) && func_512(iParam0)){
if(func_511(iParam0)){
func_510(iParam0, 29);
}}}


void func_510(int iParam0, int iParam1){
if(func_121(&(Local_1082.f_2.f_26[iParam0 /*3*/]), iParam1)){}}

int func_511(int iParam0){
int iVar0;
if(func_512(iParam0)){
iVar0=func_495(iParam0);
return (Local_1082.f_843[iVar0 /*8*/].f_1==5 || func_160(iParam0, 0));
}
return 1;
}


bool func_512(int iParam0){
return (func_513(iParam0) && func_496()==2);
}


bool func_513(int iParam0){
return Local_1082.f_2.f_51[iParam0] !=-1;
}


void func_514(int iParam0){
if(Local_151.f_19.f_5[iParam0 /*13*/].f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_124.f_23);
if(StackVal){
if(!func_160(iParam0, 6)){
if(func_130(Local_151.f_19.f_5[iParam0 /*13*/].f_2)){
if(NETWORK::CAN_REGISTER_MISSION_PICKUPS(1)){
if(func_516(iParam0)){
func_515(iParam0, 6);
}}}}}}}


void func_515(int iParam0, int iParam1){
if(func_17(&(Local_1082.f_2.f_26[iParam0 /*3*/]), iParam1)){}}

int func_516(int iParam0){
struct<3> Var0;
float fVar1;
struct<3> Var2;
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1082.f_2[iParam0])){
Var0={
func_553(iParam0) 
};
fVar1=Local_151.f_19.f_5[iParam0 /*13*/].f_6;
Var2={
Local_151.f_19.f_5[iParam0 /*13*/].f_7 
};
if(func_100(Var0)){
return 0;
}
Local_1082.f_2[iParam0]=NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_552(iParam0), Var0, !func_551(iParam0, 0), Local_151.f_19.f_5[iParam0 /*13*/].f_2));
ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), fVar1);
if(!func_100(Var2)){
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1082.f_2[iParam0]), Var2, 2, 1);
}
func_545(iParam0, Var0);
if(Local_168.f_124.f_30 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_124.f_30);
}}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1082.f_2[iParam0])){
if(func_517(&(Local_1082.f_2.f_69[iParam0]), 0, iParam0, func_544(iParam0), func_542(), func_541(iParam0), func_540(iParam0))){
func_224(NETWORK::NET_TO_ENT(Local_1082.f_2[iParam0]), Local_1082.f_1224.f_1[func_225(iParam0) /*5*/].f_1);
Local_1082.f_2.f_60[iParam0]=NETWORK::GET_CLOUD_TIME_AS_INT();
return 1;
}}
return 0;
}

int func_517(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6){
if(*uParam0==-1){
*uParam0=func_539();
if(*uParam0==-1){
return 0;
}}
if(Local_1082.f_1224 !=iParam4){
Local_1082.f_1224=iParam4;
}
if(Local_1082.f_1224.f_1[*uParam0 /*5*/].f_2==-1){
Local_1082.f_1224.f_1[*uParam0 /*5*/].f_2=iParam1;
Local_1082.f_1224.f_1[*uParam0 /*5*/].f_3=iParam2;
}
if(func_518(&(Local_1082.f_1224.f_1[*uParam0 /*5*/]), bParam3, *uParam0, Local_1082.f_1224, &(Local_1082.f_1199), uParam5, uParam6)){
return 1;
}
return 0;
}

int func_518(var uParam0, bool bParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
struct<3> Var4;
bool bVar5;
if(bParam1==func_64()){
return 0;
}
if(!func_538(*uParam4)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
*uParam4={
func_537() 
};
}else{
return 0;
}}
if(!func_536(*uParam4, Global_1956139.f_5767)){
if((MISC::GET_FRAME_COUNT() - Global_1956139.f_5767.f_4) <=90 || (func_15(&(Global_1956139.f_5590)) && !func_13(&(Global_1956139.f_5590), 1500, 0))){
return 0;
}else{
func_534();
func_533(*uParam4);
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
iVar2=func_531(PLAYER::PLAYER_ID(), bVar0);
if(func_530(iVar2)){
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), bVar0);
}
bVar0++;
}}
uVar3=func_529(bParam1, bParam2);
*uParam0=bParam1;
uParam0->f_1=uVar3;
if(func_528(*uParam0)){
Var4={
func_526(*uParam0) 
};
if((Global_1956139.f_5767.f_4==MISC::GET_FRAME_COUNT() || func_525(*uParam0) !=iParam3) || !func_536(*uParam4, Var4)){
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
func_520(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
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
func_519(*uParam0, iParam3, uParam5, *uParam4, uParam6);
Global_1956139.f_5592=MISC::GET_FRAME_COUNT();
}
return 0;
}


void func_519(struct<2> Param0, int iParam1, var uParam2, struct<3> Param3, var uParam4){
struct<10> Var0;
int iVar1;
if(!func_538(Param3)){
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
iVar1=func_245(1, 1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 10, iVar1);
}}


void func_520(struct<2> Param0, char* sParam1){
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
bVar1=func_524(Param0);
bVar2=func_528(Param0);
uVar3=func_525(Param0);
iVar4=func_523(Param0);
uVar5=func_521(Param0);
if(iVar4==0){
StringCopy(&cVar6, "Initial", 16);
}elseif(iVar4==2){
StringCopy(&cVar6, "Delivered", 16);
}elseif(iVar4==-1){
StringCopy(&cVar6, "Invalid", 16);
}else{
IntToString(&cVar6, iVar4, 16);
}}}

int func_521(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_522(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_14;
}
iVar0++;
}
return 0;
}

int func_522(struct<2> Param0, struct<2> Param1){
if(Param0.f_1 !=-1 && Param1.f_1 !=-1){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return 0;
}

int func_523(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_522(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/];
}
iVar0++;
}
return -1;
}


bool func_524(struct<2> Param0){
return (Param0.f_1 !=-1 && Param0.f_0 !=func_64());
}

int func_525(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_522(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_3;
}
iVar0++;
}
return 0;
}


Vector3 func__526(struct<2> Param0){
int iVar0;
struct<3> Var1;
iVar0=func_527(Param0);
if(iVar0 < 0 || iVar0 >=64){
Var1=-1;
Var1.f_1=-1;
Var1.f_2=-1000;
return Var1;
}
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_527(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(func_522(Param0, Global_2650102.f_199.f_1[iVar0 /*15*/].f_1)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_528(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_522(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_529(bool bParam0, int iParam1){
bool bVar0;
if(Global_1956139.f_5772[iParam1] !=-1){
return Global_1956139.f_5772[iParam1];
}
bVar0=false;
while (bVar0 < 31){
if(!MISC::IS_BIT_SET(Global_1956139.f_5767.f_3, bVar0)){
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), bVar0);
return func_531(bParam0, bVar0);
}
bVar0++;
}
return -1;
}

int func_530(int iParam0){
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

int func_531(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_532(bParam0);
return (iVar0 + bParam1);
}

int func_532(bool bParam0){
return MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(bParam0));
}


void func_533(struct<3> Param0){
Global_1956139.f_5767={
Param0 
};
}


void func_534(){
Global_1956139.f_5767.f_3=0;
Global_1956139.f_5767.f_4=0;
Global_1956139.f_5767={
func_535() 
};
}


Vector3 func__535(){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1000;
return Var0;
}

int func_536(struct<3> Param0, struct<3> Param1){
if(!func_538(Param0)){
return 0;
}
if(Param0.f_0==Param1.f_0 && Param0.f_2==Param1.f_2){
return 1;
}
return 0;
}


Vector3 func__537(){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1000;
Var0.f_1=NETWORK::GET_CLOUD_TIME_AS_INT();
Var0.f_0=SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
Var0.f_2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
return Var0;
}

int func_538(struct<3> Param0){
if(Param0.f_0==-1 || Param0.f_2==-1000){
return 0;
}
return 1;
}

int func_539(){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < 8){
if(!func_524(Local_1082.f_1224.f_1[iVar1 /*5*/])){
iVar0=iVar1;
}else{
iVar1++;
}}
return iVar0;
}

int func_540(int iParam0){
return 0;
}

int func_541(int iParam0){
return 1;
}

int func_542(){
switch (func_543()){
case 0:
return 15;
case 2:
return 16;
case 3:
return 17;
case 4:
return 18;
case 5:
return 19;
case 6:
return 24;
default:
}
return 15;
}

int func_543(){
return Local_1082.f_1187.f_2;
}


bool func_544(int iParam0){
return bLocal_1038;
}


void func_545(int iParam0, struct<3> Param1){
if(func_513(iParam0)){
func_515(iParam0, 29);
if(iParam0 !=func_550(func_495(iParam0))){
func_515(iParam0, 40);
}}elseif(!func_551(iParam0, 7)){
func_515(iParam0, 39);
}
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1082.f_2[iParam0], 1);
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), 1200);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), 50, 0);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), true);
ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_1082.f_2[iParam0]), 1, 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_ENT(Local_1082.f_2[iParam0]), true);
OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), 1);
OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), 1);
if(func_549()){
OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), 1);
}
if(func_548(iParam0)){
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), true);
}else{
func_515(iParam0, 28);
}
if(!func_551(iParam0, 1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]));
}
if(func_551(iParam0, 2)){
ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), Param1, 1, 0, 0, 1);
}
if(func_551(iParam0, 3)){
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]));
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), 1);
}
if(func_551(iParam0, 4)){
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_1082.f_2[iParam0]), 1);
}
if((func_551(iParam0, 6) || func_551(iParam0, 7)) || func_513(iParam0)){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), false, 0);
}
if(Local_151.f_19.f_5[iParam0 /*13*/].f_12 !=-1){
func_515(iParam0, 23);
}
if(func_547(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_1082.f_2[iParam0]), 1);
}
if(func_551(iParam0, 9) || Local_168.f_124.f_38 !=0){
func_546(iParam0, 1, 0);
}}


void func_546(int iParam0, int iParam1, int iParam2){
OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_1082.f_2[iParam0]), iParam1, iParam2);
}

int func_547(int iParam0){
if(Local_151.f_19.f_5[iParam0 /*13*/].f_12 !=-1 && func_126(Local_151.f_1417.f_1[Local_151.f_19.f_5[iParam0 /*13*/].f_12 /*2*/])){
return 1;
}
if(func_551(iParam0, 8)){
return 1;
}
if(func_33(22)){
return 1;
}
return 0;
}


bool func_548(int iParam0){
if(func_160(iParam0, 29)){
return 0;
}
return !func_551(iParam0, 5);
}

int func_549(){
return 0;
}

int func_550(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < Local_151.f_19){
if(Local_1082.f_2.f_51[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_551(int iParam0, int iParam1){
return func_4(&(Local_151.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_552(int iParam0){
if(Local_168.f_124.f_28 !=0){
Stack.Push(iParam0);
Call_Loc(Local_168.f_124.f_28);
return StackVal;
}
return 68603185;
}


Vector3 func__553(int iParam0){
if(func_555(iParam0)){
Stack.Push(iParam0);
Call_Loc(Local_168.f_124.f_27);
return StackVal, StackVal, StackVal;
}elseif(func_512(iParam0)){
return Local_151.f_780.f_1[func_495(iParam0) /*15*/].f_4 + func_554(iParam0, Local_151.f_780.f_1[func_495(iParam0) /*15*/].f_3);
}
return Local_151.f_19.f_5[iParam0 /*13*/].f_3;
}


Vector3 func__554(int iParam0, int iParam1){
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


bool func_555(var uParam0){
struct<3> Var0;
if(Local_168.f_124.f_27==0){
return 0;
}
Stack.Push(uParam0);
Call_Loc(Local_168.f_124.f_27);
Var0={
StackVal, StackVal, StackVal 
};
return !func_100(Var0);
}


void func_556(){
}

int func_557(){
return Local_1082.f_1138;
}


void func_558(int iParam0){
Local_1082.f_1137=iParam0;
}

int func_559(){
int iVar0;
int iVar1;
if(!func_1151(func_1159(), func_1158())){
return 0;
}
if(Local_1082.f_1141==-1){
Local_1082.f_1141=func_1159();
}
if(Local_1082.f_1142==-1){
Local_1082.f_1142=func_1158();
}
if(!func_578()){
return 0;
}
func_577();
func_576();
Local_1082.f_1151=NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_575(), -1, 0);
func_574();
func_571();
func_570();
func_568();
func_566();
iVar0=0;
while (iVar0 < 3){
Local_1082.f_1163[iVar0]=-1;
iVar0++;
}
iVar1=0;
while (iVar1 < 1){
Local_1082.f_1081[iVar1]=-1;
iVar1++;
}
Local_1082.f_1155=MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
Local_1082.f_1136=func_565();
STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_1082.f_1148), &(Local_1082.f_1149));
Global_1894573[iLocal_1039 /*608*/].f_526=Local_1082.f_1148;
Global_1894573[iLocal_1039 /*608*/].f_527=Local_1082.f_1149;
func_564();
if(!func_560()){
return 0;
}
Call_Loc(Local_168.f_1);
return StackVal;
}

int func_560(){
switch (func_563()){
case 2:
return 1;
default:
}
Call_Loc(Local_168.f_90);
Local_1082.f_1=func_561(StackVal, StackVal, StackVal);
return 1;
}


var func__561(struct<3> Param0){
int iVar0;
int iVar1;
float fVar2[3];
int iVar3[3];
struct<3> Var4;
float fVar5;
int iVar6;
float fVar7;
int iVar8;
iVar0=694;
while (iVar0 <=703){
Var4={
func_562(iVar0) 
};
fVar5=vdist2(Var4, Param0);
iVar6=iVar0;
iVar1=0;
while (iVar1 < 3){
if(fVar5 > fVar2[iVar1]){
fVar7=fVar2[iVar1];
iVar8=iVar3[iVar1];
fVar2[iVar1]=fVar5;
iVar3[iVar1]=iVar6;
fVar5=fVar7;
iVar6=iVar8;
}
iVar1++;
}
fVar5=0f;
iVar0++;
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(iVar3[iVar0]==701){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <=90){
if(iVar0 + 1==3){
iVar0=0;
}else{
iVar0++;
}}}
return iVar3[iVar0];
}


Vector3 func__562(int iParam0){
switch (iParam0){
case 684:
return 729.8204f, -1291.16f, 25.2842f;
case 685:
return 333.4431f, -997.5615f, 28.1407f;
case 686:
return -164.0211f, -1296.221f, 30.0465f;
case 687:
return -22.2784f, 216.376f, 105.5677f;
case 688:
return 909.1575f, -2093.444f, 29.494f;
case 689:
return -673.6822f, -2391.013f, 12.8934f;
case 690:
return 227.6459f, -3133.413f, 4.7903f;
case 691:
return 381.5496f, 227.2289f, 102.0405f;
case 692:
return -1232.486f, -691.7514f, 22.6646f;
case 693:
return -1172.481f, -1177.258f, 4.6235f;
case 694:
return 873.6871f, -2194.648f, 29.5193f;
case 695:
return -1276.696f, -1356.844f, 3.3046f;
case 696:
return 21.1183f, 82.7228f, 73.6689f;
case 697:
return -322.2558f, -1400.917f, 30.7681f;
case 698:
return -1421.89f, -240.855f, 45.3791f;
case 699:
return 917.248f, 3567.433f, 32.7733f;
case 700:
return -107.0892f, 2795.575f, 52.2975f;
case 701:
return -230.9694f, 6350.816f, 31.426f;
case 702:
return 1374.142f, -2217.435f, 59.6957f;
case 703:
return 2508.885f, 4215.857f, 38.9267f;
default:
}
return 0f, 0f, 0f;
}

int func_563(){
return Local_1082.f_1187;
}


void func_564(){
if(Local_1082.f_1156==-1){
Local_1082.f_1156=NETWORK::GET_CLOUD_TIME_AS_INT();
}}

int func_565(){
return -1;
}


void func_566(){
int iVar0;
iVar0=0;
while (iVar0 < Local_151.f_129){
Local_1082.f_92[iVar0 /*25*/].f_16=func_567(iVar0);
iVar0++;
}}

int func_567(int iParam0){
if(Local_151.f_129.f_1[iParam0 /*21*/].f_16==-1){
if(iParam0 < 14){
return (iParam0 + 1 * (1000 / Local_151.f_129));
}else{
return ((iParam0 + 1 - 14) * (1000 / Local_151.f_129));
}}
return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_151.f_129.f_1[iParam0 /*21*/].f_16);
}


void func_568(){
Local_1082.f_1090.f_14=func_569();
}


var func__569(){
return Local_151.f_1298.f_3;
}


void func_570(){
Local_1082.f_1139=2;
}


void func_571(){
int iVar0;
iVar0=0;
while (iVar0 < Local_151.f_19){
Local_1082.f_2.f_69[iVar0]=-1;
iVar0++;
}
func_572();
}


void func_572(){
int iVar0;
if(func_573()){
if(func_35(&(Local_1082.f_2.f_51), &(Local_1082.f_1081.f_3))){
func_16(2);
}}else{
iVar0=0;
while (iVar0 < Local_151.f_19){
Local_1082.f_2.f_51[iVar0]=Local_151.f_19.f_5[iVar0 /*13*/].f_10;
iVar0++;
}}}

int func_573(){
return 0;
}


void func_574(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=0;
while (iVar0 < Local_151.f_19){
iVar3=Local_151.f_19.f_5[iVar0 /*13*/].f_10;
iVar4=Local_151.f_19.f_5[iVar0 /*13*/].f_11;
if(iVar3 !=-1 && iVar4 !=0){
switch (iVar4){
case 2:
func_200(iVar3, 14);
break;
}}
iVar0++;
}
iVar5=0;
while (iVar5 < 2){
iVar2=Local_151.f_1298[iVar5];
if(iVar2 !=-1){
func_200(iVar2, 15);
}
iVar5++;
}
iVar1=0;
while (iVar1 < Local_151.f_129){
iVar2=Local_151.f_129.f_1[iVar1 /*21*/].f_8;
if(iVar2 !=-1 && func_156(iVar2, 15)){
if(Local_151.f_129.f_1[iVar1 /*21*/].f_9==-1){
iVar5=0;
while (iVar5 < 2){
if(iVar2==Local_151.f_1298[iVar5]){
Local_1082.f_1090[iVar5 /*5*/].f_2=iVar1;
}
iVar5++;
}}
func_80(iVar1, 19);
}
iVar6=0;
while (iVar6 < Local_151.f_1477){
if(Local_151.f_1477.f_1[iVar6 /*10*/]==iVar1){
func_80(iVar1, 21);
}
iVar6++;
}
iVar1++;
}}


char* func_575(){
switch (Global_2697021){
case 0:
return "freemode";
default:
}
return "freemode";
}


void func_576(){
}


void func_577(){
}

int func_578(){
func_1150();
func_615();
if(!func_580()){
return 0;
}
func_579();
Stack.Push(Local_168.f_0 !=0);
Call_Loc(Local_168.f_0);
if(StackVal && !StackVal){
return 0;
}
return 1;
}


void func_579(){
}

int func_580(){
if(func_1160(12)){
return 1;
}
if(!func_590()){
return 0;
}
func_585();
func_582();
func_581();
if(Local_168.f_13 !=0){
Call_Loc(Local_168.f_13);
}
func_150(12);
return 1;
}


void func_581(){
}


void func_582(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 2){
iVar0++;
}
iVar0=0;
while (iVar0 < 0){
iVar0++;
}
if(Local_151.f_1319 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1319){
iVar0++;
}}
if(Local_151.f_1306 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1306){
iVar0++;
}}
if(Local_151.f_1489 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1489){
iVar0++;
}}
if(Local_151.f_1417 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1417){
iVar0++;
}}
if(Local_151.f_19 > 0){
iVar0=0;
while (iVar0 < Local_151.f_19){
if(-1 !=Local_151.f_19.f_5[iVar0 /*13*/].f_10){
}
iVar0++;
}}
if(func_584() > 0){
iVar0=0;
while (iVar0 < 3){
if(!func_100(Local_151.f_1576[iVar0 /*15*/].f_3)){
}
iVar0++;
}}
if(Local_151.f_1477 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1477){
iVar1=0;
while (iVar1 < 1){
iVar1++;
}
iVar0++;
}}
if(Local_151.f_129 > 0){
iVar0=0;
while (iVar0 < Local_151.f_129){
if(-1 !=Local_151.f_129.f_1[iVar0 /*21*/].f_8){
}
if(-1 !=Local_151.f_129.f_1[iVar0 /*21*/].f_8){
}
if(Local_151.f_129.f_1[iVar0 /*21*/].f_10 !=-1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_151.f_1622[Local_151.f_129.f_1[iVar0 /*21*/].f_10 /*16*/]))){
}}
iVar0++;
}}
iVar0=0;
while (iVar0 < 2){
iVar1=0;
while (iVar1 < 5){
if(Local_151.f_129.f_632[iVar0 /*9*/].f_1[iVar1] !=-1){
}
iVar1++;
}
iVar0++;
}
if(Local_151.f_1401 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1401){
iVar0++;
}}
iVar0=0;
while (iVar0 < 2){
if(!func_100(Local_151.f_1815[iVar0 /*8*/])){
}
iVar0++;
}
if(Local_151.f_1008 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1008){
iVar0++;
}}
if(func_583() > 0){
iVar0=0;
while (iVar0 < func_583()){
iVar0++;
}}
if(Local_151.f_1421 > 0){
iVar0=0;
while (iVar0 < Local_151.f_1421){
iVar0++;
}}
if(Local_151.f_780 > 0){
iVar0=0;
while (iVar0 < Local_151.f_780){
iVar0++;
}}}

int func_583(){
int iVar0;
int iVar1[12];
int iVar2;
bool bVar3;
int iVar4;
iVar2=0;
while (iVar2 < 12){
iVar1[iVar2]=-1;
iVar2++;
}
iVar4=0;
while (iVar4 < Local_151.f_129){
if(Local_151.f_129.f_1[iVar4 /*21*/].f_10 !=-1){
bVar3=true;
iVar2=0;
while (iVar2 < 12){
if(iVar1[iVar2]==Local_151.f_129.f_1[iVar4 /*21*/].f_10){
bVar3=false;
}
iVar2++;
}
if(bVar3){
iVar1[iVar0]=Local_151.f_129.f_1[iVar4 /*21*/].f_10;
iVar0++;
}}
iVar4++;
}
return iVar0;
}

int func_584(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 3){
if(!func_100(Local_151.f_1576[iVar1 /*15*/].f_3)){
iVar0++;
}
iVar1++;
}
return iVar0;
}


void func_585(){
var uVar0;
var uVar1;
uVar0=uVar0;
uVar1=uVar1;
func_589(Local_151.f_1298.f_7, 2, "data.Ambush.iCount", "MAX_NUM_AMBUSH_VEHICLES");
func_589(func_588(), 1, "data.BottomRightHUD (GET_NUM_BOTTOM_RIGHT_HUD())", "MAX_NUM_BOTTOM_RIGHT_HUD");
func_589(Local_151.f_1319, 20, "data.CustomSpawns.iCount", "MAX_NUM_CUSTOM_SPAWNS");
func_589(Local_151.f_1306, 1, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
func_589(Local_151.f_1489, 3, "data.Interact.iNumLocations", "MAX_NUM_INTERACT_LOCATIONS");
func_589(Local_151.f_1417, 1, "data.Interior.iCount", "MAX_NUM_MISSION_INTERIORS");
func_589(Local_151.f_19, 8, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
func_589(func_584(), 3, "data.MovingDoor (GET_NUM_MOVING_DOORS())", "MAX_NUM_MOVING_DOORS");
func_589(Local_151.f_129, 30, "data.Ped.iCount", "MAX_NUM_PEDS");
func_589(func_587(), 2, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
func_589(Local_151.f_1477, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
func_589(Local_151.f_1401, 2, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
func_589(Local_151.f_1008, 23, "data.Prop.iCount", "MAX_NUM_PROPS");
func_589(func_583(), 12, "data.Scenario (GET_NUM_PED_SCENARIOS())", "MAX_NUM_SCENARIOS");
func_589(func_586(), 2, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
func_589(Local_151.f_1421, 6, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
func_589(Local_151.f_780, 15, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

int func_586(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 2){
if(!func_100(Local_151.f_1815[iVar1 /*8*/])){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_587(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < Local_151.f_129){
if(Local_151.f_129.f_1[iVar0 /*21*/].f_14 > iVar1){
iVar1=Local_151.f_129.f_1[iVar0 /*21*/].f_14;
}
iVar0++;
}
return iVar1 + 1;
}

int func_588(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 1){
iVar0++;
iVar1++;
}
return iVar0;
}


void func_589(int iParam0, int iParam1, char* sParam2, char* sParam3){
if(iParam0 <=iParam1){}}

int func_590(){
if(!func_614(Local_1048.f_0)){
return 1;
}
return func_591(func_611(), &Local_151, &Local_169);
}

int func_591(char* sParam0, var uParam1, var uParam2){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
func_610();
if(!DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam0, 0)){
return 0;
}
func_593(uParam1);
func_592(uParam2);
return 1;
}


void func_592(var uParam0){
DATAFILE::DATAFILE_DELETE(0);
*uParam0=0;
uParam0->f_1=0;
StringCopy(&(uParam0->f_2), "", 64);
uParam0->f_18=0;
uParam0->f_19=0;
}


void func_593(var uParam0){
int iVar0;
var uVar1;
var uVar2;
iVar0=DATAFILE::DATAFILE_GET_FILE_DICT(0);
uVar1=DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
Global_4718592.f_114152=DATAFILE::DATADICT_GET_INT(iVar0, "debugOnlyVersion");
func_594(&uVar1, uParam0, 0, &uVar2);
}


bool func_594(var uParam0, var uParam1, bool bParam2, var uParam3){
if(!bParam2 || *uParam3==0){
func_595(uParam0, uParam1);
}
if(!bParam2 || *uParam3==1){}
if(!bParam2 || *uParam3==2){
*uParam3=0;
return 1;
}
*uParam3++;
return !bParam2;
}


void func_595(var uParam0, var uParam1){
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
var uVar65[5];
int iVar66[5];
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
int iVar136;
var uVar137;
bool bVar138;
var uVar139;
bool bVar140;
int iVar141;
int iVar142;
var uVar143;
bool bVar144;
var uVar145;
bool bVar146;
var uVar147;
bool bVar148;
int iVar149;
int iVar150;
var uVar151;
bool bVar152;
var uVar153;
bool bVar154;
int iVar155;
int iVar156;
var uVar157[1];
int iVar158[1];
var uVar159;
bool bVar160;
var uVar161;
bool bVar162;
var uVar163;
bool bVar164;
int iVar165;
int iVar166;
var uVar167;
bool bVar168;
int iVar169;
var uVar170[1];
int iVar171[1];
var uVar172[1];
int iVar173[1];
var uVar174[1];
int iVar175[1];
var uVar176[1];
int iVar177[1];
int iVar178;
int iVar179;
var uVar180[1];
int iVar181[1];
var uVar182;
bool bVar183;
var uVar184;
bool bVar185;
var uVar186;
bool bVar187;
var uVar188;
bool bVar189;
var uVar190;
bool bVar191;
int iVar192;
var uVar193;
bool bVar194;
int iVar195;
var uVar196;
bool bVar197;
var uVar198;
bool bVar199;
var uVar200;
bool bVar201;
var uVar202[1];
int iVar203[1];
func_609(&iVar5, *uParam0, "me");
func_609(&iVar6, iVar5, "blp");
func_609(&iVar7, iVar5, "ents");
func_609(&iVar24, *uParam0, "pd");
func_609(&iVar25, iVar24, "pds");
func_609(&iVar62, iVar24, "grp");
func_609(&uVar63, iVar62, "rel");
func_609(&iVar64, iVar62, "trg");
func_609(&iVar71, *uParam0, "vh");
func_609(&iVar72, iVar71, "veh");
func_609(&iVar87, iVar72, "blp");
func_609(&iVar96, *uParam0, "pp");
func_609(&iVar97, iVar96, "prps");
func_609(&iVar110, *uParam0, "want");
func_609(&iVar111, *uParam0, "modt");
func_609(&iVar112, *uParam0, "amb");
func_609(&iVar113, iVar112, "veh");
func_609(&iVar116, *uParam0, "gt");
func_609(&iVar117, iVar116, "loc");
func_609(&iVar126, iVar117, "blp");
func_609(&iVar135, *uParam0, "cst");
func_609(&iVar136, iVar135, "csts");
func_609(&iVar141, *uParam0, "pop");
func_609(&iVar142, iVar141, "blkr");
func_609(&iVar149, *uParam0, "inte");
func_609(&iVar150, iVar149, "int");
func_609(&iVar155, *uParam0, "ta");
func_609(&iVar156, iVar155, "ars");
func_609(&iVar165, *uParam0, "ptrl");
func_609(&iVar166, iVar165, "pat");
func_609(&iVar169, iVar166, "nd");
func_609(&iVar178, *uParam0, "mvdr");
func_609(&iVar179, iVar178, "mvdrs");
func_609(&iVar192, *uParam0, "sro");
func_609(&iVar195, *uParam0, "port");
if(func_608(*uParam0, "fmbs")==7){
bVar4=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar7, &Var0)==7){
iVar9[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar7, "mn")==7){
bVar11=true;
}
if(func_608(iVar7, "pos")==7){
bVar13=true;
}
if(func_608(iVar7, "head")==7){
bVar15=true;
}
if(func_608(iVar7, "rot")==7){
bVar17=true;
}
if(func_608(iVar7, "cv")==7){
bVar19=true;
}
if(func_608(iVar7, "crt")==7){
bVar21=true;
}
if(func_608(iVar7, "int")==7){
bVar23=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar25, &Var0)==7){
iVar27[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar25, "mn")==7){
bVar29=true;
}
if(func_608(iVar25, "pos")==7){
bVar31=true;
}
if(func_608(iVar25, "head")==7){
bVar33=true;
}
if(func_608(iVar25, "wpn")==7){
bVar35=true;
}
if(func_608(iVar25, "veh")==7){
bVar37=true;
}
if(func_608(iVar25, "st")==7){
bVar39=true;
}
if(func_608(iVar25, "scen")==7){
bVar41=true;
}
if(func_608(iVar25, "anim")==7){
bVar43=true;
}
if(func_608(iVar25, "int")==7){
bVar45=true;
}
if(func_608(iVar25, "asi")==7){
bVar47=true;
}
if(func_608(iVar25, "grp")==7){
bVar49=true;
}
if(func_608(iVar25, "mvmt")==7){
bVar51=true;
}
if(func_608(iVar25, "mrd")==7){
bVar53=true;
}
if(func_608(iVar25, "sr")==7){
bVar55=true;
}
if(func_608(iVar25, "sa")==7){
bVar57=true;
}
if(func_608(iVar25, "hr")==7){
bVar59=true;
}
if(func_608(iVar25, "dr")==7){
bVar61=true;
}
iVar2=0;
while (iVar2 < 5){
StringCopy(&Var0, "ar", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar64, &Var0)==7){
iVar66[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar62, "ed")==7){
bVar68=true;
}
if(func_608(iVar62, "gt")==7){
bVar70=true;
}
iVar2=0;
while (iVar2 < 2){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar72, &Var0)==7){
iVar74[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar72, "mn")==7){
bVar76=true;
}
if(func_608(iVar72, "pos")==7){
bVar78=true;
}
if(func_608(iVar72, "head")==7){
bVar80=true;
}
if(func_608(iVar72, "col")==7){
bVar82=true;
}
if(func_608(iVar72, "int")==7){
bVar84=true;
}
if(func_608(iVar72, "vds")==7){
bVar86=true;
}
if(func_608(iVar87, "sprt")==7){
bVar89=true;
}
if(func_608(iVar87, "hclr")==7){
bVar91=true;
}
if(func_608(iVar87, "scl")==7){
bVar93=true;
}
if(func_608(iVar87, "sh")==7){
bVar95=true;
}
iVar2=0;
while (iVar2 < 2){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar97, &Var0)==7){
iVar99[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar97, "mn")==7){
bVar101=true;
}
if(func_608(iVar97, "pos")==7){
bVar103=true;
}
if(func_608(iVar97, "head")==7){
bVar105=true;
}
if(func_608(iVar97, "rot")==7){
bVar107=true;
}
if(func_608(iVar97, "int")==7){
bVar109=true;
}
if(func_608(iVar113, "idx")==7){
bVar115=true;
}
if(func_608(iVar117, "pos")==7){
bVar119=true;
}
if(func_608(iVar117, "rad")==7){
bVar121=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar117, &Var0)==7){
iVar123[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar117, "brd")==7){
bVar125=true;
}
if(func_608(iVar126, "sprt")==7){
bVar128=true;
}
if(func_608(iVar126, "hclr")==7){
bVar130=true;
}
if(func_608(iVar126, "scl")==7){
bVar132=true;
}
if(func_608(iVar126, "sh")==7){
bVar134=true;
}
if(func_608(iVar136, "vcst")==7){
bVar138=true;
}
if(func_608(iVar136, "hcst")==7){
bVar140=true;
}
if(func_608(iVar142, "typ")==7){
bVar144=true;
}
if(func_608(iVar142, "min")==7){
bVar146=true;
}
if(func_608(iVar142, "max")==7){
bVar148=true;
}
if(func_608(iVar150, "typ")==7){
bVar152=true;
}
if(func_608(iVar150, "var")==7){
bVar154=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar156, &Var0)==7){
iVar158[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar156, "vmn")==7){
bVar160=true;
}
if(func_608(iVar156, "vmx")==7){
bVar162=true;
}
if(func_608(iVar156, "fwd")==7){
bVar164=true;
}
if(func_608(iVar166, "pedi")==7){
bVar168=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "scro", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar169, &Var0)==7){
iVar171[iVar2]=1;
}
StringCopy(&Var0, "pos", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar169, &Var0)==7){
iVar173[iVar2]=1;
}
StringCopy(&Var0, "look", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar169, &Var0)==7){
iVar175[iVar2]=1;
}
StringCopy(&Var0, "dur", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar169, &Var0)==7){
iVar177[iVar2]=1;
}
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar179, &Var0)==7){
iVar181[iVar2]=1;
}
iVar2++;
}
if(func_608(iVar179, "mn")==7){
bVar183=true;
}
if(func_608(iVar179, "pos")==7){
bVar185=true;
}
if(func_608(iVar179, "epos")==7){
bVar187=true;
}
if(func_608(iVar179, "rot")==7){
bVar189=true;
}
if(func_608(iVar179, "erot")==7){
bVar191=true;
}
if(func_608(iVar192, "name")==7){
bVar194=true;
}
if(func_608(iVar195, "pos")==7){
bVar197=true;
}
if(func_608(iVar195, "head")==7){
bVar199=true;
}
if(func_608(iVar195, "plnkp")==7){
bVar201=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_608(iVar195, &Var0)==7){
iVar203[iVar2]=1;
}
iVar2++;
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
while (iVar2 < 5){
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
if(bVar138){
uVar137=DATAFILE::DATADICT_GET_ARRAY(iVar136, "vcst");
}
if(bVar140){
uVar139=DATAFILE::DATADICT_GET_ARRAY(iVar136, "hcst");
}
if(bVar144){
uVar143=DATAFILE::DATADICT_GET_ARRAY(iVar142, "typ");
}
if(bVar146){
uVar145=DATAFILE::DATADICT_GET_ARRAY(iVar142, "min");
}
if(bVar148){
uVar147=DATAFILE::DATADICT_GET_ARRAY(iVar142, "max");
}
if(bVar152){
uVar151=DATAFILE::DATADICT_GET_ARRAY(iVar150, "typ");
}
if(bVar154){
uVar153=DATAFILE::DATADICT_GET_ARRAY(iVar150, "var");
}
iVar2=0;
while (iVar2 < 1){
if(iVar158[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar157[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar156, &Var0);
}
iVar2++;
}
if(bVar160){
uVar159=DATAFILE::DATADICT_GET_ARRAY(iVar156, "vmn");
}
if(bVar162){
uVar161=DATAFILE::DATADICT_GET_ARRAY(iVar156, "vmx");
}
if(bVar164){
uVar163=DATAFILE::DATADICT_GET_ARRAY(iVar156, "fwd");
}
if(bVar168){
uVar167=DATAFILE::DATADICT_GET_ARRAY(iVar166, "pedi");
}
iVar2=0;
while (iVar2 < 1){
if(iVar171[iVar2]){
StringCopy(&Var0, "scro", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar170[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar169, &Var0);
}
if(iVar173[iVar2]){
StringCopy(&Var0, "pos", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar172[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar169, &Var0);
}
if(iVar175[iVar2]){
StringCopy(&Var0, "look", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar174[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar169, &Var0);
}
if(iVar177[iVar2]){
StringCopy(&Var0, "dur", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar176[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar169, &Var0);
}
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
if(iVar181[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar180[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar179, &Var0);
}
iVar2++;
}
if(bVar183){
uVar182=DATAFILE::DATADICT_GET_ARRAY(iVar179, "mn");
}
if(bVar185){
uVar184=DATAFILE::DATADICT_GET_ARRAY(iVar179, "pos");
}
if(bVar187){
uVar186=DATAFILE::DATADICT_GET_ARRAY(iVar179, "epos");
}
if(bVar189){
uVar188=DATAFILE::DATADICT_GET_ARRAY(iVar179, "rot");
}
if(bVar191){
uVar190=DATAFILE::DATADICT_GET_ARRAY(iVar179, "erot");
}
if(bVar194){
uVar193=DATAFILE::DATADICT_GET_ARRAY(iVar192, "name");
}
if(bVar197){
uVar196=DATAFILE::DATADICT_GET_ARRAY(iVar195, "pos");
}
if(bVar199){
uVar198=DATAFILE::DATADICT_GET_ARRAY(iVar195, "head");
}
if(bVar201){
uVar200=DATAFILE::DATADICT_GET_ARRAY(iVar195, "plnkp");
}
iVar2=0;
while (iVar2 < 1){
if(iVar203[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar202[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar195, &Var0);
}
iVar2++;
}
*uParam1={
func_607(*uParam0, "fmnm", "") 
};
iVar1=0;
while (iVar1 < 2){
uParam1->f_16[iVar1]=func_606(uVar3, iVar1, 0, bVar4);
iVar1++;
}
uParam1->f_19=func_605(iVar5, "num", 0);
uParam1->f_19.f_1=func_604(iVar6, "sprt", -1);
uParam1->f_19.f_1.f_1=func_604(iVar6, "hclr", 12);
uParam1->f_19.f_1.f_2=func_603(iVar6, "scl", 1f);
uParam1->f_19.f_1.f_3=func_601(iVar6, "sh", 0);
iVar1=0;
while (iVar1 < 8){
iVar2=0;
while (iVar2 < 1){
uParam1->f_19.f_5[iVar1 /*13*/][iVar2]=func_606(uVar8[iVar2], iVar1, 0, iVar9[iVar2]);
iVar2++;
}
uParam1->f_19.f_5[iVar1 /*13*/].f_2=func_600(uVar10, iVar1, 0, bVar11);
uParam1->f_19.f_5[iVar1 /*13*/].f_3={
func_599(uVar12, iVar1, 0f, 0f, 0f, bVar13) 
};
uParam1->f_19.f_5[iVar1 /*13*/].f_6=func_598(uVar14, iVar1, 0f, bVar15);
uParam1->f_19.f_5[iVar1 /*13*/].f_7={
func_599(uVar16, iVar1, 0f, 0f, 0f, bVar17) 
};
uParam1->f_19.f_5[iVar1 /*13*/].f_10=func_606(uVar18, iVar1, -1, bVar19);
uParam1->f_19.f_5[iVar1 /*13*/].f_11=func_600(uVar20, iVar1, 2, bVar21);
uParam1->f_19.f_5[iVar1 /*13*/].f_12=func_606(uVar22, iVar1, -1, bVar23);
iVar1++;
}
uParam1->f_129=func_605(iVar24, "num", 0);
iVar1=0;
while (iVar1 < 30){
iVar2=0;
while (iVar2 < 1){
uParam1->f_129.f_1[iVar1 /*21*/][iVar2]=func_606(uVar26[iVar2], iVar1, 0, iVar27[iVar2]);
iVar2++;
}
uParam1->f_129.f_1[iVar1 /*21*/].f_2=func_600(uVar28, iVar1, 0, bVar29);
uParam1->f_129.f_1[iVar1 /*21*/].f_3={
func_599(uVar30, iVar1, 0f, 0f, 0f, bVar31) 
};
uParam1->f_129.f_1[iVar1 /*21*/].f_6=func_598(uVar32, iVar1, 0f, bVar33);
uParam1->f_129.f_1[iVar1 /*21*/].f_7=func_600(uVar34, iVar1, 0, bVar35);
uParam1->f_129.f_1[iVar1 /*21*/].f_8=func_606(uVar36, iVar1, -1, bVar37);
uParam1->f_129.f_1[iVar1 /*21*/].f_9=func_600(uVar38, iVar1, 0, bVar39);
uParam1->f_129.f_1[iVar1 /*21*/].f_10=func_606(uVar40, iVar1, -1, bVar41);
uParam1->f_129.f_1[iVar1 /*21*/].f_11=func_606(uVar42, iVar1, -1, bVar43);
uParam1->f_129.f_1[iVar1 /*21*/].f_12=func_606(uVar44, iVar1, -1, bVar45);
uParam1->f_129.f_1[iVar1 /*21*/].f_13=func_606(uVar46, iVar1, -1, bVar47);
uParam1->f_129.f_1[iVar1 /*21*/].f_14=func_606(uVar48, iVar1, 0, bVar49);
uParam1->f_129.f_1[iVar1 /*21*/].f_15=func_600(uVar50, iVar1, 2, bVar51);
uParam1->f_129.f_1[iVar1 /*21*/].f_16=func_606(uVar52, iVar1, -1, bVar53);
uParam1->f_129.f_1[iVar1 /*21*/].f_17=func_598(uVar54, iVar1, 60f, bVar55);
uParam1->f_129.f_1[iVar1 /*21*/].f_18=func_598(uVar56, iVar1, 60f, bVar57);
uParam1->f_129.f_1[iVar1 /*21*/].f_19=func_598(uVar58, iVar1, 60f, bVar59);
uParam1->f_129.f_1[iVar1 /*21*/].f_20=func_598(uVar60, iVar1, -1f, bVar61);
iVar1++;
}
iVar1=0;
while (iVar1 < 2){
iVar2=0;
while (iVar2 < 5){
uParam1->f_129.f_632[iVar1 /*9*/].f_1[iVar2]=func_606(uVar65[iVar2], iVar1, -1, iVar66[iVar2]);
iVar2++;
}
uParam1->f_129.f_632[iVar1 /*9*/].f_7=func_606(uVar67, iVar1, 0, bVar68);
uParam1->f_129.f_632[iVar1 /*9*/].f_8=func_606(uVar69, iVar1, -1, bVar70);
iVar1++;
}
uParam1->f_780=func_605(iVar71, "num", 0);
iVar1=0;
while (iVar1 < 15){
iVar2=0;
while (iVar2 < 2){
uParam1->f_780.f_1[iVar1 /*15*/][iVar2]=func_606(uVar73[iVar2], iVar1, 0, iVar74[iVar2]);
iVar2++;
}
uParam1->f_780.f_1[iVar1 /*15*/].f_3=func_600(uVar75, iVar1, 0, bVar76);
uParam1->f_780.f_1[iVar1 /*15*/].f_4={
func_599(uVar77, iVar1, 0f, 0f, 0f, bVar78) 
};
uParam1->f_780.f_1[iVar1 /*15*/].f_7=func_598(uVar79, iVar1, 0f, bVar80);
uParam1->f_780.f_1[iVar1 /*15*/].f_8=func_606(uVar81, iVar1, -1, bVar82);
uParam1->f_780.f_1[iVar1 /*15*/].f_9=func_606(uVar83, iVar1, -1, bVar84);
uParam1->f_780.f_1[iVar1 /*15*/].f_10=func_606(uVar85, iVar1, 0, bVar86);
uParam1->f_780.f_1[iVar1 /*15*/].f_11=func_600(uVar88, iVar1, -1, bVar89);
uParam1->f_780.f_1[iVar1 /*15*/].f_11.f_1=func_600(uVar90, iVar1, 12, bVar91);
uParam1->f_780.f_1[iVar1 /*15*/].f_11.f_2=func_598(uVar92, iVar1, 1f, bVar93);
uParam1->f_780.f_1[iVar1 /*15*/].f_11.f_3=func_597(uVar94, iVar1, 0, bVar95);
iVar1++;
}
uParam1->f_780.f_227=func_605(iVar71, "trv", -1);
uParam1->f_1008=func_605(iVar96, "num", 0);
iVar1=0;
while (iVar1 < 23){
iVar2=0;
while (iVar2 < 2){
uParam1->f_1008.f_1[iVar1 /*12*/][iVar2]=func_606(uVar98[iVar2], iVar1, 0, iVar99[iVar2]);
iVar2++;
}
uParam1->f_1008.f_1[iVar1 /*12*/].f_3=func_600(uVar100, iVar1, 0, bVar101);
uParam1->f_1008.f_1[iVar1 /*12*/].f_4={
func_599(uVar102, iVar1, 0f, 0f, 0f, bVar103) 
};
uParam1->f_1008.f_1[iVar1 /*12*/].f_7=func_598(uVar104, iVar1, 0f, bVar105);
uParam1->f_1008.f_1[iVar1 /*12*/].f_8={
func_599(uVar106, iVar1, 0f, 0f, 0f, bVar107) 
};
uParam1->f_1008.f_1[iVar1 /*12*/].f_11=func_606(uVar108, iVar1, -1, bVar109);
iVar1++;
}
uParam1->f_1286=func_605(iVar110, "wnum", 0);
uParam1->f_1286.f_1=func_605(iVar110, "wfak", -1);
uParam1->f_1286.f_2=func_603(iVar110, "wblk", 250f);
uParam1->f_1289=func_605(iVar111, "time", -1);
uParam1->f_1289.f_1=func_604(iVar111, "disp", 0);
iVar1=0;
while (iVar1 < 2){
uParam1->f_1298[iVar1]=func_606(uVar114, iVar1, -1, bVar115);
iVar1++;
}
uParam1->f_1298.f_3=func_605(iVar112, "wvs", 3);
uParam1->f_1298.f_4=func_605(iVar112, "spd", 15000);
uParam1->f_1298.f_5=func_605(iVar112, "rspd", 5000);
uParam1->f_1298.f_6=func_603(iVar112, "sdst", 200f);
uParam1->f_1298.f_7=func_605(iVar112, "num", 0);
uParam1->f_1306=func_605(iVar116, "num", 0);
iVar1=0;
while (iVar1 < 1){
uParam1->f_1306.f_1[iVar1 /*11*/]={
func_599(uVar118, iVar1, 0f, 0f, 0f, bVar119) 
};
uParam1->f_1306.f_1[iVar1 /*11*/].f_3=func_598(uVar120, iVar1, -1f, bVar121);
iVar2=0;
while (iVar2 < 1){
uParam1->f_1306.f_1[iVar1 /*11*/].f_4[iVar2]=func_606(uVar122[iVar2], iVar1, 0, iVar123[iVar2]);
iVar2++;
}
uParam1->f_1306.f_1[iVar1 /*11*/].f_6=func_598(uVar124, iVar1, 0f, bVar125);
uParam1->f_1306.f_1[iVar1 /*11*/].f_7=func_600(uVar127, iVar1, -1, bVar128);
uParam1->f_1306.f_1[iVar1 /*11*/].f_7.f_1=func_600(uVar129, iVar1, 12, bVar130);
uParam1->f_1306.f_1[iVar1 /*11*/].f_7.f_2=func_598(uVar131, iVar1, 1f, bVar132);
uParam1->f_1306.f_1[iVar1 /*11*/].f_7.f_3=func_597(uVar133, iVar1, 0, bVar134);
iVar1++;
}
uParam1->f_1319=func_605(iVar135, "num", 0);
iVar1=0;
while (iVar1 < 20){
uParam1->f_1319.f_1[iVar1 /*4*/]={
func_599(uVar137, iVar1, 0f, 0f, 0f, bVar138) 
};
uParam1->f_1319.f_1[iVar1 /*4*/].f_3=func_598(uVar139, iVar1, 0f, bVar140);
iVar1++;
}
uParam1->f_1401=func_605(iVar141, "num", 0);
iVar1=0;
while (iVar1 < 2){
uParam1->f_1401.f_1[iVar1 /*7*/]=func_600(uVar143, iVar1, -1, bVar144);
uParam1->f_1401.f_1[iVar1 /*7*/].f_1={
func_599(uVar145, iVar1, 0f, 0f, 0f, bVar146) 
};
uParam1->f_1401.f_1[iVar1 /*7*/].f_4={
func_599(uVar147, iVar1, 0f, 0f, 0f, bVar148) 
};
iVar1++;
}
uParam1->f_1417=func_605(iVar149, "num", 0);
iVar1=0;
while (iVar1 < 1){
uParam1->f_1417.f_1[iVar1 /*2*/]=func_600(uVar151, iVar1, -1, bVar152);
uParam1->f_1417.f_1[iVar1 /*2*/].f_1=func_606(uVar153, iVar1, 0, bVar154);
iVar1++;
}
uParam1->f_1421=func_605(iVar155, "num", 0);
iVar1=0;
while (iVar1 < 6){
iVar2=0;
while (iVar2 < 1){
uParam1->f_1421.f_1[iVar1 /*9*/][iVar2]=func_606(uVar157[iVar2], iVar1, 0, iVar158[iVar2]);
iVar2++;
}
uParam1->f_1421.f_1[iVar1 /*9*/].f_2={
func_599(uVar159, iVar1, 0f, 0f, 0f, bVar160) 
};
uParam1->f_1421.f_1[iVar1 /*9*/].f_5={
func_599(uVar161, iVar1, 0f, 0f, 0f, bVar162) 
};
uParam1->f_1421.f_1[iVar1 /*9*/].f_8=func_598(uVar163, iVar1, 0f, bVar164);
iVar1++;
}
uParam1->f_1477=func_605(iVar165, "num", 0);
iVar1=0;
while (iVar1 < 1){
uParam1->f_1477.f_1[iVar1 /*10*/]=func_606(uVar167, iVar1, -1, bVar168);
iVar2=0;
while (iVar2 < 1){
uParam1->f_1477.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/]=func_606(uVar170[iVar2], iVar1, -1, iVar171[iVar2]);
uParam1->f_1477.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_1={
func_599(uVar172[iVar2], iVar1, 0f, 0f, 0f, iVar173[iVar2]) 
};
uParam1->f_1477.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_4={
func_599(uVar174[iVar2], iVar1, 0f, 0f, 0f, iVar175[iVar2]) 
};
uParam1->f_1477.f_1[iVar1 /*10*/].f_1[iVar2 /*8*/].f_7=func_606(uVar176[iVar2], iVar1, 2000, iVar177[iVar2]);
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 1){
uParam1->f_1576[iVar1 /*15*/][iVar2]=func_606(uVar180[iVar2], iVar1, 0, iVar181[iVar2]);
iVar2++;
}
uParam1->f_1576[iVar1 /*15*/].f_2=func_600(uVar182, iVar1, 0, bVar183);
uParam1->f_1576[iVar1 /*15*/].f_3={
func_599(uVar184, iVar1, 0f, 0f, 0f, bVar185) 
};
uParam1->f_1576[iVar1 /*15*/].f_6={
func_599(uVar186, iVar1, 0f, 0f, 0f, bVar187) 
};
uParam1->f_1576[iVar1 /*15*/].f_9={
func_599(uVar188, iVar1, 0f, 0f, 0f, bVar189) 
};
uParam1->f_1576[iVar1 /*15*/].f_12={
func_599(uVar190, iVar1, 0f, 0f, 0f, bVar191) 
};
iVar1++;
}
iVar1=0;
while (iVar1 < 12){
uParam1->f_1622[iVar1 /*16*/]={
func_596(uVar193, iVar1, "", bVar194) 
};
iVar1++;
}
iVar1=0;
while (iVar1 < 2){
uParam1->f_1815[iVar1 /*8*/]={
func_599(uVar196, iVar1, 0f, 0f, 0f, bVar197) 
};
uParam1->f_1815[iVar1 /*8*/].f_3=func_598(uVar198, iVar1, 0f, bVar199);
uParam1->f_1815[iVar1 /*8*/].f_4=func_606(uVar200, iVar1, -1, bVar201);
iVar2=0;
while (iVar2 < 1){
uParam1->f_1815[iVar1 /*8*/].f_6[iVar2]=func_606(uVar202[iVar2], iVar1, 0, iVar203[iVar2]);
iVar2++;
}
iVar1++;
}}
struct<16> func_596(var uParam0, int iParam1, char* sParam2, bool bParam3){
struct<16> Var0;
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
}else{
StringCopy(&Var0, sParam2, 64);
}
return Var0;
}

int func_597(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
}
return iParam2;
}


float func_598(var uParam0, int iParam1, float fParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
}
return fParam2;
}


Vector3 func__599(var uParam0, int iParam1, struct<3> Param2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
}
return Param2;
}

int func_600(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
}
return iParam2;
}

int func_601(int iParam0, char* sParam1, int iParam2){
if(func_602(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==1){
return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
}
return iParam2;
}


bool func_602(int iParam0){
return iParam0 !=0;
}


float func_603(int iParam0, char* sParam1, float fParam2){
if(func_602(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==3){
return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
}
return fParam2;
}

int func_604(int iParam0, char* sParam1, int iParam2){
if(func_602(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==2){
return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
}
return iParam2;
}

int func_605(int iParam0, char* sParam1, int iParam2){
if(func_602(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==2){
return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
}
return iParam2;
}

int func_606(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
}
return iParam2;
}
struct<16> func_607(int iParam0, char* sParam1, char* sParam2){
struct<16> Var0;
if(func_602(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==4){
StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
}else{
StringCopy(&Var0, sParam2, 64);
}
return Var0;
}

int func_608(int iParam0, char* sParam1){
if(!func_602(iParam0)){
return 0;
}
return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}


void func_609(var uParam0, int iParam1, char* sParam2){
if(!func_602(iParam1)){
return;
}
if(!func_602(*uParam0) && DATAFILE::DATADICT_GET_TYPE(iParam1, sParam2)==6){
*uParam0=DATAFILE::DATADICT_GET_DICT(iParam1, sParam2);
if(!func_602(*uParam0)){
}}
if(!func_602(*uParam0)){}}


void func_610(){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0){
DATAFILE::DATAFILE_DELETE(0);
}}


char* func_611(){
return func_612(func_563(), func_613());
}


char* func_612(int iParam0, int iParam1){
switch (iParam1){
case 1:
return "BB_FactoryRaid_1";
break;
case 2:
return "BB_FactoryRaid_2";
break;
case 3:
return "BB_FactoryRaid_3";
break;
case 0:
return "BB_AircraftCarrier";
break;
case 4:
return "BB_CapturedUFO";
break;
}
return "";
}

int func_613(){
return Local_1082.f_1187.f_1;
}

int func_614(int iParam0){
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


void func_615(){
if(func_1160(21)){
return;
}
func_616();
func_150(21);
}


void func_616(){
switch (func_563()){
case 1:
func_1058();
break;
case 0:
func_784();
break;
case 2:
func_617();
break;
}}


void func_617(){
Local_168.f_13=172395;
Local_168.f_3=166212;
Local_168.f_3.f_1=164640;
Local_168.f_10=164596;
Local_168.f_62.f_6=164572;
Local_168.f_62.f_7=164548;
Local_168.f_62.f_2=164533;
Local_168.f_62.f_3=164518;
Local_168.f_62.f_4=164503;
Local_168.f_11=164367;
Local_168.f_11.f_1=161961;
Local_168.f_166=161502;
Local_168.f_593.f_4=161456;
Local_168.f_124.f_32=161434;
Local_168.f_124.f_13=161422;
Local_168.f_377.f_44=160482;
Local_168.f_15.f_27=160434;
Local_168.f_576=160350;
Local_168.f_104=160324;
Local_168.f_104.f_1=160219;
Local_168.f_104.f_3.f_1=160148;
Local_168.f_104.f_3.f_2=160136;
Local_168.f_104.f_3.f_3=160124;
Local_168.f_104.f_3=159937;
Local_168.f_580=159892;
Local_168.f_580.f_1=159829;
Local_168.f_15.f_6=159808;
Local_168.f_15.f_6.f_5=159739;
Local_168.f_15.f_6.f_6=159714;
Local_168.f_562.f_1=159600;
Local_168.f_90=159348;
}


Vector3 func__618(){
if(func_621()){
return func_619();
}
return Local_151.f_1306.f_1[0 /*11*/];
}


Vector3 func__619(){
int iVar0;
iVar0=func_620();
if(iVar0==-1){
return 0f, 0f, 0f;
}
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1082.f_2[iVar0])){
return 0f, 0f, 0f;
}
return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_1082.f_2[iVar0]), 0);
}

int func_620(){
float fVar0;
int iVar1;
int iVar2;
fVar0=99999f;
iVar1=-1;
iVar2=0;
while (iVar2 < func_38()){
if((func_160(iVar2, 6) && !func_160(iVar2, 4)) && !func_160(iVar2, 3)){
if(Local_942[iVar2 /*7*/].f_1 < fVar0){
fVar0=Local_942[iVar2 /*7*/].f_1;
iVar1=iVar2;
}}
iVar2++;
}
return iVar1;
}

int func_621(){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(func_160(iVar0, 1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_622(int iParam0, int iParam1){
if(Local_942[iParam0 /*7*/].f_2 > 200f){
if(Local_942[iParam0 /*7*/].f_4 !=func_64()){
if(func_158(Local_942[iParam0 /*7*/].f_4)){
return 0;
}}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1849.985f, 2987.693f, 30.81024f, -1789.067f, 2951.236f, 39.80975f, 80f, 0, 1, 0)){
return 0;
}
return 1;
}


Vector3 func__623(){
struct<3> Var0;
Var0={
ENTITY::GET_ENTITY_VELOCITY(iLocal_1040) 
};
return 0f, 0f, Var0.f_2;
}

int func_624(){
if(PED::IS_PED_RAGDOLL(iLocal_1040) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1040, 2330.829f, 2568.204f, 46.31508f, 2326.389f, 2570.28f, 49.00026f, 2f, 0, 1, 0)){
return 1;
}
return 0;
}


bool func_625(){
return Global_100733.f_386==joaat("Omega2TrailerRm");
}

int func_626(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
if(func_627() > 0){
return 1;
}
break;
}
return 0;
}

int func_627(){
return Local_1124[iLocal_1041 /*209*/];
}


char* func_628(int iParam0){
switch (iParam0){
case 0:
return "CUFO_HT_START";
case 1:
return "CUFO_HT_STEAL";
default:
}
return "";
}

int func_629(int iParam0){
if(!func_630(bLocal_1038)){
return -1;
}
switch (iParam0){
case -1:
if(func_627() >=0){
return 0;
}
break;
case 0:
if(func_442(iLocal_1040)){
return 1;
}
break;
case 1:
if(func_627() >=1){
return 2;
}
break;
case 2:
if(func_627() >=2 && !func_442(iLocal_1040)){
return 3;
}
break;
case 3:
if(func_627() < 2){
return 0;
}
break;
}
return -1;
}

int func_630(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}


char* func_631(){
return "SUM20_BB_FAIL";
}


char* func_632(){
return "SUM20_BB_CAPTURED_STOP";
}


char* func_633(int iParam0){
switch (iParam0){
case 0:
return "SUM20_BB_CAPTURED_START";
case 1:
return "SUM20_BB_CAPTURED_APPROACH";
case 2:
return "SUM20_BB_CAPTURED_HANGAR";
case 3:
return "SUM20_BB_CAPTURED_DELIVERING";
default:
}
return "";
}

int func_634(var uParam0, int iParam1){
switch (iParam1){
case 0:
return func_635(uParam0, "ship", Local_151.f_1008.f_1[15 /*12*/].f_4, "DLC_sum20_BB_Captured_Sounds", 0, 0, 0);
default:
}
return 0;
}

int func_635(var uParam0, char* sParam1, struct<3> Param2, char* sParam3, int iParam4, int iParam5, int iParam6){
if(*uParam0==-1){
*uParam0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_COORD(*uParam0, sParam1, Param2, sParam3, iParam4, iParam5, iParam6);
return 1;
}
return 0;
}

int func_636(int iParam0){
switch (iParam0){
case 0:
return 1;
default:
}
return 0;
}

int func_637(int iParam0){
if(iParam0==0){
switch (func_638()){
case 22:
case 24:
case 25:
case 23:
return 1;
break;
}}
return 0;
}

int func_638(){
if(func_627() !=-1){
return Local_171[func_627() /*21*/];
}
return -1;
}


bool func_639(){
return vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_151.f_1008.f_1[15 /*12*/].f_4) <=(100f * 100f);
}

int func_640(int iParam0, var uParam1){
switch (iParam0){
case 0:
uParam1->f_66=joaat("mesa3");
StringCopy(&(uParam1->f_1), "44OGG425", 16);
uParam1->f_5=154;
uParam1->f_6=153;
uParam1->f_8=154;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=4;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), false);
MISC::SET_BIT(&(uParam1->f_77), true);
break;
case 1:
uParam1->f_66=joaat("mesa3");
StringCopy(&(uParam1->f_1), "09ALB692", 16);
uParam1->f_5=154;
uParam1->f_6=153;
uParam1->f_8=154;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=4;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), false);
MISC::SET_BIT(&(uParam1->f_77), true);
MISC::SET_BIT(&(uParam1->f_77), 26);
break;
case 2:
uParam1->f_66=joaat("barracks3");
StringCopy(&(uParam1->f_1), "43PCT649", 16);
*uParam1=4;
uParam1->f_5=132;
uParam1->f_7=132;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
break;
case 3:
uParam1->f_66=joaat("barracks3");
StringCopy(&(uParam1->f_1), "66RAI976", 16);
*uParam1=4;
uParam1->f_5=132;
uParam1->f_7=132;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
break;
case 4:
uParam1->f_66=joaat("mesa3");
StringCopy(&(uParam1->f_1), "53RYN511", 16);
uParam1->f_5=154;
uParam1->f_6=153;
uParam1->f_8=154;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=4;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), false);
MISC::SET_BIT(&(uParam1->f_77), true);
MISC::SET_BIT(&(uParam1->f_77), 25);
break;
case 5:
uParam1->f_66=joaat("mesa3");
StringCopy(&(uParam1->f_1), "89STV802", 16);
*uParam1=3;
uParam1->f_5=152;
uParam1->f_6=153;
uParam1->f_8=153;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=4;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), true);
MISC::SET_BIT(&(uParam1->f_77), 25);
break;
case 6:
uParam1->f_66=joaat("mesa3");
StringCopy(&(uParam1->f_1), "20SKL158", 16);
*uParam1=3;
uParam1->f_5=152;
uParam1->f_6=153;
uParam1->f_8=153;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=4;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), true);
MISC::SET_BIT(&(uParam1->f_77), 25);
break;
case 7:
uParam1->f_66=joaat("mesa3");
StringCopy(&(uParam1->f_1), "44TOR049", 16);
*uParam1=3;
uParam1->f_5=152;
uParam1->f_6=153;
uParam1->f_8=153;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=4;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), true);
MISC::SET_BIT(&(uParam1->f_77), 25);
break;
default:
return 0;
break;
}
return 1;
}


char* func_641(var uParam0){
return "BLIP_752";
}


void func_642(var uParam0){
AUDIO::PLAY_SOUND_FRONTEND(-1, "collect_part", "DLC_sum20_BB_Captured_Sounds", 1);
}

int func_643(int iParam0){
switch (iParam0){
case 0:
switch (func_613()){
case 4:
return 747;
default:
}
break;
}
return 0;
}


void func_644(int iParam0){
func_650(iParam0, 0, 8);
func_648(iParam0, 0, 1, 161883);
func_648(iParam0, 0, 2, 161560);
func_650(iParam0, 1, 7);
func_650(iParam0, 2, 11);
}

int func_645(int iParam0, var uParam1){
if(func_43(iParam0, 3)){
return func_646(iParam0, 0);
}
return 0;
}

int func_646(int iParam0, int iParam1){
if(func_75(Local_151.f_129.f_1[iParam0 /*21*/].f_14)){
if((func_13(&(Local_1082.f_92[iParam0 /*25*/].f_14), Local_1082.f_92[iParam0 /*25*/].f_16, 0) || func_647(iParam0)) || iParam1){
return 1;
}}
return 0;
}

int func_647(int iParam0){
if(((((func_81(iParam0, 1) || func_81(iParam0, 0)) || func_81(iParam0, 14)) || func_81(iParam0, 12)) || func_81(iParam0, 11)) || func_81(iParam0, 13)){
return 1;
}
return 0;
}


void func_648(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
iVar0=Local_172.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18;
uVar1=iParam2;
Local_172.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/]=uVar1;
Local_172.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/].f_1=iParam3;
Local_172.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18++;
}

int func_649(int iParam0, var uParam1){
if(!func_43(iParam0, 3)){
return func_646(iParam0, 0);
}
return 0;
}


void func_650(int iParam0, int iParam1, int iParam2){
Local_172.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/]=iParam2;
Local_172.f_574[iParam0 /*97*/]++;
}


void func_651(){
func_679(0, 4, 164015);
func_677(0, 1, 163943);
func_675(0, 163843);
func_653(1, 2, 3, 4, 5, 163805, 163765, 163748, 162518, 0);
func_679(5, 48, 162035);
}


void func_652(){
}


void func_653(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar0=iParam0;
iVar1=iParam1;
iVar2=iParam2;
iVar3=iParam3;
if(bParam9){
iVar4=iVar3;
iVar5=iVar0;
}else{
iVar4=iVar0;
iVar5=iVar3;
}
func_679(iVar0, 22, iParam5);
func_677(iVar0, iParam4, 162349);
func_654(iVar0, iVar1);
func_654(iVar0, iVar4);
func_654(iVar0, iVar5);
func_654(iVar0, iVar2);
func_679(iVar1, 24, iParam6);
func_677(iVar1, iParam4, 162349);
func_654(iVar1, iVar4);
func_654(iVar1, iVar5);
func_654(iVar1, iVar2);
func_679(iVar2, 25, iParam7);
func_677(iVar2, iParam4, 162349);
func_654(iVar2, iVar1);
func_654(iVar2, iVar4);
func_654(iVar2, iVar5);
func_679(iVar3, 23, iParam8);
func_677(iVar3, iParam4, 162349);
func_654(iVar3, iVar1);
func_654(iVar3, iVar4);
func_654(iVar3, iVar5);
func_654(iVar3, iVar2);
}


void func_654(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Local_171[iParam0 /*21*/].f_19;
uVar1=iParam1;
Local_171[iParam0 /*21*/].f_1[iVar0 /*3*/]=uVar1;
Local_171[iParam0 /*21*/].f_19++;
}

int func_655(){
if(func_656(0)){
return 1;
}
return 0;
}

int func_656(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_38()){
if(!func_657(iVar0, bParam0)){
return 0;
}
iVar0++;
}
return 1;
}

int func_657(int iParam0, bool bParam1){
if(func_160(iParam0, 4) || func_160(iParam0, 3)){
return 1;
}
if(bParam1){
if(func_658(iParam0, iLocal_1042, 6) || func_658(iParam0, iLocal_1042, 9)){
return 1;
}}
return 0;
}


bool func_658(int iParam0, int iParam1, int iParam2){
return func_4(&(Local_1124[iParam1 /*209*/].f_3[iParam0 /*3*/]), iParam2);
}


void func_659(){
func_660("CUFO_OT_RECOVER", 0);
}


void func_660(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_670(sParam0)){
return;
}
func_664();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_663();
func_662(bParam1);
func_661();
}


void func_661(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_662(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_663(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


void func_664(){
func_666();
func_665(0);
}


void func_665(bool bParam0){
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


void func_666(){
if(!func_669()){}
if(func_668()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_667();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_667(){
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

int func_668(){
if(Global_1574757==20){
return 0;
}
return 1;
}

int func_669(){
if(!func_668()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_667();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}


bool func_670(char* sParam0){
if(!func_668()){
return 0;
}
if(Global_1574757==11){
return func_671(sParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_671(char* sParam0){
if(!func_668()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}


void func_672(){
func_660("CUFO_OT_HELPDEL", 0);
}


void func_673(){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1038) > 0){
func_660("BBOT_LOSECOPS", 0);
return;
}
func_660("CUFO_OT_DELIV", 0);
}


void func_674(){
func_660("CUFO_OT_STEAL", 0);
}


void func_675(int iParam0, int iParam1){
Local_171[iParam0 /*21*/].f_18=iParam1;
}


void func_676(){
if(HUD::DOES_BLIP_EXIST(uLocal_1080)){
HUD::REMOVE_BLIP(&uLocal_1080);
}}


void func_677(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
iVar0=Local_171[iParam0 /*21*/].f_19;
uVar1=iParam1;
Local_171[iParam0 /*21*/].f_1[iVar0 /*3*/]=uVar1;
Local_171[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1=iParam2;
Local_171[iParam0 /*21*/].f_19++;
}

int func_678(){
if(func_621()){
return 1;
}
if(func_157(NETWORK::PARTICIPANT_ID(), 1)){
return 1;
}
return 0;
}


void func_679(int iParam0, int iParam1, int iParam2){
Local_171[iParam0 /*21*/]=iParam1;
Local_171[iParam0 /*21*/].f_20=iParam2;
iLocal_1050++;
}


void func_680(){
func_681("FMCOT_GOTO", func_684(), 12, 0);
}


void func_681(char* sParam0, char* sParam1, int iParam2, bool bParam3){
if(func_682(sParam0, sParam1, bParam3, iParam2)){
Global_1574757=19;
Global_1574757.f_56=iParam2;
}}

int func_682(char* sParam0, char* sParam1, bool bParam2, var uParam3){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(func_683(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
func_664();
Global_1574757=3;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=uParam3;
Global_1574757.f_56=uParam3;
func_663();
func_662(bParam2);
func_661();
return 1;
}


bool func_683(char* sParam0, char* sParam1){
if(!func_668()){
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


char* func_684(){
switch (func_613()){
case 4:
return "FMC_LOC_FORTZAN";
default:
}
return "FMC_LOC_FORTZAN";
}


void func_685(){
func_687(0, 4);
func_686(0, 1);
func_687(1, 22);
func_686(1, 2);
func_687(2, 24);
func_686(2, 3);
func_687(3, 48);
}


void func_686(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Local_170[iParam0 /*20*/].f_19;
uVar1=iParam1;
Local_170[iParam0 /*20*/].f_1[iVar0 /*3*/]=uVar1;
Local_170[iParam0 /*20*/].f_19++;
}


void func_687(int iParam0, int iParam1){
Local_170[iParam0 /*20*/]=iParam1;
iLocal_1049++;
}


var func__688(){
return Global_262145.f_24540;
}


var func__689(){
return Global_262145.f_24542;
}


var func__690(){
return Global_262145.f_24541;
}

int func_691(bool bParam0){
if(bParam0){
return Global_262145.f_29670;
}
return 0;
}

int func_692(bool bParam0){
if(bParam0){
return Global_262145.f_29669;
}
return 0;
}


void func_693(){
if(fLocal_1126 !=1f){
AUDIO::SET_GLOBAL_RADIO_SIGNAL_LEVEL(1f);
}
func_694();
}


void func_694(){
Global_2793046.f_5225.f_760=1;
}


void func_695(){
bool bVar0;
int iVar1;
struct<6> Var2;
if(!func_704(bLocal_1038)){
if(func_442(iLocal_1040)){
func_150(25);
}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1040, -1787.215f, 2951.21f, 32.80973f, -1857.46f, 2991.99f, 56.81028f, 80f, 0, 1, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iLocal_1040, 1)){
bVar0=true;
iVar1=PED::GET_VEHICLE_PED_IS_IN(iLocal_1040, 1);
if(VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar1))){
Var2={
func_701(func_702(4), func_702(5), func_702(0), func_702(1)) 
};
AUDIO::PLAY_SOUND_FRONTEND(-1, "06", &Var2, 1);
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iVar1)){
set_rocket_boost_fill(iVar1, 0f);
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iVar1, 0);
}
VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, 0, 1, 0);
func_699(iVar1, 5f, 30, 1056964608, 1, 0, 1);
}}}elseif(func_698(Local_1043, -1814.579f, 2968.072f, 31.80994f) <=150f){
if(PED::IS_PED_IN_ANY_VEHICLE(iLocal_1040, 1)){
bVar0=true;
}}
func_696(bVar0);
}


void func_696(bool bParam0){
if(bParam0){
if(iLocal_1125==-1){
iLocal_1125=MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500);
}
if(func_13(&uLocal_1127, 7000, 0)){
fLocal_1126=0f;
AUDIO::SET_GLOBAL_RADIO_SIGNAL_LEVEL(fLocal_1126);
if(!AUDIO::IS_RADIO_RETUNING()){
if(func_13(&uLocal_1129, iLocal_1125, 0)){
AUDIO::SET_RADIO_RETUNE_UP();
iLocal_1125=-1;
func_28(&uLocal_1129);
}}}else{
fLocal_1126=((5000f - to_float(func_697(&uLocal_1127, 0, 0))) / 5000f);
if(fLocal_1126 < 0f){
fLocal_1126=0f;
}
AUDIO::SET_GLOBAL_RADIO_SIGNAL_LEVEL(fLocal_1126);
}}elseif(fLocal_1126 !=1f){
func_28(&uLocal_1127);
fLocal_1126=1f;
AUDIO::SET_GLOBAL_RADIO_SIGNAL_LEVEL(fLocal_1126);
}}

int func_697(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


float func_698(struct<3> Param0, struct<3> Param1){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1);
}

int func_699(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
if(bParam5){
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
if(!bParam6){
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
PAD::DISABLE_CONTROL_ACTION(0, 352, 1);
PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
func_700(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, iParam1, iParam2, iParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_700(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


struct<6> func_701(char* sParam0, char* sParam1, char* sParam2, char* sParam3){
struct<6> Var0;
StringCopy(&Var0, sParam1, 24);
StringConCat(&Var0, sParam0, 24);
StringConCat(&Var0, sParam3, 24);
StringConCat(&Var0, sParam2, 24);
return Var0;
}


char* func_702(int iParam0){
func_703(&iParam0);
switch (iParam0){
case 0:
return "port";
case 1:
return "al";
case 2:
return "ry";
case 3:
return "n";
case 4:
return "WAR";
case 5:
return "bar";
case 6:
return "m";
case 7:
return "dset";
case 8:
return "lie";
case 9:
return "s";
case 10:
return "01";
case 11:
return "n_DEA";
case 12:
return "w";
case 13:
return "_1_tele";
case 14:
return "_aln";
case 15:
return "_R";
case 16:
return "_01_soun";
case 17:
return "IE";
case 18:
return "pa";
case 19:
return "t";
case 20:
return "scr";
case 21:
return "rc";
case 22:
return "th";
case 23:
return "a";
case 24:
return "p_in";
case 25:
return "_scene";
case 26:
return "_GR_";
case 27:
return "dlc_gr";
case 28:
return "_CS2_";
case 29:
return "oneshot";
case 30:
return "General";
case 31:
return "sounds";
case 32:
return "";
default:
}
return "";
}


void func_703(var uParam0){
*uParam0=(32 - *uParam0);
}

int func_704(bool bParam0){
if(func_630(bParam0)){
return 1;
}
if(func_705(bParam0)){
return 1;
}
return 0;
}


bool func_705(bool bParam0){
return func_296(bParam0, 20);
}


void func_706(){
if(func_557()==0 && func_707(2, 0, 0, 0, 0)){
func_8(12);
}}

int func_707(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4){
if(func_269(PLAYER::PLAYER_ID(), 0) || func_765(PLAYER::PLAYER_ID(), 0)){
if(func_295(PLAYER::PLAYER_ID()) || func_705(PLAYER::PLAYER_ID())){
bParam2=false;
}}
if(NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0){
if(bParam2){
func_712(sParam3, sParam4, 1);
}
if(func_711(26, -1)){
func_709(26, -1);
}
return 1;
}
if(func_15(&(Global_1836858.f_18))){
if(!func_13(&(Global_1836858.f_18), 7500, 0)){
return 0;
}
func_28(&(Global_1836858.f_18));
}
if(func_708()){
if(bParam2){
func_712(sParam3, sParam4, 0);
}
if(func_711(26, -1)){
func_709(26, -1);
}
return 1;
}
if(iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0){
if(bParam2){
func_712(sParam3, sParam4, 1);
}
if(func_711(26, -1)){
func_709(26, -1);
}
return 1;
}
return 0;
}


bool func_708(){
return MISC::IS_BIT_SET(Global_1836858.f_1, 0);
}


void func_709(bool bParam0, int iParam1){
int iVar0;
int iVar1;
if(iParam1==-1){
iParam1=func_89();
}
switch (bParam0){
case 0:
STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
break;
default:
iVar1=func_710(iParam1);
iVar0=MISC::GET_PROFILE_SETTING(iVar1);
if(MISC::IS_BIT_SET(iVar0, bParam0)){
MISC::CLEAR_BIT(&iVar0, bParam0);
STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
}
break;
}}

int func_710(int iParam0){
int iVar0;
if(iParam0==-1){
iParam0=func_89();
}
switch (iParam0){
case 0:
iVar0=909;
break;
case 1:
iVar0=910;
break;
case 2:
iVar0=911;
break;
case 3:
iVar0=912;
break;
case 4:
iVar0=913;
break;
}
return iVar0;
}


bool func_711(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam1==-1){
iParam1=func_89();
}
iVar0=func_710(iParam1);
uVar1=MISC::GET_PROFILE_SETTING(iVar0);
return MISC::IS_BIT_SET(uVar1, iParam0);
}


void func_712(char* sParam0, char* sParam1, bool bParam2){
if((!MISC::IS_BIT_SET(Global_1836858.f_1, 2) && !func_764(PLAYER::PLAYER_ID())) && !func_763(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
sParam0="FMEVEN_NUM1";
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
if(bParam2){
sParam1="FMEVEN_NUM2";
}else{
sParam1="FMEVEN_NUM3";
}}
func_713(66, sParam0, sParam1, 1, -1, 2, 1, 0);
MISC::SET_BIT(&(Global_1836858.f_1), 2);
}}

int func_713(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
struct<80> Var0;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1082130432;
Var0.f_16=1;
Var0.f_71=1;
Var0.f_72=2;
Var0.f_79=-1;
func_762(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_760(&(Var0.f_69), iParam7);
}
return func_714(&Var0);
}

int func_714(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672505.f_2836){
return 0;
}}
func_728(uParam0, uParam0->f_17);
func_725(uParam0);
if(func_92()){
func_725(uParam0);
}
if(func_724(uParam0->f_1)){
func_717();
if(Global_2672505.f_2514[0 /*80*/].f_2==0){
Global_2672505.f_2514[0 /*80*/]={
*uParam0 
};
if(func_716(uParam0->f_69, 8192)){
Global_1935182=1;
}
return 1;
}
if(((Global_2672505.f_2514[0 /*80*/].f_1==13 || Global_2672505.f_2514[0 /*80*/].f_1==53) || Global_2672505.f_2514[0 /*80*/].f_1==54) || Global_2672505.f_2514[0 /*80*/].f_1==58){
Global_2672505.f_2514[0 /*80*/].f_2=5;
}
iVar0=2;
while (iVar0 >=1){
Global_2672505.f_2514[iVar0 + 1 /*80*/]={
Global_2672505.f_2514[iVar0 /*80*/] 
};
iVar0=(iVar0 + -1);
}
Global_2672505.f_2514[1 /*80*/]={
*uParam0 
};
return 1;
}
iVar0=0;
while (iVar0 < 4){
if(Global_2672505.f_2514[iVar0 /*80*/].f_2==0){
Global_2672505.f_2514[iVar0 /*80*/]={
*uParam0 
};
if(iVar0==0){
func_717();
}
return 1;
}else{
if(uParam0->f_1==1){
func_760(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_716(uParam0->f_69, 128)){
if(func_715(Global_2672505.f_2514[iVar0 /*80*/].f_1)){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_760(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_715(int iParam0){
switch (iParam0){
case 88:
case 87:
case 91:
case 92:
case 86:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 89:
case 100:
case 101:
case 102:
case 103:
case 90:
case 110:
return 1;
default:
}
return 0;
}


bool func_716(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_717(){
bool bVar0;
if(Global_2672505.f_2837){
return;
}
if(!Global_78827){
Global_78827=1;
bVar0=true;
}
func_718();
if(bVar0){
Global_78827=0;
}}


void func_718(){
Global_2672505.f_2838=0;
Global_2672505.f_2838.f_582=0;
func_722(&(Global_2672505.f_2838.f_1));
Global_2672505.f_2838.f_1.f_1=0;
func_719(&(Global_2672505.f_2838.f_1), 1);
}


void func_719(var uParam0, int iParam1){
if(uParam0->f_1 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
uParam0->f_1=0;
}
if((uParam0->f_566 || iParam1) && uParam0->f_4 !=0){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
uParam0->f_4=0;
}
if(uParam0->f_568){
SCRIPT::SET_NO_LOADING_SCREEN(0);
uParam0->f_568=0;
}
if(!Global_78827){
if(!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX())){
if(!Global_78828){
if(CAM::IS_SCREEN_FADED_OUT() && !func_721(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_720(0);
}


void func_720(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}

int func_721(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_722(var uParam0){
func_723(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_723(var uParam0){
uParam0->f_547=1f;
uParam0->f_546=0;
uParam0->f_572=0f;
uParam0->f_562=0;
uParam0->f_30=0f;
uParam0->f_548=0f;
uParam0->f_563=0f;
uParam0->f_564=0f;
uParam0->f_545=0;
uParam0->f_567=0;
uParam0->f_576=0;
uParam0->f_568=0;
uParam0->f_569=0;
uParam0->f_570=0;
*uParam0=0.1125f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_578=0;
uParam0->f_579=0;
uParam0->f_577=1f;
}

int func_724(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_725(var uParam0){
if(func_727(uParam0->f_1)){
uParam0->f_72=func_726();
}}

int func_726(){
return 21;
}

int func_727(int iParam0){
switch (iParam0){
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
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
case 81:
case 82:
case 83:
return 1;
default:
}
return 0;
}


void func_728(var uParam0, bool bParam1){
if(func_727(uParam0->f_1)){
uParam0->f_73=1;
}
if(bParam1==func_64() || !func_9(bParam1, 0, 1)){
return;
}
if(func_715(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_729(bParam1, -2, 0, 0, 0);
}}}

int func_729(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(func_380(bParam0) && !bParam4){
if(bParam2){
return 0;
}else{
return 1;
}}
if(iParam1==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if(iVar0 > -1 && iVar0 < 4){
if(Global_4718592.f_108449[iVar0] !=-1){
iParam1=iVar0;
}}}
if(((func_380(PLAYER::PLAYER_ID()) || (func_759() && func_758())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
iVar1=func_757();
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_755(iParam1, bParam0, 0);
}else{
return func_741(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_741(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_755(iParam1, bParam0, 0);
}else{
return func_730(0, -1, 0);
}}else{
return func_730(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_755(iParam1, bParam0, 0);
}else{
return func_741(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_741(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_730(bool bParam0, int iParam1, bool bParam2){
return func_731(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_731(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_740() || (func_739() && func_737())) && Global_1665699.f_1){
if(bParam1){
return func_736(iParam2, iVar0);
}else{
return func_736(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_374(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_735(1);
}else{
return func_735(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_732(iVar0, iParam2, 1, 4);
}else{
return func_732(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_735(1);
}
return func_735(0);
}

int func_732(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_734(iParam0, iParam1, iParam3);
if(func_733(Global_4718592.f_113724, 1)){
if(iVar0==1){
iVar0=0;
}}
if(bParam2){
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
case 3:
return 31;
case 4:
return 32;
case 5:
return 33;
case 6:
return 34;
case 7:
return 35;
case 8:
return 36;
case 9:
return 37;
case 10:
return 38;
case 11:
return 39;
case 12:
return 40;
case 13:
return 41;
case 14:
return 42;
case 15:
return 43;
default:}}else{
switch (iVar0){
case 0:
return 28;
case 1:
return 29;
case 2:
return 30;
}
default:
}
return 28;
}

int func_733(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(Global_4718592.f_166301==65){
return 1;
}}
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 <=6){
if(iParam0==Global_262145.f_9486[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}

int func_734(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_374(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_735(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_736(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_734(iParam1, iParam0, 4);
}
switch (iParam0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
default:
}
return 28;
}

int func_737(){
if(func_738()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_738(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_739(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_740(){
if(func_738() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_741(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam2==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
}else{
iVar0=iParam2;
}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148){
bVar1=true;
}
iVar2=bParam0;
if(iVar2 > -1){
if(Global_1853910[iVar2 /*862*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_747()){
iVar3=func_746(bParam0);
if(!iVar3==-1){
return func_744(iVar3);
}}
if((func_743(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_374(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_735(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_742(1);
}else{
return func_731(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/]==0){
if(bParam0==bParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_735(1);
}else{
return func_731(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==bParam0){
return 28;
}}
iVar4=func_746(bParam0);
if(!iVar4==-1){
return func_744(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_742(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_743(bool bParam0, bool bParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(bParam1)==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(bParam1);
}else{
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && iParam2==-1){
return 0;
}}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}
return PLAYER::GET_PLAYER_TEAM(bParam0)==iParam2;
}

int func_744(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_745(iParam0);
switch (iVar0){
case 0:
return 192;
case 1:
return 193;
case 2:
return 194;
case 3:
return 195;
case 4:
return 196;
case 5:
return 197;
case 6:
return 198;
case 7:
return 199;
case 8:
return 200;
case 9:
return 201;
case 10:
return 202;
case 11:
return 203;
case 12:
return 204;
case 13:
return 205;
case 14:
return 206;
}
default:
}
return 1;
}


var func__745(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_746(bool bParam0){
if(!bParam0==func_64()){
if(func_71(bParam0, 1)){
return Global_2648605.f_818.f_11[func_96(bParam0)];
}}
return -1;
}

int func_747(){
if((((((func_449() || func_754()) || func_92()) || func_753()) || func_752()) || func_750()) || func_748()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_748(){
return func_749(Global_4718592.f_113724);
}

int func_749(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_31715[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_750(){
return func_751(Global_4718592.f_113724);
}

int func_751(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31051[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


var func__752(){
return Global_2683864.f_24;
}


bool func_753(){
return Global_2683864.f_21;
}


var func__754(){
return Global_2683864.f_18;
}

int func_755(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_747()){
iVar2=func_746(iParam1);
if(!iVar2==-1){
return func_744(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_64()){
if(Global_4718592.f_108449[iParam0] !=-1 && Global_4718592.f_108449[iParam0] <=4){
if(Global_4718592.f_108449[iParam0]==0){
iVar0=15;
}elseif(Global_4718592.f_108449[iParam0]==1){
iVar0=18;
}elseif(Global_4718592.f_108449[iParam0]==2){
iVar0=24;
}elseif(Global_4718592.f_108449[iParam0]==4){
if(MISC::IS_BIT_SET(Global_4718592.f_15, 29)){
iVar0=21;
}else{
iVar0=6;
}}else{
iVar0=Global_4718592.f_108449[iParam0];
}}else{
iVar0=func_731(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_756(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_374(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_742(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_756(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=Global_4718592.f_166456;
break;
case 1:
iVar0=Global_4718592.f_166457;
break;
case 2:
iVar0=Global_4718592.f_166458;
break;
case 3:
iVar0=Global_4718592.f_166459;
break;
}
switch (iVar0){
case 0:
return 15;
case 1:
return 21;
case 2:
return 24;
case 3:
return 18;
case 4:
return 6;
case 5:
return 9;
case 6:
return 3;
case 7:
return 1;
case 8:
return 12;
case 9:
return 2;
default:
}
return 2;
}


var func__757(){
return Global_2621446.f_2;
}


var func__758(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__759(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


void func_760(var uParam0, int iParam1){
func_761(uParam0, iParam1);
}


void func_761(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_762(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_64();
uParam1->f_18=func_64();
uParam1->f_19=func_64();
uParam1->f_20=func_64();
uParam1->f_1=uParam0;
uParam1->f_2=1;
StringCopy(&(uParam1->f_21), sParam4, 16);
StringCopy(&(uParam1->f_8), sParam3, 32);
uParam1->f_16=1;
uParam1->f_3=iParam2;
uParam1->f_71=1;
uParam1->f_74=1;
uParam1->f_75=1;
uParam1->f_76=0;
uParam1->f_77=0;
uParam1->f_73=0;
StringCopy(&(uParam1->f_25), "", 64);
StringCopy(&(uParam1->f_41), "", 64);
}

int func_763(bool bParam0){
if(func_764(bParam0)){
return 1;
}
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 8);
}


bool func_764(bool bParam0){
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 2);
}

int func_765(bool bParam0, int iParam1){
if(Global_1894573[bParam0 /*608*/].f_10.f_33 !=-1 && func_766(Global_1894573[bParam0 /*608*/].f_10.f_33)){
return 1;
}
if(iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 !=-1){
if(func_766(Global_1894573[bParam0 /*608*/].f_10.f_32)){
return 1;
}}
return 0;
}

int func_766(int iParam0){
switch (iParam0){
case 155:
case 160:
case 153:
case 162:
case 154:
case 163:
case 171:
case 172:
case 240:
case 239:
return 1;
default:
}
return func_767(iParam0, 0);
return 0;
}

int func_767(int iParam0, int iParam1){
switch (iParam0){
case 199:
case 205:
case 210:
case 211:
return 1;
default:
}
if(iParam1==0){
switch (iParam0){
case 194:
case 193:
case 189:
case 153:
return 1;
}
default:
}
return 0;
}


void func_768(){
int iVar0;
func_783();
func_781();
func_778();
func_777();
func_776();
func_775(5);
func_775(4);
func_775(18);
func_775(0);
func_775(20);
func_775(15);
Local_151.f_1417.f_1[0 /*2*/]=4;
Local_151.f_1417=1;
iVar0=0;
while (iVar0 < 20){
Local_151.f_1319.f_1[iVar0 /*4*/]={
func_774(iVar0) 
};
Local_151.f_1319.f_1[iVar0 /*4*/].f_3=244.1986f;
iVar0++;
}
Local_151.f_1319=20;
func_773();
iVar0=0;
while (iVar0 < Local_151.f_129){
if(func_772(iVar0)){
Local_151.f_129.f_1[iVar0 /*21*/].f_14=1;
func_771(iVar0, 3);
}else{
Local_151.f_129.f_1[iVar0 /*21*/].f_14=0;
Local_151.f_129.f_1[iVar0 /*21*/].f_20=3f;
}
iVar0++;
}
Local_151.f_129.f_632[0 /*9*/].f_1[0]=0;
Local_151.f_129.f_632[0 /*9*/].f_1[1]=1;
Local_151.f_129.f_632[0 /*9*/]=Global_1837214;
Local_151.f_129.f_632[1 /*9*/].f_1[0]=0;
Local_151.f_129.f_632[1 /*9*/].f_1[1]=1;
Local_151.f_129.f_632[1 /*9*/]=Global_1837208;
iVar0=0;
while (iVar0 < Local_151.f_1008){
func_770(iVar0, 8);
func_770(iVar0, 10);
func_770(iVar0, 15);
iVar0++;
}
func_770(15, 26);
iVar0=0;
while (iVar0 < Local_151.f_19){
func_769(iVar0, 1);
func_769(iVar0, 2);
iVar0++;
}}


void func_769(int iParam0, int iParam1){
if(func_17(&(Local_151.f_19.f_5[iParam0 /*13*/]), iParam1)){}}


void func_770(int iParam0, int iParam1){
if(func_17(&(Local_151.f_1008.f_1[iParam0 /*12*/]), iParam1)){}}


void func_771(int iParam0, int iParam1){
if(func_17(&(Local_151.f_129.f_1[iParam0 /*21*/]), iParam1)){}}


bool func_772(int iParam0){
return Local_151.f_129.f_1[iParam0 /*21*/].f_2==joaat("s_m_m_scientist_01");
}


void func_773(){
Local_151.f_1286=2;
}


Vector3 func__774(int iParam0){
switch (func_613()){
case 4:
switch (iParam0){
case 0:
return -1906.231f, 3019.514f, 31.8105f;
case 1:
return -1905.018f, 3021.437f, 31.8105f;
case 2:
return -1907.301f, 3017.431f, 31.8105f;
case 3:
return -1903.545f, 3023.694f, 31.8105f;
case 4:
return -1908.523f, 3014.959f, 31.8103f;
case 5:
return -1902.112f, 3026.209f, 31.8105f;
case 6:
return -1910.139f, 3012.123f, 31.8103f;
case 7:
return -1912.158f, 3009.239f, 31.8103f;
case 8:
return -1900.851f, 3029.08f, 31.8105f;
case 9:
return -1909.241f, 3022.646f, 31.8103f;
case 10:
return -1910.433f, 3020.554f, 31.8103f;
case 11:
return -1907.93f, 3024.946f, 31.8103f;
case 12:
return -1911.645f, 3018.427f, 31.8103f;
case 13:
return -1906.437f, 3027.176f, 31.8103f;
case 14:
return -1913.17f, 3015.363f, 31.8103f;
case 15:
return -1904.967f, 3029.752f, 31.8105f;
case 16:
return -1914.817f, 3012.47f, 31.8103f;
case 17:
return -1912.597f, 3023.293f, 31.8104f;
case 18:
return -1913.893f, 3021.08f, 31.8104f;
case 19:
return -1911.35f, 3025.422f, 31.8104f;
default:
}
break;
}
return 0f, 0f, 0f;
}


void func_775(int iParam0){
if(func_17(&(Local_151.f_16), iParam0)){}}


void func_776(){
switch (func_613()){
case 4:
Local_151.f_129.f_1[25 /*21*/].f_9=-1;
Local_151.f_129.f_1[25 /*21*/].f_8=6;
Local_151.f_129.f_1[26 /*21*/].f_9=2;
Local_151.f_129.f_1[26 /*21*/].f_8=6;
Local_151.f_129.f_1[27 /*21*/].f_9=-1;
Local_151.f_129.f_1[27 /*21*/].f_8=7;
Local_151.f_129.f_1[28 /*21*/].f_9=2;
Local_151.f_129.f_1[28 /*21*/].f_8=7;
Local_151.f_1298.f_3=3;
Local_151.f_1298[0]=6;
Local_151.f_1298[1]=7;
Local_151.f_1298.f_6=100f;
Local_151.f_1298.f_4=10000;
Local_151.f_1298.f_5=5000;
break;
}}


void func_777(){
switch (func_613()){
case 4:
Local_151.f_1306.f_1[0 /*11*/]={
-1858.498f, 2992.826f, 31.8103f 
};
Local_151.f_1306.f_1[0 /*11*/].f_3=2f;
Local_151.f_1306=1;
break;
}}


void func_778(){
switch (func_613()){
case 4:
Local_151.f_1421.f_1[0 /*9*/].f_2={
-1849.985f, 2987.693f, 30.81024f 
};
Local_151.f_1421.f_1[0 /*9*/].f_5={
-1789.067f, 2951.236f, 39.80975f 
};
Local_151.f_1421.f_1[0 /*9*/].f_8=80f;
func_779(0, 0);
Local_151.f_1421.f_1[1 /*9*/].f_2={
-1896.166f, 3014.379f, 30.8105f 
};
Local_151.f_1421.f_1[1 /*9*/].f_5={
-1782.321f, 2947.052f, 131.8514f 
};
Local_151.f_1421.f_1[1 /*9*/].f_8=200f;
func_779(1, 2);
Local_151.f_1421=2;
break;
}}


void func_779(int iParam0, int iParam1){
func_780(&(Local_151.f_1421.f_1[iParam0 /*9*/]), iParam0, iParam1);
}


void func_780(var uParam0, int iParam1, var uParam2){
if(func_17(uParam0, uParam2)){}}


void func_781(){
Local_151.f_1569[0 /*6*/]=3;
Local_151.f_1569[0 /*6*/].f_1=func_782();
}


char* func_782(){
switch (func_543()){
case 0:
return "FMC_HUD_CARGO";
case 4:
return "FMC_HUD_SCARGO";
case 2:
return "FMC_HUD_BIKER";
case 3:
return "FMC_HUD_GUNRUN";
case 5:
return "FMC_HUD_EVENT";
case 6:
return "FMC_HUD_UFO";
default:
}
return "FMC_HUD_CARGO";
}


void func_783(){
int iVar0;
switch (func_563()){
case 2:
iVar0=Global_262145.f_29671;
break;
case 1:
iVar0=Global_262145.f_29667;
break;
case 0:
iVar0=Global_262145.f_29663;
break;
}
Local_151.f_1289=((iVar0 / 60) / 1000);
}


void func_784(){
Local_168.f_13=337190;
Local_168.f_3=166212;
Local_168.f_3.f_1=334713;
Local_168.f_62.f_6=334689;
Local_168.f_62.f_7=334665;
Local_168.f_62.f_2=164533;
Local_168.f_62.f_3=164518;
Local_168.f_62.f_4=164503;
Local_168.f_593.f_4.f_1=333631;
Local_168.f_166=333579;
Local_168.f_166.f_187=333567;
Local_168.f_166.f_192=333502;
Local_168.f_166.f_181=333477;
Local_168.f_166.f_181.f_1=333199;
Local_168.f_166.f_181.f_2=333190;
Local_168.f_11=333137;
Local_168.f_11.f_1=332054;
Local_168.f_124.f_23=333567;
Local_168.f_377.f_23=331966;
Local_168.f_377.f_44=330873;
Local_168.f_377.f_43=330816;
Local_168.f_377=330774;
Local_168.f_377.f_5=330752;
Local_168.f_377.f_13=330724;
Local_168.f_377.f_4=330699;
Local_168.f_377.f_16=330650;
Local_168.f_377.f_33=330568;
Local_168.f_432.f_23=333567;
Local_168.f_484=330555;
Local_168.f_484.f_30=330308;
Local_168.f_484.f_30.f_13=330296;
Local_168.f_484.f_30.f_14=330287;
Local_168.f_484.f_53=330275;
Local_168.f_484.f_5=330235;
Local_168.f_484.f_22=322124;
Local_168.f_484.f_24=322102;
Local_168.f_484.f_56=322075;
Local_168.f_484.f_56.f_2=322063;
Local_168.f_484.f_56.f_3=322002;
Local_168.f_484.f_56.f_1=321939;
Local_168.f_573.f_1=321908;
Local_168.f_573=321861;
Local_168.f_576=160350;
Local_168.f_15.f_27.f_2=321848;
Local_168.f_15.f_27=321821;
Local_168.f_580=321605;
Local_168.f_580.f_1=176080;
Local_168.f_580.f_3=175908;
Local_168.f_580.f_6=175889;
Local_168.f_104.f_1=175692;
Local_168.f_104=175482;
Local_168.f_104.f_2=175456;
Local_168.f_104.f_3.f_1=175385;
Local_168.f_104.f_3.f_2=175373;
Local_168.f_104.f_3.f_3=175361;
Local_168.f_104.f_3=175180;
Local_168.f_15.f_6=175159;
Local_168.f_15.f_6.f_4=175128;
Local_168.f_15.f_6.f_5=175055;
Local_168.f_15.f_6.f_6=175030;
Local_168.f_90=159348;
Local_168.f_10=174899;
}


void func_785(){
func_787(0);
func_787(1);
func_787(2);
func_786(87);
func_786(88);
func_694();
}


void func_786(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_205[iVar0]), bVar1);
}


void func_787(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_48[iVar0]), bVar1);
}


Vector3 func__788(){
struct<3> Var0;
Var0={
ENTITY::GET_ENTITY_VELOCITY(iLocal_1040) 
};
return 0f, 0f, Var0.f_2;
}

int func_789(){
if(PED::IS_PED_RAGDOLL(iLocal_1040) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1040, 3094.456f, -4724.843f, 29.16761f, 3089.353f, -4726.173f, 26.95424f, 1.3f, 0, 1, 0)){
return 1;
}
return 0;
}


float func_790(){
if(Local_1043.f_2 > 27.9f){
return 0.65f;
}
return -1f;
}


bool func_791(){
return Global_100733.f_386==joaat("RM_Control2C");
}

int func_792(int iParam0){
if(!func_630(bLocal_1038)){
return -1;
}
switch (iParam0){
case -1:
if(func_627() >=0){
return 0;
}
break;
case 0:
if(func_627() >=1){
return 1;
}
break;
case 1:
if(func_793()){
return 2;
}
break;
case 2:
if(func_627() >=2){
return 3;
}
break;
case 3:
if(func_627() < 2){
return 0;
}
break;
}
return -1;
}

int func_793(){
int iVar0;
iVar0=0;
while (iVar0 < Local_151.f_129.f_632){
if(func_75(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}


char* func_794(){
return "SUM20_BB_FAIL";
}


char* func_795(){
return "SUM20_BB_AIRCRAFT_STOP";
}


char* func_796(int iParam0){
switch (iParam0){
case 0:
return "SUM20_BB_AIRCRAFT_START";
case 1:
return "SUM20_BB_AIRCRAFT_COLLECT";
case 2:
return "SUM20_BB_AIRCRAFT_COMBAT";
case 3:
return "SUM20_BB_AIRCRAFT_DELIVERING";
default:
}
return "";
}

int func_797(int iParam0){
switch (iParam0){
case 0:
return 1;
default:
}
return 0;
}

int func_798(int iParam0){
switch (iParam0){
case 0:
if(func_75(0) && !func_800()){
return 1;
}
break;
case 1:
if(func_799(iLocal_1042, 4)){
return 1;
}
break;
case 2:
if(func_800()){
return 1;
}
break;
}
return 0;
}


bool func_799(int iParam0, int iParam1){
if(iParam0==iLocal_1042){
return func_138(&(Local_1124[iLocal_1041 /*209*/].f_175.f_2), iParam1);
}
return func_138(&(Local_1124[iParam0 /*209*/].f_175.f_2), iParam1);
}

int func_800(){
int iVar0;
iVar0=0;
while (iVar0 < Local_151.f_1489){
if(!func_801(iVar0)){
return 0;
}
iVar0++;
}
return 1;
}


bool func_801(int iParam0){
return func_138(&(Local_1082.f_1167), iParam0);
}

int func_802(var uParam0, int iParam1){
switch (iParam1){
case 0:
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ALARM_KLAXON_07", 0, -1)){
if(!func_804(1)){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Air_Defences_Activated", func_803(), "DLC_sum20_Business_Battle_AC_Sounds", 0, 0, 0);
}
return func_635(uParam0, "Klaxon_07_Louder", func_803(), "Alarms_Soundset", 0, 0, 0);
}
break;
case 1:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Air_Defences_Activated", func_803(), "DLC_sum20_Business_Battle_AC_Sounds", 0, 0, 0);
return 1;
break;
case 2:
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Air_Defenses_Disabled", func_803(), "DLC_sum20_Business_Battle_AC_Sounds", 0, 0, 0);
return 1;
break;
}
return 0;
}


Vector3 func__803(){
return 3090.325f, -4704.375f, 28.0355f;
}


bool func_804(int iParam0){
return func_138(&Local_1024, iParam0);
}

int func_805(int iParam0){
if(iParam0==2){
return 0;
}
return 1;
}


void func_806(int iParam0){
switch (iParam0){
case 6:
if(HUD::DOES_BLIP_EXIST(uLocal_925[8])){
func_807(&(uLocal_925[8]), 0);
}
if(HUD::DOES_BLIP_EXIST(uLocal_925[9])){
func_807(&(uLocal_925[9]), 0);
}
if(HUD::DOES_BLIP_EXIST(uLocal_925[10])){
func_807(&(uLocal_925[10]), 0);
}
if(HUD::DOES_BLIP_EXIST(uLocal_925[11])){
func_807(&(uLocal_925[11]), 0);
}
break;
}}


void func_807(var uParam0, bool bParam1){
HUD::SET_BLIP_FLASHES(*uParam0, 1);
HUD::SET_BLIP_FLASH_INTERVAL(*uParam0, 250);
HUD::SET_BLIP_FLASH_TIMER(*uParam0, 7000);
if(bParam1){
HUD::FLASH_MINIMAP_DISPLAY();
}}

int func_808(int iParam0){
int iVar0;
switch (iParam0){
case 0:
return 1;
break;
case 6:
if(func_909(0) && func_13(&uLocal_115, 15000, 0)){
if(!func_907()){
return 1;
}else{
func_905(6);
}}
break;
case 1:
if(func_627()==1){
return 1;
}
break;
case 4:
if(func_904()){
return 1;
}
break;
case 3:
if(func_627() >=1){
iVar0=0;
while (iVar0 < Local_151.f_1489){
if(HUD::DOES_BLIP_EXIST(Local_1015.f_8[iVar0]) && HUD::IS_BLIP_ON_MINIMAP(Local_1015.f_8[iVar0])){
return 1;
}
iVar0++;
}}
break;
case 2:
if(func_799(iLocal_1042, 4)){
return 1;
}
if((MISC::GET_FRAME_COUNT() % 30)==0 && func_903(PLAYER::PLAYER_PED_ID(), Local_151.f_780.f_1[7 /*15*/].f_4, 170f, 1)){
if(func_900((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || func_902(PLAYER::PLAYER_PED_ID())))){
return 1;
}}
break;
case 5:
if(func_800()){
return 1;
}
break;
case 7:
if((((func_543() !=5 && !func_71(bLocal_1038, 0)) && func_899(bLocal_1038)) && func_898(bLocal_1038, 0)) && func_809(bLocal_1038)){
return 1;
}
break;
}
return 0;
}

int func_809(bool bParam0){
switch (func_543()){
case 2:
return func_897(bParam0);
case 5:
return func_823();
case 6:
return 0;
default:
}
if(iLocal_114==-1){
return 0;
}
return func_810(bParam0, iLocal_114);
}


bool func_810(bool bParam0, int iParam1){
return func_813(bParam0, iParam1)==func_811(bParam0, iParam1);
}

int func_811(bool bParam0, int iParam1){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
switch (iParam1){
case 2:
return Global_4718592.f_160064.f_13;
break;
case 4:
return Global_4718592.f_160064.f_12;
break;
case 3:
return Global_4718592.f_160064.f_11;
break;
case 5:
return Global_4718592.f_160064.f_10;
break;
case 6:
return Global_4718592.f_160064.f_9;
break;
}
return 0;
}
if(bParam0==func_64() || !func_812(iParam1)){
return 0;
}
return Global_1853910[bParam0 /*862*/].f_267.f_310.f_8[iParam1];
}


bool func_812(int iParam0){
return (iParam0 !=-1 && iParam0 !=8);
}

int func_813(bool bParam0, int iParam1){
int iVar0;
int iVar1;
if(bParam0==func_64() || !func_812(iParam1)){
return 0;
}
iVar0=func_821(iParam1);
iVar1=func_814(bParam0);
return (iVar0 * iVar1);
}

int func_814(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 5){
iVar2=(5 + iVar0);
iVar3=iVar2;
if(func_815(bParam0, iVar3)){
iVar1++;
}else{
}else{
iVar0++;
}}
return iVar1;
}

int func_815(int iParam0, int iParam1){
switch (iParam1){
case 5:
return func_820(iParam0);
case 6:
return func_819(iParam0);
case 7:
return func_818(iParam0);
case 8:
return func_817(iParam0);
case 9:
return func_816(iParam0);
default:
}
return 0;
}

int func_816(int iParam0){
if(iParam0==func_64()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 4);
}

int func_817(int iParam0){
if(iParam0==func_64()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 3);
}

int func_818(int iParam0){
if(iParam0==func_64()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 2);
}

int func_819(int iParam0){
if(iParam0==func_64()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 1);
}

int func_820(int iParam0){
if(iParam0==func_64()){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_310.f_4, 0);
}

int func_821(int iParam0){
return (func_822(iParam0) / 5);
}

int func_822(int iParam0){
switch (iParam0){
case 1:
return Global_262145.f_24388;
case 2:
return Global_262145.f_24389;
case 3:
return Global_262145.f_24390;
case 4:
return Global_262145.f_24391;
case 5:
return Global_262145.f_24392;
case 6:
return Global_262145.f_24393;
case 0:
return Global_262145.f_24394;
default:
}
return 0;
}

int func_823(){
if(!func_824(Local_1082.f_1187.f_3)){
return 0;
}
return 1;
}

int func_824(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam0 >=10){
iVar0=Global_262145.f_25790;
if(iVar0==-1){
return 1;
}
if(func_885(func_896(iVar0), -1, 0) || func_883(func_884(iVar0), -1)){
return 1;
}}else{
iVar1=-99;
iVar2=-1;
if(func_881()){
iVar0=Global_262145.f_25324[iParam0];
if(iVar0==-1){
return 1;
}
iVar3=func_880(iVar0);
if(iVar3 !=-1){
iVar1=func_876(joaat("mp_f_freemode_01"), iVar0, func_880(iVar0), 4);
}
iVar2=func_875(iVar0, 4);
if((func_883(func_884(iVar0), -1) || (iVar2 !=-1 && func_871(iVar2, -1))) || (iVar1 !=-99 && func_825(joaat("mp_f_freemode_01"), func_880(iVar0), iVar1))){
return 1;
}}else{
iVar0=Global_262145.f_25313[iParam0];
if(iVar0==-1){
return 1;
}
iVar4=func_880(iVar0);
if(iVar4 !=-1){
iVar1=func_876(joaat("mp_m_freemode_01"), iVar0, func_880(iVar0), 3);
}
iVar2=func_875(iVar0, 3);
if((func_883(func_884(iVar0), -1) || (iVar2 !=-1 && func_871(iVar2, -1))) || (iVar1 !=-99 && func_825(joaat("mp_m_freemode_01"), func_880(iVar0), iVar1))){
return 1;
}}}
return 0;
}


var func__825(int iParam0, int iParam1, int iParam2){
Global_78341[1 /*14*/]={
func_826(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}
struct<14> func_826(int iParam0, int iParam1, int iParam2, int iParam3){
func_870();
if(iParam0==joaat("mp_m_freemode_01")){
func_854(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_827(iParam1, iParam2, iParam3);
}
return Global_78341[0 /*14*/];
}


void func_827(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_853(iParam1, iParam2);
break;
case 11:
func_852(iParam1, iParam2);
break;
case 8:
func_851(iParam1, iParam2);
break;
case 9:
func_850(iParam1, iParam2);
break;
case 3:
func_849(iParam1, iParam2);
break;
case 4:
func_848(iParam1, iParam2);
break;
case 6:
func_847(iParam1, iParam2);
break;
case 1:
func_846(iParam1, iParam2);
break;
case 7:
func_845(iParam1, iParam2);
break;
case 10:
func_844(iParam1, iParam2);
break;
case 14:
func_843(iParam1, iParam2);
break;
case 12:
func_842(iParam1, iParam2);
break;
case 5:
func_841(iParam1, iParam2);
break;
case 0:
func_838(iParam1, iParam2);
break;
case 13:
func_828(iParam1);
break;
}}


void func_828(int iParam0){
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
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_829(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
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
uParam0->f_12=func_837(iParam8);
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
if(func_836(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_834(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_834(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_834(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_834(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_834(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_834(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_833(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_833(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_833(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_836(14)){
return;
}
iVar0=func_249(func_832(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
iVar0=func_249(func_831(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_830(iParam1, uParam0->f_2, &iVar1)){
iVar0=func_249(iVar1, Global_78338, 0);
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


bool func_830(int iParam0, int iParam1, var uParam2){
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

int func_831(int iParam0, int iParam1){
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

int func_832(int iParam0, int iParam1){
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

int func_833(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
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

int func_834(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_835(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
iVar3=func_249(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(iVar3, uVar1);
}
return 0;
}


bool func_835(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
switch (floor((to_float(iVar0) / 32f))){
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
*uParam3=(iVar0 % 32);
return *uParam2 !=14192;
}


bool func_836(int iParam0){
return Global_43257==iParam0;
}

int func_837(int iParam0){
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


void func_838(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=4;
func_839(iVar0, iParam0, 0, iParam1);
}


void func_839(int iParam0, int iParam1, int iParam2, int iParam3){
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
func_829(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_829(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
func_829(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_829(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_840(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_829(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}

int func_840(int iParam0){
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


void func_841(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_842(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_843(int iParam0, int iParam1){
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
iVar1=round(((to_float(iVar1) * Global_262145.f_2054[iVar9]) * Global_296940.f_26));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_2175[iVar10]) * Global_296940.f_27));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_2200[iVar11]) * Global_296940.f_56));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 10){
iVar1=round(((to_float(iVar1) * Global_262145.f_2329[iVar12]) * Global_296940.f_28));
}}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=4;
func_839(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_28));
}}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_844(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_845(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 55, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_58));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_296940.f_58));
StringCopy(&Var2, "T_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_846(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 26, iParam1);
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
iVar1=round(((to_float(iVar1) * Global_262145.f_2027[iVar8]) * Global_296940.f_29));
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_847(int iParam0, int iParam1){
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
iVar1=round(((to_float(iVar1) * Global_262145.f_1770[iVar8]) * Global_296940.f_25));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_839(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_25));
}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_848(int iParam0, int iParam1){
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
iVar1=round(((to_float(iVar1) * Global_262145.f_1256[iVar8]) * Global_296940.f_23));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_839(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_23));
}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_849(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 16, iParam1);
return;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_850(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 36, iParam1);
return;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_851(int iParam0, int iParam1){
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
iVar1=round((to_float(iVar1) * Global_262145.f_1513[77]));
break;
case 48:
StringCopy(&Var2, "U_FMF_4_14", 16);
iVar3=4;
iVar4=14;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[78]));
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
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[80]));
break;
case 51:
StringCopy(&Var2, "U_FMF_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[81]));
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
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[87]));
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
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[89]));
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
iVar1=90;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[176]));
break;
case 72:
StringCopy(&Var2, "U_FMF_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[177]));
break;
case 73:
StringCopy(&Var2, "U_FMF_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=95;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[178]));
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
iVar1=150;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[186]));
break;
case 82:
StringCopy(&Var2, "U_FMF_11_11", 16);
iVar3=11;
iVar4=11;
iVar1=65;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[187]));
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
iVar1=145;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[191]));
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
iVar1=1560;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[199]));
break;
case 95:
StringCopy(&Var2, "U_FMF_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=195;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[200]));
break;
case 96:
StringCopy(&Var2, "U_FMF_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=200;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[201]));
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
iVar1=975;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[208]));
break;
case 104:
StringCopy(&Var2, "U_FMF_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=2670;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[209]));
break;
case 105:
StringCopy(&Var2, "U_FMF_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[210]));
break;
case 106:
StringCopy(&Var2, "U_FMF_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=400;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[211]));
break;
case 107:
StringCopy(&Var2, "U_FMF_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=2500;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[212]));
break;
case 108:
StringCopy(&Var2, "U_FMF_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2060;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[213]));
break;
case 109:
StringCopy(&Var2, "U_FMF_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2620;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[214]));
break;
case 110:
StringCopy(&Var2, "U_FMF_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[215]));
break;
case 111:
StringCopy(&Var2, "U_FMF_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[216]));
break;
case 112:
StringCopy(&Var2, "U_FMF_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2280;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[217]));
break;
case 113:
StringCopy(&Var2, "U_FMF_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[218]));
break;
case 114:
StringCopy(&Var2, "U_FMF_13_11", 16);
iVar3=13;
iVar4=11;
iVar1=2390;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[219]));
break;
case 115:
StringCopy(&Var2, "U_FMF_13_12", 16);
iVar3=13;
iVar4=12;
iVar1=2610;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[220]));
break;
case 116:
StringCopy(&Var2, "U_FMF_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[221]));
break;
case 117:
StringCopy(&Var2, "U_FMF_13_14", 16);
iVar3=13;
iVar4=14;
iVar1=2720;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[222]));
break;
case 118:
StringCopy(&Var2, "U_FMF_13_15", 16);
iVar3=13;
iVar4=15;
iVar1=4995;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[223]));
break;
case 119:
iVar3=14;
iVar4=0;
break;
case 120:
StringCopy(&Var2, "U_FMF_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=325;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[240]));
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
iVar1=130;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[243]));
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
iVar1=450;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[250]));
break;
case 131:
StringCopy(&Var2, "U_FMF_15_11", 16);
iVar3=15;
iVar4=11;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_1513[251]));
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
func_839(iVar7, iParam0, 136, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_871(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_871(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[9]));
}}elseif(iParam0 >=0 && iParam0 < 16){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar8]));
}}elseif(iParam0 >=16 && iParam0 < 32){
iVar9=(iParam0 - 16);
if(iVar9 >=0 && iVar9 < 256){
iVar1=round((to_float(iVar1) * Global_262145.f_1513[iVar9]));
}}
iVar1=round((to_float(iVar1) * Global_296940.f_24));
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_852(int iParam0, int iParam1){
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
if(func_871(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_296940.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_24));
}elseif(iParam0==9){
if(func_871(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[9]) * Global_296940.f_24));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_1513[iVar8]) * Global_296940.f_24));
}}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=4;
func_839(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_853(int iParam0, int iParam1){
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
iVar1=round((to_float(iVar1) * Global_262145.f_2466[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[15]));
break;
case 18:
iVar3=4;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[16]));
break;
case 19:
iVar3=4;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[17]));
break;
case 20:
iVar3=4;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[18]));
break;
case 21:
iVar3=4;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[19]));
break;
case 22:
iVar3=4;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[20]));
break;
case 23:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 24:
iVar3=5;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[21]));
break;
case 25:
iVar3=5;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[22]));
break;
case 26:
iVar3=5;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[23]));
break;
case 27:
iVar3=5;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[24]));
break;
case 28:
iVar3=5;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[25]));
break;
case 29:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 30:
iVar3=6;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[26]));
break;
case 31:
iVar3=6;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[27]));
break;
case 32:
iVar3=6;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[28]));
break;
case 33:
iVar3=6;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[29]));
break;
case 34:
iVar3=6;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[30]));
break;
case 35:
iVar3=7;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[31]));
break;
case 36:
iVar3=7;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[32]));
break;
case 37:
iVar3=7;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[33]));
break;
case 38:
iVar3=7;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[34]));
break;
case 39:
iVar3=7;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[35]));
break;
case 40:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 41:
iVar3=8;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[36]));
break;
case 42:
iVar3=8;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[37]));
break;
case 43:
iVar3=8;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[38]));
break;
case 44:
iVar3=8;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[39]));
break;
case 45:
iVar3=8;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[40]));
break;
case 46:
iVar3=8;
iVar4=5;
iVar1=0;
break;
case 47:
iVar3=9;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[41]));
break;
case 48:
iVar3=9;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[42]));
break;
case 49:
iVar3=9;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[43]));
break;
case 50:
iVar3=9;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[44]));
break;
case 51:
iVar3=9;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[45]));
break;
case 52:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 53:
iVar3=10;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[46]));
break;
case 54:
iVar3=10;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[47]));
break;
case 55:
iVar3=10;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[48]));
break;
case 56:
iVar3=10;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[49]));
break;
case 57:
iVar3=10;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[50]));
break;
case 58:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 59:
iVar3=10;
iVar4=6;
iVar1=0;
break;
case 60:
iVar3=11;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[51]));
break;
case 61:
iVar3=11;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[52]));
break;
case 62:
iVar3=11;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[53]));
break;
case 63:
iVar3=11;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[54]));
break;
case 64:
iVar3=11;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[55]));
break;
case 65:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 66:
iVar3=11;
iVar4=6;
iVar1=0;
break;
case 67:
iVar3=12;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[56]));
break;
case 68:
iVar3=12;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[57]));
break;
case 69:
iVar3=12;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[58]));
break;
case 70:
iVar3=12;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[59]));
break;
case 71:
iVar3=12;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[60]));
break;
case 72:
iVar3=12;
iVar4=5;
iVar1=0;
break;
case 73:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[61]));
break;
case 74:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[62]));
break;
case 75:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[63]));
break;
case 76:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[64]));
break;
case 77:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[65]));
break;
case 78:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 79:
iVar3=14;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[66]));
break;
case 80:
iVar3=14;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[67]));
break;
case 81:
iVar3=14;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[68]));
break;
case 82:
iVar3=14;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[69]));
break;
case 83:
iVar3=14;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[70]));
break;
case 84:
iVar3=14;
iVar4=5;
iVar1=0;
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2466[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
case 91:
iVar3=15;
iVar4=6;
iVar1=0;
break;
default:
Global_78341[0 /*14*/].f_5=4;
func_839(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_854(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_869(iParam1, iParam2);
break;
case 11:
func_868(iParam1, iParam2);
break;
case 8:
func_867(iParam1, iParam2);
break;
case 9:
func_866(iParam1, iParam2);
break;
case 3:
func_865(iParam1, iParam2);
break;
case 4:
func_864(iParam1, iParam2);
break;
case 6:
func_863(iParam1, iParam2);
break;
case 1:
func_862(iParam1, iParam2);
break;
case 7:
func_861(iParam1, iParam2);
break;
case 10:
func_860(iParam1, iParam2);
break;
case 14:
func_859(iParam1, iParam2);
break;
case 12:
func_858(iParam1, iParam2);
break;
case 5:
func_857(iParam1, iParam2);
break;
case 0:
func_856(iParam1, iParam2);
break;
case 13:
func_855(iParam1);
break;
}}


void func_855(int iParam0){
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
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_856(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=3;
func_839(iVar0, iParam0, 0, iParam1);
}


void func_857(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_858(int iParam0, int iParam1){
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
func_839(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_859(int iParam0, int iParam1){
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
StringCopy(&Var2, "G_FMM_11_1", 16);
iVar3=11;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 272:
StringCopy(&Var2, "G_FMM_11_2", 16);
iVar3=11;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 273:
StringCopy(&Var2, "G_FMM_11_3", 16);
iVar3=11;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 274:
StringCopy(&Var2, "G_FMM_11_4", 16);
iVar3=11;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 275:
StringCopy(&Var2, "G_FMM_11_5", 16);
iVar3=11;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 277:
StringCopy(&Var2, "G_FMM_11_7", 16);
iVar3=11;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 278:
StringCopy(&Var2, "G_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=385;
iVar5=1;
iVar8=3;
break;
case 279:
StringCopy(&Var2, "G_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=310;
iVar5=1;
iVar8=3;
break;
case 280:
StringCopy(&Var2, "G_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=3655;
iVar5=1;
iVar8=3;
break;
case 281:
StringCopy(&Var2, "G_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=4055;
iVar5=1;
iVar8=3;
break;
case 282:
StringCopy(&Var2, "G_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=3595;
iVar5=1;
iVar8=3;
break;
case 283:
StringCopy(&Var2, "G_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=3605;
iVar5=1;
iVar8=3;
break;
case 284:
StringCopy(&Var2, "G_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=3645;
iVar5=1;
iVar8=3;
break;
case 285:
StringCopy(&Var2, "G_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=320;
iVar5=1;
iVar8=3;
break;
case 286:
StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=2820;
iVar5=1;
iVar8=3;
break;
case 287:
StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=2435;
iVar5=1;
iVar8=3;
break;
case 288:
StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=2500;
iVar5=1;
iVar8=3;
break;
case 289:
StringCopy(&Var2, "G_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=230;
iVar5=1;
iVar8=3;
break;
case 290:
StringCopy(&Var2, "G_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=1605;
iVar5=1;
iVar8=3;
break;
case 291:
StringCopy(&Var2, "G_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=2230;
iVar5=1;
iVar8=3;
break;
case 292:
StringCopy(&Var2, "G_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=220;
iVar5=1;
iVar8=3;
break;
case 293:
StringCopy(&Var2, "G_FMM_13_4", 16);
iVar3=13;
iVar4=4;
iVar1=185;
iVar5=1;
iVar8=3;
break;
case 294:
StringCopy(&Var2, "G_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=2070;
iVar5=1;
iVar8=3;
break;
case 295:
StringCopy(&Var2, "G_FMM_13_6", 16);
iVar3=13;
iVar4=6;
iVar1=2205;
iVar5=1;
iVar8=3;
break;
case 296:
StringCopy(&Var2, "G_FMM_13_7", 16);
iVar3=13;
iVar4=7;
iVar1=1690;
iVar5=1;
iVar8=3;
break;
case 297:
StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
iVar3=13;
iVar4=8;
iVar1=2715;
iVar5=1;
iVar8=3;
break;
case 298:
StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
iVar3=13;
iVar4=9;
iVar1=2330;
iVar5=1;
iVar8=3;
break;
case 299:
StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
iVar3=13;
iVar4=10;
iVar1=2395;
iVar5=1;
iVar8=3;
break;
case 300:
StringCopy(&Var2, "G_FMM_14_0", 16);
iVar3=14;
iVar4=0;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 301:
StringCopy(&Var2, "G_FMM_14_1", 16);
iVar3=14;
iVar4=1;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 302:
StringCopy(&Var2, "G_FMM_14_2", 16);
iVar3=14;
iVar4=2;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 303:
StringCopy(&Var2, "G_FMM_14_3", 16);
iVar3=14;
iVar4=3;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 304:
StringCopy(&Var2, "G_FMM_14_4", 16);
iVar3=14;
iVar4=4;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 305:
StringCopy(&Var2, "G_FMM_14_5", 16);
iVar3=14;
iVar4=5;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 306:
StringCopy(&Var2, "G_FMM_14_6", 16);
iVar3=14;
iVar4=6;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 307:
StringCopy(&Var2, "G_FMM_14_7", 16);
iVar3=14;
iVar4=7;
iVar1=0;
iVar5=1;
iVar8=3;
bVar0=true;
break;
case 308:
StringCopy(&Var2, "G_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=515;
iVar5=1;
iVar8=3;
break;
case 309:
StringCopy(&Var2, "G_FMM_15_1", 16);
iVar3=15;
iVar4=1;
iVar1=60;
iVar5=1;
iVar8=3;
break;
case 310:
StringCopy(&Var2, "G_FMM_15_2", 16);
iVar3=15;
iVar4=2;
iVar1=65;
iVar5=1;
iVar8=3;
break;
case 311:
StringCopy(&Var2, "G_FMM_15_3", 16);
iVar3=15;
iVar4=3;
iVar1=95;
iVar5=1;
iVar8=3;
break;
case 312:
StringCopy(&Var2, "G_FMM_15_4", 16);
iVar3=15;
iVar4=4;
iVar1=85;
iVar5=1;
iVar8=3;
break;
case 313:
StringCopy(&Var2, "G_FMM_15_5", 16);
iVar3=15;
iVar4=5;
iVar1=75;
iVar5=1;
iVar8=3;
break;
case 314:
StringCopy(&Var2, "G_FMM_15_6", 16);
iVar3=15;
iVar4=6;
iVar1=485;
iVar5=1;
iVar8=3;
break;
case 315:
StringCopy(&Var2, "G_FMM_15_7", 16);
iVar3=15;
iVar4=7;
iVar1=545;
iVar5=1;
iVar8=3;
break;
case 316:
StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
iVar3=15;
iVar4=8;
iVar1=645;
iVar5=1;
iVar8=3;
break;
case 317:
StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
iVar3=15;
iVar4=9;
iVar1=260;
iVar5=1;
iVar8=3;
break;
case 318:
StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
iVar3=15;
iVar4=10;
iVar1=325;
iVar5=1;
iVar8=3;
break;
}
switch (iParam0){
case 319:
StringCopy(&Var2, "W_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=5000;
iVar5=6;
iVar8=4;
break;
case 320:
StringCopy(&Var2, "W_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 321:
StringCopy(&Var2, "W_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 322:
StringCopy(&Var2, "W_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 323:
StringCopy(&Var2, "W_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 324:
StringCopy(&Var2, "W_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=695;
iVar5=6;
iVar8=4;
break;
case 325:
StringCopy(&Var2, "W_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=0;
iVar5=6;
iVar8=4;
bVar0=true;
break;
case 326:
StringCopy(&Var2, "W_FMM_1_2", 16);
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
iVar1=round(((to_float(iVar1) * Global_262145.f_965[iVar9]) * Global_296940.f_18));
}}elseif(iVar8==2){
iVar10=(iParam0 - 131);
if(iVar10 >=0 && iVar10 < 24){
iVar1=round(((to_float(iVar1) * Global_262145.f_1086[iVar10]) * Global_296940.f_19));
}}elseif(iVar8==3){
iVar11=(iParam0 - 155);
if(iVar11 >=0 && iVar11 < 128){
iVar1=round(((to_float(iVar1) * Global_262145.f_1111[iVar11]) * Global_296940.f_20));
}}elseif(iVar8==4){
iVar12=(iParam0 - 319);
if(iVar12 >=0 && iVar12 < 15){
iVar1=round(((to_float(iVar1) * Global_262145.f_1240[iVar12]) * Global_296940.f_21));
}}
if(iParam0 >=327){
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_18));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_20));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_21));
}}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_860(int iParam0, int iParam1){
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
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=5000;
break;
case 2:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=2;
iVar4=0;
iVar1=10000;
break;
case 3:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=3;
iVar4=0;
iVar1=5000;
break;
case 4:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=4;
iVar4=0;
iVar1=10000;
break;
case 5:
StringCopy(&Var2, "D_FMM_1_0", 16);
iVar3=5;
iVar4=0;
iVar1=5000;
break;
case 6:
StringCopy(&Var2, "D_FMM_2_0", 16);
iVar3=6;
iVar4=0;
iVar1=10000;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 7, iParam1);
return;
break;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_861(int iParam0, int iParam1){
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
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 4:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 5:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 6:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 7:
iVar3=3;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 8:
iVar3=3;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 9:
iVar3=3;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 10:
iVar3=4;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 11:
iVar3=4;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 12:
iVar3=4;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 13:
iVar3=4;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 14:
iVar3=4;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 15:
iVar3=4;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 16:
iVar3=4;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 17:
iVar3=4;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 18:
iVar3=4;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=4;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 20:
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 21:
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 22:
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 23:
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 24:
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 25:
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 38:
iVar3=7;
iVar4=0;
break;
case 39:
iVar3=8;
iVar4=0;
break;
case 40:
iVar3=9;
iVar4=0;
break;
case 41:
iVar3=10;
iVar4=0;
if(Global_262145.f_4182 !=-1){
iVar1=Global_262145.f_4182;
}else{
iVar1=115;
}
break;
case 42:
iVar3=10;
iVar4=1;
if(Global_262145.f_4183 !=-1){
iVar1=Global_262145.f_4183;
}else{
iVar1=125;
}
break;
case 43:
iVar3=10;
iVar4=2;
if(Global_262145.f_4184 !=-1){
iVar1=Global_262145.f_4184;
}else{
iVar1=130;
}
break;
case 44:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 45:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 46:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 47:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 48:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 49:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 50:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 51:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 52:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 53:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 54:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 55:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 56:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 57:
iVar3=11;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 58:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 59:
iVar3=11;
iVar4=2;
if(Global_262145.f_4188 !=-1){
iVar1=Global_262145.f_4188;
}else{
iVar1=725;
}
break;
case 60:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 61:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 62:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 63:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 64:
iVar3=11;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 65:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 66:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 67:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 68:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 69:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 70:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 71:
iVar3=11;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 72:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 73:
iVar3=12;
iVar4=0;
if(Global_262145.f_4185 !=-1){
iVar1=Global_262145.f_4185;
}else{
iVar1=65;
}
break;
case 74:
iVar3=12;
iVar4=1;
if(Global_262145.f_4186 !=-1){
iVar1=Global_262145.f_4186;
}else{
iVar1=65;
}
break;
case 75:
iVar3=12;
iVar4=2;
if(Global_262145.f_4187 !=-1){
iVar1=Global_262145.f_4187;
}else{
iVar1=95;
}
break;
case 76:
iVar3=12;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 77:
iVar3=12;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 78:
iVar3=12;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 79:
iVar3=12;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 80:
iVar3=12;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 81:
iVar3=12;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 82:
iVar3=12;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 83:
iVar3=12;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 84:
iVar3=12;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 85:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 86:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 87:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 88:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 89:
iVar3=13;
iVar4=0;
break;
case 90:
iVar3=14;
iVar4=0;
break;
case 91:
iVar3=15;
iVar4=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 92, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_57));
}
return;
break;
}
iVar1=round((to_float(iVar1) * Global_296940.f_57));
StringCopy(&Var2, "T_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_862(int iParam0, int iParam1){
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
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 26, iParam1);
return;
break;
}
StringCopy(&Var2, "M_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=(iParam0 - 1);
if(iVar8 >=0 && iVar8 < 26){
iVar1=round(((to_float(iVar1) * Global_262145.f_938[iVar8]) * Global_296940.f_22));
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_863(int iParam0, int iParam1){
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
iVar1=0;
bVar0=true;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=0;
bVar0=true;
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
iVar1=300;
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
iVar1=285;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=180;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=190;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=190;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=165;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=200;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=480;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=155;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=350;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=290;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=165;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=165;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=170;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=155;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=165;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=165;
break;
}
switch (iParam0){
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
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
iVar1=160;
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
iVar1=205;
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
case 48:
iVar3=3;
iVar4=0;
iVar1=560;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=275;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=290;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=300;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=360;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=270;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=265;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=295;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=355;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=340;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=285;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=310;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=350;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=305;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=280;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=320;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=115;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=115;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=110;
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
iVar1=125;
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
iVar1=50;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=50;
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
iVar1=65;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=65;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
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
case 112:
iVar3=7;
iVar4=0;
iVar1=165;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=165;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=185;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=175;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=185;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=460;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=185;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=190;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=165;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=165;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=185;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=175;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=235;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=445;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=185;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=190;
break;
}
switch (iParam0){
case 128:
iVar3=8;
iVar4=0;
iVar1=175;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=215;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=225;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=230;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=235;
break;
case 133:
iVar3=8;
iVar4=5;
iVar1=215;
break;
case 134:
iVar3=8;
iVar4=6;
iVar1=205;
break;
case 135:
iVar3=8;
iVar4=7;
iVar1=245;
break;
case 136:
iVar3=8;
iVar4=8;
iVar1=225;
break;
case 137:
iVar3=8;
iVar4=9;
iVar1=215;
break;
case 138:
iVar3=8;
iVar4=10;
iVar1=225;
break;
case 139:
iVar3=8;
iVar4=11;
iVar1=230;
break;
case 140:
iVar3=8;
iVar4=12;
iVar1=235;
break;
case 141:
iVar3=8;
iVar4=13;
iVar1=215;
break;
case 142:
iVar3=8;
iVar4=14;
iVar1=425;
break;
case 143:
iVar3=8;
iVar4=15;
iVar1=245;
break;
case 144:
iVar3=9;
iVar4=0;
iVar1=225;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=135;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=130;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=110;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=140;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
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
iVar1=95;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=105;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=105;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=115;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=115;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=115;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=500;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=440;
break;
}
switch (iParam0){
case 160:
iVar3=10;
iVar4=0;
iVar1=1090;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=0;
bVar0=true;
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
iVar1=600;
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
iVar1=1865;
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
iVar1=490;
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
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
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
iVar1=470;
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
iVar1=1795;
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
iVar1=1830;
break;
case 191:
iVar3=11;
iVar4=15;
iVar1=455;
break;
}
switch (iParam0){
case 192:
iVar3=12;
iVar4=0;
iVar1=455;
break;
case 193:
iVar3=12;
iVar4=1;
iVar1=2110;
break;
case 194:
iVar3=12;
iVar4=2;
iVar1=380;
break;
case 195:
iVar3=12;
iVar4=3;
iVar1=1655;
break;
case 196:
iVar3=12;
iVar4=4;
iVar1=2500;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=415;
break;
case 198:
iVar3=12;
iVar4=6;
iVar1=730;
break;
case 199:
iVar3=12;
iVar4=7;
iVar1=445;
break;
case 200:
iVar3=12;
iVar4=8;
iVar1=425;
break;
case 201:
iVar3=12;
iVar4=9;
iVar1=410;
break;
case 202:
iVar3=12;
iVar4=10;
iVar1=480;
break;
case 203:
iVar3=12;
iVar4=11;
iVar1=485;
break;
case 204:
iVar3=12;
iVar4=12;
iVar1=480;
break;
case 205:
iVar3=12;
iVar4=13;
iVar1=395;
break;
case 206:
iVar3=12;
iVar4=14;
iVar1=495;
break;
case 207:
iVar3=12;
iVar4=15;
iVar1=2090;
break;
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
}
switch (iParam0){
case 224:
iVar3=14;
iVar4=0;
iVar1=450;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=685;
break;
case 226:
iVar3=14;
iVar4=2;
iVar1=420;
break;
case 227:
iVar3=14;
iVar4=3;
iVar1=365;
break;
case 228:
iVar3=14;
iVar4=4;
iVar1=465;
break;
case 229:
iVar3=14;
iVar4=5;
iVar1=405;
break;
case 230:
iVar3=14;
iVar4=6;
iVar1=400;
break;
case 231:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 232:
iVar3=14;
iVar4=8;
iVar1=385;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=435;
break;
case 234:
iVar3=14;
iVar4=10;
iVar1=375;
break;
case 235:
iVar3=14;
iVar4=11;
iVar1=390;
break;
case 236:
iVar3=14;
iVar4=12;
iVar1=475;
break;
case 237:
iVar3=14;
iVar4=13;
iVar1=430;
break;
case 238:
iVar3=14;
iVar4=14;
iVar1=490;
break;
case 239:
iVar3=14;
iVar4=15;
iVar1=490;
break;
case 240:
iVar3=15;
iVar4=0;
iVar1=615;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=315;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=415;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=425;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=435;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=445;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=640;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=460;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=465;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=745;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=845;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=1420;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=475;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=470;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=1000;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=690;
break;
}
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_681[iVar8]) * Global_296940.f_17));
}
StringCopy(&Var2, "F_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_17));
}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_864(int iParam0, int iParam1){
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
iVar1=335;
break;
case 1:
iVar3=0;
iVar4=1;
iVar1=460;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=455;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=470;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=650;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=385;
break;
case 6:
iVar3=0;
iVar4=6;
iVar1=455;
break;
case 7:
iVar3=0;
iVar4=7;
iVar1=2150;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=375;
break;
case 9:
iVar3=0;
iVar4=9;
iVar1=2190;
break;
case 10:
iVar3=0;
iVar4=10;
iVar1=285;
break;
case 11:
iVar3=0;
iVar4=11;
iVar1=295;
break;
case 12:
iVar3=0;
iVar4=12;
iVar1=445;
break;
case 13:
iVar3=0;
iVar4=13;
iVar1=2240;
break;
case 14:
iVar3=0;
iVar4=14;
iVar1=465;
break;
case 15:
iVar3=0;
iVar4=15;
iVar1=1740;
break;
case 16:
iVar3=1;
iVar4=0;
iVar1=1415;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=325;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=345;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=355;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=395;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=315;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=275;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=265;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=305;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=255;
break;
case 26:
iVar3=1;
iVar4=10;
iVar1=235;
break;
case 27:
iVar3=1;
iVar4=11;
iVar1=245;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=215;
break;
case 29:
iVar3=1;
iVar4=13;
iVar1=1865;
break;
case 30:
iVar3=1;
iVar4=14;
iVar1=450;
break;
case 31:
iVar3=1;
iVar4=15;
iVar1=415;
break;
case 32:
iVar3=2;
iVar4=0;
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
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
iVar1=100;
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
iVar1=55;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=60;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=100;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=65;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=65;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=100;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=100;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=65;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=90;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=75;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=65;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=100;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=100;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=225;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=205;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=215;
break;
case 64:
iVar3=4;
iVar4=0;
iVar1=490;
break;
case 65:
iVar3=4;
iVar4=1;
iVar1=485;
break;
case 66:
iVar3=4;
iVar4=2;
iVar1=2500;
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
iVar1=485;
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
}
switch (iParam0){
case 80:
iVar3=5;
iVar4=0;
iVar1=100;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=105;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=80;
break;
case 83:
iVar3=5;
iVar4=3;
iVar1=90;
break;
case 84:
iVar3=5;
iVar4=4;
iVar1=100;
break;
case 85:
iVar3=5;
iVar4=5;
iVar1=95;
break;
case 86:
iVar3=5;
iVar4=6;
iVar1=100;
break;
case 87:
iVar3=5;
iVar4=7;
iVar1=90;
break;
case 88:
iVar3=5;
iVar4=8;
iVar1=85;
break;
case 89:
iVar3=5;
iVar4=9;
iVar1=80;
break;
case 90:
iVar3=5;
iVar4=10;
iVar1=80;
break;
case 91:
iVar3=5;
iVar4=11;
iVar1=100;
break;
case 92:
iVar3=5;
iVar4=12;
iVar1=95;
break;
case 93:
iVar3=5;
iVar4=13;
iVar1=440;
break;
case 94:
iVar3=5;
iVar4=14;
iVar1=380;
break;
case 95:
iVar3=5;
iVar4=15;
iVar1=80;
break;
case 96:
iVar3=6;
iVar4=0;
iVar1=115;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=140;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=135;
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
iVar1=255;
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
iVar1=325;
break;
case 113:
iVar3=7;
iVar4=1;
iVar1=115;
break;
case 114:
iVar3=7;
iVar4=2;
iVar1=135;
break;
case 115:
iVar3=7;
iVar4=3;
iVar1=125;
break;
case 116:
iVar3=7;
iVar4=4;
iVar1=120;
break;
case 117:
iVar3=7;
iVar4=5;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=6;
iVar1=110;
break;
case 119:
iVar3=7;
iVar4=7;
iVar1=345;
break;
case 120:
iVar3=7;
iVar4=8;
iVar1=745;
break;
case 121:
iVar3=7;
iVar4=9;
iVar1=120;
break;
case 122:
iVar3=7;
iVar4=10;
iVar1=135;
break;
case 123:
iVar3=7;
iVar4=11;
iVar1=345;
break;
case 124:
iVar3=7;
iVar4=12;
iVar1=130;
break;
case 125:
iVar3=7;
iVar4=13;
iVar1=140;
break;
case 126:
iVar3=7;
iVar4=14;
iVar1=130;
break;
case 127:
iVar3=7;
iVar4=15;
iVar1=660;
break;
case 128:
iVar3=8;
iVar4=0;
iVar1=150;
break;
case 129:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=3;
iVar1=150;
break;
case 132:
iVar3=8;
iVar4=4;
iVar1=150;
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
iVar1=0;
bVar0=true;
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
iVar1=150;
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
iVar1=75;
break;
case 145:
iVar3=9;
iVar4=1;
iVar1=90;
break;
case 146:
iVar3=9;
iVar4=2;
iVar1=145;
break;
case 147:
iVar3=9;
iVar4=3;
iVar1=150;
break;
case 148:
iVar3=9;
iVar4=4;
iVar1=110;
break;
case 149:
iVar3=9;
iVar4=5;
iVar1=95;
break;
case 150:
iVar3=9;
iVar4=6;
iVar1=155;
break;
case 151:
iVar3=9;
iVar4=7;
iVar1=255;
break;
case 152:
iVar3=9;
iVar4=8;
iVar1=165;
break;
case 153:
iVar3=9;
iVar4=9;
iVar1=1150;
break;
case 154:
iVar3=9;
iVar4=10;
iVar1=1150;
break;
case 155:
iVar3=9;
iVar4=11;
iVar1=1210;
break;
case 156:
iVar3=9;
iVar4=12;
iVar1=1125;
break;
case 157:
iVar3=9;
iVar4=13;
iVar1=1135;
break;
case 158:
iVar3=9;
iVar4=14;
iVar1=1145;
break;
case 159:
iVar3=9;
iVar4=15;
iVar1=1145;
break;
case 160:
iVar3=10;
iVar4=0;
iVar1=845;
break;
case 161:
iVar3=10;
iVar4=1;
iVar1=480;
break;
case 162:
iVar3=10;
iVar4=2;
iVar1=475;
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
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
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
iVar1=220;
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
iVar1=100;
break;
case 197:
iVar3=12;
iVar4=5;
iVar1=65;
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
iVar1=50;
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
iVar1=100;
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
iVar1=460;
break;
case 209:
iVar3=13;
iVar4=1;
iVar1=475;
break;
case 210:
iVar3=13;
iVar4=2;
iVar1=470;
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
iVar1=50;
break;
case 225:
iVar3=14;
iVar4=1;
iVar1=100;
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
iVar1=100;
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
iVar1=0;
bVar0=true;
break;
case 233:
iVar3=14;
iVar4=9;
iVar1=0;
bVar0=true;
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
iVar1=100;
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
iVar1=90;
break;
case 241:
iVar3=15;
iVar4=1;
iVar1=105;
break;
case 242:
iVar3=15;
iVar4=2;
iVar1=100;
break;
case 243:
iVar3=15;
iVar4=3;
iVar1=240;
break;
case 244:
iVar3=15;
iVar4=4;
iVar1=95;
break;
case 245:
iVar3=15;
iVar4=5;
iVar1=95;
break;
case 246:
iVar3=15;
iVar4=6;
iVar1=100;
break;
case 247:
iVar3=15;
iVar4=7;
iVar1=105;
break;
case 248:
iVar3=15;
iVar4=8;
iVar1=100;
break;
case 249:
iVar3=15;
iVar4=9;
iVar1=295;
break;
case 250:
iVar3=15;
iVar4=10;
iVar1=250;
break;
case 251:
iVar3=15;
iVar4=11;
iVar1=285;
break;
case 252:
iVar3=15;
iVar4=12;
iVar1=275;
break;
case 253:
iVar3=15;
iVar4=13;
iVar1=105;
break;
case 254:
iVar3=15;
iVar4=14;
iVar1=100;
break;
case 255:
iVar3=15;
iVar4=15;
iVar1=95;
break;
}
StringCopy(&Var2, "L_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 256){
iVar1=round(((to_float(iVar1) * Global_262145.f_186[iVar8]) * Global_296940.f_15));
}
if(iParam0 >=256){
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_15));
}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_865(int iParam0, int iParam1){
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
default:
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 16, iParam1);
return;
break;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_866(int iParam0, int iParam1){
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
case 36:
iVar3=8;
iVar4=0;
break;
case 37:
iVar3=8;
iVar4=1;
break;
case 38:
iVar3=8;
iVar4=2;
break;
case 39:
iVar3=8;
iVar4=3;
break;
case 40:
iVar3=8;
iVar4=4;
break;
case 41:
iVar3=9;
iVar4=0;
break;
case 42:
iVar3=9;
iVar4=1;
break;
case 43:
iVar3=9;
iVar4=2;
break;
case 44:
iVar3=9;
iVar4=3;
break;
case 45:
iVar3=9;
iVar4=4;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 46, iParam1);
return;
break;
}
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_867(int iParam0, int iParam1){
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
bVar0=false;
iVar1=10;
iVar3=0;
iVar4=0;
iVar5=-1;
iVar6=2;
iVar7=8;
switch (iParam0){
case 0:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=0;
iVar4=0;
iVar1=250;
break;
case 1:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=0;
iVar4=1;
iVar1=210;
break;
case 2:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=0;
iVar4=5;
iVar1=200;
break;
case 6:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=0;
iVar4=6;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=0;
iVar4=7;
iVar1=130;
break;
case 8:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=0;
iVar4=8;
iVar1=220;
break;
case 9:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=0;
iVar4=9;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=0;
iVar4=10;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=0;
iVar4=11;
iVar1=220;
break;
case 12:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=0;
iVar4=12;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=0;
iVar4=13;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=0;
iVar4=14;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=0;
iVar4=15;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=1;
iVar4=0;
iVar1=45;
break;
case 17:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=1;
iVar4=2;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=1;
iVar4=9;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=1;
iVar4=10;
bVar0=true;
break;
case 27:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=1;
iVar4=11;
iVar1=60;
break;
case 28:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=1;
iVar4=12;
iVar1=55;
break;
case 29:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=1;
iVar4=13;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=1;
iVar4=14;
iVar1=170;
break;
case 31:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=1;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 32:
StringCopy(&Var2, "U_FMM_0_0", 16);
iVar3=2;
iVar4=0;
iVar1=250;
break;
case 33:
StringCopy(&Var2, "U_FMM_0_1", 16);
iVar3=2;
iVar4=1;
iVar1=210;
break;
case 34:
StringCopy(&Var2, "U_FMM_0_2", 16);
iVar3=2;
iVar4=2;
iVar1=50;
break;
case 35:
StringCopy(&Var2, "U_FMM_0_3", 16);
iVar3=2;
iVar4=3;
iVar1=90;
break;
case 36:
StringCopy(&Var2, "U_FMM_0_4", 16);
iVar3=2;
iVar4=4;
iVar1=210;
break;
case 37:
StringCopy(&Var2, "U_FMM_0_5", 16);
iVar3=2;
iVar4=5;
iVar1=200;
break;
case 38:
StringCopy(&Var2, "U_FMM_0_6", 16);
iVar3=2;
iVar4=6;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "U_FMM_0_7", 16);
iVar3=2;
iVar4=7;
iVar1=130;
break;
case 40:
StringCopy(&Var2, "U_FMM_0_8", 16);
iVar3=2;
iVar4=8;
iVar1=220;
break;
case 41:
StringCopy(&Var2, "U_FMM_0_9", 16);
iVar3=2;
iVar4=9;
bVar0=true;
break;
case 42:
StringCopy(&Var2, "U_FMM_0_10", 16);
iVar3=2;
iVar4=10;
bVar0=true;
break;
case 43:
StringCopy(&Var2, "U_FMM_0_11", 16);
iVar3=2;
iVar4=11;
iVar1=220;
break;
case 44:
StringCopy(&Var2, "U_FMM_0_12", 16);
iVar3=2;
iVar4=12;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "U_FMM_0_13", 16);
iVar3=2;
iVar4=13;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "U_FMM_0_14", 16);
iVar3=2;
iVar4=14;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "U_FMM_0_15", 16);
iVar3=2;
iVar4=15;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=3;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 49:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=3;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 50:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=3;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 51:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=3;
iVar4=3;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=3;
iVar4=4;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=3;
iVar4=5;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=3;
iVar4=6;
bVar0=true;
break;
case 55:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=3;
iVar4=7;
bVar0=true;
break;
case 56:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=3;
iVar4=8;
bVar0=true;
break;
case 57:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=3;
iVar4=9;
bVar0=true;
break;
case 58:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=3;
iVar4=10;
bVar0=true;
break;
case 59:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=3;
iVar4=11;
bVar0=true;
break;
case 60:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=3;
iVar4=12;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=3;
iVar4=13;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=3;
iVar4=14;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=3;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 64:
StringCopy(&Var2, "SP_FMM_3_0", 16);
iVar3=4;
iVar4=0;
if(Global_262145.f_4191 !=-1){
iVar1=Global_262145.f_4191;
}else{
iVar1=165;
}
break;
case 65:
StringCopy(&Var2, "SP_FMM_3_1", 16);
iVar3=4;
iVar4=1;
if(Global_262145.f_4199 !=-1){
iVar1=Global_262145.f_4199;
}else{
iVar1=120;
}
break;
case 66:
StringCopy(&Var2, "SP_FMM_3_2", 16);
iVar3=4;
iVar4=2;
if(Global_262145.f_4194 !=-1){
iVar1=Global_262145.f_4194;
}else{
iVar1=115;
}
break;
case 67:
StringCopy(&Var2, "SP_FMM_3_3", 16);
iVar3=4;
iVar4=3;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "SP_FMM_3_4", 16);
iVar3=4;
iVar4=4;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "SP_FMM_3_5", 16);
iVar3=4;
iVar4=5;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "SP_FMM_3_6", 16);
iVar3=4;
iVar4=6;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "SP_FMM_3_7", 16);
iVar3=4;
iVar4=7;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "SP_FMM_3_8", 16);
iVar3=4;
iVar4=8;
bVar0=true;
break;
case 73:
StringCopy(&Var2, "SP_FMM_3_9", 16);
iVar3=4;
iVar4=9;
bVar0=true;
break;
case 74:
StringCopy(&Var2, "SP_FMM_3_10", 16);
iVar3=4;
iVar4=10;
bVar0=true;
break;
case 75:
StringCopy(&Var2, "SP_FMM_3_11", 16);
iVar3=4;
iVar4=11;
bVar0=true;
break;
case 76:
StringCopy(&Var2, "SP_FMM_3_12", 16);
iVar3=4;
iVar4=12;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "SP_FMM_3_13", 16);
iVar3=4;
iVar4=13;
bVar0=true;
break;
case 78:
StringCopy(&Var2, "SP_FMM_3_14", 16);
iVar3=4;
iVar4=14;
bVar0=true;
break;
case 79:
StringCopy(&Var2, "SP_FMM_3_15", 16);
iVar3=4;
iVar4=15;
bVar0=true;
break;
case 80:
StringCopy(&Var2, "U_FMM_5_0", 16);
iVar3=5;
iVar4=0;
iVar1=80;
iVar1=round((to_float(iVar1) * Global_262145.f_443[80]));
break;
case 81:
StringCopy(&Var2, "U_FMM_5_1", 16);
iVar3=5;
iVar4=1;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[81]));
break;
case 82:
StringCopy(&Var2, "U_FMM_5_2", 16);
iVar3=5;
iVar4=2;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[82]));
break;
case 83:
StringCopy(&Var2, "U_FMM_5_3", 16);
iVar3=5;
iVar4=3;
bVar0=true;
break;
case 84:
StringCopy(&Var2, "U_FMM_5_4", 16);
iVar3=5;
iVar4=4;
bVar0=true;
break;
case 85:
StringCopy(&Var2, "U_FMM_5_5", 16);
iVar3=5;
iVar4=5;
bVar0=true;
break;
case 86:
StringCopy(&Var2, "U_FMM_5_6", 16);
iVar3=5;
iVar4=6;
bVar0=true;
break;
case 87:
StringCopy(&Var2, "U_FMM_5_7", 16);
iVar3=5;
iVar4=7;
iVar1=50;
iVar1=round((to_float(iVar1) * Global_262145.f_443[87]));
break;
case 88:
StringCopy(&Var2, "U_FMM_5_8", 16);
iVar3=5;
iVar4=8;
bVar0=true;
break;
case 89:
StringCopy(&Var2, "U_FMM_5_9", 16);
iVar3=5;
iVar4=9;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "U_FMM_5_10", 16);
iVar3=5;
iVar4=10;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "U_FMM_5_11", 16);
iVar3=5;
iVar4=11;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "U_FMM_5_12", 16);
iVar3=5;
iVar4=12;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "U_FMM_5_13", 16);
iVar3=5;
iVar4=13;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "U_FMM_5_14", 16);
iVar3=5;
iVar4=14;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "U_FMM_5_15", 16);
iVar3=5;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 96:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=6;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 97:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=6;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 98:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=6;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 99:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=6;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 100:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=6;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 101:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=6;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 102:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=6;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 103:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=6;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 104:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=6;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 105:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=6;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 106:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=6;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 107:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=6;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 108:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=6;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 109:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=6;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 110:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=6;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 111:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=6;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
case 112:
StringCopy(&Var2, "SP_FMM_6_0", 16);
iVar3=7;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=420;
}
break;
case 113:
StringCopy(&Var2, "SP_FMM_6_1", 16);
iVar3=7;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=415;
}
break;
case 114:
StringCopy(&Var2, "SP_FMM_6_2", 16);
iVar3=7;
iVar4=2;
if(Global_262145.f_4190 !=-1){
iVar1=Global_262145.f_4190;
}else{
iVar1=440;
}
break;
case 115:
StringCopy(&Var2, "SP_FMM_6_3", 16);
iVar3=7;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=400;
}
break;
case 116:
StringCopy(&Var2, "SP_FMM_6_4", 16);
iVar3=7;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=400;
}
break;
case 117:
StringCopy(&Var2, "SP_FMM_6_5", 16);
iVar3=7;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=410;
}
break;
case 118:
StringCopy(&Var2, "SP_FMM_6_6", 16);
iVar3=7;
iVar4=6;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=435;
}
break;
case 119:
StringCopy(&Var2, "SP_FMM_6_7", 16);
iVar3=7;
iVar4=7;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=425;
}
break;
case 120:
StringCopy(&Var2, "SP_FMM_6_8", 16);
iVar3=7;
iVar4=8;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=435;
}
break;
case 121:
StringCopy(&Var2, "SP_FMM_6_9", 16);
iVar3=7;
iVar4=9;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=420;
}
break;
case 122:
StringCopy(&Var2, "SP_FMM_6_10", 16);
iVar3=7;
iVar4=10;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=425;
}
break;
case 123:
StringCopy(&Var2, "SP_FMM_6_11", 16);
iVar3=7;
iVar4=11;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=425;
}
break;
case 124:
StringCopy(&Var2, "SP_FMM_6_12", 16);
iVar3=7;
iVar4=12;
if(Global_262145.f_4197 !=-1){
iVar1=Global_262145.f_4197;
}else{
iVar1=435;
}
break;
case 125:
StringCopy(&Var2, "SP_FMM_6_13", 16);
iVar3=7;
iVar4=13;
if(Global_262145.f_4192 !=-1){
iVar1=Global_262145.f_4192;
}else{
iVar1=750;
}
break;
case 126:
StringCopy(&Var2, "SP_FMM_6_14", 16);
iVar3=7;
iVar4=14;
if(Global_262145.f_4207 !=-1){
iVar1=Global_262145.f_4207;
}else{
iVar1=400;
}
break;
case 127:
StringCopy(&Var2, "SP_FMM_6_15", 16);
iVar3=7;
iVar4=15;
if(Global_262145.f_4200 !=-1){
iVar1=Global_262145.f_4200;
}else{
iVar1=435;
}
break;
}
switch (iParam0){
case 128:
StringCopy(&Var2, "U_FMM_8_0", 16);
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "U_FMM_8_1", 16);
iVar3=8;
iVar4=1;
bVar0=true;
break;
case 130:
StringCopy(&Var2, "U_FMM_8_2", 16);
iVar3=8;
iVar4=2;
bVar0=true;
break;
case 131:
StringCopy(&Var2, "U_FMM_8_3", 16);
iVar3=8;
iVar4=3;
bVar0=true;
break;
case 132:
StringCopy(&Var2, "U_FMM_8_4", 16);
iVar3=8;
iVar4=4;
bVar0=true;
break;
case 133:
StringCopy(&Var2, "U_FMM_8_5", 16);
iVar3=8;
iVar4=5;
bVar0=true;
break;
case 134:
StringCopy(&Var2, "U_FMM_8_6", 16);
iVar3=8;
iVar4=6;
bVar0=true;
break;
case 135:
StringCopy(&Var2, "U_FMM_8_7", 16);
iVar3=8;
iVar4=7;
bVar0=true;
break;
case 136:
StringCopy(&Var2, "U_FMM_8_8", 16);
iVar3=8;
iVar4=8;
bVar0=true;
break;
case 137:
StringCopy(&Var2, "U_FMM_8_9", 16);
iVar3=8;
iVar4=9;
bVar0=true;
break;
case 138:
StringCopy(&Var2, "U_FMM_8_10", 16);
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 139:
StringCopy(&Var2, "U_FMM_8_11", 16);
iVar3=8;
iVar4=11;
bVar0=true;
break;
case 140:
StringCopy(&Var2, "U_FMM_8_12", 16);
iVar3=8;
iVar4=12;
bVar0=true;
break;
case 141:
StringCopy(&Var2, "U_FMM_8_13", 16);
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 142:
StringCopy(&Var2, "U_FMM_8_14", 16);
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 143:
StringCopy(&Var2, "U_FMM_8_15", 16);
iVar3=8;
iVar4=15;
bVar0=true;
break;
case 144:
StringCopy(&Var2, "U_FMM_9_0", 16);
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 145:
StringCopy(&Var2, "U_FMM_9_1", 16);
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 146:
StringCopy(&Var2, "U_FMM_9_2", 16);
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 147:
StringCopy(&Var2, "U_FMM_9_3", 16);
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 148:
StringCopy(&Var2, "U_FMM_9_4", 16);
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 149:
StringCopy(&Var2, "U_FMM_9_5", 16);
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 150:
StringCopy(&Var2, "U_FMM_9_6", 16);
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 151:
StringCopy(&Var2, "U_FMM_9_7", 16);
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 152:
StringCopy(&Var2, "U_FMM_9_8", 16);
iVar3=9;
iVar4=8;
bVar0=true;
break;
case 153:
StringCopy(&Var2, "U_FMM_9_9", 16);
iVar3=9;
iVar4=9;
bVar0=true;
break;
case 154:
StringCopy(&Var2, "U_FMM_9_10", 16);
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 155:
StringCopy(&Var2, "U_FMM_9_11", 16);
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 156:
StringCopy(&Var2, "U_FMM_9_12", 16);
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 157:
StringCopy(&Var2, "U_FMM_9_13", 16);
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 158:
StringCopy(&Var2, "U_FMM_9_14", 16);
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 159:
StringCopy(&Var2, "U_FMM_9_15", 16);
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 160:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=10;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 161:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=10;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 162:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=10;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 163:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=10;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 164:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=10;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 165:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=10;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 166:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=10;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 167:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=10;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 168:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=10;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 169:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=10;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 170:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=10;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 171:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=10;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 172:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=10;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 173:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=10;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 174:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=10;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 175:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=10;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
case 176:
StringCopy(&Var2, "SP_FMM_10_0", 16);
iVar3=11;
iVar4=0;
if(Global_262145.f_4212 !=-1){
iVar1=Global_262145.f_4212;
}else{
iVar1=405;
}
break;
case 177:
StringCopy(&Var2, "SP_FMM_10_1", 16);
iVar3=11;
iVar4=1;
if(Global_262145.f_4210 !=-1){
iVar1=Global_262145.f_4210;
}else{
iVar1=400;
}
break;
case 178:
StringCopy(&Var2, "SP_FMM_10_2", 16);
iVar3=11;
iVar4=2;
if(Global_262145.f_4196 !=-1){
iVar1=Global_262145.f_4196;
}else{
iVar1=425;
}
break;
case 179:
StringCopy(&Var2, "SP_FMM_10_3", 16);
iVar3=11;
iVar4=3;
if(Global_262145.f_4204 !=-1){
iVar1=Global_262145.f_4204;
}else{
iVar1=385;
}
break;
case 180:
StringCopy(&Var2, "SP_FMM_10_4", 16);
iVar3=11;
iVar4=4;
if(Global_262145.f_4189 !=-1){
iVar1=Global_262145.f_4189;
}else{
iVar1=385;
}
break;
case 181:
StringCopy(&Var2, "SP_FMM_10_5", 16);
iVar3=11;
iVar4=5;
if(Global_262145.f_4206 !=-1){
iVar1=Global_262145.f_4206;
}else{
iVar1=395;
}
break;
case 182:
StringCopy(&Var2, "SP_FMM_10_6", 16);
iVar3=11;
iVar4=6;
if(Global_262145.f_4195 !=-1){
iVar1=Global_262145.f_4195;
}else{
iVar1=500;
}
break;
case 183:
StringCopy(&Var2, "SP_FMM_10_7", 16);
iVar3=11;
iVar4=7;
if(Global_262145.f_4209 !=-1){
iVar1=Global_262145.f_4209;
}else{
iVar1=420;
}
break;
case 184:
StringCopy(&Var2, "SP_FMM_10_8", 16);
iVar3=11;
iVar4=8;
if(Global_262145.f_4205 !=-1){
iVar1=Global_262145.f_4205;
}else{
iVar1=410;
}
break;
case 185:
StringCopy(&Var2, "SP_FMM_10_9", 16);
iVar3=11;
iVar4=9;
if(Global_262145.f_4198 !=-1){
iVar1=Global_262145.f_4198;
}else{
iVar1=420;
}
break;
case 186:
StringCopy(&Var2, "SP_FMM_10_10", 16);
iVar3=11;
iVar4=10;
if(Global_262145.f_4203 !=-1){
iVar1=Global_262145.f_4203;
}else{
iVar1=405;
}
break;
case 187:
StringCopy(&Var2, "SP_FMM_10_11", 16);
iVar3=11;
iVar4=11;
if(Global_262145.f_4201 !=-1){
iVar1=Global_262145.f_4201;
}else{
iVar1=410;
}
break;
case 188:
StringCopy(&Var2, "SP_FMM_10_12", 16);
iVar3=11;
iVar4=12;
if(Global_262145.f_4193 !=-1){
iVar1=Global_262145.f_4193;
}else{
iVar1=420;
}
break;
case 189:
StringCopy(&Var2, "SP_FMM_10_13", 16);
iVar3=11;
iVar4=13;
if(Global_262145.f_4208 !=-1){
iVar1=Global_262145.f_4208;
}else{
iVar1=420;
}
break;
case 190:
StringCopy(&Var2, "SP_FMM_10_14", 16);
iVar3=11;
iVar4=14;
if(Global_262145.f_4211 !=-1){
iVar1=Global_262145.f_4211;
}else{
iVar1=410;
}
break;
case 191:
StringCopy(&Var2, "SP_FMM_10_15", 16);
iVar3=11;
iVar4=15;
if(Global_262145.f_4202 !=-1){
iVar1=Global_262145.f_4202;
}else{
iVar1=460;
}
break;
}
switch (iParam0){
case 192:
StringCopy(&Var2, "U_FMM_12_0", 16);
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 193:
StringCopy(&Var2, "U_FMM_12_1", 16);
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 194:
StringCopy(&Var2, "U_FMM_12_2", 16);
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 195:
StringCopy(&Var2, "U_FMM_12_3", 16);
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 196:
StringCopy(&Var2, "U_FMM_12_4", 16);
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 197:
StringCopy(&Var2, "U_FMM_12_5", 16);
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 198:
StringCopy(&Var2, "U_FMM_12_6", 16);
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 199:
StringCopy(&Var2, "U_FMM_12_7", 16);
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 200:
StringCopy(&Var2, "U_FMM_12_8", 16);
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 201:
StringCopy(&Var2, "U_FMM_12_9", 16);
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 202:
StringCopy(&Var2, "U_FMM_12_10", 16);
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 203:
StringCopy(&Var2, "U_FMM_12_11", 16);
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 204:
StringCopy(&Var2, "U_FMM_12_12", 16);
iVar3=12;
iVar4=12;
bVar0=true;
break;
case 205:
StringCopy(&Var2, "U_FMM_12_13", 16);
iVar3=12;
iVar4=13;
bVar0=true;
break;
case 206:
StringCopy(&Var2, "U_FMM_12_14", 16);
iVar3=12;
iVar4=14;
bVar0=true;
break;
case 207:
StringCopy(&Var2, "U_FMM_12_15", 16);
iVar3=12;
iVar4=15;
bVar0=true;
break;
case 208:
StringCopy(&Var2, "U_FMM_13_0", 16);
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 209:
StringCopy(&Var2, "U_FMM_13_1", 16);
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 210:
StringCopy(&Var2, "U_FMM_13_2", 16);
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 211:
StringCopy(&Var2, "U_FMM_13_3", 16);
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 212:
StringCopy(&Var2, "U_FMM_13_4", 16);
iVar3=13;
iVar4=4;
bVar0=true;
break;
case 213:
StringCopy(&Var2, "U_FMM_13_5", 16);
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 214:
StringCopy(&Var2, "U_FMM_13_6", 16);
iVar3=13;
iVar4=6;
bVar0=true;
break;
case 215:
StringCopy(&Var2, "U_FMM_13_7", 16);
iVar3=13;
iVar4=7;
bVar0=true;
break;
case 216:
StringCopy(&Var2, "U_FMM_13_8", 16);
iVar3=13;
iVar4=8;
bVar0=true;
break;
case 217:
StringCopy(&Var2, "U_FMM_13_9", 16);
iVar3=13;
iVar4=9;
bVar0=true;
break;
case 218:
StringCopy(&Var2, "U_FMM_13_10", 16);
iVar3=13;
iVar4=10;
bVar0=true;
break;
case 219:
StringCopy(&Var2, "U_FMM_13_11", 16);
iVar3=13;
iVar4=11;
bVar0=true;
break;
case 220:
StringCopy(&Var2, "U_FMM_13_12", 16);
iVar3=13;
iVar4=12;
bVar0=true;
break;
case 221:
StringCopy(&Var2, "U_FMM_13_13", 16);
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 222:
StringCopy(&Var2, "U_FMM_13_14", 16);
iVar3=13;
iVar4=14;
bVar0=true;
break;
case 223:
StringCopy(&Var2, "U_FMM_13_15", 16);
iVar3=13;
iVar4=15;
bVar0=true;
break;
}
switch (iParam0){
case 224:
StringCopy(&Var2, "U_FMM_1_0", 16);
iVar3=14;
iVar4=0;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[16]));
break;
case 225:
StringCopy(&Var2, "U_FMM_1_1", 16);
iVar3=14;
iVar4=1;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[17]));
break;
case 226:
StringCopy(&Var2, "U_FMM_1_2", 16);
iVar3=14;
iVar4=2;
bVar0=true;
break;
case 227:
StringCopy(&Var2, "U_FMM_1_3", 16);
iVar3=14;
iVar4=3;
iVar1=40;
iVar1=round((to_float(iVar1) * Global_262145.f_443[19]));
break;
case 228:
StringCopy(&Var2, "U_FMM_1_4", 16);
iVar3=14;
iVar4=4;
iVar1=315;
iVar1=round((to_float(iVar1) * Global_262145.f_443[20]));
break;
case 229:
StringCopy(&Var2, "U_FMM_1_5", 16);
iVar3=14;
iVar4=5;
iVar1=215;
iVar1=round((to_float(iVar1) * Global_262145.f_443[21]));
break;
case 230:
StringCopy(&Var2, "U_FMM_1_6", 16);
iVar3=14;
iVar4=6;
iVar1=265;
iVar1=round((to_float(iVar1) * Global_262145.f_443[22]));
break;
case 231:
StringCopy(&Var2, "U_FMM_1_7", 16);
iVar3=14;
iVar4=7;
iVar1=45;
iVar1=round((to_float(iVar1) * Global_262145.f_443[23]));
break;
case 232:
StringCopy(&Var2, "U_FMM_1_8", 16);
iVar3=14;
iVar4=8;
iVar1=205;
iVar1=round((to_float(iVar1) * Global_262145.f_443[24]));
break;
case 233:
StringCopy(&Var2, "U_FMM_1_9", 16);
iVar3=14;
iVar4=9;
bVar0=true;
break;
case 234:
StringCopy(&Var2, "U_FMM_1_10", 16);
iVar3=14;
iVar4=10;
bVar0=true;
break;
case 235:
StringCopy(&Var2, "U_FMM_1_11", 16);
iVar3=14;
iVar4=11;
iVar1=60;
iVar1=round((to_float(iVar1) * Global_262145.f_443[27]));
break;
case 236:
StringCopy(&Var2, "U_FMM_1_12", 16);
iVar3=14;
iVar4=12;
iVar1=55;
iVar1=round((to_float(iVar1) * Global_262145.f_443[28]));
break;
case 237:
StringCopy(&Var2, "U_FMM_1_13", 16);
iVar3=14;
iVar4=13;
bVar0=true;
break;
case 238:
StringCopy(&Var2, "U_FMM_1_14", 16);
iVar3=14;
iVar4=14;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_443[30]));
break;
case 239:
StringCopy(&Var2, "U_FMM_1_15", 16);
iVar3=14;
iVar4=15;
bVar0=true;
break;
case 240:
StringCopy(&Var2, "U_FMM_15_0", 16);
iVar3=15;
iVar4=0;
iVar1=0;
iVar1=round((to_float(iVar1) * Global_262145.f_443[32]));
break;
}
if(iParam0==23 || iParam0==231){
if(func_871(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(45) * Global_262145.f_443[23]));
}}elseif(iParam0==17 || iParam0==225){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==28 || iParam0==236){
if(func_871(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round((to_float(500) * Global_262145.f_2988));
}else{
iVar1=round((to_float(55) * Global_262145.f_443[28]));
}}elseif(iParam0 >=0 && iParam0 < 32){
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar8]));
}}elseif(iParam0 >=32 && iParam0 < 48){
iVar9=(iParam0 - 32);
if(iVar9 >=0 && iVar9 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar9]));
}}elseif(iParam0 >=128 && iParam0 < 160){
iVar10=(iParam0 - 160) + 124;
if(iVar10 >=0 && iVar10 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar10]));
}}elseif(iParam0 >=192 && iParam0 < 224){
iVar11=(iParam0 - 160) + 188;
if(iVar11 >=0 && iVar11 < 237){
iVar1=round((to_float(iVar1) * Global_262145.f_443[iVar11]));
}}
iVar1=round((to_float(iVar1) * Global_296940.f_16));
if(iParam0 >=241){
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 241, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_868(int iParam0, int iParam1){
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
iVar1=210;
break;
case 2:
iVar3=0;
iVar4=2;
iVar1=50;
break;
case 3:
iVar3=0;
iVar4=3;
iVar1=90;
break;
case 4:
iVar3=0;
iVar4=4;
iVar1=210;
break;
case 5:
iVar3=0;
iVar4=5;
iVar1=200;
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
iVar1=130;
break;
case 8:
iVar3=0;
iVar4=8;
iVar1=220;
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
iVar1=220;
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
iVar1=45;
break;
case 17:
iVar3=1;
iVar4=1;
iVar1=60;
break;
case 18:
iVar3=1;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 19:
iVar3=1;
iVar4=3;
iVar1=40;
break;
case 20:
iVar3=1;
iVar4=4;
iVar1=315;
break;
case 21:
iVar3=1;
iVar4=5;
iVar1=215;
break;
case 22:
iVar3=1;
iVar4=6;
iVar1=265;
break;
case 23:
iVar3=1;
iVar4=7;
iVar1=45;
break;
case 24:
iVar3=1;
iVar4=8;
iVar1=205;
break;
case 25:
iVar3=1;
iVar4=9;
iVar1=0;
bVar0=true;
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
iVar1=60;
break;
case 28:
iVar3=1;
iVar4=12;
iVar1=55;
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
iVar1=170;
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
iVar1=0;
bVar0=true;
break;
case 33:
iVar3=2;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 34:
iVar3=2;
iVar4=2;
iVar1=0;
bVar0=true;
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
iVar1=160;
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
case 48:
iVar3=3;
iVar4=0;
iVar1=205;
break;
case 49:
iVar3=3;
iVar4=1;
iVar1=110;
break;
case 50:
iVar3=3;
iVar4=2;
iVar1=150;
break;
case 51:
iVar3=3;
iVar4=3;
iVar1=115;
break;
case 52:
iVar3=3;
iVar4=4;
iVar1=115;
break;
case 53:
iVar3=3;
iVar4=5;
iVar1=150;
break;
case 54:
iVar3=3;
iVar4=6;
iVar1=150;
break;
case 55:
iVar3=3;
iVar4=7;
iVar1=115;
break;
case 56:
iVar3=3;
iVar4=8;
iVar1=140;
break;
case 57:
iVar3=3;
iVar4=9;
iVar1=125;
break;
case 58:
iVar3=3;
iVar4=10;
iVar1=115;
break;
case 59:
iVar3=3;
iVar4=11;
iVar1=150;
break;
case 60:
iVar3=3;
iVar4=12;
iVar1=150;
break;
case 61:
iVar3=3;
iVar4=13;
iVar1=275;
break;
case 62:
iVar3=3;
iVar4=14;
iVar1=460;
break;
case 63:
iVar3=3;
iVar4=15;
iVar1=260;
break;
}
switch (iParam0){
case 64:
iVar3=4;
iVar4=0;
iVar1=965;
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
iVar1=2520;
break;
case 67:
iVar3=4;
iVar4=3;
iVar1=350;
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
iVar1=150;
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
iVar1=3125;
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
iVar1=80;
break;
case 81:
iVar3=5;
iVar4=1;
iVar1=45;
break;
case 82:
iVar3=5;
iVar4=2;
iVar1=50;
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
iVar1=50;
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
iVar1=2485;
break;
case 97:
iVar3=6;
iVar4=1;
iVar1=535;
break;
case 98:
iVar3=6;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 99:
iVar3=6;
iVar4=3;
iVar1=2945;
break;
case 100:
iVar3=6;
iVar4=4;
iVar1=3080;
break;
case 101:
iVar3=6;
iVar4=5;
iVar1=2990;
break;
case 102:
iVar3=6;
iVar4=6;
iVar1=3750;
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
iVar1=515;
break;
case 105:
iVar3=6;
iVar4=9;
iVar1=530;
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
iVar1=2810;
break;
case 108:
iVar3=7;
iVar4=0;
iVar1=150;
break;
case 109:
iVar3=7;
iVar4=1;
iVar1=155;
break;
case 110:
iVar3=7;
iVar4=2;
iVar1=320;
break;
case 111:
iVar3=7;
iVar4=3;
iVar1=140;
break;
case 112:
iVar3=7;
iVar4=4;
iVar1=150;
break;
case 113:
iVar3=7;
iVar4=5;
iVar1=145;
break;
case 114:
iVar3=7;
iVar4=6;
iVar1=150;
break;
case 115:
iVar3=7;
iVar4=7;
iVar1=140;
break;
case 116:
iVar3=7;
iVar4=8;
iVar1=135;
break;
case 117:
iVar3=7;
iVar4=9;
iVar1=130;
break;
case 118:
iVar3=7;
iVar4=10;
iVar1=130;
break;
case 119:
iVar3=7;
iVar4=11;
iVar1=150;
break;
case 120:
iVar3=7;
iVar4=12;
iVar1=145;
break;
case 121:
iVar3=7;
iVar4=13;
iVar1=740;
break;
case 122:
iVar3=7;
iVar4=14;
iVar1=790;
break;
case 123:
iVar3=7;
iVar4=15;
iVar1=130;
break;
}
switch (iParam0){
case 124:
iVar3=8;
iVar4=0;
iVar1=45;
break;
case 125:
iVar3=8;
iVar4=1;
iVar1=0;
bVar0=true;
break;
case 126:
iVar3=8;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 127:
iVar3=8;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 128:
iVar3=8;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 129:
iVar3=8;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 130:
iVar3=8;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 131:
iVar3=8;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 132:
iVar3=8;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 133:
iVar3=8;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 134:
iVar3=8;
iVar4=10;
iVar1=65;
break;
case 135:
iVar3=8;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 136:
iVar3=8;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 137:
iVar3=8;
iVar4=13;
iVar1=40;
break;
case 138:
iVar3=8;
iVar4=14;
iVar1=45;
break;
case 139:
iVar3=8;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 140:
iVar3=9;
iVar4=0;
iVar1=265;
break;
case 141:
iVar3=9;
iVar4=1;
iVar1=340;
break;
case 142:
iVar3=9;
iVar4=2;
iVar1=335;
break;
case 143:
iVar3=9;
iVar4=3;
iVar1=330;
break;
case 144:
iVar3=9;
iVar4=4;
iVar1=345;
break;
case 145:
iVar3=9;
iVar4=5;
iVar1=550;
break;
case 146:
iVar3=9;
iVar4=6;
iVar1=340;
break;
case 147:
iVar3=9;
iVar4=7;
iVar1=295;
break;
case 148:
iVar3=9;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 149:
iVar3=9;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 150:
iVar3=9;
iVar4=10;
iVar1=545;
break;
case 151:
iVar3=9;
iVar4=11;
iVar1=345;
break;
case 152:
iVar3=9;
iVar4=12;
iVar1=315;
break;
case 153:
iVar3=9;
iVar4=13;
iVar1=520;
break;
case 154:
iVar3=9;
iVar4=14;
iVar1=325;
break;
case 155:
iVar3=9;
iVar4=15;
iVar1=330;
break;
}
switch (iParam0){
case 156:
iVar3=10;
iVar4=0;
iVar1=505;
break;
case 157:
iVar3=10;
iVar4=1;
iVar1=470;
break;
case 158:
iVar3=10;
iVar4=2;
iVar1=475;
break;
case 159:
iVar3=10;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 160:
iVar3=10;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 161:
iVar3=10;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 162:
iVar3=10;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 163:
iVar3=10;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 164:
iVar3=10;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 165:
iVar3=10;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 166:
iVar3=10;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 167:
iVar3=10;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 168:
iVar3=10;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 169:
iVar3=10;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 170:
iVar3=10;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 171:
iVar3=10;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 172:
iVar3=11;
iVar4=0;
iVar1=120;
break;
case 173:
iVar3=11;
iVar4=1;
iVar1=360;
break;
case 174:
iVar3=11;
iVar4=2;
iVar1=0;
bVar0=true;
break;
case 175:
iVar3=11;
iVar4=3;
iVar1=0;
bVar0=true;
break;
case 176:
iVar3=11;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 177:
iVar3=11;
iVar4=5;
iVar1=0;
bVar0=true;
break;
case 178:
iVar3=11;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 179:
iVar3=11;
iVar4=7;
iVar1=90;
break;
case 180:
iVar3=11;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 181:
iVar3=11;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 182:
iVar3=11;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 183:
iVar3=11;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 184:
iVar3=11;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 185:
iVar3=11;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 186:
iVar3=11;
iVar4=14;
iVar1=2450;
break;
case 187:
iVar3=11;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 188:
iVar3=12;
iVar4=0;
iVar1=420;
break;
case 189:
iVar3=12;
iVar4=1;
iVar1=415;
break;
case 190:
iVar3=12;
iVar4=2;
iVar1=695;
break;
case 191:
iVar3=12;
iVar4=3;
iVar1=385;
break;
case 192:
iVar3=12;
iVar4=4;
iVar1=330;
break;
case 193:
iVar3=12;
iVar4=5;
iVar1=345;
break;
case 194:
iVar3=12;
iVar4=6;
iVar1=340;
break;
case 195:
iVar3=12;
iVar4=7;
iVar1=450;
break;
case 196:
iVar3=12;
iVar4=8;
iVar1=295;
break;
case 197:
iVar3=12;
iVar4=9;
iVar1=340;
break;
case 198:
iVar3=12;
iVar4=10;
iVar1=1060;
break;
case 199:
iVar3=12;
iVar4=11;
iVar1=1040;
break;
case 200:
iVar3=12;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 201:
iVar3=12;
iVar4=13;
iVar1=0;
bVar0=true;
break;
case 202:
iVar3=12;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 203:
iVar3=12;
iVar4=15;
iVar1=0;
bVar0=true;
break;
case 204:
iVar3=13;
iVar4=0;
iVar1=420;
break;
case 205:
iVar3=13;
iVar4=1;
iVar1=415;
break;
case 206:
iVar3=13;
iVar4=2;
iVar1=680;
break;
case 207:
iVar3=13;
iVar4=3;
iVar1=385;
break;
case 208:
iVar3=13;
iVar4=4;
iVar1=0;
bVar0=true;
break;
case 209:
iVar3=13;
iVar4=5;
iVar1=345;
break;
case 210:
iVar3=13;
iVar4=6;
iVar1=0;
bVar0=true;
break;
case 211:
iVar3=13;
iVar4=7;
iVar1=0;
bVar0=true;
break;
case 212:
iVar3=13;
iVar4=8;
iVar1=0;
bVar0=true;
break;
case 213:
iVar3=13;
iVar4=9;
iVar1=0;
bVar0=true;
break;
case 214:
iVar3=13;
iVar4=10;
iVar1=0;
bVar0=true;
break;
case 215:
iVar3=13;
iVar4=11;
iVar1=0;
bVar0=true;
break;
case 216:
iVar3=13;
iVar4=12;
iVar1=0;
bVar0=true;
break;
case 217:
iVar3=13;
iVar4=13;
iVar1=1065;
break;
case 218:
iVar3=13;
iVar4=14;
iVar1=0;
bVar0=true;
break;
case 219:
iVar3=13;
iVar4=15;
iVar1=0;
bVar0=true;
break;
}
switch (iParam0){
case 220:
iVar3=14;
iVar4=0;
iVar1=420;
break;
case 221:
iVar3=14;
iVar4=1;
iVar1=415;
break;
case 222:
iVar3=14;
iVar4=2;
iVar1=440;
break;
case 223:
iVar3=14;
iVar4=3;
iVar1=385;
break;
case 224:
iVar3=14;
iVar4=4;
iVar1=330;
break;
case 225:
iVar3=14;
iVar4=5;
iVar1=445;
break;
case 226:
iVar3=14;
iVar4=6;
iVar1=340;
break;
case 227:
iVar3=14;
iVar4=7;
iVar1=440;
break;
case 228:
iVar3=14;
iVar4=8;
iVar1=295;
break;
case 229:
iVar3=14;
iVar4=9;
iVar1=340;
break;
case 230:
iVar3=14;
iVar4=10;
iVar1=325;
break;
case 231:
iVar3=14;
iVar4=11;
iVar1=435;
break;
case 232:
iVar3=14;
iVar4=12;
iVar1=445;
break;
case 233:
iVar3=14;
iVar4=13;
iVar1=440;
break;
case 234:
iVar3=14;
iVar4=14;
iVar1=325;
break;
case 235:
iVar3=14;
iVar4=15;
iVar1=325;
break;
case 236:
iVar3=15;
iVar4=0;
break;
}
StringCopy(&Var2, "U_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
if(iParam0==23){
if(func_871(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_16));
}else{
iVar1=round(((to_float(45) * Global_262145.f_443[23]) * Global_296940.f_16));
}}elseif(iParam0==17){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_16));
}elseif(iParam0==28){
if(func_871(87, -1)){
StringCopy(&Var2, "REW_REDSK", 16);
iVar1=round(((to_float(500) * Global_262145.f_2988) * Global_296940.f_16));
}else{
iVar1=round(((to_float(55) * Global_262145.f_443[28]) * Global_296940.f_16));
}}else{
iVar8=iParam0;
if(iVar8 >=0 && iVar8 < 237){
iVar1=round(((to_float(iVar1) * Global_262145.f_443[iVar8]) * Global_296940.f_16));
}}
if(iParam0 >=237){
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 237, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_869(int iParam0, int iParam1){
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
iVar1=round((to_float(iVar1) * Global_262145.f_2543[0]));
break;
case 1:
iVar3=1;
iVar4=0;
iVar1=190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[1]));
break;
case 2:
iVar3=1;
iVar4=1;
iVar1=185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[2]));
break;
case 3:
iVar3=1;
iVar4=2;
iVar1=180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[3]));
break;
case 4:
iVar3=1;
iVar4=3;
iVar1=175;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[4]));
break;
case 5:
iVar3=1;
iVar4=4;
iVar1=170;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[5]));
break;
case 6:
iVar3=1;
iVar4=5;
iVar1=0;
break;
case 7:
iVar3=2;
iVar4=0;
iVar1=580;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[6]));
break;
case 8:
iVar3=2;
iVar4=1;
iVar1=575;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[7]));
break;
case 9:
iVar3=2;
iVar4=2;
iVar1=570;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[8]));
break;
case 10:
iVar3=2;
iVar4=3;
iVar1=565;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[9]));
break;
case 11:
iVar3=2;
iVar4=4;
iVar1=560;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[10]));
break;
case 12:
iVar3=2;
iVar4=5;
iVar1=0;
break;
case 13:
iVar3=3;
iVar4=0;
iVar1=1100;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[11]));
break;
case 14:
iVar3=3;
iVar4=1;
iVar1=1095;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[12]));
break;
case 15:
iVar3=3;
iVar4=2;
iVar1=1090;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[13]));
break;
case 16:
iVar3=3;
iVar4=3;
iVar1=1085;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[14]));
break;
case 17:
iVar3=3;
iVar4=4;
iVar1=1080;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[15]));
break;
case 18:
iVar3=3;
iVar4=5;
iVar1=0;
break;
case 19:
iVar3=4;
iVar4=0;
iVar1=520;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[16]));
break;
case 20:
iVar3=4;
iVar4=1;
iVar1=515;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[17]));
break;
case 21:
iVar3=4;
iVar4=2;
iVar1=510;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[18]));
break;
case 22:
iVar3=4;
iVar4=3;
iVar1=505;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[19]));
break;
case 23:
iVar3=4;
iVar4=4;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[20]));
break;
case 24:
iVar3=4;
iVar4=5;
iVar1=0;
break;
case 25:
iVar3=4;
iVar4=6;
iVar1=0;
break;
case 26:
iVar3=5;
iVar4=0;
iVar1=295;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[21]));
break;
case 27:
iVar3=5;
iVar4=1;
iVar1=290;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[22]));
break;
case 28:
iVar3=5;
iVar4=2;
iVar1=285;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[23]));
break;
case 29:
iVar3=5;
iVar4=3;
iVar1=280;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[24]));
break;
case 30:
iVar3=5;
iVar4=4;
iVar1=275;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[25]));
break;
case 31:
iVar3=5;
iVar4=5;
iVar1=0;
break;
case 32:
iVar3=6;
iVar4=0;
iVar1=950;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[26]));
break;
case 33:
iVar3=6;
iVar4=1;
iVar1=945;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[27]));
break;
case 34:
iVar3=6;
iVar4=2;
iVar1=940;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[28]));
break;
case 35:
iVar3=6;
iVar4=3;
iVar1=935;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[29]));
break;
case 36:
iVar3=6;
iVar4=4;
iVar1=930;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[30]));
break;
case 37:
iVar3=6;
iVar4=5;
iVar1=0;
break;
case 38:
iVar3=7;
iVar4=0;
iVar1=440;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[31]));
break;
case 39:
iVar3=7;
iVar4=1;
iVar1=435;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[32]));
break;
case 40:
iVar3=7;
iVar4=2;
iVar1=430;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[33]));
break;
case 41:
iVar3=7;
iVar4=3;
iVar1=425;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[34]));
break;
case 42:
iVar3=7;
iVar4=4;
iVar1=420;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[35]));
break;
case 43:
iVar3=7;
iVar4=5;
iVar1=0;
break;
case 44:
iVar3=7;
iVar4=6;
iVar1=0;
break;
case 45:
iVar3=8;
iVar4=0;
iVar1=1150;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[36]));
break;
case 46:
iVar3=8;
iVar4=1;
iVar1=1145;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[37]));
break;
case 47:
iVar3=8;
iVar4=2;
iVar1=1140;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[38]));
break;
case 48:
iVar3=8;
iVar4=3;
iVar1=1135;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[39]));
break;
case 49:
iVar3=8;
iVar4=4;
iVar1=1130;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[40]));
break;
case 50:
iVar3=9;
iVar4=0;
iVar1=395;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[41]));
break;
case 51:
iVar3=9;
iVar4=1;
iVar1=390;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[42]));
break;
case 52:
iVar3=9;
iVar4=2;
iVar1=385;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[43]));
break;
case 53:
iVar3=9;
iVar4=3;
iVar1=380;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[44]));
break;
case 54:
iVar3=9;
iVar4=4;
iVar1=375;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[45]));
break;
case 55:
iVar3=9;
iVar4=5;
iVar1=0;
break;
case 56:
iVar3=9;
iVar4=6;
iVar1=0;
break;
case 57:
iVar3=10;
iVar4=0;
iVar1=500;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[46]));
break;
case 58:
iVar3=10;
iVar4=1;
iVar1=495;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[47]));
break;
case 59:
iVar3=10;
iVar4=2;
iVar1=490;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[48]));
break;
case 60:
iVar3=10;
iVar4=3;
iVar1=485;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[49]));
break;
case 61:
iVar3=10;
iVar4=4;
iVar1=480;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[50]));
break;
case 62:
iVar3=10;
iVar4=5;
iVar1=0;
break;
case 63:
iVar3=11;
iVar4=0;
iVar1=1050;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[51]));
break;
case 64:
iVar3=11;
iVar4=1;
iVar1=1045;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[52]));
break;
case 65:
iVar3=11;
iVar4=2;
iVar1=1040;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[53]));
break;
case 66:
iVar3=11;
iVar4=3;
iVar1=1035;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[54]));
break;
case 67:
iVar3=11;
iVar4=4;
iVar1=1030;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[55]));
break;
case 68:
iVar3=11;
iVar4=5;
iVar1=0;
break;
case 69:
iVar3=12;
iVar4=0;
iVar1=550;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[56]));
break;
case 70:
iVar3=12;
iVar4=1;
iVar1=545;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[57]));
break;
case 71:
iVar3=12;
iVar4=2;
iVar1=540;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[58]));
break;
case 72:
iVar3=12;
iVar4=3;
iVar1=535;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[59]));
break;
case 73:
iVar3=12;
iVar4=4;
iVar1=530;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[60]));
break;
case 74:
iVar3=13;
iVar4=0;
iVar1=1200;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[61]));
break;
case 75:
iVar3=13;
iVar4=1;
iVar1=1195;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[62]));
break;
case 76:
iVar3=13;
iVar4=2;
iVar1=1190;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[63]));
break;
case 77:
iVar3=13;
iVar4=3;
iVar1=1185;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[64]));
break;
case 78:
iVar3=13;
iVar4=4;
iVar1=1180;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[65]));
break;
case 79:
iVar3=13;
iVar4=5;
iVar1=0;
break;
case 80:
iVar3=14;
iVar4=0;
iVar1=2000;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[66]));
break;
case 81:
iVar3=14;
iVar4=1;
iVar1=1995;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[67]));
break;
case 82:
iVar3=14;
iVar4=2;
iVar1=1990;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[68]));
break;
case 83:
iVar3=14;
iVar4=3;
iVar1=1985;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[69]));
break;
case 84:
iVar3=14;
iVar4=4;
iVar1=1980;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[70]));
break;
case 85:
iVar3=15;
iVar4=0;
iVar1=475;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[71]));
break;
case 86:
iVar3=15;
iVar4=1;
iVar1=470;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[72]));
break;
case 87:
iVar3=15;
iVar4=2;
iVar1=465;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[73]));
break;
case 88:
iVar3=15;
iVar4=3;
iVar1=460;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[74]));
break;
case 89:
iVar3=15;
iVar4=4;
iVar1=455;
iVar1=round((to_float(iVar1) * Global_262145.f_2543[75]));
break;
case 90:
iVar3=15;
iVar4=5;
iVar1=0;
break;
default:
Global_78341[0 /*14*/].f_5=3;
func_839(iVar7, iParam0, 91, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_829(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_870(){
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
StringCopy(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_871(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_873(iParam0)==14192){
return 0;
}
uVar0=func_872(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_276(iVar1));
}

int func_872(var uParam0, int iParam1){
int iVar0;
iVar0=func_249(func_873(uParam0), iParam1, 0);
return iVar0;
}

int func_873(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_279(iVar0);
if((func_252()==0 || func_874()==0) || (func_252()==999 && func_874()==999)){
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

int func_874(){
return Global_32164;
}

int func_875(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}

int func_876(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_879(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_878(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_840(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_877(iParam0, func_840(iParam2)) + iVar4);
}}
return -99;
}

int func_877(int iParam0, int iParam1){
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

int func_878(int iParam0){
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

int func_879(int iParam0){
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

int func_880(int iParam0){
switch (iParam0){
case 1605135005:
case 461611711:
case 99858221:
case 213255460:
case -197848144:
case 2130504112:
case 1710404355:
case -1469882278:
case -2101744495:
case -1661253242:
case 841763679:
case 138092552:
case 1069377153:
case 513166526:
case -843709836:
case -410952059:
case 673800403:
case -2099479637:
return 1;
break;
case -1655013310:
case -8081421:
case 1136959044:
case 1252591238:
case -1662464917:
case 439944869:
case 1311829745:
case 1376594947:
case 925416247:
case -993141292:
case -794186434:
case 1033338279:
case 1956717889:
case -1069968045:
case 205194150:
case 1019798721:
case -782196529:
case -3146323:
case 1530696889:
case 1301510495:
case 339475450:
case 1494189484:
case -2124289883:
case 1353353015:
case -156491260:
case 1232357267:
case -921734020:
case -1509312284:
case 2103965964:
case -1709127394:
case -727053399:
case 425828250:
case -731306227:
case -1326192619:
case 1881115548:
case 1290819217:
case 117815244:
case -1411572922:
case 1655606115:
case -1687399299:
case -921932467:
case -1516214043:
case -1757640274:
case 654371756:
case 340755414:
case -120058021:
case 583082169:
case 44442359:
case 2145704703:
case -723499156:
case -1907623987:
case 222672970:
case 818396254:
case -544285475:
case 514398241:
case -375328511:
case -2081103177:
case -1142876798:
case -2104434705:
case -551157269:
case -1881446972:
case 292021870:
case 1719833363:
case -1035974624:
case 1956294467:
case -192205643:
case 1894950891:
case -947334499:
case 2114667036:
case -111757768:
case -783423328:
case -593232685:
case -1223936995:
case -1895527326:
case 1259618253:
case -1416608391:
case -1905506688:
case 1186233287:
case 952605492:
case -1997903306:
case -1952569676:
case -1975121276:
case 441259453:
case -1734858968:
case -751171688:
case 2066009771:
case -1497080576:
case -231360453:
case -91981822:
case -378776327:
case -1886485930:
case -602915326:
case 321893176:
case 969275756:
case 44864034:
return 11;
break;
case 1544949032:
case 609473027:
case 1505804828:
case -1839009993:
case -608876472:
case 1334957776:
case -1963845403:
case 882420786:
case 732574088:
case -824927683:
case 492344549:
case -522764734:
case 955216856:
case -756304130:
case -1622267676:
case -1099489536:
return 4;
break;
case -1759130267:
case -2109654177:
case 1207735097:
case -133674528:
case -36216721:
case 1244363453:
case -1943948059:
case -2070991003:
case -683062477:
case -617653084:
case 388773720:
case -2098938846:
case 471019161:
case 692557212:
case 165186084:
case -498759787:
case 493498543:
case -292085704:
case -2056426364:
case 1986396785:
case -1883471582:
case -1397788925:
case -556847876:
case 1779880946:
case 199921456:
case 758688950:
case -859788431:
case -592908627:
case 1504986091:
case -1749240826:
return 14;
break;
case 498873860:
case -126601887:
case 1985248855:
case -875041851:
case 1149459758:
case 886587113:
case 1755450189:
case 1921205679:
return 6;
break;
case 652173018:
case -1189158251:
case -315422177:
case -1832379936:
return 7;
break;
case -1256711400:
case 1298977992:
return 10;
break;
case 1226096741:
case 1745898052:
case 534801913:
case 430517623:
case 765528446:
case 1154188219:
case 72595168:
case 1980524092:
return 12;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
return 1;
break;
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
return 12;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
return 4;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
return 11;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
return 14;
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
return 10;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_berd_5_0"):
case joaat("dlc_mp_sum2_f_berd_5_0"):
case joaat("dlc_mp_sum2_m_berd_5_1"):
case joaat("dlc_mp_sum2_f_berd_5_1"):
case joaat("dlc_mp_sum2_m_berd_5_2"):
case joaat("dlc_mp_sum2_f_berd_5_2"):
case joaat("dlc_mp_sum2_m_berd_5_3"):
case joaat("dlc_mp_sum2_f_berd_5_3"):
case joaat("dlc_mp_sum2_m_berd_6_0"):
case joaat("dlc_mp_sum2_f_berd_6_0"):
case joaat("dlc_mp_sum2_m_berd_6_1"):
case joaat("dlc_mp_sum2_f_berd_6_1"):
case joaat("dlc_mp_sum2_m_berd_6_2"):
case joaat("dlc_mp_sum2_f_berd_6_2"):
case joaat("dlc_mp_sum2_m_berd_7_0"):
case joaat("dlc_mp_sum2_f_berd_7_0"):
case joaat("dlc_mp_sum2_m_berd_8_0"):
case joaat("dlc_mp_sum2_f_berd_8_0"):
case joaat("dlc_mp_sum2_m_berd_9_0"):
case joaat("dlc_mp_sum2_f_berd_9_0"):
case joaat("dlc_mp_sum2_m_berd_9_1"):
case joaat("dlc_mp_sum2_f_berd_9_1"):
case joaat("dlc_mp_sum2_m_berd_9_2"):
case joaat("dlc_mp_sum2_f_berd_9_2"):
case joaat("dlc_mp_sum2_m_berd_10_0"):
case joaat("dlc_mp_sum2_f_berd_10_0"):
case joaat("dlc_mp_sum2_m_berd_10_1"):
case joaat("dlc_mp_sum2_f_berd_10_1"):
case joaat("dlc_mp_sum2_m_berd_10_2"):
case joaat("dlc_mp_sum2_f_berd_10_2"):
case joaat("dlc_mp_sum2_m_berd_10_3"):
case joaat("dlc_mp_sum2_f_berd_10_3"):
case joaat("dlc_mp_sum2_m_berd_10_4"):
case joaat("dlc_mp_sum2_f_berd_10_4"):
case joaat("dlc_mp_sum2_m_berd_10_5"):
case joaat("dlc_mp_sum2_f_berd_10_5"):
case joaat("dlc_mp_sum2_m_berd_10_6"):
case joaat("dlc_mp_sum2_f_berd_10_6"):
case joaat("dlc_mp_sum2_m_berd_10_7"):
case joaat("dlc_mp_sum2_f_berd_10_7"):
case joaat("dlc_mp_sum2_m_berd_10_8"):
case joaat("dlc_mp_sum2_f_berd_10_8"):
case joaat("dlc_mp_sum2_m_berd_10_9"):
case joaat("dlc_mp_sum2_f_berd_10_9"):
case joaat("dlc_mp_sum2_m_berd_10_10"):
case joaat("dlc_mp_sum2_f_berd_10_10"):
case joaat("dlc_mp_sum2_m_berd_10_11"):
case joaat("dlc_mp_sum2_f_berd_10_11"):
case joaat("dlc_mp_sum2_m_berd_10_12"):
case joaat("dlc_mp_sum2_f_berd_10_12"):
case joaat("dlc_mp_sum2_m_berd_10_13"):
case joaat("dlc_mp_sum2_f_berd_10_13"):
case joaat("dlc_mp_sum2_m_berd_10_14"):
case joaat("dlc_mp_sum2_f_berd_10_14"):
case joaat("dlc_mp_sum2_m_berd_10_15"):
case joaat("dlc_mp_sum2_f_berd_10_15"):
case joaat("dlc_mp_sum2_m_berd_10_16"):
case joaat("dlc_mp_sum2_f_berd_10_16"):
case joaat("dlc_mp_sum2_m_berd_10_17"):
case joaat("dlc_mp_sum2_f_berd_10_17"):
case joaat("dlc_mp_sum2_m_berd_10_18"):
case joaat("dlc_mp_sum2_f_berd_10_18"):
case joaat("dlc_mp_sum2_m_berd_10_19"):
case joaat("dlc_mp_sum2_f_berd_10_19"):
case joaat("dlc_mp_sum2_m_berd_10_20"):
case joaat("dlc_mp_sum2_f_berd_10_20"):
case joaat("dlc_mp_sum2_m_berd_10_21"):
case joaat("dlc_mp_sum2_f_berd_10_21"):
case joaat("dlc_mp_sum2_m_berd_10_22"):
case joaat("dlc_mp_sum2_f_berd_10_22"):
case joaat("dlc_mp_sum2_m_berd_10_23"):
case joaat("dlc_mp_sum2_f_berd_10_23"):
case joaat("dlc_mp_sum2_m_berd_10_24"):
case joaat("dlc_mp_sum2_f_berd_10_24"):
case joaat("dlc_mp_sum2_m_berd_10_25"):
case joaat("dlc_mp_sum2_f_berd_10_25"):
case joaat("dlc_mp_sum2_m_berd_0_0"):
case joaat("dlc_mp_sum2_f_berd_0_0"):
case joaat("dlc_mp_sum2_m_berd_1_0"):
case joaat("dlc_mp_sum2_f_berd_1_0"):
case joaat("dlc_mp_sum2_m_berd_1_1"):
case joaat("dlc_mp_sum2_f_berd_1_1"):
case joaat("dlc_mp_sum2_m_berd_1_2"):
case joaat("dlc_mp_sum2_f_berd_1_2"):
case joaat("dlc_mp_sum2_m_berd_3_0"):
case joaat("dlc_mp_sum2_f_berd_3_0"):
case joaat("dlc_mp_sum2_m_berd_4_0"):
case joaat("dlc_mp_sum2_f_berd_4_0"):
return 1;
break;
case joaat("dlc_mp_sum2_m_outfit_sasquatch"):
case joaat("dlc_mp_sum2_f_outfit_sasquatch"):
return 12;
break;
case joaat("dlc_mp_sum2_m_legs_2_0"):
case joaat("dlc_mp_sum2_f_legs_0_0"):
case joaat("dlc_mp_sum2_m_legs_2_1"):
case joaat("dlc_mp_sum2_f_legs_0_1"):
return 4;
break;
case joaat("dlc_mp_sum2_m_jbib_13_0"):
case joaat("dlc_mp_sum2_f_jbib_15_0"):
case joaat("dlc_mp_sum2_m_jbib_14_0"):
case joaat("dlc_mp_sum2_f_jbib_19_0"):
case joaat("dlc_mp_sum2_m_jbib_15_0"):
case joaat("dlc_mp_sum2_m_jbib_16_0"):
case joaat("dlc_mp_sum2_f_jbib_20_0"):
case joaat("dlc_mp_sum2_m_jbib_15_1"):
case joaat("dlc_mp_sum2_m_jbib_16_1"):
case joaat("dlc_mp_sum2_f_jbib_20_1"):
case joaat("dlc_mp_sum2_m_jbib_15_2"):
case joaat("dlc_mp_sum2_m_jbib_16_2"):
case joaat("dlc_mp_sum2_f_jbib_20_2"):
case joaat("dlc_mp_sum2_m_jbib_17_0"):
case joaat("dlc_mp_sum2_f_jbib_8_0"):
case joaat("dlc_mp_sum2_m_jbib_7_0"):
case joaat("dlc_mp_sum2_m_jbib_8_0"):
case joaat("dlc_mp_sum2_f_jbib_24_0"):
case joaat("dlc_mp_sum2_f_jbib_21_0"):
return 11;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_phead_6_0"):
case joaat("dlc_mp_sum2_f_phead_6_0"):
case joaat("dlc_mp_sum2_m_phead_6_1"):
case joaat("dlc_mp_sum2_f_phead_6_1"):
case joaat("dlc_mp_sum2_m_phead_6_2"):
case joaat("dlc_mp_sum2_f_phead_6_2"):
case joaat("dlc_mp_sum2_m_phead_6_3"):
case joaat("dlc_mp_sum2_f_phead_6_3"):
case joaat("dlc_mp_sum2_m_phead_6_4"):
case joaat("dlc_mp_sum2_f_phead_6_4"):
case joaat("dlc_mp_sum2_m_phead_6_5"):
case joaat("dlc_mp_sum2_f_phead_6_5"):
case joaat("dlc_mp_sum2_m_phead_6_6"):
case joaat("dlc_mp_sum2_f_phead_6_6"):
case joaat("dlc_mp_sum2_m_phead_6_7"):
case joaat("dlc_mp_sum2_f_phead_6_7"):
case joaat("dlc_mp_sum2_m_phead_6_8"):
case joaat("dlc_mp_sum2_f_phead_6_8"):
case joaat("dlc_mp_sum2_m_phead_6_9"):
case joaat("dlc_mp_sum2_f_phead_6_9"):
case joaat("dlc_mp_sum2_m_phead_6_10"):
case joaat("dlc_mp_sum2_f_phead_6_10"):
case joaat("dlc_mp_sum2_m_phead_6_11"):
case joaat("dlc_mp_sum2_f_phead_6_11"):
case joaat("dlc_mp_sum2_m_phead_6_12"):
case joaat("dlc_mp_sum2_f_phead_6_12"):
case joaat("dlc_mp_sum2_m_phead_6_13"):
case joaat("dlc_mp_sum2_f_phead_6_13"):
case joaat("dlc_mp_sum2_m_phead_0_0"):
case joaat("dlc_mp_sum2_m_phead_1_0"):
case joaat("dlc_mp_sum2_f_phead_0_0"):
case joaat("dlc_mp_sum2_f_phead_1_0"):
case joaat("dlc_mp_sum2_m_phead_2_0"):
case joaat("dlc_mp_sum2_m_phead_4_0"):
case joaat("dlc_mp_sum2_f_phead_2_0"):
case joaat("dlc_mp_sum2_f_phead_4_0"):
case joaat("dlc_mp_sum2_m_phead_2_1"):
case joaat("dlc_mp_sum2_m_phead_4_1"):
case joaat("dlc_mp_sum2_f_phead_2_1"):
case joaat("dlc_mp_sum2_f_phead_4_1"):
case joaat("dlc_mp_sum2_m_phead_3_0"):
case joaat("dlc_mp_sum2_m_phead_7_0"):
case joaat("dlc_mp_sum2_f_phead_3_0"):
case joaat("dlc_mp_sum2_f_phead_7_0"):
case joaat("dlc_mp_sum2_m_phead_8_0"):
case joaat("dlc_mp_sum2_f_phead_8_0"):
case joaat("dlc_mp_sum2_m_pears_0_0"):
case joaat("dlc_mp_sum2_f_pears_0_0"):
case joaat("dlc_mp_sum2_m_pears_0_1"):
case joaat("dlc_mp_sum2_f_pears_0_1"):
case joaat("dlc_mp_sum2_m_pears_0_2"):
case joaat("dlc_mp_sum2_f_pears_0_2"):
case joaat("dlc_mp_sum2_m_pears_0_3"):
case joaat("dlc_mp_sum2_f_pears_0_3"):
case joaat("dlc_mp_sum2_m_pears_0_4"):
case joaat("dlc_mp_sum2_f_pears_0_4"):
case joaat("dlc_mp_sum2_m_pears_0_5"):
case joaat("dlc_mp_sum2_f_pears_0_5"):
case joaat("dlc_mp_sum2_m_pears_0_6"):
case joaat("dlc_mp_sum2_f_pears_0_6"):
case joaat("dlc_mp_sum2_m_pears_0_7"):
case joaat("dlc_mp_sum2_f_pears_0_7"):
case joaat("dlc_mp_sum2_m_pears_0_8"):
case joaat("dlc_mp_sum2_f_pears_0_8"):
case joaat("dlc_mp_sum2_m_pears_0_9"):
case joaat("dlc_mp_sum2_f_pears_0_9"):
case joaat("dlc_mp_sum2_m_pears_0_10"):
case joaat("dlc_mp_sum2_f_pears_0_10"):
case joaat("dlc_mp_sum2_m_pears_0_11"):
case joaat("dlc_mp_sum2_f_pears_0_11"):
return 14;
break;
case joaat("dlc_mp_sum2_m_special_1_0"):
case joaat("dlc_mp_sum2_f_special_1_0"):
return 8;
break;
case joaat("dlc_mp_sum2_m_feet_5_0"):
case joaat("dlc_mp_sum2_f_feet_5_0"):
case joaat("dlc_mp_sum2_m_feet_5_1"):
case joaat("dlc_mp_sum2_f_feet_5_1"):
case joaat("dlc_mp_sum2_m_feet_5_2"):
case joaat("dlc_mp_sum2_f_feet_5_2"):
case joaat("dlc_mp_sum2_m_feet_5_3"):
case joaat("dlc_mp_sum2_f_feet_5_3"):
case joaat("dlc_mp_sum2_m_feet_5_4"):
case joaat("dlc_mp_sum2_f_feet_5_4"):
case joaat("dlc_mp_sum2_m_feet_5_5"):
case joaat("dlc_mp_sum2_f_feet_5_5"):
case joaat("dlc_mp_sum2_m_feet_5_6"):
case joaat("dlc_mp_sum2_f_feet_5_6"):
case joaat("dlc_mp_sum2_m_feet_5_7"):
case joaat("dlc_mp_sum2_f_feet_5_7"):
case joaat("dlc_mp_sum2_m_feet_5_8"):
case joaat("dlc_mp_sum2_f_feet_5_8"):
case joaat("dlc_mp_sum2_m_feet_6_0"):
case joaat("dlc_mp_sum2_f_feet_6_0"):
case joaat("dlc_mp_sum2_m_feet_6_1"):
case joaat("dlc_mp_sum2_f_feet_6_1"):
case joaat("dlc_mp_sum2_m_feet_6_2"):
case joaat("dlc_mp_sum2_f_feet_6_2"):
case joaat("dlc_mp_sum2_m_feet_6_3"):
case joaat("dlc_mp_sum2_f_feet_6_3"):
case joaat("dlc_mp_sum2_m_feet_6_4"):
case joaat("dlc_mp_sum2_f_feet_6_4"):
case joaat("dlc_mp_sum2_m_feet_6_5"):
case joaat("dlc_mp_sum2_f_feet_6_5"):
case joaat("dlc_mp_sum2_m_feet_6_6"):
case joaat("dlc_mp_sum2_f_feet_6_6"):
case joaat("dlc_mp_sum2_m_feet_6_7"):
case joaat("dlc_mp_sum2_f_feet_6_7"):
case joaat("dlc_mp_sum2_m_feet_6_8"):
case joaat("dlc_mp_sum2_f_feet_6_8"):
case joaat("dlc_mp_sum2_m_feet_6_9"):
case joaat("dlc_mp_sum2_f_feet_6_9"):
case joaat("dlc_mp_sum2_m_feet_6_10"):
case joaat("dlc_mp_sum2_f_feet_6_10"):
case joaat("dlc_mp_sum2_m_feet_6_11"):
case joaat("dlc_mp_sum2_f_feet_6_11"):
case joaat("dlc_mp_sum2_m_feet_6_12"):
case joaat("dlc_mp_sum2_f_feet_6_12"):
case joaat("dlc_mp_sum2_m_feet_6_13"):
case joaat("dlc_mp_sum2_f_feet_6_13"):
case joaat("dlc_mp_sum2_m_feet_6_14"):
case joaat("dlc_mp_sum2_f_feet_6_14"):
return 6;
break;
}
switch (iParam0){
case joaat("dlc_mp_fixer_m_jbib_10_2"):
case joaat("dlc_mp_fixer_f_jbib_10_2"):
case joaat("dlc_mp_fixer_m_jbib_10_3"):
case -906547381:
case joaat("dlc_mp_fixer_m_jbib_10_4"):
case 308133919:
return 11;
break;
case joaat("dlc_mp_fixer_m_jbib_10_0"):
case joaat("dlc_mp_fixer_m_jbib_10_1"):
case joaat("dlc_mp_fixer_f_jbib_13_0"):
case joaat("dlc_mp_fixer_f_jbib_13_1"):
return 11;
break;
case joaat("dlc_mp_fixer_m_berd_0_0"):
case joaat("dlc_mp_fixer_m_berd_0_1"):
case joaat("dlc_mp_fixer_m_berd_0_2"):
case joaat("dlc_mp_fixer_m_berd_0_3"):
case joaat("dlc_mp_fixer_m_berd_1_0"):
case joaat("dlc_mp_fixer_m_berd_1_1"):
case joaat("dlc_mp_fixer_m_berd_1_2"):
case joaat("dlc_mp_fixer_m_berd_1_3"):
case joaat("dlc_mp_fixer_m_berd_2_0"):
case joaat("dlc_mp_fixer_m_berd_2_1"):
case joaat("dlc_mp_fixer_m_berd_2_2"):
case joaat("dlc_mp_fixer_m_berd_2_3"):
case joaat("dlc_mp_fixer_f_berd_0_0"):
case joaat("dlc_mp_fixer_f_berd_0_1"):
case joaat("dlc_mp_fixer_f_berd_0_2"):
case joaat("dlc_mp_fixer_f_berd_0_3"):
case joaat("dlc_mp_fixer_f_berd_1_0"):
case joaat("dlc_mp_fixer_f_berd_1_1"):
case joaat("dlc_mp_fixer_f_berd_1_2"):
case joaat("dlc_mp_fixer_f_berd_1_3"):
case joaat("dlc_mp_fixer_f_berd_2_0"):
case joaat("dlc_mp_fixer_f_berd_2_1"):
case joaat("dlc_mp_fixer_f_berd_2_2"):
case joaat("dlc_mp_fixer_f_berd_2_3"):
return 1;
break;
}
switch (iParam0){
case joaat("dlc_mp_tuner_m_decl_30_1"):
case joaat("dlc_mp_tuner_f_decl_29_1"):
return 10;
break;
case joaat("dlc_mp_tuner_m_jbib_11_0"):
case joaat("dlc_mp_tuner_m_jbib_12_0"):
case joaat("dlc_mp_tuner_f_jbib_11_0"):
case joaat("dlc_mp_tuner_f_jbib_12_0"):
return 11;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_1"):
case joaat("dlc_mp_tuner_m_jbib_1_3"):
case joaat("dlc_mp_tuner_m_legs_1_3"):
case joaat("dlc_mp_tuner_f_outfit_boiler_1"):
case joaat("dlc_mp_tuner_f_jbib_1_3"):
case joaat("dlc_mp_tuner_f_legs_1_3"):
return 12;
break;
case joaat("dlc_mp_tuner_m_jbib_9_15"):
case joaat("dlc_mp_tuner_f_jbib_9_15"):
return 11;
break;
case joaat("dlc_mp_tuner_m_jbib_13_2"):
case joaat("dlc_mp_tuner_m_jbib_14_2"):
case joaat("dlc_mp_tuner_f_jbib_13_2"):
return 11;
break;
case joaat("dlc_mp_tuner_m_jbib_13_0"):
case joaat("dlc_mp_tuner_m_jbib_14_0"):
case joaat("dlc_mp_tuner_f_jbib_13_0"):
return 11;
break;
case joaat("dlc_mp_tuner_m_jbib_13_1"):
case joaat("dlc_mp_tuner_m_jbib_14_1"):
case joaat("dlc_mp_tuner_f_jbib_13_1"):
return 11;
break;
case joaat("dlc_mp_tuner_m_phead_1_0"):
case joaat("dlc_mp_tuner_m_phead_2_0"):
case joaat("dlc_mp_tuner_f_phead_1_0"):
case joaat("dlc_mp_tuner_f_phead_2_0"):
return 0;
break;
case joaat("dlc_mp_tuner_m_phead_1_1"):
case joaat("dlc_mp_tuner_m_phead_2_1"):
case joaat("dlc_mp_tuner_f_phead_1_1"):
case joaat("dlc_mp_tuner_f_phead_2_1"):
return 0;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_0"):
case joaat("dlc_mp_tuner_f_outfit_morph_0"):
return 12;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_1"):
case joaat("dlc_mp_tuner_f_outfit_morph_1"):
return 12;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_0"):
case joaat("dlc_mp_tuner_m_jbib_1_2"):
case joaat("dlc_mp_tuner_m_legs_1_2"):
case joaat("dlc_mp_tuner_f_outfit_boiler_0"):
case joaat("dlc_mp_tuner_f_jbib_1_2"):
case joaat("dlc_mp_tuner_f_legs_1_2"):
return 12;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_jbib_8_0"):
case joaat("dlc_mp_h4_f_jbib_9_0"):
case joaat("dlc_mp_h4_m_jbib_8_0"):
case joaat("dlc_mp_h4_m_jbib_9_0"):
case joaat("dlc_mp_h4_f_jbib_10_0"):
case joaat("dlc_mp_h4_m_jbib_10_0"):
case joaat("dlc_mp_h4_f_jbib_5_0"):
case joaat("dlc_mp_h4_m_jbib_6_0"):
case joaat("dlc_mp_h4_f_jbib_5_1"):
case joaat("dlc_mp_h4_m_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_0_5"):
case joaat("dlc_mp_h4_f_jbib_7_1"):
case joaat("dlc_mp_h4_f_jbib_7_5"):
case joaat("dlc_mp_h4_m_jbib_0_9"):
case joaat("dlc_mp_h4_f_jbib_7_4"):
case joaat("dlc_mp_h4_m_jbib_0_8"):
case joaat("dlc_mp_h4_m_jbib_0_6"):
case joaat("dlc_mp_h4_f_jbib_7_2"):
case joaat("dlc_mp_h4_m_jbib_0_7"):
case joaat("dlc_mp_h4_f_jbib_7_3"):
case joaat("dlc_mp_h4_m_jbib_5_0"):
case joaat("dlc_mp_h4_f_jbib_4_0"):
case joaat("dlc_mp_h4_f_jbib_6_4"):
case joaat("dlc_mp_h4_m_jbib_7_4"):
case joaat("dlc_mp_h4_f_jbib_6_3"):
case joaat("dlc_mp_h4_m_jbib_7_3"):
case joaat("dlc_mp_h4_f_jbib_6_2"):
case joaat("dlc_mp_h4_m_jbib_7_2"):
case joaat("dlc_mp_h4_f_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_7_1"):
case joaat("dlc_mp_h4_f_jbib_6_0"):
case joaat("dlc_mp_h4_m_jbib_7_0"):
return 11;
break;
case joaat("dlc_mp_h4_f_legs_1_0"):
case joaat("dlc_mp_h4_m_legs_1_0"):
case joaat("dlc_mp_h4_f_legs_1_1"):
case joaat("dlc_mp_h4_m_legs_1_1"):
case joaat("dlc_mp_h4_f_legs_1_2"):
case joaat("dlc_mp_h4_m_legs_1_2"):
case joaat("dlc_mp_h4_f_legs_0_0"):
case joaat("dlc_mp_h4_m_legs_0_0"):
return 4;
break;
case joaat("dlc_mp_h4_f_phead_1_0"):
case joaat("dlc_mp_h4_m_phead_1_0"):
case joaat("dlc_mp_h4_f_phead_2_0"):
case joaat("dlc_mp_h4_m_phead_2_0"):
case joaat("dlc_mp_h4_f_phead_1_1"):
case joaat("dlc_mp_h4_m_phead_1_1"):
case joaat("dlc_mp_h4_f_phead_2_1"):
case joaat("dlc_mp_h4_m_phead_2_1"):
case joaat("dlc_mp_h4_f_phead_1_2"):
case joaat("dlc_mp_h4_m_phead_1_2"):
case joaat("dlc_mp_h4_f_phead_2_2"):
case joaat("dlc_mp_h4_m_phead_2_2"):
case joaat("dlc_mp_h4_f_phead_1_3"):
case joaat("dlc_mp_h4_m_phead_1_3"):
case joaat("dlc_mp_h4_f_phead_2_3"):
case joaat("dlc_mp_h4_m_phead_2_3"):
case joaat("dlc_mp_h4_f_phead_1_4"):
case joaat("dlc_mp_h4_m_phead_1_4"):
case joaat("dlc_mp_h4_f_phead_2_4"):
case joaat("dlc_mp_h4_m_phead_2_4"):
return 0;
break;
case joaat("dlc_mp_h4_m_decl_0_0"):
case joaat("dlc_mp_h4_f_decl_0_0"):
return 10;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_f_pright_wrist_0_0"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_m_pright_wrist_0_0"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_f_pright_wrist_0_1"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_m_pright_wrist_0_1"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_f_pright_wrist_0_2"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_m_pright_wrist_0_2"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_f_pright_wrist_0_3"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_m_pright_wrist_0_3"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_f_pright_wrist_0_4"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_m_pright_wrist_0_4"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_f_pright_wrist_0_5"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_m_pright_wrist_0_5"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_f_pright_wrist_0_6"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_m_pright_wrist_0_6"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_f_pright_wrist_0_7"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_m_pright_wrist_0_7"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_f_pright_wrist_0_8"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_m_pright_wrist_0_8"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_f_pright_wrist_0_9"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_m_pright_wrist_0_9"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_f_pright_wrist_0_10"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_m_pright_wrist_0_10"):
case joaat("dlc_mp_h4_f_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_f_pright_wrist_0_11"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_m_pright_wrist_0_11"):
return 5;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_peyes_0_0"):
case joaat("dlc_mp_h4_m_peyes_0_0"):
case joaat("dlc_mp_h4_f_peyes_0_1"):
case joaat("dlc_mp_h4_m_peyes_0_1"):
case joaat("dlc_mp_h4_f_peyes_0_2"):
case joaat("dlc_mp_h4_m_peyes_0_2"):
case joaat("dlc_mp_h4_f_peyes_0_3"):
case joaat("dlc_mp_h4_m_peyes_0_3"):
case joaat("dlc_mp_h4_f_peyes_0_4"):
case joaat("dlc_mp_h4_m_peyes_0_4"):
case joaat("dlc_mp_h4_f_peyes_0_5"):
case joaat("dlc_mp_h4_m_peyes_0_5"):
case joaat("dlc_mp_h4_f_peyes_0_6"):
case joaat("dlc_mp_h4_m_peyes_0_6"):
case joaat("dlc_mp_h4_f_peyes_0_7"):
case joaat("dlc_mp_h4_m_peyes_0_7"):
case joaat("dlc_mp_h4_f_peyes_0_8"):
case joaat("dlc_mp_h4_m_peyes_0_8"):
case joaat("dlc_mp_h4_f_peyes_0_9"):
case joaat("dlc_mp_h4_m_peyes_0_9"):
case joaat("dlc_mp_h4_f_peyes_0_10"):
case joaat("dlc_mp_h4_m_peyes_0_10"):
case joaat("dlc_mp_h4_f_peyes_0_11"):
case joaat("dlc_mp_h4_m_peyes_0_11"):
return 0;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_teeth_13_0"):
case joaat("dlc_mp_h4_m_teeth_13_0"):
case joaat("dlc_mp_h4_f_teeth_14_0"):
case joaat("dlc_mp_h4_m_teeth_14_0"):
case joaat("dlc_mp_h4_f_teeth_13_1"):
case joaat("dlc_mp_h4_m_teeth_13_1"):
case joaat("dlc_mp_h4_f_teeth_14_1"):
case joaat("dlc_mp_h4_m_teeth_14_1"):
case joaat("dlc_mp_h4_f_teeth_13_2"):
case joaat("dlc_mp_h4_m_teeth_13_2"):
case joaat("dlc_mp_h4_f_teeth_14_2"):
case joaat("dlc_mp_h4_m_teeth_14_2"):
case joaat("dlc_mp_h4_f_teeth_13_3"):
case joaat("dlc_mp_h4_m_teeth_13_3"):
case joaat("dlc_mp_h4_f_teeth_14_3"):
case joaat("dlc_mp_h4_m_teeth_14_3"):
case joaat("dlc_mp_h4_f_teeth_13_4"):
case joaat("dlc_mp_h4_m_teeth_13_4"):
case joaat("dlc_mp_h4_f_teeth_14_4"):
case joaat("dlc_mp_h4_m_teeth_14_4"):
case joaat("dlc_mp_h4_f_teeth_13_5"):
case joaat("dlc_mp_h4_m_teeth_13_5"):
case joaat("dlc_mp_h4_f_teeth_14_5"):
case joaat("dlc_mp_h4_m_teeth_14_5"):
case joaat("dlc_mp_h4_f_teeth_13_6"):
case joaat("dlc_mp_h4_m_teeth_13_6"):
case joaat("dlc_mp_h4_f_teeth_14_6"):
case joaat("dlc_mp_h4_m_teeth_14_6"):
case joaat("dlc_mp_h4_f_teeth_13_7"):
case joaat("dlc_mp_h4_m_teeth_13_7"):
case joaat("dlc_mp_h4_f_teeth_14_7"):
case joaat("dlc_mp_h4_m_teeth_14_7"):
case joaat("dlc_mp_h4_f_teeth_13_8"):
case joaat("dlc_mp_h4_m_teeth_13_8"):
case joaat("dlc_mp_h4_f_teeth_14_8"):
case joaat("dlc_mp_h4_m_teeth_14_8"):
case joaat("dlc_mp_h4_f_teeth_13_9"):
case joaat("dlc_mp_h4_m_teeth_13_9"):
case joaat("dlc_mp_h4_f_teeth_14_9"):
case joaat("dlc_mp_h4_m_teeth_14_9"):
case joaat("dlc_mp_h4_f_teeth_13_10"):
case joaat("dlc_mp_h4_m_teeth_13_10"):
case joaat("dlc_mp_h4_f_teeth_14_10"):
case joaat("dlc_mp_h4_m_teeth_14_10"):
case joaat("dlc_mp_h4_f_teeth_13_11"):
case joaat("dlc_mp_h4_m_teeth_13_11"):
case joaat("dlc_mp_h4_f_teeth_14_11"):
case joaat("dlc_mp_h4_m_teeth_14_11"):
case joaat("dlc_mp_h4_f_teeth_13_12"):
case joaat("dlc_mp_h4_m_teeth_13_12"):
case joaat("dlc_mp_h4_f_teeth_14_12"):
case joaat("dlc_mp_h4_m_teeth_14_12"):
case joaat("dlc_mp_h4_f_teeth_13_13"):
case joaat("dlc_mp_h4_m_teeth_13_13"):
case joaat("dlc_mp_h4_f_teeth_14_13"):
case joaat("dlc_mp_h4_m_teeth_14_13"):
case joaat("dlc_mp_h4_f_teeth_13_14"):
case joaat("dlc_mp_h4_m_teeth_13_14"):
case joaat("dlc_mp_h4_f_teeth_14_14"):
case joaat("dlc_mp_h4_m_teeth_14_14"):
case joaat("dlc_mp_h4_f_teeth_13_15"):
case joaat("dlc_mp_h4_m_teeth_13_15"):
case joaat("dlc_mp_h4_f_teeth_14_15"):
case joaat("dlc_mp_h4_m_teeth_14_15"):
return 7;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_berd_4_0"):
case joaat("dlc_mp_h4_f_berd_4_0"):
case joaat("dlc_mp_h4_m_berd_4_1"):
case joaat("dlc_mp_h4_f_berd_4_1"):
case joaat("dlc_mp_h4_m_berd_4_2"):
case joaat("dlc_mp_h4_f_berd_4_2"):
case joaat("dlc_mp_h4_m_berd_4_3"):
case joaat("dlc_mp_h4_f_berd_4_3"):
case joaat("dlc_mp_h4_m_berd_4_4"):
case joaat("dlc_mp_h4_f_berd_4_4"):
case joaat("dlc_mp_h4_m_berd_4_5"):
case joaat("dlc_mp_h4_f_berd_4_5"):
case joaat("dlc_mp_h4_m_berd_4_6"):
case joaat("dlc_mp_h4_f_berd_4_6"):
case joaat("dlc_mp_h4_m_berd_4_7"):
case joaat("dlc_mp_h4_f_berd_4_7"):
case joaat("dlc_mp_h4_m_berd_4_8"):
case joaat("dlc_mp_h4_f_berd_4_8"):
case joaat("dlc_mp_h4_m_berd_4_9"):
case joaat("dlc_mp_h4_f_berd_4_9"):
case joaat("dlc_mp_h4_m_berd_4_10"):
case joaat("dlc_mp_h4_f_berd_4_10"):
case joaat("dlc_mp_h4_m_berd_4_11"):
case joaat("dlc_mp_h4_f_berd_4_11"):
case joaat("dlc_mp_h4_m_berd_4_12"):
case joaat("dlc_mp_h4_f_berd_4_12"):
case joaat("dlc_mp_h4_m_berd_4_13"):
case joaat("dlc_mp_h4_f_berd_4_13"):
case joaat("dlc_mp_h4_m_berd_4_14"):
case joaat("dlc_mp_h4_f_berd_4_14"):
case joaat("dlc_mp_h4_m_berd_4_15"):
case joaat("dlc_mp_h4_f_berd_4_15"):
case joaat("dlc_mp_h4_m_berd_4_16"):
case joaat("dlc_mp_h4_f_berd_4_16"):
case joaat("dlc_mp_h4_m_berd_4_17"):
case joaat("dlc_mp_h4_f_berd_4_17"):
case joaat("dlc_mp_h4_m_berd_4_18"):
case joaat("dlc_mp_h4_f_berd_4_18"):
case joaat("dlc_mp_h4_m_berd_4_19"):
case joaat("dlc_mp_h4_f_berd_4_19"):
return 1;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_peyes_1_0"):
case joaat("dlc_mp_h4_f_peyes_1_0"):
case joaat("dlc_mp_h4_m_peyes_1_1"):
case joaat("dlc_mp_h4_f_peyes_1_1"):
case joaat("dlc_mp_h4_m_peyes_1_2"):
case joaat("dlc_mp_h4_f_peyes_1_2"):
case joaat("dlc_mp_h4_m_peyes_1_3"):
case joaat("dlc_mp_h4_f_peyes_1_3"):
case joaat("dlc_mp_h4_m_peyes_1_4"):
case joaat("dlc_mp_h4_f_peyes_1_4"):
case joaat("dlc_mp_h4_m_peyes_1_5"):
case joaat("dlc_mp_h4_f_peyes_1_5"):
case joaat("dlc_mp_h4_m_peyes_1_6"):
case joaat("dlc_mp_h4_f_peyes_1_6"):
case joaat("dlc_mp_h4_m_peyes_1_7"):
case joaat("dlc_mp_h4_f_peyes_1_7"):
case joaat("dlc_mp_h4_m_peyes_1_8"):
case joaat("dlc_mp_h4_f_peyes_1_8"):
case joaat("dlc_mp_h4_m_peyes_1_9"):
case joaat("dlc_mp_h4_f_peyes_1_9"):
case joaat("dlc_mp_h4_m_peyes_1_10"):
case joaat("dlc_mp_h4_f_peyes_1_10"):
case joaat("dlc_mp_h4_m_peyes_1_11"):
case joaat("dlc_mp_h4_f_peyes_1_11"):
case joaat("dlc_mp_h4_m_peyes_2_0"):
case joaat("dlc_mp_h4_f_peyes_2_0"):
case joaat("dlc_mp_h4_m_peyes_2_1"):
case joaat("dlc_mp_h4_f_peyes_2_1"):
case joaat("dlc_mp_h4_m_peyes_2_2"):
case joaat("dlc_mp_h4_f_peyes_2_2"):
case joaat("dlc_mp_h4_m_peyes_2_3"):
case joaat("dlc_mp_h4_f_peyes_2_3"):
case joaat("dlc_mp_h4_m_peyes_2_4"):
case joaat("dlc_mp_h4_f_peyes_2_4"):
case joaat("dlc_mp_h4_m_peyes_2_5"):
case joaat("dlc_mp_h4_f_peyes_2_5"):
case joaat("dlc_mp_h4_m_peyes_2_6"):
case joaat("dlc_mp_h4_f_peyes_2_6"):
case joaat("dlc_mp_h4_m_peyes_2_7"):
case joaat("dlc_mp_h4_f_peyes_2_7"):
case joaat("dlc_mp_h4_m_peyes_2_8"):
case joaat("dlc_mp_h4_f_peyes_2_8"):
case joaat("dlc_mp_h4_m_peyes_2_9"):
case joaat("dlc_mp_h4_f_peyes_2_9"):
case joaat("dlc_mp_h4_m_peyes_2_10"):
case joaat("dlc_mp_h4_f_peyes_2_10"):
case joaat("dlc_mp_h4_m_peyes_2_11"):
case joaat("dlc_mp_h4_f_peyes_2_11"):
case joaat("dlc_mp_h4_m_peyes_3_0"):
case joaat("dlc_mp_h4_f_peyes_3_0"):
case joaat("dlc_mp_h4_m_peyes_3_1"):
case joaat("dlc_mp_h4_f_peyes_3_1"):
case joaat("dlc_mp_h4_m_peyes_3_2"):
case joaat("dlc_mp_h4_f_peyes_3_2"):
case joaat("dlc_mp_h4_m_peyes_3_3"):
case joaat("dlc_mp_h4_f_peyes_3_3"):
case joaat("dlc_mp_h4_m_peyes_3_4"):
case joaat("dlc_mp_h4_f_peyes_3_4"):
case joaat("dlc_mp_h4_m_peyes_3_5"):
case joaat("dlc_mp_h4_f_peyes_3_5"):
case joaat("dlc_mp_h4_m_peyes_3_6"):
case joaat("dlc_mp_h4_f_peyes_3_6"):
case joaat("dlc_mp_h4_m_peyes_3_7"):
case joaat("dlc_mp_h4_f_peyes_3_7"):
case joaat("dlc_mp_h4_m_peyes_3_8"):
case joaat("dlc_mp_h4_f_peyes_3_8"):
case joaat("dlc_mp_h4_m_peyes_3_9"):
case joaat("dlc_mp_h4_f_peyes_3_9"):
case joaat("dlc_mp_h4_m_peyes_3_10"):
case joaat("dlc_mp_h4_f_peyes_3_10"):
case joaat("dlc_mp_h4_m_peyes_3_11"):
case joaat("dlc_mp_h4_f_peyes_3_11"):
return 0;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum_m_berd_3_4"):
case joaat("dlc_mp_sum_f_berd_3_4"):
case joaat("dlc_mp_sum_m_berd_3_5"):
case joaat("dlc_mp_sum_f_berd_3_5"):
case joaat("dlc_mp_sum_m_berd_3_6"):
case joaat("dlc_mp_sum_f_berd_3_6"):
case joaat("dlc_mp_sum_m_berd_3_7"):
case joaat("dlc_mp_sum_f_berd_3_7"):
return 1;
break;
case joaat("dlc_mp_sum_m_legs_1_25"):
case joaat("dlc_mp_sum_f_legs_2_25"):
return 4;
break;
case joaat("dlc_mp_sum_m_jbib_0_25"):
case joaat("dlc_mp_sum_f_jbib_0_25"):
return 11;
break;
}
switch (iParam0){
case joaat("dlc_mp_vwd_m_decl_1_0"):
case joaat("dlc_mp_vwd_f_decl_1_0"):
case joaat("dlc_mp_vwd_m_decl_1_6"):
case joaat("dlc_mp_vwd_f_decl_1_6"):
case joaat("dlc_mp_vwd_m_decl_1_7"):
case joaat("dlc_mp_vwd_f_decl_1_7"):
case joaat("dlc_mp_vwd_m_decl_1_8"):
case joaat("dlc_mp_vwd_f_decl_1_8"):
case joaat("dlc_mp_vwd_m_decl_1_11"):
case joaat("dlc_mp_vwd_f_decl_1_11"):
case joaat("dlc_mp_vwd_m_decl_1_12"):
case joaat("dlc_mp_vwd_f_decl_1_12"):
case joaat("dlc_mp_vwd_m_decl_1_13"):
case joaat("dlc_mp_vwd_f_decl_1_13"):
case joaat("dlc_mp_vwd_m_decl_1_14"):
case joaat("dlc_mp_vwd_f_decl_1_14"):
case joaat("dlc_mp_vwd_m_decl_1_15"):
case joaat("dlc_mp_vwd_f_decl_1_15"):
case joaat("dlc_mp_vwd_m_decl_1_16"):
case joaat("dlc_mp_vwd_f_decl_1_16"):
case joaat("dlc_mp_vwd_m_decl_1_17"):
case joaat("dlc_mp_vwd_f_decl_1_17"):
case joaat("dlc_mp_vwd_m_decl_1_18"):
case joaat("dlc_mp_vwd_f_decl_1_18"):
return 10;
break;
case joaat("dlc_mp_vwd_m_jbib_23_5"):
case joaat("dlc_mp_vwd_f_jbib_21_5"):
case joaat("dlc_mp_vwd_m_jbib_23_8"):
case joaat("dlc_mp_vwd_f_jbib_21_8"):
case joaat("dlc_mp_vwd_m_jbib_23_9"):
case joaat("dlc_mp_vwd_f_jbib_21_9"):
case joaat("dlc_mp_vwd_m_jbib_23_10"):
case joaat("dlc_mp_vwd_f_jbib_21_10"):
case joaat("dlc_mp_vwd_m_jbib_23_0"):
case joaat("dlc_mp_vwd_f_jbib_21_0"):
case joaat("dlc_mp_vwd_m_jbib_23_2"):
case joaat("dlc_mp_vwd_f_jbib_21_2"):
case joaat("dlc_mp_vwd_m_jbib_23_4"):
case joaat("dlc_mp_vwd_f_jbib_21_4"):
case joaat("dlc_mp_vwd_m_jbib_23_7"):
case joaat("dlc_mp_vwd_f_jbib_21_7"):
return 11;
break;
}
switch (iParam0){
case joaat("dlc_mp_arena_f_jbib_16_0"):
case joaat("dlc_mp_arena_m_jbib_16_0"):
case joaat("dlc_mp_arena_f_jbib_16_1"):
case joaat("dlc_mp_arena_m_jbib_16_1"):
case joaat("dlc_mp_arena_f_jbib_16_2"):
case joaat("dlc_mp_arena_m_jbib_16_2"):
case joaat("dlc_mp_arena_f_jbib_16_3"):
case joaat("dlc_mp_arena_m_jbib_16_3"):
case joaat("dlc_mp_arena_f_jbib_16_4"):
case joaat("dlc_mp_arena_m_jbib_16_4"):
case joaat("dlc_mp_arena_f_jbib_16_5"):
case joaat("dlc_mp_arena_m_jbib_16_5"):
case joaat("dlc_mp_arena_f_jbib_16_6"):
case joaat("dlc_mp_arena_m_jbib_16_6"):
case joaat("dlc_mp_arena_f_jbib_16_7"):
case joaat("dlc_mp_arena_m_jbib_16_7"):
case joaat("dlc_mp_arena_f_jbib_16_8"):
case joaat("dlc_mp_arena_m_jbib_16_8"):
case joaat("dlc_mp_arena_f_jbib_16_9"):
case joaat("dlc_mp_arena_m_jbib_16_9"):
case joaat("dlc_mp_arena_f_jbib_16_10"):
case joaat("dlc_mp_arena_m_jbib_16_10"):
case joaat("dlc_mp_arena_f_jbib_16_11"):
case joaat("dlc_mp_arena_m_jbib_16_11"):
case joaat("dlc_mp_arena_f_jbib_16_12"):
case joaat("dlc_mp_arena_m_jbib_16_12"):
case joaat("dlc_mp_arena_f_jbib_16_13"):
case joaat("dlc_mp_arena_m_jbib_16_13"):
return 11;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_outfit_14"):
case joaat("dlc_mp_lts_f_outfit_14"):
case joaat("dlc_mp_x17_m_outfit_morph_0"):
case joaat("dlc_mp_x17_f_outfit_morph_0"):
case joaat("dlc_mp_x17_m_outfit_morph_1"):
case joaat("dlc_mp_x17_f_outfit_morph_1"):
case joaat("dlc_mp_x17_m_outfit_morph_2"):
case joaat("dlc_mp_x17_f_outfit_morph_2"):
case joaat("dlc_mp_x17_m_outfit_morph_3"):
case joaat("dlc_mp_x17_f_outfit_morph_3"):
case joaat("dlc_mp_x17_m_outfit_morph_4"):
case joaat("dlc_mp_x17_f_outfit_morph_4"):
return 12;
case joaat("dlc_mp_x17_m_berd_2_0"):
case joaat("dlc_mp_x17_f_berd_2_0"):
case joaat("dlc_mp_x17_m_berd_2_1"):
case joaat("dlc_mp_x17_f_berd_2_1"):
case joaat("dlc_mp_x17_m_berd_2_2"):
case joaat("dlc_mp_x17_f_berd_2_2"):
case joaat("dlc_mp_x17_m_berd_2_3"):
case joaat("dlc_mp_x17_f_berd_2_3"):
case joaat("dlc_mp_x17_m_berd_2_4"):
case joaat("dlc_mp_x17_f_berd_2_4"):
case joaat("dlc_mp_x17_m_berd_10_0"):
case joaat("dlc_mp_x17_f_berd_10_0"):
case joaat("dlc_mp_x17_m_berd_10_1"):
case joaat("dlc_mp_x17_f_berd_10_1"):
case joaat("dlc_mp_x17_m_berd_10_2"):
case joaat("dlc_mp_x17_f_berd_10_2"):
case joaat("dlc_mp_x17_m_berd_10_3"):
case joaat("dlc_mp_x17_f_berd_10_3"):
return 1;
case joaat("dlc_mp_x17_m_legs_1_0"):
case joaat("dlc_mp_x17_f_legs_1_0"):
case joaat("dlc_mp_x17_m_legs_1_1"):
case joaat("dlc_mp_x17_f_legs_1_1"):
case joaat("dlc_mp_x17_m_legs_1_2"):
case joaat("dlc_mp_x17_f_legs_1_2"):
case joaat("dlc_mp_x17_m_legs_1_3"):
case joaat("dlc_mp_x17_f_legs_1_3"):
case joaat("dlc_mp_x17_m_legs_1_4"):
case joaat("dlc_mp_x17_f_legs_1_4"):
return 4;
case joaat("dlc_mp_x17_m_feet_1_0"):
case joaat("dlc_mp_x17_f_feet_1_0"):
case joaat("dlc_mp_x17_m_feet_1_1"):
case joaat("dlc_mp_x17_f_feet_1_1"):
case joaat("dlc_mp_x17_m_feet_1_2"):
case joaat("dlc_mp_x17_f_feet_1_2"):
case joaat("dlc_mp_x17_m_feet_1_3"):
case joaat("dlc_mp_x17_f_feet_1_3"):
case joaat("dlc_mp_x17_m_feet_1_4"):
case joaat("dlc_mp_x17_f_feet_1_4"):
return 6;
case joaat("dlc_mp_x17_m_jbib_5_0"):
case joaat("dlc_mp_x17_f_jbib_5_0"):
case joaat("dlc_mp_x17_m_jbib_5_1"):
case joaat("dlc_mp_x17_f_jbib_5_1"):
case joaat("dlc_mp_x17_m_jbib_5_2"):
case joaat("dlc_mp_x17_f_jbib_5_2"):
case joaat("dlc_mp_x17_m_jbib_5_3"):
case joaat("dlc_mp_x17_f_jbib_5_3"):
case joaat("dlc_mp_x17_m_jbib_5_4"):
case joaat("dlc_mp_x17_f_jbib_5_4"):
return 11;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
return 11;
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
case joaat("dlc_mp_gr_m_decl_5_5"):
case joaat("dlc_mp_gr_f_decl_5_5"):
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
case joaat("dlc_mp_gr_m_decl_5_7"):
case joaat("dlc_mp_gr_f_decl_5_7"):
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
case joaat("dlc_mp_gr_m_decl_5_9"):
case joaat("dlc_mp_gr_f_decl_5_9"):
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
return 10;
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
case joaat("dlc_mp_gr_m_phead_6_1"):
case joaat("dlc_mp_gr_f_phead_6_1"):
case joaat("dlc_mp_gr_m_phead_7_1"):
case joaat("dlc_mp_gr_f_phead_7_1"):
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
case joaat("dlc_mp_gr_m_phead_6_3"):
case joaat("dlc_mp_gr_f_phead_6_3"):
case joaat("dlc_mp_gr_m_phead_7_3"):
case joaat("dlc_mp_gr_f_phead_7_3"):
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
case joaat("dlc_mp_gr_m_phead_6_9"):
case joaat("dlc_mp_gr_f_phead_6_9"):
case joaat("dlc_mp_gr_m_phead_7_9"):
case joaat("dlc_mp_gr_f_phead_7_9"):
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return 0;
default:
}
switch (iParam0){
case joaat("dlc_mp_ie_m_berd_7_0"):
case joaat("dlc_mp_ie_f_berd_7_0"):
return 1;
default:
}
switch (iParam0){
case joaat("dlc_mp_biker_m_decl_0_0"):
case joaat("dlc_mp_biker_f_decl_0_0"):
case joaat("dlc_mp_biker_m_decl_0_1"):
case joaat("dlc_mp_biker_f_decl_0_1"):
case joaat("dlc_mp_biker_m_decl_0_2"):
case joaat("dlc_mp_biker_f_decl_0_2"):
case joaat("dlc_mp_biker_m_decl_0_3"):
case joaat("dlc_mp_biker_f_decl_0_3"):
case joaat("dlc_mp_biker_m_decl_0_4"):
case joaat("dlc_mp_biker_f_decl_0_4"):
case joaat("dlc_mp_biker_m_decl_0_5"):
case joaat("dlc_mp_biker_f_decl_0_5"):
case joaat("dlc_mp_biker_m_decl_0_6"):
case joaat("dlc_mp_biker_f_decl_0_6"):
case joaat("dlc_mp_biker_m_decl_0_7"):
case joaat("dlc_mp_biker_f_decl_0_7"):
case joaat("dlc_mp_biker_m_decl_0_8"):
case joaat("dlc_mp_biker_f_decl_0_8"):
return 10;
default:
}
switch (iParam0){
case joaat("dlc_mp_stunt_m_outfit_e_0"):
case joaat("dlc_mp_stunt_f_outfit_e_0"):
case joaat("dlc_mp_stunt_m_outfit_e_1"):
case joaat("dlc_mp_stunt_f_outfit_e_1"):
case joaat("dlc_mp_stunt_m_outfit_e_2"):
case joaat("dlc_mp_stunt_f_outfit_e_2"):
case joaat("dlc_mp_stunt_m_outfit_e_3"):
case joaat("dlc_mp_stunt_f_outfit_e_3"):
case joaat("dlc_mp_stunt_m_outfit_e_4"):
case joaat("dlc_mp_stunt_f_outfit_e_4"):
case joaat("dlc_mp_stunt_m_outfit_e_5"):
case joaat("dlc_mp_stunt_f_outfit_e_5"):
case joaat("dlc_mp_stunt_m_outfit_e_6"):
case joaat("dlc_mp_stunt_f_outfit_e_6"):
return 12;
case joaat("dlc_mp_stunt_m_phead_11_0"):
case joaat("dlc_mp_stunt_m_phead_12_0"):
case joaat("dlc_mp_stunt_f_phead_11_0"):
case joaat("dlc_mp_stunt_f_phead_12_0"):
case joaat("dlc_mp_stunt_m_phead_11_1"):
case joaat("dlc_mp_stunt_m_phead_12_1"):
case joaat("dlc_mp_stunt_f_phead_11_1"):
case joaat("dlc_mp_stunt_f_phead_12_1"):
case joaat("dlc_mp_stunt_m_phead_11_2"):
case joaat("dlc_mp_stunt_m_phead_12_2"):
case joaat("dlc_mp_stunt_f_phead_11_2"):
case joaat("dlc_mp_stunt_f_phead_12_2"):
case joaat("dlc_mp_stunt_m_phead_11_3"):
case joaat("dlc_mp_stunt_m_phead_12_3"):
case joaat("dlc_mp_stunt_f_phead_11_3"):
case joaat("dlc_mp_stunt_f_phead_12_3"):
case joaat("dlc_mp_stunt_m_phead_11_4"):
case joaat("dlc_mp_stunt_m_phead_12_4"):
case joaat("dlc_mp_stunt_f_phead_11_4"):
case joaat("dlc_mp_stunt_f_phead_12_4"):
case joaat("dlc_mp_stunt_m_phead_13_0"):
case joaat("dlc_mp_stunt_m_phead_14_0"):
case joaat("dlc_mp_stunt_f_phead_13_0"):
case joaat("dlc_mp_stunt_f_phead_14_0"):
case joaat("dlc_mp_stunt_m_phead_13_1"):
case joaat("dlc_mp_stunt_m_phead_14_1"):
case joaat("dlc_mp_stunt_f_phead_13_1"):
case joaat("dlc_mp_stunt_f_phead_14_1"):
return 0;
default:
}
switch (iParam0){
case joaat("dlc_mp_exec_f_legs_1_0"):
case joaat("dlc_mp_exec_m_legs_1_0"):
case joaat("dlc_mp_exec_f_legs_1_1"):
case joaat("dlc_mp_exec_m_legs_1_1"):
case joaat("dlc_mp_exec_f_legs_1_2"):
case joaat("dlc_mp_exec_m_legs_1_2"):
case joaat("dlc_mp_exec_f_legs_1_3"):
case joaat("dlc_mp_exec_m_legs_1_3"):
case joaat("dlc_mp_exec_f_legs_1_4"):
case joaat("dlc_mp_exec_m_legs_1_4"):
case joaat("dlc_mp_exec_f_legs_1_5"):
case joaat("dlc_mp_exec_m_legs_1_5"):
case joaat("dlc_mp_exec_f_legs_1_6"):
case joaat("dlc_mp_exec_m_legs_1_6"):
case joaat("dlc_mp_exec_f_legs_1_7"):
case joaat("dlc_mp_exec_m_legs_1_7"):
case joaat("dlc_mp_exec_f_legs_1_8"):
case joaat("dlc_mp_exec_m_legs_1_8"):
case joaat("dlc_mp_exec_f_legs_1_9"):
case joaat("dlc_mp_exec_m_legs_1_9"):
case joaat("dlc_mp_exec_f_legs_1_10"):
case joaat("dlc_mp_exec_m_legs_1_10"):
case joaat("dlc_mp_exec_f_legs_1_11"):
case joaat("dlc_mp_exec_m_legs_1_11"):
case joaat("dlc_mp_exec_f_legs_1_12"):
case joaat("dlc_mp_exec_m_legs_1_12"):
case joaat("dlc_mp_exec_f_legs_1_13"):
case joaat("dlc_mp_exec_m_legs_1_13"):
return 4;
case joaat("dlc_mp_exec_f_jbib_15_0"):
case joaat("dlc_mp_exec_m_jbib_15_0"):
case joaat("dlc_mp_exec_f_jbib_15_1"):
case joaat("dlc_mp_exec_m_jbib_15_1"):
case joaat("dlc_mp_exec_f_jbib_15_2"):
case joaat("dlc_mp_exec_m_jbib_15_2"):
case joaat("dlc_mp_exec_f_jbib_15_3"):
case joaat("dlc_mp_exec_m_jbib_15_3"):
case joaat("dlc_mp_exec_f_jbib_15_4"):
case joaat("dlc_mp_exec_m_jbib_15_4"):
case joaat("dlc_mp_exec_f_jbib_15_5"):
case joaat("dlc_mp_exec_m_jbib_15_5"):
case joaat("dlc_mp_exec_f_jbib_15_6"):
case joaat("dlc_mp_exec_m_jbib_15_6"):
case joaat("dlc_mp_exec_f_jbib_15_7"):
case joaat("dlc_mp_exec_m_jbib_15_7"):
case joaat("dlc_mp_exec_f_jbib_15_8"):
case joaat("dlc_mp_exec_m_jbib_15_8"):
case joaat("dlc_mp_exec_f_jbib_15_9"):
case joaat("dlc_mp_exec_m_jbib_15_9"):
case joaat("dlc_mp_exec_f_jbib_15_10"):
case joaat("dlc_mp_exec_m_jbib_15_10"):
case joaat("dlc_mp_exec_f_jbib_15_11"):
case joaat("dlc_mp_exec_m_jbib_15_11"):
case joaat("dlc_mp_exec_f_jbib_15_12"):
case joaat("dlc_mp_exec_m_jbib_15_12"):
case joaat("dlc_mp_exec_f_jbib_15_13"):
case joaat("dlc_mp_exec_m_jbib_15_13"):
case joaat("dlc_mp_exec_f_jbib_16_0"):
case joaat("dlc_mp_exec_m_jbib_16_0"):
case joaat("dlc_mp_exec_f_jbib_16_1"):
case joaat("dlc_mp_exec_m_jbib_16_1"):
case joaat("dlc_mp_exec_f_jbib_16_2"):
case joaat("dlc_mp_exec_m_jbib_16_2"):
case joaat("dlc_mp_exec_f_jbib_16_3"):
case joaat("dlc_mp_exec_m_jbib_16_3"):
case joaat("dlc_mp_exec_f_jbib_16_4"):
case joaat("dlc_mp_exec_m_jbib_16_4"):
case joaat("dlc_mp_exec_f_jbib_16_5"):
case joaat("dlc_mp_exec_m_jbib_16_5"):
case joaat("dlc_mp_exec_f_jbib_16_6"):
case joaat("dlc_mp_exec_m_jbib_16_6"):
case joaat("dlc_mp_exec_f_jbib_16_7"):
case joaat("dlc_mp_exec_m_jbib_16_7"):
case joaat("dlc_mp_exec_f_jbib_16_8"):
case joaat("dlc_mp_exec_m_jbib_16_8"):
case joaat("dlc_mp_exec_f_jbib_16_9"):
case joaat("dlc_mp_exec_m_jbib_16_9"):
case joaat("dlc_mp_exec_f_jbib_16_10"):
case joaat("dlc_mp_exec_m_jbib_16_10"):
case joaat("dlc_mp_exec_f_jbib_16_11"):
case joaat("dlc_mp_exec_m_jbib_16_11"):
case joaat("dlc_mp_exec_f_jbib_16_12"):
case joaat("dlc_mp_exec_m_jbib_16_12"):
case joaat("dlc_mp_exec_f_jbib_16_13"):
case joaat("dlc_mp_exec_m_jbib_16_13"):
return 11;
default:
}
switch (iParam0){
case joaat("dlc_mp_low_f_phead_1_0"):
case joaat("dlc_mp_low_m_phead_1_0"):
case joaat("dlc_mp_low_f_phead_1_1"):
case joaat("dlc_mp_low_m_phead_1_1"):
case joaat("dlc_mp_low_f_phead_1_2"):
case joaat("dlc_mp_low_m_phead_1_2"):
case joaat("dlc_mp_low_f_phead_1_3"):
case joaat("dlc_mp_low_m_phead_1_3"):
case joaat("dlc_mp_low_f_phead_1_4"):
case joaat("dlc_mp_low_m_phead_1_4"):
case joaat("dlc_mp_low_f_phead_1_5"):
case joaat("dlc_mp_low_m_phead_1_5"):
case joaat("dlc_mp_low_f_phead_1_6"):
case joaat("dlc_mp_low_m_phead_1_6"):
case joaat("dlc_mp_low_f_phead_1_7"):
case joaat("dlc_mp_low_m_phead_1_7"):
case joaat("dlc_mp_low_f_phead_1_8"):
case joaat("dlc_mp_low_m_phead_1_8"):
case joaat("dlc_mp_low_f_phead_1_9"):
case joaat("dlc_mp_low_m_phead_1_9"):
return 0;
case 1743008394:
case 1084175393:
case -1090232119:
case 787255484:
case -1133356123:
case -566366372:
return 11;
default:
}
switch (iParam0){
case 1970268516:
case 2026483804:
case 1831101822:
case 1411612772:
case 1875861023:
case -1385031204:
case -703154335:
case 798340921:
return 0;
case -1208373599:
case 1656518170:
case -970054678:
case -840010097:
return 1;
default:
}
switch (iParam0){
case joaat("dlc_mp_ind_f_phead_6_0"):
case joaat("dlc_mp_ind_m_phead_6_0"):
case joaat("dlc_mp_ind_f_phead_6_1"):
case joaat("dlc_mp_ind_m_phead_6_1"):
case joaat("dlc_mp_ind_f_phead_6_2"):
case joaat("dlc_mp_ind_m_phead_6_2"):
case joaat("dlc_mp_ind_f_phead_6_3"):
case joaat("dlc_mp_ind_m_phead_6_3"):
case joaat("dlc_mp_ind_f_phead_6_4"):
case joaat("dlc_mp_ind_m_phead_6_4"):
case joaat("dlc_mp_ind_f_phead_6_5"):
case joaat("dlc_mp_ind_m_phead_6_5"):
return 0;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_berd_2_0"):
case joaat("dlc_mp_lts_f_berd_2_0"):
return 1;
default:
}
return -1;
}


bool func_881(){
return func_882(PLAYER::PLAYER_ID());
}

int func_882(bool bParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}


bool func_883(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_89();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_884(int iParam0){
switch (iParam0){
case 1605135005:
case 461611711:
return 36759;
break;
}
switch (iParam0){
case -1655013310:
case -8081421:
return 36703;
break;
case 1136959044:
case 1252591238:
return 36704;
break;
case -1662464917:
case 439944869:
return 36718;
break;
case 1311829745:
case 1376594947:
return 36737;
break;
case 925416247:
case -993141292:
case -794186434:
return 36738;
break;
case 1544949032:
case 609473027:
return 36751;
break;
case 1505804828:
case -1839009993:
return 36752;
break;
case -1759130267:
case -2109654177:
return 36763;
break;
case 1207735097:
case -133674528:
return 36783;
break;
case 1033338279:
case 1956717889:
return 36784;
break;
case -36216721:
case 1244363453:
return 36782;
break;
case 1226096741:
case 1745898052:
return 36769;
break;
case 765528446:
case 1154188219:
return 36768;
break;
}
switch (iParam0){
case -197848144:
case 2130504112:
return 36757;
break;
case 99858221:
case 213255460:
return 36758;
break;
case 1710404355:
case -1469882278:
return 36739;
break;
case -2101744495:
case -1661253242:
return 36740;
break;
case 841763679:
case 138092552:
return 36741;
break;
case 1069377153:
case 513166526:
return 36742;
break;
case -843709836:
case -410952059:
return 36743;
break;
case 673800403:
case -2099479637:
return 36775;
break;
}
switch (iParam0){
case 205194150:
case 1019798721:
case -782196529:
case -3146323:
case 1530696889:
case 1301510495:
case 339475450:
case 1494189484:
case -2124289883:
case 1353353015:
case -156491260:
case 1232357267:
return 36809;
break;
case -1069968045:
case -921734020:
return 36699;
break;
case -1509312284:
case 2103965964:
return 36700;
break;
case -1709127394:
case -727053399:
return 36701;
break;
case 425828250:
case -731306227:
return 36702;
break;
case -1326192619:
case 1881115548:
case 1290819217:
case 117815244:
return 36715;
break;
case -1411572922:
case 1655606115:
return 36719;
break;
case -1687399299:
case -921932467:
return 36720;
break;
case -1516214043:
case -1757640274:
return 36721;
break;
case 654371756:
case 340755414:
return 36722;
break;
case -120058021:
case 583082169:
return 36723;
break;
case 44442359:
case 2145704703:
return 36724;
break;
case -723499156:
case -1907623987:
return 36725;
break;
case 222672970:
case 818396254:
return 36726;
break;
case -544285475:
case 514398241:
return 36727;
break;
case -375328511:
case -2081103177:
return 36728;
break;
case -1142876798:
case -2104434705:
return 36729;
break;
case -551157269:
case -1881446972:
return 36730;
break;
case 292021870:
case 1719833363:
return 36731;
break;
case -1035974624:
case 1956294467:
return 36732;
break;
case -192205643:
case 1894950891:
return 36733;
break;
case -947334499:
case 2114667036:
return 36734;
break;
case -111757768:
case -783423328:
return 36735;
break;
case -593232685:
case -1223936995:
return 36736;
break;
case -608876472:
case 1334957776:
return 36753;
break;
case 498873860:
case -126601887:
return 36754;
break;
case 1985248855:
case -875041851:
return 36755;
break;
case -1943948059:
case -2070991003:
return 36760;
break;
case -683062477:
case -617653084:
return 36761;
break;
case 388773720:
case -2098938846:
return 36762;
break;
case 652173018:
case -1189158251:
return 36764;
break;
case -315422177:
case -1832379936:
return 36765;
break;
case -1256711400:
case 1298977992:
return 36774;
break;
case 471019161:
case 692557212:
return 36777;
break;
case 165186084:
case -498759787:
return 36778;
break;
case 493498543:
case -292085704:
return 36779;
break;
case -2056426364:
case 1986396785:
return 36780;
break;
case -1883471582:
case -1397788925:
return 36781;
break;
case -1895527326:
case 1259618253:
return 36705;
break;
case -1416608391:
case -1905506688:
return 36706;
break;
case 1186233287:
case 952605492:
return 36707;
break;
case -1997903306:
case -1952569676:
return 36710;
break;
case -1975121276:
case 441259453:
return 36711;
break;
case -1734858968:
case -751171688:
return 36712;
break;
case 2066009771:
case -1497080576:
return 36713;
break;
case -231360453:
case -91981822:
return 36714;
break;
case -1963845403:
case 882420786:
return 36746;
break;
case 732574088:
case -824927683:
return 36747;
break;
case 492344549:
case -522764734:
return 36748;
break;
case -556847876:
case 1779880946:
case 199921456:
case 758688950:
return 36744;
break;
case -859788431:
case -592908627:
case 1504986091:
case -1749240826:
return 36745;
break;
case -378776327:
case -1886485930:
return 36716;
break;
case 955216856:
case -756304130:
return 36749;
break;
case -1622267676:
case -1099489536:
return 36750;
break;
case 534801913:
case 430517623:
return 36770;
break;
case -602915326:
case 321893176:
return 36708;
break;
case 969275756:
case 44864034:
return 36709;
break;
case 1149459758:
case 886587113:
case 1755450189:
case 1921205679:
return 36756;
break;
case 72595168:
case 1980524092:
return 36776;
break;
}
switch (iParam0){
case 1529075272:
case 28812113:
return 34505;
break;
case 1769388797:
case 183205348:
return 34375;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_berd_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_0"):
return 34397;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_0_1"):
return 34398;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_0"):
return 34395;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_1_1"):
return 34396;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_m_berd_4_1"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_4_1"):
return 34399;
break;
case joaat("dlc_mp_sum2_g9ec_m_berd_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_berd_2_0"):
return 34400;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_g9ec_m_outfit_mummy"):
case joaat("dlc_mp_sum2_g9ec_f_outfit_mummy"):
return 34389;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_0"):
return 34410;
break;
case joaat("dlc_mp_sum2_g9ec_m_legs_0_1"):
case joaat("dlc_mp_sum2_g9ec_f_legs_0_1"):
return 34409;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_0"):
return 34404;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_0_1"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_1_1"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_2_1"):
return 34403;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_2_0"):
case joaat("dlc_mp_sum2_g9ec_m_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_4_0"):
return 34406;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_8_0"):
return 34408;
break;
case joaat("dlc_mp_sum2_g9ec_m_jbib_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_jbib_5_0"):
return 34405;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_1_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_1_0"):
return 34391;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_2_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_2_0"):
return 34394;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_4_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_3_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_4_0"):
return 34390;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_m_phead_7_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_6_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_7_0"):
return 34392;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_0"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_0"):
return 34393;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_1"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_1"):
return 34730;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_2"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_2"):
return 34731;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_3"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_3"):
return 34732;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_4"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_4"):
return 34733;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_7"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_7"):
return 34736;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_8"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_8"):
return 34737;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_5"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_5"):
return 34734;
break;
case joaat("dlc_mp_sum2_g9ec_m_phead_5_6"):
case joaat("dlc_mp_sum2_g9ec_f_phead_5_6"):
return 34735;
break;
case joaat("dlc_mp_sum2_g9ec_m_pears_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pears_0_0"):
return 34401;
break;
case joaat("dlc_mp_sum2_g9ec_m_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_m_pright_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pleft_wrist_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_pright_wrist_0_0"):
return 34402;
break;
case joaat("dlc_mp_sum2_g9ec_m_decl_0_0"):
case joaat("dlc_mp_sum2_g9ec_f_decl_0_0"):
return 34407;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_berd_5_0"):
case joaat("dlc_mp_sum2_f_berd_5_0"):
return 34451;
break;
case joaat("dlc_mp_sum2_m_berd_5_1"):
case joaat("dlc_mp_sum2_f_berd_5_1"):
return 34452;
break;
case joaat("dlc_mp_sum2_m_berd_5_2"):
case joaat("dlc_mp_sum2_f_berd_5_2"):
return 34453;
break;
case joaat("dlc_mp_sum2_m_berd_5_3"):
case joaat("dlc_mp_sum2_f_berd_5_3"):
return 34454;
break;
case joaat("dlc_mp_sum2_m_berd_6_0"):
case joaat("dlc_mp_sum2_f_berd_6_0"):
return 34418;
break;
case joaat("dlc_mp_sum2_m_berd_6_1"):
case joaat("dlc_mp_sum2_f_berd_6_1"):
return 34419;
break;
case joaat("dlc_mp_sum2_m_berd_6_2"):
case joaat("dlc_mp_sum2_f_berd_6_2"):
return 34420;
break;
case joaat("dlc_mp_sum2_m_berd_7_0"):
case joaat("dlc_mp_sum2_f_berd_7_0"):
return 34372;
break;
case joaat("dlc_mp_sum2_m_berd_8_0"):
case joaat("dlc_mp_sum2_f_berd_8_0"):
return 34421;
break;
case joaat("dlc_mp_sum2_m_berd_9_0"):
case joaat("dlc_mp_sum2_f_berd_9_0"):
return 34415;
break;
case joaat("dlc_mp_sum2_m_berd_9_1"):
case joaat("dlc_mp_sum2_f_berd_9_1"):
return 34416;
break;
case joaat("dlc_mp_sum2_m_berd_9_2"):
case joaat("dlc_mp_sum2_f_berd_9_2"):
return 34417;
break;
case joaat("dlc_mp_sum2_m_berd_10_0"):
case joaat("dlc_mp_sum2_f_berd_10_0"):
return 34425;
break;
case joaat("dlc_mp_sum2_m_berd_10_1"):
case joaat("dlc_mp_sum2_f_berd_10_1"):
return 34426;
break;
case joaat("dlc_mp_sum2_m_berd_10_2"):
case joaat("dlc_mp_sum2_f_berd_10_2"):
return 34427;
break;
case joaat("dlc_mp_sum2_m_berd_10_3"):
case joaat("dlc_mp_sum2_f_berd_10_3"):
return 34428;
break;
case joaat("dlc_mp_sum2_m_berd_10_4"):
case joaat("dlc_mp_sum2_f_berd_10_4"):
return 34429;
break;
case joaat("dlc_mp_sum2_m_berd_10_5"):
case joaat("dlc_mp_sum2_f_berd_10_5"):
return 34430;
break;
case joaat("dlc_mp_sum2_m_berd_10_6"):
case joaat("dlc_mp_sum2_f_berd_10_6"):
return 34431;
break;
case joaat("dlc_mp_sum2_m_berd_10_7"):
case joaat("dlc_mp_sum2_f_berd_10_7"):
return 34432;
break;
case joaat("dlc_mp_sum2_m_berd_10_8"):
case joaat("dlc_mp_sum2_f_berd_10_8"):
return 34433;
break;
case joaat("dlc_mp_sum2_m_berd_10_9"):
case joaat("dlc_mp_sum2_f_berd_10_9"):
return 34434;
break;
case joaat("dlc_mp_sum2_m_berd_10_10"):
case joaat("dlc_mp_sum2_f_berd_10_10"):
return 34435;
break;
case joaat("dlc_mp_sum2_m_berd_10_11"):
case joaat("dlc_mp_sum2_f_berd_10_11"):
return 34436;
break;
case joaat("dlc_mp_sum2_m_berd_10_12"):
case joaat("dlc_mp_sum2_f_berd_10_12"):
return 34437;
break;
case joaat("dlc_mp_sum2_m_berd_10_13"):
case joaat("dlc_mp_sum2_f_berd_10_13"):
return 34438;
break;
case joaat("dlc_mp_sum2_m_berd_10_14"):
case joaat("dlc_mp_sum2_f_berd_10_14"):
return 34439;
break;
case joaat("dlc_mp_sum2_m_berd_10_15"):
case joaat("dlc_mp_sum2_f_berd_10_15"):
return 34440;
break;
case joaat("dlc_mp_sum2_m_berd_10_16"):
case joaat("dlc_mp_sum2_f_berd_10_16"):
return 34441;
break;
case joaat("dlc_mp_sum2_m_berd_10_17"):
case joaat("dlc_mp_sum2_f_berd_10_17"):
return 34442;
break;
case joaat("dlc_mp_sum2_m_berd_10_18"):
case joaat("dlc_mp_sum2_f_berd_10_18"):
return 34443;
break;
case joaat("dlc_mp_sum2_m_berd_10_19"):
case joaat("dlc_mp_sum2_f_berd_10_19"):
return 34444;
break;
case joaat("dlc_mp_sum2_m_berd_10_20"):
case joaat("dlc_mp_sum2_f_berd_10_20"):
return 34445;
break;
case joaat("dlc_mp_sum2_m_berd_10_21"):
case joaat("dlc_mp_sum2_f_berd_10_21"):
return 34446;
break;
case joaat("dlc_mp_sum2_m_berd_10_22"):
case joaat("dlc_mp_sum2_f_berd_10_22"):
return 34447;
break;
case joaat("dlc_mp_sum2_m_berd_10_23"):
case joaat("dlc_mp_sum2_f_berd_10_23"):
return 34448;
break;
case joaat("dlc_mp_sum2_m_berd_10_24"):
case joaat("dlc_mp_sum2_f_berd_10_24"):
return 34449;
break;
case joaat("dlc_mp_sum2_m_berd_10_25"):
case joaat("dlc_mp_sum2_f_berd_10_25"):
return 34450;
break;
case joaat("dlc_mp_sum2_m_berd_0_0"):
case joaat("dlc_mp_sum2_f_berd_0_0"):
return 34423;
break;
case joaat("dlc_mp_sum2_m_berd_1_0"):
case joaat("dlc_mp_sum2_f_berd_1_0"):
return 34703;
break;
case joaat("dlc_mp_sum2_m_berd_1_1"):
case joaat("dlc_mp_sum2_f_berd_1_1"):
return 34704;
break;
case joaat("dlc_mp_sum2_m_berd_1_2"):
case joaat("dlc_mp_sum2_f_berd_1_2"):
return 34705;
break;
case joaat("dlc_mp_sum2_m_berd_3_0"):
case joaat("dlc_mp_sum2_f_berd_3_0"):
return 34424;
break;
case joaat("dlc_mp_sum2_m_berd_4_0"):
case joaat("dlc_mp_sum2_f_berd_4_0"):
return 34422;
break;
}
switch (iParam0){
case joaat("dlc_mp_sum2_m_outfit_sasquatch"):
case joaat("dlc_mp_sum2_f_outfit_sasquatch"):
return 34411;
break;
case joaat("dlc_mp_sum2_m_legs_2_0"):
case joaat("dlc_mp_sum2_f_legs_0_0"):
return 34506;
break;
case joaat("dlc_mp_sum2_m_legs_2_1"):
case joaat("dlc_mp_sum2_f_legs_0_1"):
return 34507;
break;
case joaat("dlc_mp_sum2_m_jbib_13_0"):
case joaat("dlc_mp_sum2_f_jbib_15_0"):
case joaat("dlc_mp_sum2_f_jbib_16_0"):
return 34380;
break;
case joaat("dlc_mp_sum2_m_jbib_14_0"):
case joaat("dlc_mp_sum2_f_jbib_19_0"):
return 34388;
break;
case joaat("dlc_mp_sum2_m_jbib_15_0"):
case joaat("dlc_mp_sum2_m_jbib_16_0"):
case joaat("dlc_mp_sum2_f_jbib_20_0"):
return 34383;
break;
case joaat("dlc_mp_sum2_m_jbib_15_1"):
case joaat("dlc_mp_sum2_m_jbib_16_1"):
case joaat("dlc_mp_sum2_f_jbib_20_1"):
return 34381;
break;
case joaat("dlc_mp_sum2_m_jbib_15_2"):
case joaat("dlc_mp_sum2_m_jbib_16_2"):
case joaat("dlc_mp_sum2_f_jbib_20_2"):
return 34385;
break;
case joaat("dlc_mp_sum2_m_jbib_17_0"):
case joaat("dlc_mp_sum2_f_jbib_8_0"):
return 34382;
break;
case joaat("dlc_mp_sum2_m_jbib_7_0"):
case joaat("dlc_mp_sum2_m_jbib_8_0"):
case joaat("dlc_mp_sum2_f_jbib_24_0"):
case joaat("dlc_mp_sum2_f_jbib_21_0"):
return 34384;
break;
case joaat("dlc_mp_sum2_m_phead_6_0"):
case joaat("dlc_mp_sum2_f_phead_6_0"):
return 34455;
break;
case joaat("dlc_mp_sum2_m_phead_6_1"):
case joaat("dlc_mp_sum2_f_phead_6_1"):
return 34456;
break;
case joaat("dlc_mp_sum2_m_phead_6_2"):
case joaat("dlc_mp_sum2_f_phead_6_2"):
return 34457;
break;
case joaat("dlc_mp_sum2_m_phead_6_3"):
case joaat("dlc_mp_sum2_f_phead_6_3"):
return 34458;
break;
case joaat("dlc_mp_sum2_m_phead_6_4"):
case joaat("dlc_mp_sum2_f_phead_6_4"):
return 34459;
break;
case joaat("dlc_mp_sum2_m_phead_6_5"):
case joaat("dlc_mp_sum2_f_phead_6_5"):
return 34460;
break;
case joaat("dlc_mp_sum2_m_phead_6_6"):
case joaat("dlc_mp_sum2_f_phead_6_6"):
return 34461;
break;
case joaat("dlc_mp_sum2_m_phead_6_7"):
case joaat("dlc_mp_sum2_f_phead_6_7"):
return 34462;
break;
case joaat("dlc_mp_sum2_m_phead_6_8"):
case joaat("dlc_mp_sum2_f_phead_6_8"):
return 34463;
break;
case joaat("dlc_mp_sum2_m_phead_6_9"):
case joaat("dlc_mp_sum2_f_phead_6_9"):
return 34464;
break;
case joaat("dlc_mp_sum2_m_phead_6_10"):
case joaat("dlc_mp_sum2_f_phead_6_10"):
return 34465;
break;
case joaat("dlc_mp_sum2_m_phead_6_11"):
case joaat("dlc_mp_sum2_f_phead_6_11"):
return 34466;
break;
case joaat("dlc_mp_sum2_m_phead_6_12"):
case joaat("dlc_mp_sum2_f_phead_6_12"):
return 34467;
break;
case joaat("dlc_mp_sum2_m_phead_6_13"):
case joaat("dlc_mp_sum2_f_phead_6_13"):
return 34468;
break;
case joaat("dlc_mp_sum2_m_phead_0_0"):
case joaat("dlc_mp_sum2_m_phead_1_0"):
case joaat("dlc_mp_sum2_f_phead_0_0"):
case joaat("dlc_mp_sum2_f_phead_1_0"):
return 34375;
break;
case joaat("dlc_mp_sum2_m_phead_2_0"):
case joaat("dlc_mp_sum2_m_phead_4_0"):
case joaat("dlc_mp_sum2_f_phead_2_0"):
case joaat("dlc_mp_sum2_f_phead_4_0"):
return 34508;
break;
case joaat("dlc_mp_sum2_m_phead_2_1"):
case joaat("dlc_mp_sum2_m_phead_4_1"):
case joaat("dlc_mp_sum2_f_phead_2_1"):
case joaat("dlc_mp_sum2_f_phead_4_1"):
return 34509;
break;
case joaat("dlc_mp_sum2_m_phead_3_0"):
case joaat("dlc_mp_sum2_m_phead_7_0"):
case joaat("dlc_mp_sum2_f_phead_3_0"):
case joaat("dlc_mp_sum2_f_phead_7_0"):
return 34510;
break;
case joaat("dlc_mp_sum2_m_phead_8_0"):
case joaat("dlc_mp_sum2_f_phead_8_0"):
return 34387;
break;
case joaat("dlc_mp_sum2_m_pears_0_0"):
case joaat("dlc_mp_sum2_f_pears_0_0"):
return 34469;
break;
case joaat("dlc_mp_sum2_m_pears_0_1"):
case joaat("dlc_mp_sum2_f_pears_0_1"):
return 34470;
break;
case joaat("dlc_mp_sum2_m_pears_0_2"):
case joaat("dlc_mp_sum2_f_pears_0_2"):
return 34471;
break;
case joaat("dlc_mp_sum2_m_pears_0_3"):
case joaat("dlc_mp_sum2_f_pears_0_3"):
return 34472;
break;
case joaat("dlc_mp_sum2_m_pears_0_4"):
case joaat("dlc_mp_sum2_f_pears_0_4"):
return 34473;
break;
case joaat("dlc_mp_sum2_m_pears_0_5"):
case joaat("dlc_mp_sum2_f_pears_0_5"):
return 34474;
break;
case joaat("dlc_mp_sum2_m_pears_0_6"):
case joaat("dlc_mp_sum2_f_pears_0_6"):
return 34475;
break;
case joaat("dlc_mp_sum2_m_pears_0_7"):
case joaat("dlc_mp_sum2_f_pears_0_7"):
return 34476;
break;
case joaat("dlc_mp_sum2_m_pears_0_8"):
case joaat("dlc_mp_sum2_f_pears_0_8"):
return 34477;
break;
case joaat("dlc_mp_sum2_m_pears_0_9"):
case joaat("dlc_mp_sum2_f_pears_0_9"):
return 34478;
break;
case joaat("dlc_mp_sum2_m_pears_0_10"):
case joaat("dlc_mp_sum2_f_pears_0_10"):
return 34479;
break;
case joaat("dlc_mp_sum2_m_pears_0_11"):
case joaat("dlc_mp_sum2_f_pears_0_11"):
return 34480;
break;
case joaat("dlc_mp_sum2_m_special_1_0"):
case joaat("dlc_mp_sum2_f_special_1_0"):
return 34386;
break;
case joaat("dlc_mp_sum2_m_feet_5_0"):
case joaat("dlc_mp_sum2_f_feet_5_0"):
return 34481;
break;
case joaat("dlc_mp_sum2_m_feet_5_1"):
case joaat("dlc_mp_sum2_f_feet_5_1"):
return 34482;
break;
case joaat("dlc_mp_sum2_m_feet_5_2"):
case joaat("dlc_mp_sum2_f_feet_5_2"):
return 34483;
break;
case joaat("dlc_mp_sum2_m_feet_5_3"):
case joaat("dlc_mp_sum2_f_feet_5_3"):
return 34484;
break;
case joaat("dlc_mp_sum2_m_feet_5_4"):
case joaat("dlc_mp_sum2_f_feet_5_4"):
return 34485;
break;
case joaat("dlc_mp_sum2_m_feet_5_5"):
case joaat("dlc_mp_sum2_f_feet_5_5"):
return 34486;
break;
case joaat("dlc_mp_sum2_m_feet_5_6"):
case joaat("dlc_mp_sum2_f_feet_5_6"):
return 34487;
break;
case joaat("dlc_mp_sum2_m_feet_5_7"):
case joaat("dlc_mp_sum2_f_feet_5_7"):
return 34488;
break;
case joaat("dlc_mp_sum2_m_feet_5_8"):
case joaat("dlc_mp_sum2_f_feet_5_8"):
return 34489;
break;
case joaat("dlc_mp_sum2_m_feet_6_0"):
case joaat("dlc_mp_sum2_f_feet_6_0"):
return 34490;
break;
case joaat("dlc_mp_sum2_m_feet_6_1"):
case joaat("dlc_mp_sum2_f_feet_6_1"):
return 34491;
break;
case joaat("dlc_mp_sum2_m_feet_6_2"):
case joaat("dlc_mp_sum2_f_feet_6_2"):
return 34492;
break;
case joaat("dlc_mp_sum2_m_feet_6_3"):
case joaat("dlc_mp_sum2_f_feet_6_3"):
return 34493;
break;
case joaat("dlc_mp_sum2_m_feet_6_4"):
case joaat("dlc_mp_sum2_f_feet_6_4"):
return 34494;
break;
case joaat("dlc_mp_sum2_m_feet_6_5"):
case joaat("dlc_mp_sum2_f_feet_6_5"):
return 34495;
break;
case joaat("dlc_mp_sum2_m_feet_6_6"):
case joaat("dlc_mp_sum2_f_feet_6_6"):
return 34496;
break;
case joaat("dlc_mp_sum2_m_feet_6_7"):
case joaat("dlc_mp_sum2_f_feet_6_7"):
return 34497;
break;
case joaat("dlc_mp_sum2_m_feet_6_8"):
case joaat("dlc_mp_sum2_f_feet_6_8"):
return 34498;
break;
case joaat("dlc_mp_sum2_m_feet_6_9"):
case joaat("dlc_mp_sum2_f_feet_6_9"):
return 34499;
break;
case joaat("dlc_mp_sum2_m_feet_6_10"):
case joaat("dlc_mp_sum2_f_feet_6_10"):
return 34500;
break;
case joaat("dlc_mp_sum2_m_feet_6_11"):
case joaat("dlc_mp_sum2_f_feet_6_11"):
return 34501;
break;
case joaat("dlc_mp_sum2_m_feet_6_12"):
case joaat("dlc_mp_sum2_f_feet_6_12"):
return 34502;
break;
case joaat("dlc_mp_sum2_m_feet_6_13"):
case joaat("dlc_mp_sum2_f_feet_6_13"):
return 34503;
break;
case joaat("dlc_mp_sum2_m_feet_6_14"):
case joaat("dlc_mp_sum2_f_feet_6_14"):
return 34504;
break;
}
switch (iParam0){
case joaat("dlc_mp_fixer_m_jbib_10_2"):
case joaat("dlc_mp_fixer_f_jbib_10_2"):
return 32309;
break;
case joaat("dlc_mp_fixer_m_jbib_10_3"):
case -906547381:
return 32310;
break;
case joaat("dlc_mp_fixer_m_jbib_10_4"):
case 308133919:
return 32311;
break;
case joaat("dlc_mp_fixer_m_jbib_10_0"):
case joaat("dlc_mp_fixer_f_jbib_13_0"):
return 32307;
break;
case joaat("dlc_mp_fixer_m_jbib_10_1"):
case joaat("dlc_mp_fixer_f_jbib_13_1"):
return 32308;
break;
case joaat("dlc_mp_fixer_m_berd_0_0"):
case joaat("dlc_mp_fixer_f_berd_0_0"):
return 32295;
break;
case joaat("dlc_mp_fixer_m_berd_0_1"):
case joaat("dlc_mp_fixer_f_berd_0_1"):
return 32296;
break;
case joaat("dlc_mp_fixer_m_berd_0_2"):
case joaat("dlc_mp_fixer_f_berd_0_2"):
return 32297;
break;
case joaat("dlc_mp_fixer_m_berd_0_3"):
case joaat("dlc_mp_fixer_f_berd_0_3"):
return 32298;
break;
case joaat("dlc_mp_fixer_m_berd_1_0"):
case joaat("dlc_mp_fixer_f_berd_1_0"):
return 32299;
break;
case joaat("dlc_mp_fixer_m_berd_1_1"):
case joaat("dlc_mp_fixer_f_berd_1_1"):
return 32300;
break;
case joaat("dlc_mp_fixer_m_berd_1_2"):
case joaat("dlc_mp_fixer_f_berd_1_2"):
return 32301;
break;
case joaat("dlc_mp_fixer_m_berd_1_3"):
case joaat("dlc_mp_fixer_f_berd_1_3"):
return 32302;
break;
case joaat("dlc_mp_fixer_m_berd_2_0"):
case joaat("dlc_mp_fixer_f_berd_2_0"):
return 32303;
break;
case joaat("dlc_mp_fixer_m_berd_2_1"):
case joaat("dlc_mp_fixer_f_berd_2_1"):
return 32304;
break;
case joaat("dlc_mp_fixer_m_berd_2_2"):
case joaat("dlc_mp_fixer_f_berd_2_2"):
return 32305;
break;
case joaat("dlc_mp_fixer_m_berd_2_3"):
case joaat("dlc_mp_fixer_f_berd_2_3"):
return 32306;
break;
}
switch (iParam0){
case joaat("dlc_mp_tuner_m_decl_30_1"):
case joaat("dlc_mp_tuner_f_decl_29_1"):
return 32273;
break;
case 991513037:
case -1634791241:
return 31768;
break;
case -675149090:
case -1227437948:
return 31769;
break;
case joaat("dlc_mp_tuner_m_jbib_11_0"):
case joaat("dlc_mp_tuner_m_jbib_12_0"):
case joaat("dlc_mp_tuner_f_jbib_11_0"):
case joaat("dlc_mp_tuner_f_jbib_12_0"):
return 31784;
break;
case -1686814509:
case -1408179706:
return 31770;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_1"):
case joaat("dlc_mp_tuner_m_jbib_1_3"):
case joaat("dlc_mp_tuner_m_legs_1_3"):
case joaat("dlc_mp_tuner_f_outfit_boiler_1"):
case joaat("dlc_mp_tuner_f_jbib_1_3"):
case joaat("dlc_mp_tuner_f_legs_1_3"):
return 31777;
break;
case joaat("dlc_mp_tuner_m_jbib_9_15"):
case joaat("dlc_mp_tuner_f_jbib_9_15"):
return 31788;
break;
case joaat("dlc_mp_tuner_m_jbib_13_2"):
case joaat("dlc_mp_tuner_m_jbib_14_2"):
case joaat("dlc_mp_tuner_f_jbib_13_2"):
return 31787;
break;
case joaat("dlc_mp_tuner_m_jbib_13_0"):
case joaat("dlc_mp_tuner_m_jbib_14_0"):
case joaat("dlc_mp_tuner_f_jbib_13_0"):
return 31786;
break;
case joaat("dlc_mp_tuner_m_jbib_13_1"):
case joaat("dlc_mp_tuner_m_jbib_14_1"):
case joaat("dlc_mp_tuner_f_jbib_13_1"):
return 31785;
break;
case joaat("dlc_mp_tuner_m_phead_1_0"):
case joaat("dlc_mp_tuner_m_phead_2_0"):
case joaat("dlc_mp_tuner_f_phead_1_0"):
case joaat("dlc_mp_tuner_f_phead_2_0"):
return 31766;
break;
case joaat("dlc_mp_tuner_m_phead_1_1"):
case joaat("dlc_mp_tuner_m_phead_2_1"):
case joaat("dlc_mp_tuner_f_phead_1_1"):
case joaat("dlc_mp_tuner_f_phead_2_1"):
return 31767;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_0"):
case joaat("dlc_mp_tuner_f_outfit_morph_0"):
return 31789;
break;
case joaat("dlc_mp_tuner_m_outfit_morph_1"):
case joaat("dlc_mp_tuner_f_outfit_morph_1"):
return 31790;
break;
case -1372800957:
return 31791;
break;
case -1125170035:
return 31792;
break;
case 1276052663:
return 31793;
break;
case 2138708412:
case -1894139601:
return 31771;
break;
case 205793848:
case -786254870:
return 31772;
break;
case 1325175663:
case -773154515:
return 31773;
break;
case -368088972:
case 1778247767:
return 31774;
break;
case -1771053026:
case -648092145:
return 31775;
break;
case joaat("dlc_mp_tuner_m_outfit_boiler_0"):
case joaat("dlc_mp_tuner_m_jbib_1_2"):
case joaat("dlc_mp_tuner_m_legs_1_2"):
case joaat("dlc_mp_tuner_f_outfit_boiler_0"):
case joaat("dlc_mp_tuner_f_jbib_1_2"):
case joaat("dlc_mp_tuner_f_legs_1_2"):
return 31776;
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
return 30703;
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
return 30704;
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
return 30700;
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
return 30701;
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
return 30702;
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
return 30699;
break;
}
switch (iParam0){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
return 30533;
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
return 30534;
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
return 30535;
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
return 30536;
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
return 30537;
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
return 30538;
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
return 30539;
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
return 30540;
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
return 30541;
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
return 30542;
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
return 30543;
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
return 30544;
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
return 30545;
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
return 30546;
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
return 30547;
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
return 30548;
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
return 30549;
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
return 30550;
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
return 30551;
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
return 30552;
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
return 30553;
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
return 30554;
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
return 30555;
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
return 30556;
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
return 30557;
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
return 30524;
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
return 30525;
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
return 30526;
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
return 30527;
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
return 30528;
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
return 30529;
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
return 30530;
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
return 30531;
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
return 30532;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_jbib_8_0"):
case joaat("dlc_mp_h4_f_jbib_9_0"):
case joaat("dlc_mp_h4_m_jbib_8_0"):
case joaat("dlc_mp_h4_m_jbib_9_0"):
return 30563;
break;
case joaat("dlc_mp_h4_f_jbib_10_0"):
case joaat("dlc_mp_h4_m_jbib_10_0"):
return 30564;
break;
case joaat("dlc_mp_h4_f_jbib_5_0"):
case joaat("dlc_mp_h4_m_jbib_6_0"):
return 30565;
break;
case joaat("dlc_mp_h4_f_jbib_5_1"):
case joaat("dlc_mp_h4_m_jbib_6_1"):
return 30566;
break;
case joaat("dlc_mp_h4_m_jbib_0_5"):
case joaat("dlc_mp_h4_f_jbib_7_1"):
return 30567;
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
return 30568;
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
return 30569;
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
return 30570;
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
return 30571;
break;
case joaat("dlc_mp_h4_f_jbib_7_5"):
case joaat("dlc_mp_h4_m_jbib_0_9"):
return 30572;
break;
case joaat("dlc_mp_h4_f_jbib_7_4"):
case joaat("dlc_mp_h4_m_jbib_0_8"):
return 30573;
break;
case joaat("dlc_mp_h4_m_decl_0_0"):
case joaat("dlc_mp_h4_f_decl_0_0"):
return 30574;
break;
case joaat("dlc_mp_h4_m_jbib_0_6"):
case joaat("dlc_mp_h4_f_jbib_7_2"):
return 30575;
break;
case joaat("dlc_mp_h4_m_jbib_0_7"):
case joaat("dlc_mp_h4_f_jbib_7_3"):
return 30576;
break;
case joaat("dlc_mp_h4_m_jbib_5_0"):
case joaat("dlc_mp_h4_f_jbib_4_0"):
return 30577;
break;
case joaat("dlc_mp_h4_f_jbib_6_4"):
case joaat("dlc_mp_h4_m_jbib_7_4"):
return 30578;
break;
case joaat("dlc_mp_h4_f_jbib_6_3"):
case joaat("dlc_mp_h4_m_jbib_7_3"):
return 30579;
break;
case joaat("dlc_mp_h4_f_jbib_6_2"):
case joaat("dlc_mp_h4_m_jbib_7_2"):
return 30580;
break;
case joaat("dlc_mp_h4_f_jbib_6_1"):
case joaat("dlc_mp_h4_m_jbib_7_1"):
return 30581;
break;
case joaat("dlc_mp_h4_f_jbib_6_0"):
case joaat("dlc_mp_h4_m_jbib_7_0"):
return 30582;
break;
case joaat("dlc_mp_h4_f_legs_1_0"):
case joaat("dlc_mp_h4_m_legs_1_0"):
return 30583;
break;
case joaat("dlc_mp_h4_f_legs_1_1"):
case joaat("dlc_mp_h4_m_legs_1_1"):
return 30584;
break;
case joaat("dlc_mp_h4_f_legs_1_2"):
case joaat("dlc_mp_h4_m_legs_1_2"):
return 30585;
break;
case joaat("dlc_mp_h4_f_legs_0_0"):
case joaat("dlc_mp_h4_m_legs_0_0"):
return 30586;
break;
case joaat("dlc_mp_h4_f_phead_1_0"):
case joaat("dlc_mp_h4_m_phead_1_0"):
case joaat("dlc_mp_h4_f_phead_2_0"):
case joaat("dlc_mp_h4_m_phead_2_0"):
return 30587;
break;
case joaat("dlc_mp_h4_f_phead_1_1"):
case joaat("dlc_mp_h4_m_phead_1_1"):
case joaat("dlc_mp_h4_f_phead_2_1"):
case joaat("dlc_mp_h4_m_phead_2_1"):
return 30588;
break;
case joaat("dlc_mp_h4_f_phead_1_2"):
case joaat("dlc_mp_h4_m_phead_1_2"):
case joaat("dlc_mp_h4_f_phead_2_2"):
case joaat("dlc_mp_h4_m_phead_2_2"):
return 30589;
break;
case joaat("dlc_mp_h4_f_phead_1_3"):
case joaat("dlc_mp_h4_m_phead_1_3"):
case joaat("dlc_mp_h4_f_phead_2_3"):
case joaat("dlc_mp_h4_m_phead_2_3"):
return 30590;
break;
case joaat("dlc_mp_h4_f_phead_1_4"):
case joaat("dlc_mp_h4_m_phead_1_4"):
case joaat("dlc_mp_h4_f_phead_2_4"):
case joaat("dlc_mp_h4_m_phead_2_4"):
return 30591;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_f_pright_wrist_0_0"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_0"):
case joaat("dlc_mp_h4_m_pright_wrist_0_0"):
return 30592;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_f_pright_wrist_0_1"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_1"):
case joaat("dlc_mp_h4_m_pright_wrist_0_1"):
return 30593;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_f_pright_wrist_0_2"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_2"):
case joaat("dlc_mp_h4_m_pright_wrist_0_2"):
return 30594;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_f_pright_wrist_0_3"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_3"):
case joaat("dlc_mp_h4_m_pright_wrist_0_3"):
return 30595;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_f_pright_wrist_0_4"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_4"):
case joaat("dlc_mp_h4_m_pright_wrist_0_4"):
return 30596;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_f_pright_wrist_0_5"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_5"):
case joaat("dlc_mp_h4_m_pright_wrist_0_5"):
return 30597;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_f_pright_wrist_0_6"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_6"):
case joaat("dlc_mp_h4_m_pright_wrist_0_6"):
return 30598;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_f_pright_wrist_0_7"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_7"):
case joaat("dlc_mp_h4_m_pright_wrist_0_7"):
return 30599;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_f_pright_wrist_0_8"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_8"):
case joaat("dlc_mp_h4_m_pright_wrist_0_8"):
return 30600;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_f_pright_wrist_0_9"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_9"):
case joaat("dlc_mp_h4_m_pright_wrist_0_9"):
return 30601;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_f_pright_wrist_0_10"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_10"):
case joaat("dlc_mp_h4_m_pright_wrist_0_10"):
return 30602;
break;
case joaat("dlc_mp_h4_f_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_f_pright_wrist_0_11"):
case joaat("dlc_mp_h4_m_pleft_wrist_0_11"):
case joaat("dlc_mp_h4_m_pright_wrist_0_11"):
return 30603;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_peyes_0_0"):
case joaat("dlc_mp_h4_m_peyes_0_0"):
return 30604;
break;
case joaat("dlc_mp_h4_f_peyes_0_1"):
case joaat("dlc_mp_h4_m_peyes_0_1"):
return 30605;
break;
case joaat("dlc_mp_h4_f_peyes_0_2"):
case joaat("dlc_mp_h4_m_peyes_0_2"):
return 30606;
break;
case joaat("dlc_mp_h4_f_peyes_0_3"):
case joaat("dlc_mp_h4_m_peyes_0_3"):
return 30607;
break;
case joaat("dlc_mp_h4_f_peyes_0_4"):
case joaat("dlc_mp_h4_m_peyes_0_4"):
return 30608;
break;
case joaat("dlc_mp_h4_f_peyes_0_5"):
case joaat("dlc_mp_h4_m_peyes_0_5"):
return 30609;
break;
case joaat("dlc_mp_h4_f_peyes_0_6"):
case joaat("dlc_mp_h4_m_peyes_0_6"):
return 30610;
break;
case joaat("dlc_mp_h4_f_peyes_0_7"):
case joaat("dlc_mp_h4_m_peyes_0_7"):
return 30611;
break;
case joaat("dlc_mp_h4_f_peyes_0_8"):
case joaat("dlc_mp_h4_m_peyes_0_8"):
return 30612;
break;
case joaat("dlc_mp_h4_f_peyes_0_9"):
case joaat("dlc_mp_h4_m_peyes_0_9"):
return 30613;
break;
case joaat("dlc_mp_h4_f_peyes_0_10"):
case joaat("dlc_mp_h4_m_peyes_0_10"):
return 30614;
break;
case joaat("dlc_mp_h4_f_peyes_0_11"):
case joaat("dlc_mp_h4_m_peyes_0_11"):
return 30615;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_f_teeth_13_0"):
case joaat("dlc_mp_h4_m_teeth_13_0"):
case joaat("dlc_mp_h4_f_teeth_14_0"):
case joaat("dlc_mp_h4_m_teeth_14_0"):
return 30616;
break;
case joaat("dlc_mp_h4_f_teeth_13_1"):
case joaat("dlc_mp_h4_m_teeth_13_1"):
case joaat("dlc_mp_h4_f_teeth_14_1"):
case joaat("dlc_mp_h4_m_teeth_14_1"):
return 30617;
break;
case joaat("dlc_mp_h4_f_teeth_13_2"):
case joaat("dlc_mp_h4_m_teeth_13_2"):
case joaat("dlc_mp_h4_f_teeth_14_2"):
case joaat("dlc_mp_h4_m_teeth_14_2"):
return 30618;
break;
case joaat("dlc_mp_h4_f_teeth_13_3"):
case joaat("dlc_mp_h4_m_teeth_13_3"):
case joaat("dlc_mp_h4_f_teeth_14_3"):
case joaat("dlc_mp_h4_m_teeth_14_3"):
return 30619;
break;
case joaat("dlc_mp_h4_f_teeth_13_4"):
case joaat("dlc_mp_h4_m_teeth_13_4"):
case joaat("dlc_mp_h4_f_teeth_14_4"):
case joaat("dlc_mp_h4_m_teeth_14_4"):
return 30620;
break;
case joaat("dlc_mp_h4_f_teeth_13_5"):
case joaat("dlc_mp_h4_m_teeth_13_5"):
case joaat("dlc_mp_h4_f_teeth_14_5"):
case joaat("dlc_mp_h4_m_teeth_14_5"):
return 30621;
break;
case joaat("dlc_mp_h4_f_teeth_13_6"):
case joaat("dlc_mp_h4_m_teeth_13_6"):
case joaat("dlc_mp_h4_f_teeth_14_6"):
case joaat("dlc_mp_h4_m_teeth_14_6"):
return 30622;
break;
case joaat("dlc_mp_h4_f_teeth_13_7"):
case joaat("dlc_mp_h4_m_teeth_13_7"):
case joaat("dlc_mp_h4_f_teeth_14_7"):
case joaat("dlc_mp_h4_m_teeth_14_7"):
return 30623;
break;
case joaat("dlc_mp_h4_f_teeth_13_8"):
case joaat("dlc_mp_h4_m_teeth_13_8"):
case joaat("dlc_mp_h4_f_teeth_14_8"):
case joaat("dlc_mp_h4_m_teeth_14_8"):
return 30624;
break;
case joaat("dlc_mp_h4_f_teeth_13_9"):
case joaat("dlc_mp_h4_m_teeth_13_9"):
case joaat("dlc_mp_h4_f_teeth_14_9"):
case joaat("dlc_mp_h4_m_teeth_14_9"):
return 30625;
break;
case joaat("dlc_mp_h4_f_teeth_13_10"):
case joaat("dlc_mp_h4_m_teeth_13_10"):
case joaat("dlc_mp_h4_f_teeth_14_10"):
case joaat("dlc_mp_h4_m_teeth_14_10"):
return 30626;
break;
case joaat("dlc_mp_h4_f_teeth_13_11"):
case joaat("dlc_mp_h4_m_teeth_13_11"):
case joaat("dlc_mp_h4_f_teeth_14_11"):
case joaat("dlc_mp_h4_m_teeth_14_11"):
return 30627;
break;
case joaat("dlc_mp_h4_f_teeth_13_12"):
case joaat("dlc_mp_h4_m_teeth_13_12"):
case joaat("dlc_mp_h4_f_teeth_14_12"):
case joaat("dlc_mp_h4_m_teeth_14_12"):
return 30628;
break;
case joaat("dlc_mp_h4_f_teeth_13_13"):
case joaat("dlc_mp_h4_m_teeth_13_13"):
case joaat("dlc_mp_h4_f_teeth_14_13"):
case joaat("dlc_mp_h4_m_teeth_14_13"):
return 30629;
break;
case joaat("dlc_mp_h4_f_teeth_13_14"):
case joaat("dlc_mp_h4_m_teeth_13_14"):
case joaat("dlc_mp_h4_f_teeth_14_14"):
case joaat("dlc_mp_h4_m_teeth_14_14"):
return 30630;
break;
case joaat("dlc_mp_h4_f_teeth_13_15"):
case joaat("dlc_mp_h4_m_teeth_13_15"):
case joaat("dlc_mp_h4_f_teeth_14_15"):
case joaat("dlc_mp_h4_m_teeth_14_15"):
return 30631;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_berd_4_0"):
case joaat("dlc_mp_h4_f_berd_4_0"):
return 30674;
break;
case joaat("dlc_mp_h4_m_berd_4_1"):
case joaat("dlc_mp_h4_f_berd_4_1"):
return 30675;
break;
case joaat("dlc_mp_h4_m_berd_4_2"):
case joaat("dlc_mp_h4_f_berd_4_2"):
return 30676;
break;
case joaat("dlc_mp_h4_m_berd_4_3"):
case joaat("dlc_mp_h4_f_berd_4_3"):
return 30677;
break;
case joaat("dlc_mp_h4_m_berd_4_4"):
case joaat("dlc_mp_h4_f_berd_4_4"):
return 30678;
break;
case joaat("dlc_mp_h4_m_berd_4_5"):
case joaat("dlc_mp_h4_f_berd_4_5"):
return 30679;
break;
case joaat("dlc_mp_h4_m_berd_4_6"):
case joaat("dlc_mp_h4_f_berd_4_6"):
return 30680;
break;
case joaat("dlc_mp_h4_m_berd_4_7"):
case joaat("dlc_mp_h4_f_berd_4_7"):
return 30681;
break;
case joaat("dlc_mp_h4_m_berd_4_8"):
case joaat("dlc_mp_h4_f_berd_4_8"):
return 30682;
break;
case joaat("dlc_mp_h4_m_berd_4_9"):
case joaat("dlc_mp_h4_f_berd_4_9"):
return 30683;
break;
case joaat("dlc_mp_h4_m_berd_4_10"):
case joaat("dlc_mp_h4_f_berd_4_10"):
return 30684;
break;
case joaat("dlc_mp_h4_m_berd_4_11"):
case joaat("dlc_mp_h4_f_berd_4_11"):
return 30685;
break;
case joaat("dlc_mp_h4_m_berd_4_12"):
case joaat("dlc_mp_h4_f_berd_4_12"):
return 30686;
break;
case joaat("dlc_mp_h4_m_berd_4_13"):
case joaat("dlc_mp_h4_f_berd_4_13"):
return 30687;
break;
case joaat("dlc_mp_h4_m_berd_4_14"):
case joaat("dlc_mp_h4_f_berd_4_14"):
return 30688;
break;
case joaat("dlc_mp_h4_m_berd_4_15"):
case joaat("dlc_mp_h4_f_berd_4_15"):
return 30689;
break;
case joaat("dlc_mp_h4_m_berd_4_16"):
case joaat("dlc_mp_h4_f_berd_4_16"):
return 30690;
break;
case joaat("dlc_mp_h4_m_berd_4_17"):
case joaat("dlc_mp_h4_f_berd_4_17"):
return 30691;
break;
case joaat("dlc_mp_h4_m_berd_4_18"):
case joaat("dlc_mp_h4_f_berd_4_18"):
return 30692;
break;
case joaat("dlc_mp_h4_m_berd_4_19"):
case joaat("dlc_mp_h4_f_berd_4_19"):
return 30693;
break;
}
switch (iParam0){
case joaat("dlc_mp_h4_m_peyes_1_0"):
case joaat("dlc_mp_h4_f_peyes_1_0"):
return 30638;
break;
case joaat("dlc_mp_h4_m_peyes_1_1"):
case joaat("dlc_mp_h4_f_peyes_1_1"):
return 30639;
break;
case joaat("dlc_mp_h4_m_peyes_1_2"):
case joaat("dlc_mp_h4_f_peyes_1_2"):
return 30640;
break;
case joaat("dlc_mp_h4_m_peyes_1_3"):
case joaat("dlc_mp_h4_f_peyes_1_3"):
return 30641;
break;
case joaat("dlc_mp_h4_m_peyes_1_4"):
case joaat("dlc_mp_h4_f_peyes_1_4"):
return 30642;
break;
case joaat("dlc_mp_h4_m_peyes_1_5"):
case joaat("dlc_mp_h4_f_peyes_1_5"):
return 30643;
break;
case joaat("dlc_mp_h4_m_peyes_1_6"):
case joaat("dlc_mp_h4_f_peyes_1_6"):
return 30644;
break;
case joaat("dlc_mp_h4_m_peyes_1_7"):
case joaat("dlc_mp_h4_f_peyes_1_7"):
return 30645;
break;
case joaat("dlc_mp_h4_m_peyes_1_8"):
case joaat("dlc_mp_h4_f_peyes_1_8"):
return 30646;
break;
case joaat("dlc_mp_h4_m_peyes_1_9"):
case joaat("dlc_mp_h4_f_peyes_1_9"):
return 30647;
break;
case joaat("dlc_mp_h4_m_peyes_1_10"):
case joaat("dlc_mp_h4_f_peyes_1_10"):
return 30648;
break;
case joaat("dlc_mp_h4_m_peyes_1_11"):
case joaat("dlc_mp_h4_f_peyes_1_11"):
return 30649;
break;
case joaat("dlc_mp_h4_m_peyes_2_0"):
case joaat("dlc_mp_h4_f_peyes_2_0"):
return 30650;
break;
case joaat("dlc_mp_h4_m_peyes_2_1"):
case joaat("dlc_mp_h4_f_peyes_2_1"):
return 30651;
break;
case joaat("dlc_mp_h4_m_peyes_2_2"):
case joaat("dlc_mp_h4_f_peyes_2_2"):
return 30652;
break;
case joaat("dlc_mp_h4_m_peyes_2_3"):
case joaat("dlc_mp_h4_f_peyes_2_3"):
return 30653;
break;
case joaat("dlc_mp_h4_m_peyes_2_4"):
case joaat("dlc_mp_h4_f_peyes_2_4"):
return 30654;
break;
case joaat("dlc_mp_h4_m_peyes_2_5"):
case joaat("dlc_mp_h4_f_peyes_2_5"):
return 30655;
break;
case joaat("dlc_mp_h4_m_peyes_2_6"):
case joaat("dlc_mp_h4_f_peyes_2_6"):
return 30656;
break;
case joaat("dlc_mp_h4_m_peyes_2_7"):
case joaat("dlc_mp_h4_f_peyes_2_7"):
return 30657;
break;
case joaat("dlc_mp_h4_m_peyes_2_8"):
case joaat("dlc_mp_h4_f_peyes_2_8"):
return 30658;
break;
case joaat("dlc_mp_h4_m_peyes_2_9"):
case joaat("dlc_mp_h4_f_peyes_2_9"):
return 30659;
break;
case joaat("dlc_mp_h4_m_peyes_2_10"):
case joaat("dlc_mp_h4_f_peyes_2_10"):
return 30660;
break;
case joaat("dlc_mp_h4_m_peyes_2_11"):
case joaat("dlc_mp_h4_f_peyes_2_11"):
return 30661;
break;
case joaat("dlc_mp_h4_m_peyes_3_0"):
case joaat("dlc_mp_h4_f_peyes_3_0"):
return 30662;
break;
case joaat("dlc_mp_h4_m_peyes_3_1"):
case joaat("dlc_mp_h4_f_peyes_3_1"):
return 30663;
break;
case joaat("dlc_mp_h4_m_peyes_3_2"):
case joaat("dlc_mp_h4_f_peyes_3_2"):
return 30664;
break;
case joaat("dlc_mp_h4_m_peyes_3_3"):
case joaat("dlc_mp_h4_f_peyes_3_3"):
return 30665;
break;
case joaat("dlc_mp_h4_m_peyes_3_4"):
case joaat("dlc_mp_h4_f_peyes_3_4"):
return 30666;
break;
case joaat("dlc_mp_h4_m_peyes_3_5"):
case joaat("dlc_mp_h4_f_peyes_3_5"):
return 30667;
break;
case joaat("dlc_mp_h4_m_peyes_3_6"):
case joaat("dlc_mp_h4_f_peyes_3_6"):
return 30668;
break;
case joaat("dlc_mp_h4_m_peyes_3_7"):
case joaat("dlc_mp_h4_f_peyes_3_7"):
return 30669;
break;
case joaat("dlc_mp_h4_m_peyes_3_8"):
case joaat("dlc_mp_h4_f_peyes_3_8"):
return 30670;
break;
case joaat("dlc_mp_h4_m_peyes_3_9"):
case joaat("dlc_mp_h4_f_peyes_3_9"):
return 30671;
break;
case joaat("dlc_mp_h4_m_peyes_3_10"):
case joaat("dlc_mp_h4_f_peyes_3_10"):
return 30672;
break;
case joaat("dlc_mp_h4_m_peyes_3_11"):
case joaat("dlc_mp_h4_f_peyes_3_11"):
return 30673;
break;
}
switch (iParam0){
case -1265443416:
case 676807987:
return 30260;
break;
case 1888753218:
case 272160153:
return 30261;
break;
case -552467991:
case 1593344440:
return 30262;
break;
case -1655919948:
case 546222390:
return 30263;
break;
case -917106601:
case 1983375900:
return 30264;
break;
case 1595446967:
case -620589387:
return 30265;
break;
case -530593323:
case 383923929:
return 30266;
break;
case 561619447:
case -1703406594:
return 30267;
break;
case -1913656173:
case -398286533:
return 30268;
break;
case -1766901922:
case -80478106:
return 30269;
break;
case 2091781849:
case 1835331655:
return 30270;
break;
case 1824588341:
case -1650596870:
return 30271;
break;
case 242597641:
case 1231926496:
return 30272;
break;
case 566785691:
case -1506181253:
return 30273;
break;
case -2091312957:
case -1737145605:
return 30274;
break;
case -2079214831:
case 1673851512:
return 30275;
break;
case 1359156274:
case 1023339598:
return 30276;
break;
case 1904247246:
case -163738770:
return 30277;
break;
case -1351518396:
case 1863218823:
return 30278;
break;
case -797874817:
case 333966447:
return 30279;
break;
case -385507297:
case 1412626052:
return 30280;
break;
case 2011910758:
case -39100956:
return 30281;
break;
case -1953985443:
case 1631533003:
return 30282;
break;
case -1124222352:
case 1493430918:
return 30283;
break;
case -1806994767:
case -196693334:
return 30284;
break;
case -1445761968:
case 553507495:
return 30285;
break;
case -89186417:
case 2003474700:
return 30286;
break;
case -308083083:
case 1121792228:
return 30287;
break;
case 667714507:
case -1424651669:
return 30288;
break;
case -1610210252:
case -1454164346:
return 30289;
break;
case joaat("dlc_mp_sum_m_berd_3_4"):
case joaat("dlc_mp_sum_f_berd_3_4"):
return 30290;
break;
case joaat("dlc_mp_sum_m_berd_3_5"):
case joaat("dlc_mp_sum_f_berd_3_5"):
return 30291;
break;
case joaat("dlc_mp_sum_m_berd_3_6"):
case joaat("dlc_mp_sum_f_berd_3_6"):
return 30292;
break;
case joaat("dlc_mp_sum_m_berd_3_7"):
case joaat("dlc_mp_sum_f_berd_3_7"):
return 30293;
break;
case joaat("dlc_mp_sum_m_legs_1_25"):
case joaat("dlc_mp_sum_f_legs_2_25"):
return 30294;
break;
case joaat("dlc_mp_sum_m_jbib_0_25"):
case joaat("dlc_mp_sum_f_jbib_0_25"):
return 30295;
break;
}
switch (iParam0){
case joaat("dlc_mp_vwd_m_decl_1_0"):
case joaat("dlc_mp_vwd_f_decl_1_0"):
return 27194;
break;
case joaat("dlc_mp_vwd_m_decl_1_6"):
case joaat("dlc_mp_vwd_f_decl_1_6"):
return 27195;
break;
case joaat("dlc_mp_vwd_m_decl_1_7"):
case joaat("dlc_mp_vwd_f_decl_1_7"):
return 27196;
break;
case joaat("dlc_mp_vwd_m_decl_1_8"):
case joaat("dlc_mp_vwd_f_decl_1_8"):
return 27197;
break;
case joaat("dlc_mp_vwd_m_jbib_23_5"):
case joaat("dlc_mp_vwd_f_jbib_21_5"):
return 27198;
break;
case joaat("dlc_mp_vwd_m_jbib_23_8"):
case joaat("dlc_mp_vwd_f_jbib_21_8"):
return 27199;
break;
case joaat("dlc_mp_vwd_m_jbib_23_9"):
case joaat("dlc_mp_vwd_f_jbib_21_9"):
return 27200;
break;
case joaat("dlc_mp_vwd_m_jbib_23_10"):
case joaat("dlc_mp_vwd_f_jbib_21_10"):
return 27201;
break;
case joaat("dlc_mp_vwd_m_decl_1_11"):
case joaat("dlc_mp_vwd_f_decl_1_11"):
return 27202;
break;
case joaat("dlc_mp_vwd_m_decl_1_12"):
case joaat("dlc_mp_vwd_f_decl_1_12"):
return 27203;
break;
case joaat("dlc_mp_vwd_m_decl_1_13"):
case joaat("dlc_mp_vwd_f_decl_1_13"):
return 27204;
break;
case joaat("dlc_mp_vwd_m_decl_1_14"):
case joaat("dlc_mp_vwd_f_decl_1_14"):
return 27205;
break;
case joaat("dlc_mp_vwd_m_decl_1_15"):
case joaat("dlc_mp_vwd_f_decl_1_15"):
return 27206;
break;
case joaat("dlc_mp_vwd_m_decl_1_16"):
case joaat("dlc_mp_vwd_f_decl_1_16"):
return 27207;
break;
case joaat("dlc_mp_vwd_m_decl_1_17"):
case joaat("dlc_mp_vwd_f_decl_1_17"):
return 27208;
break;
case joaat("dlc_mp_vwd_m_decl_1_18"):
case joaat("dlc_mp_vwd_f_decl_1_18"):
return 27209;
break;
case joaat("dlc_mp_vwd_m_jbib_23_0"):
case joaat("dlc_mp_vwd_f_jbib_21_0"):
return 27210;
break;
case joaat("dlc_mp_vwd_m_jbib_23_2"):
case joaat("dlc_mp_vwd_f_jbib_21_2"):
return 27211;
break;
case joaat("dlc_mp_vwd_m_jbib_23_4"):
case joaat("dlc_mp_vwd_f_jbib_21_4"):
return 27212;
break;
case joaat("dlc_mp_vwd_m_jbib_23_7"):
case joaat("dlc_mp_vwd_f_jbib_21_7"):
return 27213;
break;
}
switch (iParam0){
case joaat("MP_Christmas2018_Tee_000_M"):
case joaat("MP_Christmas2018_Tee_000_F"):
return 25032;
break;
case joaat("MP_Christmas2018_Tee_001_M"):
case joaat("MP_Christmas2018_Tee_001_F"):
return 25033;
break;
case joaat("MP_Christmas2018_Tee_002_M"):
case joaat("MP_Christmas2018_Tee_002_F"):
return 25034;
break;
case joaat("MP_Christmas2018_Tee_003_M"):
case joaat("MP_Christmas2018_Tee_003_F"):
return 25035;
break;
case joaat("MP_Christmas2018_Tee_004_M"):
case joaat("MP_Christmas2018_Tee_004_F"):
return 25036;
break;
case joaat("MP_Christmas2018_Tee_005_M"):
case joaat("MP_Christmas2018_Tee_005_F"):
return 25037;
break;
case joaat("MP_Christmas2018_Tee_006_M"):
case joaat("MP_Christmas2018_Tee_006_F"):
return 25038;
break;
case joaat("MP_Christmas2018_Tee_007_M"):
case joaat("MP_Christmas2018_Tee_007_F"):
return 25039;
break;
case joaat("MP_Christmas2018_Tee_008_M"):
case joaat("MP_Christmas2018_Tee_008_F"):
return 25040;
break;
case joaat("MP_Christmas2018_Tee_009_M"):
case joaat("MP_Christmas2018_Tee_009_F"):
return 25041;
break;
case joaat("MP_Christmas2018_Tee_010_M"):
case joaat("MP_Christmas2018_Tee_010_F"):
return 25042;
break;
case joaat("MP_Christmas2018_Tee_011_M"):
case joaat("MP_Christmas2018_Tee_011_F"):
return 25043;
break;
case joaat("MP_Christmas2018_Tee_012_M"):
case joaat("MP_Christmas2018_Tee_012_F"):
return 25044;
break;
case joaat("MP_Christmas2018_Tee_013_M"):
case joaat("MP_Christmas2018_Tee_013_F"):
return 25045;
break;
case joaat("MP_Christmas2018_Tee_014_M"):
case joaat("MP_Christmas2018_Tee_014_F"):
return 25046;
break;
case joaat("MP_Christmas2018_Tee_015_M"):
case joaat("MP_Christmas2018_Tee_015_F"):
return 25047;
break;
case joaat("MP_Christmas2018_Tee_016_M"):
case joaat("MP_Christmas2018_Tee_016_F"):
return 25048;
break;
case joaat("MP_Christmas2018_Tee_017_M"):
case joaat("MP_Christmas2018_Tee_017_F"):
return 25049;
break;
case joaat("MP_Christmas2018_Tee_018_M"):
case joaat("MP_Christmas2018_Tee_018_F"):
return 25050;
break;
case joaat("MP_Christmas2018_Tee_019_M"):
case joaat("MP_Christmas2018_Tee_019_F"):
return 25051;
break;
case joaat("MP_Christmas2018_Tee_020_M"):
case joaat("MP_Christmas2018_Tee_020_F"):
return 25052;
break;
case joaat("MP_Christmas2018_Tee_021_M"):
case joaat("MP_Christmas2018_Tee_021_F"):
return 25053;
break;
case joaat("MP_Christmas2018_Tee_022_M"):
case joaat("MP_Christmas2018_Tee_022_F"):
return 25054;
break;
case joaat("MP_Christmas2018_Tee_023_M"):
case joaat("MP_Christmas2018_Tee_023_F"):
return 25055;
break;
case joaat("MP_Christmas2018_Tee_024_M"):
case joaat("MP_Christmas2018_Tee_024_F"):
return 25056;
break;
case joaat("MP_Christmas2018_Tee_025_M"):
case joaat("MP_Christmas2018_Tee_025_F"):
return 25057;
break;
case joaat("MP_Christmas2018_Tee_026_M"):
case joaat("MP_Christmas2018_Tee_026_F"):
return 25058;
break;
case joaat("MP_Christmas2018_Tee_027_M"):
case joaat("MP_Christmas2018_Tee_027_F"):
return 25059;
break;
case joaat("MP_Christmas2018_Tee_028_M"):
case joaat("MP_Christmas2018_Tee_028_F"):
return 25060;
break;
case joaat("MP_Christmas2018_Tee_029_M"):
case joaat("MP_Christmas2018_Tee_029_F"):
return 25061;
break;
case joaat("MP_Christmas2018_Tee_030_M"):
case joaat("MP_Christmas2018_Tee_030_F"):
return 25062;
break;
case joaat("MP_Christmas2018_Tee_031_M"):
case joaat("MP_Christmas2018_Tee_031_F"):
return 25063;
break;
case joaat("MP_Christmas2018_Tee_032_M"):
case joaat("MP_Christmas2018_Tee_032_F"):
return 25064;
break;
case joaat("MP_Christmas2018_Tee_033_M"):
case joaat("MP_Christmas2018_Tee_033_F"):
return 25065;
break;
case joaat("MP_Christmas2018_Tee_034_M"):
case joaat("MP_Christmas2018_Tee_034_F"):
return 25066;
break;
case joaat("MP_Christmas2018_Tee_035_M"):
case joaat("MP_Christmas2018_Tee_035_F"):
return 25067;
break;
case joaat("MP_Christmas2018_Tee_036_M"):
case joaat("MP_Christmas2018_Tee_036_F"):
return 25068;
break;
case joaat("MP_Christmas2018_Tee_037_M"):
case joaat("MP_Christmas2018_Tee_037_F"):
return 25069;
break;
case joaat("MP_Christmas2018_Tee_038_M"):
case joaat("MP_Christmas2018_Tee_038_F"):
return 25070;
break;
case joaat("MP_Christmas2018_Tee_039_M"):
case joaat("MP_Christmas2018_Tee_039_F"):
return 25071;
break;
case joaat("MP_Christmas2018_Tee_040_M"):
case joaat("MP_Christmas2018_Tee_040_F"):
return 25072;
break;
case joaat("MP_Christmas2018_Tee_041_M"):
case joaat("MP_Christmas2018_Tee_041_F"):
return 25073;
break;
case joaat("MP_Christmas2018_Tee_042_M"):
case joaat("MP_Christmas2018_Tee_042_F"):
return 25074;
break;
case joaat("MP_Christmas2018_Tee_043_M"):
case joaat("MP_Christmas2018_Tee_043_F"):
return 25075;
break;
case joaat("MP_Christmas2018_Tee_044_M"):
case joaat("MP_Christmas2018_Tee_044_F"):
return 25076;
break;
case joaat("MP_Christmas2018_Tee_045_M"):
case joaat("MP_Christmas2018_Tee_045_F"):
return 25077;
break;
case joaat("MP_Christmas2018_Tee_046_M"):
case joaat("MP_Christmas2018_Tee_046_F"):
return 25078;
break;
case joaat("MP_Christmas2018_Tee_047_M"):
case joaat("MP_Christmas2018_Tee_047_F"):
return 25079;
break;
case joaat("MP_Christmas2018_Tee_048_M"):
case joaat("MP_Christmas2018_Tee_048_F"):
return 25080;
break;
case joaat("MP_Christmas2018_Tee_049_M"):
case joaat("MP_Christmas2018_Tee_049_F"):
return 25081;
break;
case joaat("MP_Christmas2018_Tee_050_M"):
case joaat("MP_Christmas2018_Tee_050_F"):
return 25082;
break;
case joaat("MP_Christmas2018_Tee_051_M"):
case joaat("MP_Christmas2018_Tee_051_F"):
return 25083;
break;
case joaat("MP_Christmas2018_Tee_052_M"):
case joaat("MP_Christmas2018_Tee_052_F"):
return 25084;
break;
case joaat("MP_Christmas2018_Tee_053_M"):
case joaat("MP_Christmas2018_Tee_053_F"):
return 25085;
break;
case joaat("MP_Christmas2018_Tee_054_M"):
case joaat("MP_Christmas2018_Tee_054_F"):
return 25086;
break;
case joaat("MP_Christmas2018_Tee_055_M"):
case joaat("MP_Christmas2018_Tee_055_F"):
return 25087;
break;
case joaat("MP_Christmas2018_Tee_056_M"):
case joaat("MP_Christmas2018_Tee_056_F"):
return 25088;
break;
case joaat("MP_Christmas2018_Tee_057_M"):
case joaat("MP_Christmas2018_Tee_057_F"):
return 25089;
break;
case joaat("MP_Christmas2018_Tee_058_M"):
case joaat("MP_Christmas2018_Tee_058_F"):
return 25090;
break;
case joaat("MP_Christmas2018_Tee_059_M"):
case joaat("MP_Christmas2018_Tee_059_F"):
return 25091;
break;
case joaat("MP_Christmas2018_Tee_060_M"):
case joaat("MP_Christmas2018_Tee_060_F"):
return 25092;
break;
case joaat("MP_Christmas2018_Tee_061_M"):
case joaat("MP_Christmas2018_Tee_061_F"):
return 25093;
break;
case joaat("MP_Christmas2018_Tee_062_M"):
case joaat("MP_Christmas2018_Tee_062_F"):
return 25094;
break;
case joaat("MP_Christmas2018_Tee_063_M"):
case joaat("MP_Christmas2018_Tee_063_F"):
return 25095;
break;
case joaat("MP_Christmas2018_Tee_064_M"):
case joaat("MP_Christmas2018_Tee_064_F"):
return 25096;
break;
case joaat("MP_Christmas2018_Tee_065_M"):
case joaat("MP_Christmas2018_Tee_065_F"):
return 25097;
break;
case joaat("MP_Christmas2018_Tee_066_M"):
case joaat("MP_Christmas2018_Tee_066_F"):
return 25098;
break;
case joaat("MP_Christmas2018_Tee_067_M"):
case joaat("MP_Christmas2018_Tee_067_F"):
return 25099;
break;
}
switch (iParam0){
case joaat("dlc_mp_arena_f_jbib_16_0"):
case joaat("dlc_mp_arena_m_jbib_16_0"):
return 25022;
case joaat("dlc_mp_arena_f_jbib_16_1"):
case joaat("dlc_mp_arena_m_jbib_16_1"):
return 25023;
case joaat("dlc_mp_arena_f_jbib_16_2"):
case joaat("dlc_mp_arena_m_jbib_16_2"):
return 25024;
case joaat("dlc_mp_arena_f_jbib_16_3"):
case joaat("dlc_mp_arena_m_jbib_16_3"):
return 25025;
case joaat("dlc_mp_arena_f_jbib_16_4"):
case joaat("dlc_mp_arena_m_jbib_16_4"):
return 25026;
case joaat("dlc_mp_arena_f_jbib_16_5"):
case joaat("dlc_mp_arena_m_jbib_16_5"):
return 25027;
case joaat("dlc_mp_arena_f_jbib_16_6"):
case joaat("dlc_mp_arena_m_jbib_16_6"):
return 25028;
case joaat("dlc_mp_arena_f_jbib_16_7"):
case joaat("dlc_mp_arena_m_jbib_16_7"):
return 25019;
case joaat("dlc_mp_arena_f_jbib_16_8"):
case joaat("dlc_mp_arena_m_jbib_16_8"):
return 25029;
case joaat("dlc_mp_arena_f_jbib_16_9"):
case joaat("dlc_mp_arena_m_jbib_16_9"):
return 25021;
case joaat("dlc_mp_arena_f_jbib_16_10"):
case joaat("dlc_mp_arena_m_jbib_16_10"):
return 25018;
case joaat("dlc_mp_arena_f_jbib_16_11"):
case joaat("dlc_mp_arena_m_jbib_16_11"):
return 25020;
case joaat("dlc_mp_arena_f_jbib_16_12"):
case joaat("dlc_mp_arena_m_jbib_16_12"):
return 25030;
case joaat("dlc_mp_arena_f_jbib_16_13"):
case joaat("dlc_mp_arena_m_jbib_16_13"):
return 25031;
default:
}
switch (iParam0){
case -1641688020:
return 25002;
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
return 22108;
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
return 9481;
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
return 9470;
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
return 9475;
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
return 9472;
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
return 9465;
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
return 9463;
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
return 9464;
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
return 9468;
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
return 9469;
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
return 9479;
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
return 9473;
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
return 9480;
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
return 9476;
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
return 9477;
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
return 9471;
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
return 9474;
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
return 9467;
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
return 9478;
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
return 9462;
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
return 9466;
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
return 22126;
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
return 22127;
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
return 22128;
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
return 22124;
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
return 22130;
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
return 22125;
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
return 22129;
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
return 22131;
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
return 22132;
default:
}
switch (iParam0){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
return 22147;
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
return 22148;
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
return 22149;
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
return 22150;
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
return 22151;
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
return 22152;
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
return 22153;
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
return 22154;
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
return 22155;
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
return 22156;
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
return 22157;
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
return 22158;
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
return 22159;
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
return 22160;
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
return 22161;
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
return 22162;
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
return 22163;
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
return 22164;
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
return 22165;
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
return 22166;
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
return 22167;
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
return 22168;
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
return 22169;
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
return 22170;
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
return 22171;
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
return 22172;
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
return 22173;
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
return 22174;
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
return 22175;
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
return 22176;
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
return 22177;
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
return 22178;
default:
}
switch (iParam0){
case joaat("dlc_mp_lts_m_outfit_14"):
case joaat("dlc_mp_lts_f_outfit_14"):
return 18099;
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_outfit_morph_0"):
case joaat("dlc_mp_x17_m_berd_2_0"):
case joaat("dlc_mp_x17_m_legs_1_0"):
case joaat("dlc_mp_x17_m_feet_1_0"):
case joaat("dlc_mp_x17_m_jbib_5_0"):
case joaat("dlc_mp_x17_f_outfit_morph_0"):
case joaat("dlc_mp_x17_f_berd_2_0"):
case joaat("dlc_mp_x17_f_legs_1_0"):
case joaat("dlc_mp_x17_f_feet_1_0"):
case joaat("dlc_mp_x17_f_jbib_5_0"):
return 18121;
case joaat("dlc_mp_x17_m_outfit_morph_1"):
case joaat("dlc_mp_x17_m_berd_2_1"):
case joaat("dlc_mp_x17_m_legs_1_1"):
case joaat("dlc_mp_x17_m_feet_1_1"):
case joaat("dlc_mp_x17_m_jbib_5_1"):
case joaat("dlc_mp_x17_f_outfit_morph_1"):
case joaat("dlc_mp_x17_f_berd_2_1"):
case joaat("dlc_mp_x17_f_legs_1_1"):
case joaat("dlc_mp_x17_f_feet_1_1"):
case joaat("dlc_mp_x17_f_jbib_5_1"):
return 18122;
case joaat("dlc_mp_x17_m_outfit_morph_2"):
case joaat("dlc_mp_x17_m_berd_2_2"):
case joaat("dlc_mp_x17_m_legs_1_2"):
case joaat("dlc_mp_x17_m_feet_1_2"):
case joaat("dlc_mp_x17_m_jbib_5_2"):
case joaat("dlc_mp_x17_f_outfit_morph_2"):
case joaat("dlc_mp_x17_f_berd_2_2"):
case joaat("dlc_mp_x17_f_legs_1_2"):
case joaat("dlc_mp_x17_f_feet_1_2"):
case joaat("dlc_mp_x17_f_jbib_5_2"):
return 18123;
case joaat("dlc_mp_x17_m_outfit_morph_3"):
case joaat("dlc_mp_x17_m_berd_2_3"):
case joaat("dlc_mp_x17_m_legs_1_3"):
case joaat("dlc_mp_x17_m_feet_1_3"):
case joaat("dlc_mp_x17_m_jbib_5_3"):
case joaat("dlc_mp_x17_f_outfit_morph_3"):
case joaat("dlc_mp_x17_f_berd_2_3"):
case joaat("dlc_mp_x17_f_legs_1_3"):
case joaat("dlc_mp_x17_f_feet_1_3"):
case joaat("dlc_mp_x17_f_jbib_5_3"):
return 18124;
case joaat("dlc_mp_x17_m_outfit_morph_4"):
case joaat("dlc_mp_x17_m_berd_2_4"):
case joaat("dlc_mp_x17_m_legs_1_4"):
case joaat("dlc_mp_x17_m_feet_1_4"):
case joaat("dlc_mp_x17_m_jbib_5_4"):
case joaat("dlc_mp_x17_f_outfit_morph_4"):
case joaat("dlc_mp_x17_f_berd_2_4"):
case joaat("dlc_mp_x17_f_legs_1_4"):
case joaat("dlc_mp_x17_f_feet_1_4"):
case joaat("dlc_mp_x17_f_jbib_5_4"):
return 18125;
default:
}
switch (iParam0){
case joaat("dlc_mp_x17_m_berd_10_0"):
case joaat("dlc_mp_x17_f_berd_10_0"):
return 18134;
case joaat("dlc_mp_x17_m_berd_10_1"):
case joaat("dlc_mp_x17_f_berd_10_1"):
return 18135;
case joaat("dlc_mp_x17_m_berd_10_2"):
case joaat("dlc_mp_x17_f_berd_10_2"):
return 18136;
case joaat("dlc_mp_x17_m_berd_10_3"):
case joaat("dlc_mp_x17_f_berd_10_3"):
return 18137;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_jbib_19_0"):
case joaat("dlc_mp_gr_f_jbib_25_0"):
return 15417;
case joaat("dlc_mp_gr_m_jbib_19_1"):
case joaat("dlc_mp_gr_f_jbib_25_1"):
return 15418;
case joaat("dlc_mp_gr_m_jbib_20_0"):
case joaat("dlc_mp_gr_f_jbib_26_0"):
return 15425;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_decl_5_0"):
case joaat("dlc_mp_gr_f_decl_5_0"):
return 15405;
case joaat("dlc_mp_gr_m_decl_5_1"):
case joaat("dlc_mp_gr_f_decl_5_1"):
return 15393;
case joaat("dlc_mp_gr_m_decl_5_2"):
case joaat("dlc_mp_gr_f_decl_5_2"):
return 15409;
case joaat("dlc_mp_gr_m_decl_5_3"):
case joaat("dlc_mp_gr_f_decl_5_3"):
return 15396;
case joaat("dlc_mp_gr_m_decl_5_4"):
case joaat("dlc_mp_gr_f_decl_5_4"):
return 15412;
case joaat("dlc_mp_gr_m_decl_5_6"):
case joaat("dlc_mp_gr_f_decl_5_6"):
return 15403;
case joaat("dlc_mp_gr_m_decl_5_8"):
case joaat("dlc_mp_gr_f_decl_5_8"):
return 15389;
case joaat("dlc_mp_gr_m_decl_5_10"):
case joaat("dlc_mp_gr_f_decl_5_10"):
return 15398;
default:
}
switch (iParam0){
case joaat("dlc_mp_gr_m_phead_6_0"):
case joaat("dlc_mp_gr_f_phead_6_0"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_0"):
return 15400;
case joaat("dlc_mp_gr_m_phead_6_2"):
case joaat("dlc_mp_gr_f_phead_6_2"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_2"):
return 15408;
case joaat("dlc_mp_gr_m_phead_6_4"):
case joaat("dlc_mp_gr_f_phead_6_4"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_4"):
return 15411;
case joaat("dlc_mp_gr_m_phead_6_5"):
case joaat("dlc_mp_gr_f_phead_6_5"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_5"):
return 15397;
case joaat("dlc_mp_gr_m_phead_6_6"):
case joaat("dlc_mp_gr_f_phead_6_6"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_6"):
return 15413;
case joaat("dlc_mp_gr_m_phead_6_7"):
case joaat("dlc_mp_gr_f_phead_6_7"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_7"):
return 15391;
case joaat("dlc_mp_gr_m_phead_6_8"):
case joaat("dlc_mp_gr_f_phead_6_8"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_8"):
return 15388;
case joaat("dlc_mp_gr_m_phead_6_10"):
case joaat("dlc_mp_gr_f_phead_6_10"):
case joaat("dlc_mp_gr_m_phead_7_10"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return 15401;
default:
}
switch (iParam0){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
return 15394;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
return 15406;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
return 15395;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
return 15410;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
return 15407;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
return 15414;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
return 15415;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
return 15399;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
return 15404;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
return 15392;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
return 15390;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
return 15402;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
return 15416;
default:
}
switch (iParam0){
case joaat("dlc_mp_ie_m_berd_7_0"):
case joaat("dlc_mp_ie_f_berd_7_0"):
return 9443;
default:
}
switch (iParam0){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
return 9366;
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
return 9367;
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
return 9369;
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
return 9368;
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
return 9365;
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
return 9364;
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
return 9363;
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
return 9362;
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
return 9370;
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
return 9371;
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
return 9372;
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
return 9373;
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
return 9374;
case joaat("MP_Biker_Award_000_M"):
case joaat("MP_Biker_Award_000_F"):
return 9384;
case joaat("MP_Biker_Award_001_M"):
case joaat("MP_Biker_Award_001_F"):
return 9385;
default:
}
switch (iParam0){
case joaat("dlc_mp_biker_m_decl_0_0"):
case joaat("dlc_mp_biker_f_decl_0_0"):
return 9375;
case joaat("dlc_mp_biker_m_decl_0_1"):
case joaat("dlc_mp_biker_f_decl_0_1"):
return 9376;
case joaat("dlc_mp_biker_m_decl_0_2"):
case joaat("dlc_mp_biker_f_decl_0_2"):
return 9377;
case joaat("dlc_mp_biker_m_decl_0_3"):
case joaat("dlc_mp_biker_f_decl_0_3"):
return 9378;
case joaat("dlc_mp_biker_m_decl_0_4"):
case joaat("dlc_mp_biker_f_decl_0_4"):
return 9379;
case joaat("dlc_mp_biker_m_decl_0_5"):
case joaat("dlc_mp_biker_f_decl_0_5"):
return 9380;
case joaat("dlc_mp_biker_m_decl_0_6"):
case joaat("dlc_mp_biker_f_decl_0_6"):
return 9381;
case joaat("dlc_mp_biker_m_decl_0_7"):
case joaat("dlc_mp_biker_f_decl_0_7"):
return 9382;
case joaat("dlc_mp_biker_m_decl_0_8"):
case joaat("dlc_mp_biker_f_decl_0_8"):
return 9383;
default:
}
switch (iParam0){
case joaat("dlc_mp_stunt_m_outfit_e_0"):
case joaat("dlc_mp_stunt_m_phead_11_0"):
case joaat("dlc_mp_stunt_m_phead_12_0"):
case joaat("dlc_mp_stunt_f_outfit_e_0"):
case joaat("dlc_mp_stunt_f_phead_11_0"):
case joaat("dlc_mp_stunt_f_phead_12_0"):
return 7595;
case joaat("dlc_mp_stunt_m_outfit_e_1"):
case joaat("dlc_mp_stunt_m_phead_11_1"):
case joaat("dlc_mp_stunt_m_phead_12_1"):
case joaat("dlc_mp_stunt_f_outfit_e_1"):
case joaat("dlc_mp_stunt_f_phead_11_1"):
case joaat("dlc_mp_stunt_f_phead_12_1"):
return 7596;
case joaat("dlc_mp_stunt_m_outfit_e_2"):
case joaat("dlc_mp_stunt_m_phead_11_2"):
case joaat("dlc_mp_stunt_m_phead_12_2"):
case joaat("dlc_mp_stunt_f_outfit_e_2"):
case joaat("dlc_mp_stunt_f_phead_11_2"):
case joaat("dlc_mp_stunt_f_phead_12_2"):
return 7597;
case joaat("dlc_mp_stunt_m_outfit_e_3"):
case joaat("dlc_mp_stunt_m_phead_11_3"):
case joaat("dlc_mp_stunt_m_phead_12_3"):
case joaat("dlc_mp_stunt_f_outfit_e_3"):
case joaat("dlc_mp_stunt_f_phead_11_3"):
case joaat("dlc_mp_stunt_f_phead_12_3"):
return 7599;
case joaat("dlc_mp_stunt_m_outfit_e_4"):
case joaat("dlc_mp_stunt_m_phead_11_4"):
case joaat("dlc_mp_stunt_m_phead_12_4"):
case joaat("dlc_mp_stunt_f_outfit_e_4"):
case joaat("dlc_mp_stunt_f_phead_11_4"):
case joaat("dlc_mp_stunt_f_phead_12_4"):
return 7600;
case joaat("dlc_mp_stunt_m_outfit_e_5"):
case joaat("dlc_mp_stunt_m_phead_13_0"):
case joaat("dlc_mp_stunt_m_phead_14_0"):
case joaat("dlc_mp_stunt_f_outfit_e_5"):
case joaat("dlc_mp_stunt_f_phead_13_0"):
case joaat("dlc_mp_stunt_f_phead_14_0"):
return 7598;
return 7601;
