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
struct<33> Local_114={
0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 4, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_115=0;
var uLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
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
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=8;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=8;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
var uLocal_171=0;
var uLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
float fLocal_189=0f;
float fLocal_190=0f;
float fLocal_191=0f;
float fLocal_192=0f;
var uLocal_193=0;
int iLocal_194[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
struct<2577> Local_198={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 26, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 6, 1443296302, 2, -1, -1, 0, -1, 1443296302, 2, -1, -1, 0, -1, 1443296302, 2, -1, -1, 0, -1, 1443296302, 2, -1, -1, 0, -1, 1443296302, 2, -1, -1, 0, -1, 1443296302, 2, -1, -1, 0, -1, 0, 23, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 12, 1065353216, 0, -1, 0, 31, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 18, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 2, -1, 1, -1, 0, -1, 1, -1, 0, 3, 15000, 5000, 1128792064, 0, 0, 4, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 0, 0, 0, 0, 2, -1, 10, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 10, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, -1, 0, 0, 0, 0, 0, 0, 2000, 0, 8, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, 1090519040, -1056964608, 0, 1060320051, 1067450368, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1123680256, 0, 800, 800, 0, 1, 0, 0, 0, 0, 0, 0, 1112014848, 1056964608, 0, 1, 0, 0, 0, 0, 0, 0, 8192, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1123680256, 0, 800, 800, 0, 1, 0, 0, 0, 0, 0, 0, 1112014848, 1056964608, 0, 1, 0, 0, 0, 0, 0, 0, 8192, 3, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 
};
var uLocal_199=37;
var uLocal_200=0;
var uLocal_201=-1;
var uLocal_202=0;
var uLocal_203=-1;
var uLocal_204=0;
var uLocal_205=-1;
var uLocal_206=0;
var uLocal_207=-1;
var uLocal_208=0;
var uLocal_209=-1;
var uLocal_210=0;
var uLocal_211=-1;
var uLocal_212=0;
var uLocal_213=-1;
var uLocal_214=0;
var uLocal_215=-1;
var uLocal_216=0;
var uLocal_217=-1;
var uLocal_218=0;
var uLocal_219=-1;
var uLocal_220=0;
var uLocal_221=-1;
var uLocal_222=0;
var uLocal_223=-1;
var uLocal_224=0;
var uLocal_225=-1;
var uLocal_226=0;
var uLocal_227=-1;
var uLocal_228=0;
var uLocal_229=-1;
var uLocal_230=0;
var uLocal_231=-1;
var uLocal_232=0;
var uLocal_233=-1;
var uLocal_234=0;
var uLocal_235=-1;
var uLocal_236=0;
var uLocal_237=-1;
var uLocal_238=0;
var uLocal_239=-1;
var uLocal_240=0;
var uLocal_241=-1;
var uLocal_242=0;
var uLocal_243=-1;
var uLocal_244=0;
var uLocal_245=-1;
var uLocal_246=0;
var uLocal_247=-1;
var uLocal_248=0;
var uLocal_249=-1;
var uLocal_250=0;
var uLocal_251=-1;
var uLocal_252=0;
var uLocal_253=-1;
var uLocal_254=0;
var uLocal_255=-1;
var uLocal_256=0;
var uLocal_257=-1;
var uLocal_258=0;
var uLocal_259=-1;
var uLocal_260=0;
var uLocal_261=-1;
var uLocal_262=0;
var uLocal_263=-1;
var uLocal_264=0;
var uLocal_265=-1;
var uLocal_266=0;
var uLocal_267=-1;
var uLocal_268=0;
var uLocal_269=-1;
var uLocal_270=0;
var uLocal_271=-1;
var uLocal_272=0;
var uLocal_273=-1;
struct<749> Local_274={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<20> Local_275={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<20> Local_276[11];
struct<21> Local_277[13];
struct<19> Local_278={
26, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_279=0;
var uLocal_280=1;
var uLocal_281=0;
var uLocal_282=0;
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
var uLocal_286=0;
var uLocal_287=0;
var uLocal_288=0;
var uLocal_289=0;
var uLocal_290=5;
var uLocal_291=0;
var uLocal_292=0;
var uLocal_293=0;
var uLocal_294=0;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=1;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=5;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
var uLocal_314=0;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=0;
var uLocal_318=1;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=0;
var uLocal_327=0;
var uLocal_328=5;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=1;
var uLocal_338=0;
var uLocal_339=0;
var uLocal_340=0;
var uLocal_341=0;
var uLocal_342=0;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=0;
var uLocal_346=0;
var uLocal_347=5;
var uLocal_348=0;
var uLocal_349=0;
var uLocal_350=0;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=0;
var uLocal_354=0;
var uLocal_355=0;
var uLocal_356=1;
var uLocal_357=0;
var uLocal_358=0;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=0;
var uLocal_363=0;
var uLocal_364=0;
var uLocal_365=0;
var uLocal_366=5;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
var uLocal_371=0;
var uLocal_372=0;
var uLocal_373=0;
var uLocal_374=0;
var uLocal_375=1;
var uLocal_376=0;
var uLocal_377=0;
var uLocal_378=0;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=0;
var uLocal_383=0;
var uLocal_384=0;
var uLocal_385=5;
var uLocal_386=0;
var uLocal_387=0;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=0;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=0;
var uLocal_394=1;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=0;
var uLocal_398=0;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=0;
var uLocal_403=0;
var uLocal_404=5;
var uLocal_405=0;
var uLocal_406=0;
var uLocal_407=0;
var uLocal_408=0;
var uLocal_409=0;
var uLocal_410=0;
var uLocal_411=0;
var uLocal_412=0;
var uLocal_413=1;
var uLocal_414=0;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=0;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=0;
var uLocal_422=0;
var uLocal_423=5;
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=0;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=1;
var uLocal_433=0;
var uLocal_434=0;
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=0;
var uLocal_439=0;
var uLocal_440=0;
var uLocal_441=0;
var uLocal_442=5;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
var uLocal_447=0;
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=0;
var uLocal_451=1;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=0;
var uLocal_455=0;
var uLocal_456=0;
var uLocal_457=0;
var uLocal_458=0;
var uLocal_459=0;
var uLocal_460=0;
var uLocal_461=5;
var uLocal_462=0;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=0;
var uLocal_467=0;
var uLocal_468=0;
var uLocal_469=0;
var uLocal_470=1;
var uLocal_471=0;
var uLocal_472=0;
var uLocal_473=0;
var uLocal_474=0;
var uLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=0;
var uLocal_479=0;
var uLocal_480=5;
var uLocal_481=0;
var uLocal_482=0;
var uLocal_483=0;
var uLocal_484=0;
var uLocal_485=0;
var uLocal_486=0;
var uLocal_487=0;
var uLocal_488=0;
var uLocal_489=1;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=0;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=0;
var uLocal_498=0;
var uLocal_499=5;
var uLocal_500=0;
var uLocal_501=0;
var uLocal_502=0;
var uLocal_503=0;
var uLocal_504=0;
var uLocal_505=0;
var uLocal_506=0;
var uLocal_507=0;
var uLocal_508=1;
var uLocal_509=0;
var uLocal_510=0;
var uLocal_511=0;
var uLocal_512=0;
var uLocal_513=0;
var uLocal_514=0;
var uLocal_515=0;
var uLocal_516=0;
var uLocal_517=0;
var uLocal_518=5;
var uLocal_519=0;
var uLocal_520=0;
var uLocal_521=0;
var uLocal_522=0;
var uLocal_523=0;
var uLocal_524=0;
var uLocal_525=0;
var uLocal_526=0;
var uLocal_527=1;
var uLocal_528=0;
var uLocal_529=0;
var uLocal_530=0;
var uLocal_531=0;
var uLocal_532=0;
var uLocal_533=0;
var uLocal_534=0;
var uLocal_535=0;
var uLocal_536=0;
var uLocal_537=5;
var uLocal_538=0;
var uLocal_539=0;
var uLocal_540=0;
var uLocal_541=0;
var uLocal_542=0;
var uLocal_543=0;
var uLocal_544=0;
var uLocal_545=0;
var uLocal_546=1;
var uLocal_547=0;
var uLocal_548=0;
var uLocal_549=0;
var uLocal_550=0;
var uLocal_551=0;
var uLocal_552=0;
var uLocal_553=0;
var uLocal_554=0;
var uLocal_555=0;
var uLocal_556=5;
var uLocal_557=0;
var uLocal_558=0;
var uLocal_559=0;
var uLocal_560=0;
var uLocal_561=0;
var uLocal_562=0;
var uLocal_563=0;
var uLocal_564=0;
var uLocal_565=1;
var uLocal_566=0;
var uLocal_567=0;
var uLocal_568=0;
var uLocal_569=0;
var uLocal_570=0;
var uLocal_571=0;
var uLocal_572=0;
var uLocal_573=0;
var uLocal_574=0;
var uLocal_575=5;
var uLocal_576=0;
var uLocal_577=0;
var uLocal_578=0;
var uLocal_579=0;
var uLocal_580=0;
var uLocal_581=0;
var uLocal_582=0;
var uLocal_583=0;
var uLocal_584=1;
var uLocal_585=0;
var uLocal_586=0;
var uLocal_587=0;
var uLocal_588=0;
var uLocal_589=0;
var uLocal_590=0;
var uLocal_591=0;
var uLocal_592=0;
var uLocal_593=0;
var uLocal_594=5;
var uLocal_595=0;
var uLocal_596=0;
var uLocal_597=0;
var uLocal_598=0;
var uLocal_599=0;
var uLocal_600=0;
var uLocal_601=0;
var uLocal_602=0;
var uLocal_603=1;
var uLocal_604=0;
var uLocal_605=0;
var uLocal_606=0;
var uLocal_607=0;
var uLocal_608=0;
var uLocal_609=0;
var uLocal_610=0;
var uLocal_611=0;
var uLocal_612=0;
var uLocal_613=5;
var uLocal_614=0;
var uLocal_615=0;
var uLocal_616=0;
var uLocal_617=0;
var uLocal_618=0;
var uLocal_619=0;
var uLocal_620=0;
var uLocal_621=0;
var uLocal_622=1;
var uLocal_623=0;
var uLocal_624=0;
var uLocal_625=0;
var uLocal_626=0;
var uLocal_627=0;
var uLocal_628=0;
var uLocal_629=0;
var uLocal_630=0;
var uLocal_631=0;
var uLocal_632=5;
var uLocal_633=0;
var uLocal_634=0;
var uLocal_635=0;
var uLocal_636=0;
var uLocal_637=0;
var uLocal_638=0;
var uLocal_639=0;
var uLocal_640=0;
var uLocal_641=1;
var uLocal_642=0;
var uLocal_643=0;
var uLocal_644=0;
var uLocal_645=0;
var uLocal_646=0;
var uLocal_647=0;
var uLocal_648=0;
var uLocal_649=0;
var uLocal_650=0;
var uLocal_651=5;
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
var uLocal_670=5;
var uLocal_671=0;
var uLocal_672=0;
var uLocal_673=0;
var uLocal_674=0;
var uLocal_675=0;
var uLocal_676=0;
var uLocal_677=0;
var uLocal_678=0;
var uLocal_679=1;
var uLocal_680=0;
var uLocal_681=0;
var uLocal_682=0;
var uLocal_683=0;
var uLocal_684=0;
var uLocal_685=0;
var uLocal_686=0;
var uLocal_687=0;
var uLocal_688=0;
var uLocal_689=5;
var uLocal_690=0;
var uLocal_691=0;
var uLocal_692=0;
var uLocal_693=0;
var uLocal_694=0;
var uLocal_695=0;
var uLocal_696=0;
var uLocal_697=0;
var uLocal_698=1;
var uLocal_699=0;
var uLocal_700=0;
var uLocal_701=0;
var uLocal_702=0;
var uLocal_703=0;
var uLocal_704=0;
var uLocal_705=0;
var uLocal_706=0;
var uLocal_707=0;
var uLocal_708=5;
var uLocal_709=0;
var uLocal_710=0;
var uLocal_711=0;
var uLocal_712=0;
var uLocal_713=0;
var uLocal_714=0;
var uLocal_715=0;
var uLocal_716=0;
var uLocal_717=1;
var uLocal_718=0;
var uLocal_719=0;
var uLocal_720=0;
var uLocal_721=0;
var uLocal_722=0;
var uLocal_723=0;
var uLocal_724=0;
var uLocal_725=0;
var uLocal_726=0;
var uLocal_727=5;
var uLocal_728=0;
var uLocal_729=0;
var uLocal_730=0;
var uLocal_731=0;
var uLocal_732=0;
var uLocal_733=0;
var uLocal_734=0;
var uLocal_735=0;
var uLocal_736=1;
var uLocal_737=0;
var uLocal_738=0;
var uLocal_739=0;
var uLocal_740=0;
var uLocal_741=0;
var uLocal_742=0;
var uLocal_743=0;
var uLocal_744=0;
var uLocal_745=0;
var uLocal_746=5;
var uLocal_747=0;
var uLocal_748=0;
var uLocal_749=0;
var uLocal_750=0;
var uLocal_751=0;
var uLocal_752=0;
var uLocal_753=0;
var uLocal_754=0;
var uLocal_755=0;
var uLocal_756=0;
var uLocal_757=0;
var uLocal_758=4;
var uLocal_759=0;
var uLocal_760=5;
var uLocal_761=-1;
var uLocal_762=6;
var uLocal_763=-1;
var uLocal_764=0;
var uLocal_765=-1;
var uLocal_766=0;
var uLocal_767=-1;
var uLocal_768=0;
var uLocal_769=-1;
var uLocal_770=0;
var uLocal_771=-1;
var uLocal_772=0;
var uLocal_773=-1;
var uLocal_774=0;
var uLocal_775=0;
var uLocal_776=0;
var uLocal_777=0;
var uLocal_778=0;
var uLocal_779=0;
var uLocal_780=-1;
var uLocal_781=6;
var uLocal_782=-1;
var uLocal_783=0;
var uLocal_784=-1;
var uLocal_785=0;
var uLocal_786=-1;
var uLocal_787=0;
var uLocal_788=-1;
var uLocal_789=0;
var uLocal_790=-1;
var uLocal_791=0;
var uLocal_792=-1;
var uLocal_793=0;
var uLocal_794=0;
var uLocal_795=0;
var uLocal_796=0;
var uLocal_797=0;
var uLocal_798=0;
var uLocal_799=-1;
var uLocal_800=6;
var uLocal_801=-1;
var uLocal_802=0;
var uLocal_803=-1;
var uLocal_804=0;
var uLocal_805=-1;
var uLocal_806=0;
var uLocal_807=-1;
var uLocal_808=0;
var uLocal_809=-1;
var uLocal_810=0;
var uLocal_811=-1;
var uLocal_812=0;
var uLocal_813=0;
var uLocal_814=0;
var uLocal_815=0;
var uLocal_816=0;
var uLocal_817=0;
var uLocal_818=-1;
var uLocal_819=6;
var uLocal_820=-1;
var uLocal_821=0;
var uLocal_822=-1;
var uLocal_823=0;
var uLocal_824=-1;
var uLocal_825=0;
var uLocal_826=-1;
var uLocal_827=0;
var uLocal_828=-1;
var uLocal_829=0;
var uLocal_830=-1;
var uLocal_831=0;
var uLocal_832=0;
var uLocal_833=0;
var uLocal_834=0;
var uLocal_835=0;
var uLocal_836=0;
var uLocal_837=-1;
var uLocal_838=6;
var uLocal_839=-1;
var uLocal_840=0;
var uLocal_841=-1;
var uLocal_842=0;
var uLocal_843=-1;
var uLocal_844=0;
var uLocal_845=-1;
var uLocal_846=0;
var uLocal_847=-1;
var uLocal_848=0;
var uLocal_849=-1;
var uLocal_850=0;
var uLocal_851=0;
var uLocal_852=0;
var uLocal_853=0;
var uLocal_854=0;
var uLocal_855=0;
var uLocal_856=0;
var uLocal_857=5;
var uLocal_858=-1;
var uLocal_859=6;
var uLocal_860=-1;
var uLocal_861=0;
var uLocal_862=-1;
var uLocal_863=0;
var uLocal_864=-1;
var uLocal_865=0;
var uLocal_866=-1;
var uLocal_867=0;
var uLocal_868=-1;
var uLocal_869=0;
var uLocal_870=-1;
var uLocal_871=0;
var uLocal_872=0;
var uLocal_873=0;
var uLocal_874=0;
var uLocal_875=0;
var uLocal_876=0;
var uLocal_877=-1;
var uLocal_878=6;
var uLocal_879=-1;
var uLocal_880=0;
var uLocal_881=-1;
var uLocal_882=0;
var uLocal_883=-1;
var uLocal_884=0;
var uLocal_885=-1;
var uLocal_886=0;
var uLocal_887=-1;
var uLocal_888=0;
var uLocal_889=-1;
var uLocal_890=0;
var uLocal_891=0;
var uLocal_892=0;
var uLocal_893=0;
var uLocal_894=0;
var uLocal_895=0;
var uLocal_896=-1;
var uLocal_897=6;
var uLocal_898=-1;
var uLocal_899=0;
var uLocal_900=-1;
var uLocal_901=0;
var uLocal_902=-1;
var uLocal_903=0;
var uLocal_904=-1;
var uLocal_905=0;
var uLocal_906=-1;
var uLocal_907=0;
var uLocal_908=-1;
var uLocal_909=0;
var uLocal_910=0;
var uLocal_911=0;
var uLocal_912=0;
var uLocal_913=0;
var uLocal_914=0;
var uLocal_915=-1;
var uLocal_916=6;
var uLocal_917=-1;
var uLocal_918=0;
var uLocal_919=-1;
var uLocal_920=0;
var uLocal_921=-1;
var uLocal_922=0;
var uLocal_923=-1;
var uLocal_924=0;
var uLocal_925=-1;
var uLocal_926=0;
var uLocal_927=-1;
var uLocal_928=0;
var uLocal_929=0;
var uLocal_930=0;
var uLocal_931=0;
var uLocal_932=0;
var uLocal_933=0;
var uLocal_934=-1;
var uLocal_935=6;
var uLocal_936=-1;
var uLocal_937=0;
var uLocal_938=-1;
var uLocal_939=0;
var uLocal_940=-1;
var uLocal_941=0;
var uLocal_942=-1;
var uLocal_943=0;
var uLocal_944=-1;
var uLocal_945=0;
var uLocal_946=-1;
var uLocal_947=0;
var uLocal_948=0;
var uLocal_949=0;
var uLocal_950=0;
var uLocal_951=0;
var uLocal_952=0;
var uLocal_953=0;
var uLocal_954=5;
var uLocal_955=-1;
var uLocal_956=6;
var uLocal_957=-1;
var uLocal_958=0;
var uLocal_959=-1;
var uLocal_960=0;
var uLocal_961=-1;
var uLocal_962=0;
var uLocal_963=-1;
var uLocal_964=0;
var uLocal_965=-1;
var uLocal_966=0;
var uLocal_967=-1;
var uLocal_968=0;
var uLocal_969=0;
var uLocal_970=0;
var uLocal_971=0;
var uLocal_972=0;
var uLocal_973=0;
var uLocal_974=-1;
var uLocal_975=6;
var uLocal_976=-1;
var uLocal_977=0;
var uLocal_978=-1;
var uLocal_979=0;
var uLocal_980=-1;
var uLocal_981=0;
var uLocal_982=-1;
var uLocal_983=0;
var uLocal_984=-1;
var uLocal_985=0;
var uLocal_986=-1;
var uLocal_987=0;
var uLocal_988=0;
var uLocal_989=0;
var uLocal_990=0;
var uLocal_991=0;
var uLocal_992=0;
var uLocal_993=-1;
var uLocal_994=6;
var uLocal_995=-1;
var uLocal_996=0;
var uLocal_997=-1;
var uLocal_998=0;
var uLocal_999=-1;
var uLocal_1000=0;
var uLocal_1001=-1;
var uLocal_1002=0;
var uLocal_1003=-1;
var uLocal_1004=0;
var uLocal_1005=-1;
var uLocal_1006=0;
var uLocal_1007=0;
var uLocal_1008=0;
var uLocal_1009=0;
var uLocal_1010=0;
var uLocal_1011=0;
var uLocal_1012=-1;
var uLocal_1013=6;
var uLocal_1014=-1;
var uLocal_1015=0;
var uLocal_1016=-1;
var uLocal_1017=0;
var uLocal_1018=-1;
var uLocal_1019=0;
var uLocal_1020=-1;
var uLocal_1021=0;
var uLocal_1022=-1;
var uLocal_1023=0;
var uLocal_1024=-1;
var uLocal_1025=0;
var uLocal_1026=0;
var uLocal_1027=0;
var uLocal_1028=0;
var uLocal_1029=0;
var uLocal_1030=0;
var uLocal_1031=-1;
var uLocal_1032=6;
var uLocal_1033=-1;
var uLocal_1034=0;
var uLocal_1035=-1;
var uLocal_1036=0;
var uLocal_1037=-1;
var uLocal_1038=0;
var uLocal_1039=-1;
var uLocal_1040=0;
var uLocal_1041=-1;
var uLocal_1042=0;
var uLocal_1043=-1;
var uLocal_1044=0;
var uLocal_1045=0;
var uLocal_1046=0;
var uLocal_1047=0;
var uLocal_1048=0;
var uLocal_1049=0;
var uLocal_1050=0;
var uLocal_1051=5;
var uLocal_1052=-1;
var uLocal_1053=6;
var uLocal_1054=-1;
var uLocal_1055=0;
var uLocal_1056=-1;
var uLocal_1057=0;
var uLocal_1058=-1;
var uLocal_1059=0;
var uLocal_1060=-1;
var uLocal_1061=0;
var uLocal_1062=-1;
var uLocal_1063=0;
var uLocal_1064=-1;
var uLocal_1065=0;
var uLocal_1066=0;
var uLocal_1067=0;
var uLocal_1068=0;
var uLocal_1069=0;
var uLocal_1070=0;
var uLocal_1071=-1;
var uLocal_1072=6;
var uLocal_1073=-1;
var uLocal_1074=0;
var uLocal_1075=-1;
var uLocal_1076=0;
var uLocal_1077=-1;
var uLocal_1078=0;
var uLocal_1079=-1;
var uLocal_1080=0;
var uLocal_1081=-1;
var uLocal_1082=0;
var uLocal_1083=-1;
var uLocal_1084=0;
var uLocal_1085=0;
var uLocal_1086=0;
var uLocal_1087=0;
var uLocal_1088=0;
var uLocal_1089=0;
var uLocal_1090=-1;
var uLocal_1091=6;
var uLocal_1092=-1;
var uLocal_1093=0;
var uLocal_1094=-1;
var uLocal_1095=0;
var uLocal_1096=-1;
var uLocal_1097=0;
var uLocal_1098=-1;
var uLocal_1099=0;
var uLocal_1100=-1;
var uLocal_1101=0;
var uLocal_1102=-1;
var uLocal_1103=0;
var uLocal_1104=0;
var uLocal_1105=0;
var uLocal_1106=0;
var uLocal_1107=0;
var uLocal_1108=0;
var uLocal_1109=-1;
var uLocal_1110=6;
var uLocal_1111=-1;
var uLocal_1112=0;
var uLocal_1113=-1;
var uLocal_1114=0;
var uLocal_1115=-1;
var uLocal_1116=0;
var uLocal_1117=-1;
var uLocal_1118=0;
var uLocal_1119=-1;
var uLocal_1120=0;
var uLocal_1121=-1;
var uLocal_1122=0;
var uLocal_1123=0;
var uLocal_1124=0;
var uLocal_1125=0;
var uLocal_1126=0;
var uLocal_1127=0;
var uLocal_1128=-1;
var uLocal_1129=6;
var uLocal_1130=-1;
var uLocal_1131=0;
var uLocal_1132=-1;
var uLocal_1133=0;
var uLocal_1134=-1;
var uLocal_1135=0;
var uLocal_1136=-1;
var uLocal_1137=0;
var uLocal_1138=-1;
var uLocal_1139=0;
var uLocal_1140=-1;
var uLocal_1141=0;
var uLocal_1142=0;
var uLocal_1143=0;
var uLocal_1144=0;
var uLocal_1145=0;
var uLocal_1146=0;
var uLocal_1147=1203982208;
var uLocal_1148=-1;
var uLocal_1149=23;
var uLocal_1150=0;
var uLocal_1151=0;
var uLocal_1152=0;
var uLocal_1153=0;
var uLocal_1154=0;
var uLocal_1155=0;
var uLocal_1156=0;
var uLocal_1157=0;
var uLocal_1158=0;
var uLocal_1159=0;
var uLocal_1160=0;
var uLocal_1161=0;
var uLocal_1162=0;
var uLocal_1163=0;
var uLocal_1164=0;
var uLocal_1165=0;
var uLocal_1166=0;
var uLocal_1167=0;
var uLocal_1168=0;
var uLocal_1169=0;
var uLocal_1170=0;
var uLocal_1171=0;
var uLocal_1172=0;
var uLocal_1173=-1;
struct<7> Local_1174={
6, 0, 1203982208, 1203982208, 1203982208, 0, 0 
};
var uLocal_1175=0;
var uLocal_1176=0;
var uLocal_1177=1203982208;
var uLocal_1178=1203982208;
var uLocal_1179=1203982208;
var uLocal_1180=0;
var uLocal_1181=0;
var uLocal_1182=0;
var uLocal_1183=0;
var uLocal_1184=1203982208;
var uLocal_1185=1203982208;
var uLocal_1186=1203982208;
var uLocal_1187=0;
var uLocal_1188=0;
var uLocal_1189=0;
var uLocal_1190=0;
var uLocal_1191=1203982208;
var uLocal_1192=1203982208;
var uLocal_1193=1203982208;
var uLocal_1194=0;
var uLocal_1195=0;
var uLocal_1196=0;
var uLocal_1197=0;
var uLocal_1198=1203982208;
var uLocal_1199=1203982208;
var uLocal_1200=1203982208;
var uLocal_1201=0;
var uLocal_1202=0;
var uLocal_1203=0;
var uLocal_1204=0;
var uLocal_1205=1203982208;
var uLocal_1206=1203982208;
var uLocal_1207=1203982208;
var uLocal_1208=0;
var uLocal_1209=0;
var uLocal_1210=0;
var uLocal_1211=0;
var uLocal_1212=0;
var uLocal_1213=0;
var uLocal_1214=-1;
var uLocal_1215=0;
var uLocal_1216=0;
var uLocal_1217=0;
var uLocal_1218=0;
var uLocal_1219[31]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<2> Local_1220[6];
struct<2> Local_1221={
0, 0 
};
var uLocal_1222=0;
var uLocal_1223=0;
struct<6> Local_1224={
0, 0, 0, 0, 0, 0 
};
var uLocal_1225=0;
var uLocal_1226=0;
struct<8> Local_1227={
0, -1, -1, 0, 0, 0, 0, 0 
};
int iLocal_1228=0;
struct<2> Local_1229={
-1, -1 
};
struct<12> Local_1230={
0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 
};
int iLocal_1231[4]={
-1, -1, -1, -1 
};
struct<3> Local_1232={
-1, -1082130432, 3 
};
var uLocal_1233=-1082130432;
var uLocal_1234=0;
var uLocal_1235=0;
var uLocal_1236=-1082130432;
var uLocal_1237=0;
var uLocal_1238=0;
var uLocal_1239=-1082130432;
var uLocal_1240=0;
var uLocal_1241=0;
struct<23> Local_1242={
1, 0, 1, 0, 0, 0, 0, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_1243={
1, 0, 2 
};
var uLocal_1244=0;
var uLocal_1245=-1;
var uLocal_1246=0;
var uLocal_1247=0;
var uLocal_1248=0;
var uLocal_1249=1;
var uLocal_1250=0;
var uLocal_1251=0;
var uLocal_1252=-1;
var uLocal_1253=0;
var uLocal_1254=0;
var uLocal_1255=0;
var uLocal_1256=1;
var uLocal_1257=0;
var uLocal_1258=1;
var uLocal_1259=0;
var uLocal_1260=0;
var uLocal_1261=0;
struct<174> Local_1262={
1, 0, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 
};
var uLocal_1263=1;
var uLocal_1264=0;
var uLocal_1265[8]={
-1, -1, -1, -1, -1, -1, -1, -1 
};
struct<4> Local_1266[2];
struct<3> Local_1267={
1, 0, 10 
};
var uLocal_1268=0;
var uLocal_1269=0;
var uLocal_1270=0;
var uLocal_1271=0;
var uLocal_1272=0;
var uLocal_1273=0;
var uLocal_1274=0;
var uLocal_1275=0;
var uLocal_1276=0;
var uLocal_1277=0;
int iLocal_1278=-1;
struct<10> Local_1279={
-1, -1, -1, 0, 4, 0, 0, 0, 0, 1 
};
var uLocal_1280=0;
struct<3> Local_1281={
1, 0, 1 
};
var uLocal_1282=0;
var uLocal_1283=-1;
bool bLocal_1284=0;
bool bLocal_1285=0;
bool bLocal_1286=0;
bool bLocal_1287=0;
bool bLocal_1288=0;
int iLocal_1289=0;
int iLocal_1290=0;
int iLocal_1291=0;
int iLocal_1292=0;
struct<3> Local_1293={
0, 0, 0 
};
int iLocal_1294=0;
int iLocal_1295=0;
bool bLocal_1296=0;
bool bLocal_1297=0;
struct<2> Local_1298={
-1, -1 
};
int iLocal_1299=0;
int iLocal_1300=0;
var uLocal_1301=3;
var uLocal_1302=0;
var uLocal_1303=0;
var uLocal_1304=0;
int iLocal_1305=0;
int iLocal_1306=0;
var uLocal_1307=0;
int iLocal_1308=0;
int iLocal_1309=0;
int iLocal_1310=0;
int iLocal_1311=0;
var uLocal_1312=1;
var uLocal_1313=0;
int iLocal_1314[2]={
0, 0 
};
int iLocal_1315=0;
float fLocal_1316=0f;
float fLocal_1317=0f;
float fLocal_1318=0f;
float fLocal_1319=0f;
float fLocal_1320=0f;
int iLocal_1321=0;
int iLocal_1322[6]={
0, 0, 0, 0, 0, 0 
};
var uLocal_1323[6]={
0, 0, 0, 0, 0, 0 
};
var uLocal_1324=0;
var uLocal_1325=0;
var uLocal_1326=0;
var uLocal_1327=0;
var uLocal_1328=0;
var uLocal_1329=0;
var uLocal_1330=0;
var uLocal_1331=0;
var uLocal_1332=0;
struct<16> Local_1333={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<1301> Local_1334={
0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 31, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, -1, -1, 1232348144, 1232348144, 0, 1, 0, 0, -1, -1, 1232348144, 1232348144, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 9, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 3 
};
var uLocal_1335=1;
var uLocal_1336=0;
var uLocal_1337=-1;
var uLocal_1338=0;
var uLocal_1339=1;
var uLocal_1340=0;
var uLocal_1341=-1;
var uLocal_1342=0;
var uLocal_1343=1;
var uLocal_1344=0;
var uLocal_1345=-1;
var uLocal_1346=0;
struct<251> Local_1347[8];
int iLocal_1348=0;
int iLocal_1349=0;
struct<21> Local_1350={
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
fLocal_189=0.62f;
fLocal_190=0.51f;
fLocal_191=0.55f;
fLocal_192=25f;
iLocal_1305=-1;
iLocal_1306=-1;
iLocal_1309=-1;
fLocal_1316=-1f;
fLocal_1317=99999f;
fLocal_1318=99999f;
fLocal_1319=99999f;
fLocal_1320=999999f;
StringCopy(&Local_1333, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
Local_1333={
Local_1333 
};
Local_275={
Local_275 
};
func_4452(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(bLocal_1284){
if(!func_4400(ScriptParam_1350)){
func_4314(0, 1);
func_4189();
}}else{
func_4189();
}}else{
func_4314(0, 1);
func_4189();
}
func_4188(&(Local_1334.f_1228));
func_4024();
while (true){
func_4023();
if(func_4018()){
func_4314(0, 1);
func_4189();
}
if(func_4012()){
func_4314(0, 1);
func_4189();
}
if(Local_274.f_112.f_4 !=0){
Call_Loc(Local_274.f_112.f_4);
if(StackVal){
func_4314(0, 1);
func_4189();
}}
func_4452(1);
switch (func_4011()){
case 0:
switch (func_4010()){
case 1:
if(func_3689()){
func_3688(1);
}
break;
case 2:
case 3:
func_3688(3);
break;
}
break;
case 1:
func_3632();
func_2740();
func_2739();
if(func_4010() !=1){
func_2733();
if(Local_274.f_112.f_5 !=0){
Call_Loc(Local_274.f_112.f_5);
}
func_3688(func_4010());
}
break;
case 2:
func_3632();
func_2452();
func_1441();
if(func_4010() > 2){
func_4314(func_1440(11), 0);
func_3688(3);
}
break;
case 3:
func_4189();
break;
}
if(bLocal_1286){
switch (func_4010()){
case 0:
if(func_584()){
func_583(1);
}
break;
case 1:
if(func_582()==0){
func_6();
}else{
func_583(2);
}
break;
case 2:
if(func_2()){
func_583(3);
}
break;
case 3:
func_4189();
break;
}}
func_1();
}}


void func_1(){
Local_278.f_497++;
if(Local_278.f_497 >=Local_198.f_103){
Local_278.f_497=0;
}}

int func_2(){
if(Local_274.f_3.f_2 !=0){
Call_Loc(Local_274.f_3.f_2);
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
return func_4(&(Local_1334.f_1156), iParam0);
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
func_581();
if(Local_274.f_3 !=0){
Call_Loc(Local_274.f_3);
}
func_549();
func_517();
func_507();
func_206();
func_185();
func_43();
func_36();
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
if(!bLocal_1286){
return;
}
Local_1334.f_1148=iParam0;
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
if(Local_274.f_92==0){
return;
}
Call_Loc(Local_274.f_92);
if(!StackVal){
return;
}
if(!func_3(5) && Local_274.f_92.f_1 !=0){
Call_Loc(Local_274.f_92.f_1);
if(StackVal){
func_18(&(Local_1334.f_1188), 0, 0);
func_16(5);
}}
if(!func_15(&(Local_1334.f_1188))){
func_14(&(Local_1334.f_1188), 0, 0);
}elseif(func_15(&(Local_1334.f_1188))){
if(func_13(&(Local_1334.f_1188), func_19(), 0)){
if(Local_274.f_92.f_3 !=0){
Call_Loc(Local_274.f_92.f_3);
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
if(func_17(&(Local_1334.f_1156), iParam0)){}}

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
if(Local_198.f_1522 !=-1){
return Local_198.f_1522 * 60 * 1000;
}
return Local_198.f_1522;
}


void func_20(){
int iVar0;
if(func_22()==-1){
func_21(0);
Call_Loc(Local_276[func_22() /*20*/].f_17);
return;
}
while ((func_22() < iLocal_1299 && iVar0 < Local_276[func_22() /*20*/].f_19) && Local_276[func_22() /*20*/].f_1[iVar0 /*3*/] !=-1){
Call_Loc(Local_276[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
if(StackVal){
if(func_22() !=Local_276[func_22() /*20*/].f_1[iVar0 /*3*/]){
Call_Loc(Local_276[func_22() /*20*/].f_18);
Local_1334.f_1154=func_22();
func_21(Local_276[func_22() /*20*/].f_1[iVar0 /*3*/]);
MISC::SET_BIT(&(Local_1334.f_1155), func_22());
Call_Loc(Local_276[func_22() /*20*/].f_17);
}
return;
}
iVar0++;
}}


void func_21(int iParam0){
if(!bLocal_1286){
return;
}
Local_1334.f_1153=iParam0;
}

int func_22(){
return Local_1334.f_1153;
}


void func_23(){
}


void func_24(){
bool bVar0;
if(func_34()){
if(func_31()){
if(func_15(&(Local_1334.f_1074.f_17))){
func_30(&(Local_1334.f_1074.f_17));
func_29();
Local_1334.f_1074.f_19++;
}}}else{
bVar0=false;
while (bVar0 < 2){
if(func_28(bVar0) && Local_1334.f_1074[bVar0 /*8*/].f_1 !=-1){
func_25(bVar0);
Local_1334.f_1074.f_19++;
}
bVar0++;
}}}


void func_25(bool bParam0){
Local_1334.f_1074[bParam0 /*8*/].f_3=999999f;
Local_1334.f_1074[bParam0 /*8*/].f_4=999999f;
Local_1334.f_1074[bParam0 /*8*/].f_1=-1;
func_26();
}


void func_26(){
int iVar0;
iVar0=0;
while (iVar0 < 2){
Local_1334.f_1074[iVar0 /*8*/].f_5=func_27(iVar0);
iVar0++;
}}


var func__27(int iParam0){
int iVar0;
var uVar1[2];
var uVar2;
if(Local_198.f_1531[iParam0 /*4*/].f_3 > 0){
iVar0=0;
uVar1[0]=Local_198.f_1531[iParam0 /*4*/];
iVar0=0;
while (iVar0 < 1){
if(Local_198.f_1531[iParam0 /*4*/].f_1[iVar0] !=-1){
uVar1[iVar0 + 1]=Local_198.f_1531[iParam0 /*4*/].f_1[iVar0];
}
iVar0++;
}
uVar2=uVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_198.f_1531[iParam0 /*4*/].f_3 + 1)];
return uVar2;
}
return Local_198.f_1531[iParam0 /*4*/];
}

int func_28(bool bParam0){
if(!MISC::IS_BIT_SET(Local_1334.f_1074.f_21, bParam0)){
return 0;
}
return 1;
}


void func_29(){
int iVar0;
iVar0=0;
while (iVar0 < 2){
func_25(iVar0);
iVar0++;
}}


void func_30(var uParam0){
uParam0->f_1=0;
}


bool func_31(){
return (func_33() && func_32());
}

int func_32(){
bool bVar0;
bVar0=false;
while (bVar0 < 2){
if(!MISC::IS_BIT_SET(Local_1334.f_1074.f_21, bVar0)){
return 0;
}
bVar0++;
}
return 1;
}


var func__33(){
return Local_1334.f_1074.f_22;
}

int func_34(){
if(func_35(13)){
return 0;
}
return 1;
}


bool func_35(int iParam0){
return func_4(&(Local_198.f_16), iParam0);
}


void func_36(){
if(!func_42()){
return;
}
if(!func_3(2)){
if(func_37(&(Local_1334.f_1065), &(Local_1334.f_1065.f_3))){
func_16(2);
}}}

int func_37(var uParam0, var uParam1){
int iVar0[6];
int iVar1;
int iVar2;
int iVar3;
iVar2=0;
while (iVar2 < 6){
if(func_41(iVar2)){
iVar0[iVar1]=iVar2;
iVar1++;
}
iVar2++;
}
if(iVar1 < func_40()){
return 0;
}
iVar2=0;
while (iVar2 < func_40()){
if(func_39()){
if(iVar2 > 0){
(*uParam0)[iVar2]=(*uParam0)[(iVar2 - 1)];
}else{
iVar3=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
(*uParam0)[iVar2]=iVar0[iVar3];
if(iVar0[iVar3] < 32){
MISC::SET_BIT(uParam1, iVar0[iVar3]);
}
if(iVar2 < (func_40() - 1)){
func_38(&(iVar0[iVar3]), &(iVar0[(iVar1 - 1)]));
iVar1=(iVar1 - 1);
}}
iVar2++;
return 1;
}


void func_38(var uParam0, var uParam1){
var uVar0;
uVar0=*uParam0;
*uParam0=*uParam1;
*uParam1=uVar0;
}

int func_39(){
return 0;
}

int func_40(){
return Local_198.f_19;
}

int func_41(int iParam0){
return 0;
}

int func_42(){
return 0;
}


void func_43(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
var uVar5;
int iVar6;
int iVar7;
func_184(&uVar5);
iVar7=0;
while (iVar7 < Local_198.f_103){
func_183(iVar7, &bVar2, &bVar3, &iVar0, &iVar4);
if(bVar2){
if(Local_274.f_166.f_194 !=0){
Stack.Push(iVar7);
Stack.Push(iVar0);
Stack.Push(bVar3);
Call_Loc(Local_274.f_166.f_194);
}}
if(iVar4 > 2){
if(iVar4 !=6 && iVar4 !=4){
if(!bVar2){
func_182(iVar7, 6);
}elseif(bVar3){
func_182(iVar7, 6);
}elseif(func_158(iVar7, iVar0)){
func_182(iVar7, 6);
}else{
func_157(&uVar5, iVar7);
}}}else{
func_157(&uVar5, iVar7);
}
switch (iVar4){
case 0:
if(func_152(iVar7)){
func_182(iVar7, 2);
}
break;
case 1:
if(!bVar2){
if(func_149(iVar7)){
func_148(iVar7);
func_182(iVar7, 2);
}}elseif(func_147(iVar7)){
func_146(&(Local_1334.f_72[iVar7 /*25*/]));
}
break;
case 2:
if(!bVar1){
if(func_136(iVar7)){
if(func_84(iVar7)){
func_182(iVar7, 3);
if(func_83(iVar7, 8)){
func_82(iVar7, 31);
}
func_81(iVar7);
bVar1=true;
}}}
break;
case 3:
if(bVar2){
if(func_78(iVar7, iVar0)){
func_182(iVar7, 6);
break;
}
if(!bVar3){
func_60(iVar7);
func_55(iVar7, iVar0, 1);
if(func_54(iVar7)){
func_182(iVar7, 4);
}}}
break;
case 6:
if(!func_83(iVar7, 19)){
iVar6++;
}
func_82(iVar7, 8);
if(bVar2){
if(func_78(iVar7, iVar0)){
break;
}
if(func_54(iVar7)){
func_182(iVar7, 4);
}}
if(func_83(iVar7, 19) && func_53()){
func_146(&(Local_1334.f_72[iVar7 /*25*/]));
}
if(func_46(iVar7)){
if(func_147(iVar7)){
func_146(&(Local_1334.f_72[iVar7 /*25*/]));
}
func_182(iVar7, 1);
}
if(func_582()==0){
if(func_45(iVar7, 0)){
func_8(9);
}}
break;
case 4:
if(!func_45(iVar7, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0)){
func_82(iVar7, 26);
func_182(iVar7, 5);
}
break;
case 5:
break;
}
iVar7++;
}
if(Local_1334.f_1172 !=iVar6){
Local_1334.f_1172=iVar6;
}
func_44(&uVar5);
iVar7=Local_278.f_497;
func_183(iVar7, &bVar2, &bVar3, &iVar0, &iVar4);
switch (iVar4){
case 3:
if(bVar2){
if(!bVar3){
func_55(iVar7, iVar0, 0);
}}
break;
}}


void func_44(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 2){
if(MISC::IS_BIT_SET(*uParam0, bVar0)){
if(!MISC::IS_BIT_SET(Local_1334.f_1074.f_21, bVar0)){
MISC::SET_BIT(&(Local_1334.f_1074.f_21), bVar0);
}}elseif(MISC::IS_BIT_SET(Local_1334.f_1074.f_21, bVar0)){
MISC::CLEAR_BIT(&(Local_1334.f_1074.f_21), bVar0);
}
bVar0++;
}}


bool func_45(int iParam0, int iParam1){
return func_4(&(Local_198.f_103.f_1[iParam0 /*21*/]), iParam1);
}

int func_46(int iParam0){
if(func_582() !=0){
return 0;
}
if(func_83(iParam0, 19)){
return func_47(Local_198.f_103.f_1[iParam0 /*21*/].f_8);
}
if(func_45(iParam0, 10)){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_181);
return StackVal;
}
return 0;
}

int func_47(int iParam0){
if(!func_52()){
return 0;
}
if(func_53()){
return 0;
}
if(func_34() && func_50()){
return 0;
}
if(!func_48(iParam0)){
return 0;
}
if(func_34() && !func_31()){
return 0;
}
return 1;
}

int func_48(int iParam0){
int iVar0;
iVar0=func_49(1, iParam0);
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Local_1334.f_1074.f_21, iVar0);
}
return 0;
}

int func_49(int iParam0, int iParam1){
int iVar0;
switch (iParam0){
case 1:
iVar0=0;
while (iVar0 < 2){
if(Local_1334.f_1074[iVar0 /*8*/].f_5==iParam1){
return iVar0;
}
iVar0++;
}
break;
case 0:
iVar0=0;
while (iVar0 < 2){
if(Local_1334.f_1074[iVar0 /*8*/].f_5==Local_198.f_103.f_1[iParam1 /*21*/].f_8){
return iVar0;
}
iVar0++;
}
break;
}
return -1;
}


bool func_50(){
return Local_1334.f_1074.f_19 >=func_51();
}

int func_51(){
return Local_1334.f_1074.f_20;
}

int func_52(){
if(func_1440(58)){
if(Local_274.f_624.f_9==0){
return 1;
}
Call_Loc(Local_274.f_624.f_9);
return StackVal;
}
return 0;
}

int func_53(){
if(func_1440(58)){
Stack.Push(Local_274.f_624.f_8 !=0);
Call_Loc(Local_274.f_624.f_8);
if(StackVal && StackVal){
return 1;
}}
return 0;
}

int func_54(int iParam0){
if(Local_274.f_166.f_178 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_178);
return StackVal;
}
return 0;
}


void func_55(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_59(iParam0);
if(func_58(iParam0)==-1){
func_57(iParam0, 0);
if(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_14 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_14);
}
return;
}
if(func_56(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/]) !=iParam2){
return;
}
if(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_17 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_17);
}
while ((func_58(iParam0) < Local_278.f_498[iVar0 /*97*/] && iVar1 < Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_18) && Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_1[iVar1 /*2*/] !=-1){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_1[iVar1 /*2*/].f_1);
if(StackVal){
if(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_15 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_15);
}
func_57(iParam0, Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_1[iVar1 /*2*/]);
if(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_14 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_278.f_498[iVar0 /*97*/].f_1[func_58(iParam0) /*19*/].f_14);
}
return;
}
iVar1++;
}}

int func_56(int iParam0){
switch (iParam0){
case 12:
case 26:
return 1;
default:
}
return 0;
}


void func_57(int iParam0, int iParam1){
if(!bLocal_1286){
return;
}
Local_1334.f_72[iParam0 /*25*/].f_2=iParam1;
}

int func_58(int iParam0){
return Local_1334.f_72[iParam0 /*25*/].f_2;
}

int func_59(int iParam0){
if(func_4(&(Local_1334.f_72[iParam0 /*25*/].f_3), 19)){
return 3;
}
if(Local_274.f_166.f_1 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_1);
return StackVal;
}
return 0;
}


void func_60(int iParam0){
bool bVar0;
int iVar1;
bVar0=Local_198.f_103.f_1[iParam0 /*21*/].f_14;
if(func_77(bVar0)){
return;
}
iVar1=0;
while (iVar1 < Local_278[iParam0 /*19*/].f_16){
if(Local_278[iParam0 /*19*/].f_10[iVar1] !=0){
Stack.Push(iParam0);
Call_Loc(Local_278[iParam0 /*19*/].f_10[iVar1]);
if(StackVal){
if(!MISC::IS_BIT_SET(Local_1334.f_1064, bVar0)){
func_61(iParam0);
}
MISC::SET_BIT(&(Local_1334.f_1064), bVar0);
if(Local_274.f_166.f_186 !=0){
Stack.Push(iParam0);
Stack.Push(bVar0);
Stack.Push(iVar1);
Call_Loc(Local_274.f_166.f_186);
}}}
iVar1++;
}}


void func_61(int iParam0){
if(func_35(28)){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_72[iParam0 /*25*/])){
if(func_76(NETWORK::NET_TO_PED(Local_1334.f_72[iParam0 /*25*/]))){
func_62(func_74(), 1, 0);
}}}


void func_62(int iParam0, int iParam1, int iParam2){
if(func_72(1)){
func_64(Local_1298.f_0, func_65(1), iParam0, iParam1, iParam2);
}else{
func_64(Local_1298.f_0, func_63(bLocal_1288), iParam0, iParam1, iParam2);
}}

int func_63(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}


void func_64(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
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

int func_65(bool bParam0){
var uVar0;
bool bVar1;
bool bVar2;
bool bVar3;
if(func_72(1)){
bVar1=false;
while (bVar1 < 32){
bVar3=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_9(bVar3, 0, 0)){
if(func_70()){
if(func_68(bVar3, PLAYER::PLAYER_ID(), bParam0)){
MISC::SET_BIT(&uVar0, bVar3);
}}else{
bVar2=func_67();
if(bVar2 !=func_66()){
if(func_68(bVar3, bVar2, bParam0)){
MISC::SET_BIT(&uVar0, bVar3);
}}}}
bVar1++;
}}
return uVar0;
}

int func_66(){
return -1;
}


bool func_67(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

int func_68(bool bParam0, bool bParam1, bool bParam2){
if(bParam1 !=func_66()){
if(!bParam2){
if(func_69(bParam0, bParam1)){
return 0;
}}
if(Global_1894573[bParam0 /*608*/].f_10 !=func_66()){
return bParam1==Global_1894573[bParam0 /*608*/].f_10;
}}
return 0;
}

int func_69(int iParam0, int iParam1){
if(iParam1 !=func_66()){
if(iParam0 !=func_66()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_66()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


bool func_70(){
return func_71(PLAYER::PLAYER_ID());
}

int func_71(bool bParam0){
if(bParam0 !=func_66()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_66()){
return Global_1894573[bParam0 /*608*/].f_10==bParam0;
}}
return 0;
}


bool func_72(bool bParam0){
return func_73(PLAYER::PLAYER_ID(), bParam0);
}


bool func_73(bool bParam0, bool bParam1){
if(!bParam1){
if(func_71(bParam0)){
return 0;
}}
return Global_1894573[bParam0 /*608*/].f_10 !=func_66();
}

int func_74(){
int iVar0;
iVar0=func_75();
if(iVar0==0){
iVar0=3;
}
return iVar0;
}

int func_75(){
Call_Loc(Local_274.f_74);
return StackVal;
}

int func_76(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if((PED::GET_PED_TYPE(iParam0)==6 || PED::GET_PED_TYPE(iParam0)==29) || PED::GET_PED_TYPE(iParam0)==27){
return 1;
}}
return 0;
}


bool func_77(int iParam0){
return MISC::IS_BIT_SET(Local_1334.f_1064, iParam0);
}

int func_78(int iParam0, int iParam1){
Stack.Push(Local_274.f_166.f_205 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_166.f_205);
if(StackVal && StackVal){
if(Local_274.f_166.f_204 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_204);
}
if(func_80(iParam0)){
func_79(&(Local_1334.f_72[iParam0 /*25*/]));
}else{
func_146(&(Local_1334.f_72[iParam0 /*25*/]));
}
return 1;
}
return 0;
}


void func_79(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0)){
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&uVar0);
}}

int func_80(int iParam0){
if(func_45(iParam0, 18)){
return 1;
}
Stack.Push(Local_274.f_166.f_208 !=0);
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_208);
if(StackVal && StackVal){
return 1;
}
return 0;
}


void func_81(int iParam0){
}


void func_82(int iParam0, int iParam1){
if(func_17(&(Local_1334.f_72[iParam0 /*25*/].f_3), iParam1)){}}


bool func_83(int iParam0, int iParam1){
return func_4(&(Local_1334.f_72[iParam0 /*25*/].f_3), iParam1);
}

int func_84(int iParam0){
int iVar0;
int iVar1;
struct<3> Var2;
var uVar3;
func_135(0, iParam0);
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_188);
iVar0=StackVal;
if(func_134(iVar0)){
iVar1=Local_198.f_103.f_1[iParam0 /*21*/].f_8;
if(iVar1 !=-1){
if(func_133(Local_1334.f_723[iVar1 /*8*/])){
if(func_132(&(Local_1334.f_72[iParam0 /*25*/]), Local_1334.f_723[iVar1 /*8*/], 26, iVar0, Local_198.f_103.f_1[iParam0 /*21*/].f_9, 1, 1, 1)){
func_104(iParam0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
func_103();
return 1;
}}}else{
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_189);
Var2={
StackVal, StackVal, StackVal 
};
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_190);
uVar3=StackVal;
if(!func_102(Var2)){
if(!func_101(iParam0) || func_86(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
if(func_85(&(Local_1334.f_72[iParam0 /*25*/]), 26, iVar0, Var2, uVar3, 1, 1, 1)){
func_104(iParam0);
func_103();
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
return 1;
}}else{
func_103();
return 0;
}}}}
return 0;
}

int func_85(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
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

int func_86(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_95(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_87(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}

int func_87(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
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
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_92(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_9(bVar1, 1, 1)){
if(!func_89(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_88(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_92(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_92(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_88(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}


bool func_89(bool bParam0, int iParam1){
bool bVar0;
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_90(-1, 0)==8;
}else{
bVar0=Global_1853910[bParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_90(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_91();
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

int func_91(){
return Global_1574918;
}


Vector3 func__92(bool bParam0){
int iVar0;
iVar0=bParam0;
if((func_94() && Global_1853910[iVar0 /*862*/].f_832) && !func_102(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_93(bParam0);
}


Vector3 func__93(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}


bool func_94(){
return Global_2683864.f_19;
}

int func_95(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam6==0){
if(func_9(bVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_88(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam7) && bParam4) && func_96(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_93(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_96(bool bParam0){
if(func_100(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
Global_2764203={
func_99(bParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_97(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
return 0;
}

int func_97(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_98(bParam0);
if(!iVar0==func_66()){
if(iVar0==func_98(bParam1)){
return 1;
}}
return 0;
}

int func_98(bool bParam0){
if(bParam0 !=func_66()){
return Global_1894573[bParam0 /*608*/].f_10;
}
return func_66();
}
struct<13> func_99(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}

int func_100(bool bParam0, bool bParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_99(bParam0) 
};
Global_2764216={
func_99(bParam1) 
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

int func_101(int iParam0){
if((func_45(iParam0, 10) && func_83(iParam0, 8)) && !func_45(iParam0, 19)){
return 1;
}
return 0;
}

int func_102(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_103(){
if(Local_1334.f_1167 !=-1){
Local_1334.f_1194={
0f, 0f, 0f 
};
Local_1334.f_1203=0f;
iLocal_1308=0;
Local_1334.f_1150=-1;
Local_1334.f_1167=-1;
}}


void func_104(int iParam0){
int iVar0;
bool bVar1;
iVar0=NETWORK::NET_TO_PED(Local_1334.f_72[iParam0 /*25*/]);
bVar1=func_83(iParam0, 19);
func_126(iParam0, iVar0);
if(bVar1){
func_123(iParam0, iVar0);
}else{
func_113(iParam0, iVar0);
}
if(func_110(iParam0, iVar0)){
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, 1);
PED::SET_PED_FIRING_PATTERN(iVar0, joaat("FIRING_PATTERN_BURST_FIRE"));
}
if(Local_274.f_166.f_192 !=0){
Stack.Push(iParam0);
Stack.Push(iVar0);
Stack.Push(bVar1);
Call_Loc(Local_274.f_166.f_192);
}
if(func_45(iParam0, 5)){
if(!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
}
ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
func_105(iVar0, iParam0, 1, 0, 1, 1);
}}


void func_105(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(Local_198.f_103.f_1[iParam1 /*21*/].f_8 !=-1){
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
func_108(Var2, &Var3, &Var4, 0);
MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var4, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
if(bParam3){
PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
}
PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
}
if(bParam4){
func_106(iParam0, -1, 0);
}}}


void func_106(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
if(iParam1 !=-1){
iVar0=iParam1;
}
if(bParam2){
iVar1=0;
while (iVar1 < 11){
func_107(iVar1, iParam0);
iVar1++;
}}else{
func_107(iVar0, iParam0);
}}


void func_107(int iParam0, var uParam1){
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


void func_108(struct<3> Param0, var uParam1, var uParam2, bool bParam3){
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
if(func_109()){
fVar2=(fVar2 * -1f);
}
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
fVar3=(to_float(iVar5) / 15f);
if(func_109()){
fVar3=(fVar3 * -1f);
}
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
fVar4=(to_float(iVar5) / 10f);
if(func_109()){
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

int func_109(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_110(int iParam0, int iParam1){
if(func_45(iParam0, 9)){
return 1;
}
if(func_111(iParam1)){
return 1;
}
return 0;
}

int func_111(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(VEHICLE::IS_TURRET_SEAT(iVar0, func_112(iParam0, 0))){
return 1;
}}
return 0;
}

int func_112(int iParam0, int iParam1){
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


void func_113(int iParam0, int iParam1){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
PED::SET_PED_KEEP_TASK(iParam1, 1);
if(func_45(iParam0, 21)){
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, 1);
}else{
TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, 0);
}
if(func_45(iParam0, 6)){
PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 1);
}else{
PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, 0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, 1);
PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_198.f_103.f_1[iParam0 /*21*/].f_15);
PED::SET_PED_COMBAT_ABILITY(iParam1, func_122());
PED::SET_PED_ACCURACY(iParam1, func_121(iParam0));
PED::SET_PED_SHOOT_RATE(iParam1, func_120());
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, 0);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_119());
ENTITY::SET_ENTITY_HEALTH(iParam1, func_119(), 0);
PED::SET_PED_DIES_WHEN_INJURED(iParam1, 1);
if(func_118(iParam0)){
AUDIO::STOP_PED_SPEAKING_SYNCED(iParam1, 1);
}
func_114(iParam0, iParam1);
}


void func_114(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
struct<9> Var3;
if(func_83(iParam0, 19)){
return;
}
if(Local_198.f_103.f_1[iParam0 /*21*/].f_20 >=0.75f){
PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, 0), Local_198.f_103.f_1[iParam0 /*21*/].f_20, 0, 0);
return;
}elseif(Local_198.f_103.f_1[iParam0 /*21*/].f_20 < 0.75f && Local_198.f_103.f_1[iParam0 /*21*/].f_20 > -1f){}
iVar0=Local_198.f_103.f_1[iParam0 /*21*/].f_14;
iVar1=0;
while (iVar1 < 2){
iVar2=Local_198.f_103.f_548[iVar0 /*6*/].f_1[iVar1];
if(iVar2 !=-1){
if(func_116(iVar2, 4)){
Var3={
func_115(iVar2) 
};
PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, 0, 0);
}}
iVar1++;
}}


struct<9> func_115(int iParam0){
struct<9> Var0;
Var0=1;
if(Local_274.f_635.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_635.f_2);
Var0={
StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal 
};
}else{
Var0={
Local_198.f_1645.f_1[iParam0 /*9*/] 
};
Var0.f_2={
Local_198.f_1645.f_1[iParam0 /*9*/].f_2 
};
Var0.f_5={
Local_198.f_1645.f_1[iParam0 /*9*/].f_5 
};
Var0.f_8=Local_198.f_1645.f_1[iParam0 /*9*/].f_8;
}
return Var0;
}


bool func_116(int iParam0, int iParam1){
struct<9> Var0;
Var0={
func_117(iParam0) 
};
return func_4(&Var0, iParam1);
}


struct<9> func_117(int iParam0){
return Local_198.f_1645.f_1[iParam0 /*9*/];
}

int func_118(int iParam0){
if(func_35(35)){
return (iParam0 % 2)==0;
}
return 0;
}

int func_119(){
switch (Local_1334.f_1149){
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

int func_120(){
switch (Local_1334.f_1149){
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

int func_121(int iParam0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_191);
Stack.Push(StackVal==joaat("weapon_rpg"));
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_191);
if(StackVal || StackVal==joaat("weapon_railgun")){
return 2;
}
switch (Local_1334.f_1149){
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

int func_122(){
switch (Local_1334.f_1149){
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


void func_123(int iParam0, int iParam1){
func_124(iParam0, 32);
PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
PED::SET_PED_KEEP_TASK(iParam1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 1);
PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, 1);
PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
PED::SET_DRIVER_ABILITY(iParam1, 1f);
PED::SET_PED_ACCURACY(iParam1, func_121(iParam0));
PED::SET_PED_SHOOT_RATE(iParam1, func_120());
ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_119());
ENTITY::SET_ENTITY_HEALTH(iParam1, func_119(), 0);
PED::SET_PED_COMBAT_ABILITY(iParam1, func_122());
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}


void func_124(int iParam0, int iParam1){
if(func_125(&(Local_1334.f_72[iParam0 /*25*/].f_3), iParam1)){}}

int func_125(var uParam0, var uParam1){
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


void func_126(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(func_129(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_1334.f_72[iParam0 /*25*/]), 1);
}
if(!func_76(iParam1)){
PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
}
if(Local_198.f_103.f_1[iParam0 /*21*/].f_2==joaat("mp_g_m_pros_01")){
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
if(Local_198.f_103.f_1[iParam0 /*21*/].f_12 !=-1){
func_82(iParam0, 2);
PHYSICS::ACTIVATE_PHYSICS(iParam1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam1, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 1, 1);
}
if(func_45(iParam0, 11)){
NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, 1, 1);
}
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_191);
iVar0=StackVal;
if(iVar0 !=0){
if(iVar0==joaat("weapon_unarmed")){
WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, 1);
}else{
WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar0, 9999999, func_128(iParam0), 1);
}}
PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
PED::SET_PED_SEEING_RANGE(iParam1, Local_198.f_103.f_1[iParam0 /*21*/].f_17);
PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_198.f_103.f_1[iParam0 /*21*/].f_18);
PED::SET_PED_HEARING_RANGE(iParam1, Local_198.f_103.f_1[iParam0 /*21*/].f_19);
PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
iVar1=func_127(iParam0);
if(iVar1 !=joaat("COP")){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar1);
}}


var func__127(int iParam0){
return Local_198.f_103.f_548[Local_198.f_103.f_1[iParam0 /*21*/].f_14 /*6*/];
}

int func_128(int iParam0){
if(Local_274.f_166.f_206 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_206);
return StackVal;
}
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_2);
Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_2);
if(StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H")){
return 1;
}
if(func_83(iParam0, 21)){
return 1;
}
return 0;
}

int func_129(int iParam0){
if(Local_198.f_103.f_1[iParam0 /*21*/].f_12 !=-1){
if(func_130(Local_198.f_1641.f_1[Local_198.f_103.f_1[iParam0 /*21*/].f_12 /*2*/])){
return 1;
}}
if(func_35(22)){
return 1;
}
return 0;
}


bool func_130(int iParam0){
return func_131(iParam0)==-1;
}

int func_131(int iParam0){
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

int func_132(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7){
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

int func_133(int iParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
}
return 0;
}


bool func_134(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}


void func_135(int iParam0, var uParam1){
if(Local_1334.f_1167==-1){
Local_1334.f_1150=iParam0;
Local_1334.f_1167=uParam1;
}}

int func_136(int iParam0){
int iVar0;
if(!func_145(0, iParam0)){
return 0;
}
if(Local_198.f_103.f_1[iParam0 /*21*/].f_8 !=-1){
if(func_144(Local_198.f_103.f_1[iParam0 /*21*/].f_8) !=4){
return 0;
}}
iVar0=Local_198.f_103.f_1[iParam0 /*21*/].f_12;
if(iVar0 !=-1){
if(!func_137(Local_198.f_1641.f_1[iVar0 /*2*/]) || !func_13(&(Local_1334.f_1186), 2000, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1288)){
return 0;
}
Stack.Push(Local_274.f_166.f_207 !=0);
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_207);
if(StackVal && !StackVal){
return 0;
}
return 1;
}

int func_137(int iParam0){
int iVar0;
if(func_143(iParam0)){
return func_138(func_131(iParam0));
}else{
iVar0=0;
while (iVar0 < Local_198.f_1641){
if(Local_198.f_1641.f_1[iVar0 /*2*/]==iParam0){
if(INTERIOR::IS_VALID_INTERIOR(Local_1281[iVar0 /*3*/]) && !INTERIOR::IS_INTERIOR_CAPPED(Local_1281[iVar0 /*3*/])){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_138(int iParam0){
if(iParam0==28){
return func_142(&(Global_1955050.f_54), iParam0);
}
if(iParam0 !=-1){
func_139(iParam0);
return (func_142(&(Global_1955050.f_54), iParam0) && INTERIOR::IS_INTERIOR_READY(Global_1955050[iParam0]));
}
return 0;
}


void func_139(int iParam0){
int iVar0;
iVar0=iParam0;
if(Global_1955050[iVar0]==0){
Global_1955050[iVar0]=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_141(iParam0), func_140(iParam0));
}}


char* func_140(int iParam0){
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


Vector3 func__141(int iParam0){
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


bool func_142(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=(iParam1 / 32);
iVar1=(iParam1 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}


bool func_143(int iParam0){
return func_131(iParam0) !=-1;
}

int func_144(int iParam0){
return Local_1334.f_723[iParam0 /*8*/].f_1;
}

int func_145(int iParam0, int iParam1){
if(Local_1334.f_1150==-1){
return 1;
}
if(Local_1334.f_1150==iParam0){
if(Local_1334.f_1167==iParam1){
return 1;
}}
return 0;
}


void func_146(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_147(int iParam0){
if(Local_198.f_103.f_1[iParam0 /*21*/].f_12 !=-1 && func_130(Local_198.f_1641.f_1[Local_198.f_103.f_1[iParam0 /*21*/].f_12 /*2*/])){
return 0;
}
return 1;
}


void func_148(int iParam0){
func_57(iParam0, 0);
if(Local_274.f_166.f_181.f_3 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_181.f_3);
}}

int func_149(int iParam0){
int iVar0;
if(func_83(iParam0, 19)){
if(!func_150(Local_1334.f_1074.f_17, func_151(), 0)){
return 0;
}}
if(Local_274.f_166.f_181.f_4 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_181.f_4);
iVar0=StackVal;
if(iVar0 !=-1){
if(!func_13(&(Local_1334.f_72[iParam0 /*25*/].f_23), iVar0, 0)){
return 0;
}else{
func_30(&(Local_1334.f_72[iParam0 /*25*/].f_23));
}}}
return 1;
}

int func_150(var uParam0, var uParam1, int iParam2, bool bParam3){
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

int func_151(){
return Local_198.f_1531.f_11;
}

int func_152(int iParam0){
int iVar0;
if(func_83(iParam0, 19)){
if(func_154()){
iVar0=0;
while (iVar0 < 2){
if(func_153(iVar0, Local_198.f_103.f_1[iParam0 /*21*/].f_8)){
return 1;
}
iVar0++;
}
return 0;
}
return func_154();
}
if(Local_274.f_166.f_187 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_187);
return StackVal;
}
return 1;
}

int func_153(int iParam0, int iParam1){
if(iParam0 < Local_198.f_1531.f_13){
return iParam1==Local_1334.f_1074[iParam0 /*8*/].f_5;
}
return 0;
}

int func_154(){
Call_Loc(Local_274.f_624);
if(StackVal){
if(func_13(&(Local_1334.f_1074.f_17), func_156(), 0)){
func_155(58);
return 1;
}}
return 0;
}


void func_155(int iParam0){
if(func_17(&uLocal_1301, iParam0)){}}

int func_156(){
return Local_198.f_1531.f_10;
}


void func_157(var uParam0, int iParam1){
bool bVar0;
if(func_83(iParam1, 19)){
bVar0=func_49(0, iParam1);
if(bVar0 !=-1){
MISC::CLEAR_BIT(uParam0, bVar0);
}}}

int func_158(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(func_83(iParam0, 19)){
iVar0=func_49(0, iParam0);
if(iVar0 !=-1){
if(func_180(iVar0)){
if((Local_1334.f_1074[iVar0 /*8*/].f_2 !=-1 && func_179(Local_1334.f_1074[iVar0 /*8*/].f_2)==6) && Local_1334.f_1074[iVar0 /*8*/].f_3 >=299f){
return 1;
}
if(func_144(Local_198.f_103.f_1[iParam0 /*21*/].f_8) !=4){
return 1;
}
iVar1=0;
while (iVar1 < 1){
if((Local_1334.f_1074[iVar0 /*8*/].f_6[iVar1] !=-1 && func_179(Local_1334.f_1074[iVar0 /*8*/].f_6[iVar1])==6) && Local_1334.f_1074[iVar0 /*8*/].f_3 >=299f){
return 1;
}
iVar1++;
}
if(Local_1334.f_1074[iVar0 /*8*/].f_3 !=999999f && Local_1334.f_1074[iVar0 /*8*/].f_3 > func_178()){
return 1;
}
if(Local_1334.f_1074[iVar0 /*8*/].f_4 !=999999f && Local_1334.f_1074[iVar0 /*8*/].f_4 < func_177()){
func_82(iParam0, 32);
return 1;
}}
if(func_159(iVar0)){
return 1;
}
if(func_53()){
func_82(iParam0, 32);
return 1;
}}}
return 0;
}

int func_159(int iParam0){
if(!func_160(func_170(iParam0, 1), func_167(iParam0))){
return 1;
}
return 0;
}

int func_160(bool bParam0, int iParam1){
bool bVar0;
int iVar1;
if(Local_274.f_624.f_1 !=0){
Stack.Push(bParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_624.f_1);
return StackVal;
}
if(bParam0==-1){
return 0;
}
switch (func_166()){
case 3:
if(func_165(bParam0, 23)){
return 0;
}
if(func_177()==-1f || Local_1174[bParam0 /*7*/].f_2 > func_177()){
if(Local_1174[bParam0 /*7*/].f_4 !=func_66()){
if(func_163(Local_1174[bParam0 /*7*/].f_4)){
return 0;
}}}
break;
case 4:
bVar0=bParam0;
if(func_9(bVar0, 0, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0)){
iVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
if(func_162(iVar1, 2) || func_162(iVar1, 8)){
return 0;
}}else{
return 0;
}
break;
case 0:
if(func_83(bParam0, 2)){
return 0;
}
break;
case 1:
if(func_161(bParam0, 2)){
return 0;
}
break;
}
return 1;
}


bool func_161(int iParam0, int iParam1){
return func_4(&(Local_1334.f_723[iParam0 /*8*/].f_2), iParam1);
}


bool func_162(int iParam0, int iParam1){
return func_4(&(Local_1347[iParam0 /*251*/].f_1), iParam1);
}

int func_163(int iParam0){
if(iParam0 > -1){
if(Global_2657589[iParam0 /*466*/].f_246 > -1){
if(func_164(Global_2657589[iParam0 /*466*/].f_246)==4){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 4)){
return 1;
}}
return 0;
}

int func_164(int iParam0){
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


bool func_165(int iParam0, int iParam1){
return func_4(&(Local_1334.f_2.f_20[iParam0 /*3*/]), iParam1);
}

int func_166(){
if(Local_274.f_624.f_3 !=0){
Call_Loc(Local_274.f_624.f_3);
return StackVal;
}
return 3;
}

int func_167(int iParam0){
return func_168(func_170(iParam0, 0));
}

int func_168(bool bParam0){
return func_169(func_166(), bParam0);
}

int func_169(int iParam0, bool bParam1){
int iVar0;
if(bParam1==-1){
return iVar0;
}
switch (iParam0){
case 3:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_2[bParam1])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1334.f_2[bParam1]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1334.f_2[bParam1]);
}}
break;
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_72[bParam1 /*25*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1334.f_72[bParam1 /*25*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1334.f_72[bParam1 /*25*/]);
}}
break;
case 1:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_723[bParam1 /*8*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1334.f_723[bParam1 /*8*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1334.f_723[bParam1 /*8*/]);
}}
break;
case 2:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[bParam1 /*5*/])){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1334.f_908[bParam1 /*5*/]), 0)){
iVar0=NETWORK::NET_TO_ENT(Local_1334.f_908[bParam1 /*5*/]);
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

int func_170(int iParam0, bool bParam1){
if(iParam0 !=-1){
if(!bParam1){
if(!ENTITY::DOES_ENTITY_EXIST(func_168(Local_1334.f_1074[iParam0 /*8*/].f_1))){
Local_1334.f_1074[iParam0 /*8*/].f_1=func_171(iParam0);
}}
return Local_1334.f_1074[iParam0 /*8*/].f_1;
}
return -1;
}


bool func_171(int iParam0){
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
while (bVar2 < func_176()){
if(func_173(bVar2)){
iVar7=func_168(bVar2);
if(ENTITY::DOES_ENTITY_EXIST(iVar7)){
if(func_160(bVar2, iVar7)){
if(func_172(bVar2, iVar7)){
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

int func_172(bool bParam0, int iParam1){
if(Local_274.f_624.f_2 !=0){
Stack.Push(bParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_624.f_2);
return StackVal;
}
switch (func_166()){
case 3:
if(Local_1174[bParam0 /*7*/].f_4 !=func_66()){
return 1;
}
break;
}
return 0;
}

int func_173(int iParam0){
switch (func_166()){
case 3:
return 1;
case 0:
return func_45(iParam0, 2);
case 2:
return func_175(iParam0, 24);
case 1:
return func_174(iParam0, 2);
case 4:
return 1;
default:
}
return 0;
}


bool func_174(int iParam0, int iParam1){
return func_4(&(Local_198.f_688.f_1[iParam0 /*15*/]), iParam1);
}


bool func_175(int iParam0, int iParam1){
return func_4(&(Local_198.f_1036.f_1[iParam0 /*12*/]), iParam1);
}

int func_176(){
switch (func_166()){
case 3:
return Local_198.f_19;
case 0:
return Local_198.f_103;
case 2:
return Local_198.f_1036;
case 1:
return Local_198.f_688;
case 4:
return 32;
default:
}
return 0;
}


float func_177(){
if(Local_274.f_624.f_4 !=0){
Call_Loc(Local_274.f_624.f_4);
return StackVal;
}
return 200f;
}


float func_178(){
if(Local_274.f_624.f_7 !=0){
Call_Loc(Local_274.f_624.f_7);
return StackVal;
}
return 400f;
}

int func_179(int iParam0){
return Local_1334.f_72[iParam0 /*25*/].f_1;
}

int func_180(int iParam0){
bool bVar0;
bool bVar1;
if(func_166()==4){
bVar0=func_170(iParam0, 1);
if(bVar0 !=-1){
bVar1=bVar0;
if(!func_9(bVar1, 1, 1) || func_181(bVar1, 0, 0)){
return 0;
}}}
return 1;
}

int func_181(bool bParam0, bool bParam1, int iParam2){
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


void func_182(int iParam0, int iParam1){
if(!bLocal_1286){
return;
}
Local_1334.f_72[iParam0 /*25*/].f_1=iParam1;
}


void func_183(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4){
*iParam4=func_179(iParam0);
*bParam1=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_72[iParam0 /*25*/]);
if(*bParam1){
*iParam3=NETWORK::NET_TO_PED(Local_1334.f_72[iParam0 /*25*/]);
*bParam2=PED::IS_PED_INJURED(*iParam3);
}}


void func_184(var uParam0){
bool bVar0;
bVar0=false;
while (bVar0 < 2){
MISC::SET_BIT(uParam0, bVar0);
bVar0++;
}}


void func_185(){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
int iVar4;
iVar4=0;
while (iVar4 < Local_198.f_1036){
bVar3=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iVar4 /*5*/]);
if(bVar3){
iVar0=NETWORK::NET_TO_ENT(Local_1334.f_908[iVar4 /*5*/]);
bVar2=ENTITY::IS_ENTITY_DEAD(iVar0, 0);
if(Local_274.f_432.f_36 !=0){
Stack.Push(iVar4);
Stack.Push(iVar0);
Stack.Push(bVar2);
Call_Loc(Local_274.f_432.f_36);
}}
if(func_205(iVar4) > 1 && func_205(iVar4) !=3){
if(bVar3){
if(bVar2){
func_204(iVar4, 3);
}elseif(func_203(iVar4)){
func_204(iVar4, 3);
}}else{
func_204(iVar4, 3);
}}
func_200(iVar4, iVar0);
switch (func_205(iVar4)){
case 0:
if(func_199(iVar4)){
func_204(iVar4, 1);
}
break;
case 1:
if((!bVar1 && func_198(iVar4)) && func_186(iVar4)){
func_204(iVar4, 2);
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

int func_186(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
int iVar3;
int iVar4;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iParam0 /*5*/])){
Var1={
func_197(iParam0) 
};
Var2={
func_196(iParam0) 
};
if(func_102(Var1)){
return 0;
}
iVar3=Local_198.f_1036.f_1[iParam0 /*12*/].f_3;
if(!func_134(iVar3)){
return 0;
}
if(func_195(&(Local_1334.f_908[iParam0 /*5*/]), iVar3, Var1, 1, 1, 1, func_175(iParam0, 22), 1, 0, 0)){
iVar0=NETWORK::NET_TO_OBJ(Local_1334.f_908[iParam0 /*5*/]);
ENTITY::SET_ENTITY_ROTATION(iVar0, Var2, 2, 1);
func_191(iParam0, iVar0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iParam0 /*5*/])){
iVar4=func_190(iParam0);
if(iVar4 !=-1 && Local_198.f_1036.f_374[iVar4 /*6*/].f_2 !=-1){
iVar0=NETWORK::NET_TO_OBJ(Local_1334.f_908[iParam0 /*5*/]);
return func_187(iParam0, iVar0, iVar4);
}
return 1;
}
return 0;
}

int func_187(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=func_189(iParam2);
if(ENTITY::DOES_ENTITY_EXIST(iParam1) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0)){
if(func_188(iParam1)){
if(func_133(iVar0)){
iVar1=NETWORK::NET_TO_ENT(iVar0);
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam1, iVar1)){
Var2={
func_196(iParam0) 
};
Stack.Push(iParam1);
Stack.Push(iVar1);
Stack.Push(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, "chassis_dummy"));
Stack.Push(Local_198.f_1036.f_374[iParam2 /*6*/].f_3);
Stack.Push(Var2);
Stack.Push(iParam2);
Call_Loc(Local_274.f_432.f_25);
Stack.Push(0);
Stack.Push(iParam0);
Call_Loc(Local_274.f_432.f_26);
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

int func_188(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
}}
return 0;
}

int func_189(int iParam0){
switch (Local_198.f_1036.f_374[iParam0 /*6*/].f_1){
case 2:
return Local_1334.f_723[Local_198.f_1036.f_374[iParam0 /*6*/].f_2 /*8*/];
case 3:
return Local_1334.f_908[Local_198.f_1036.f_374[iParam0 /*6*/].f_2 /*5*/];
case 1:
return Local_1334.f_72[Local_198.f_1036.f_374[iParam0 /*6*/].f_2 /*25*/];
default:
}
return -1;
}

int func_190(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 18){
if(Local_198.f_1036.f_374[iVar0 /*6*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_191(int iParam0, int iParam1){
var uVar0;
var uVar1;
NETWORK::NETWORK_SET_OBJECT_SCOPE_DISTANCE(NETWORK::NET_TO_OBJ(Local_1334.f_908[iParam0 /*5*/]), 300);
ENTITY::SET_ENTITY_PROOFS(iParam1, func_175(iParam0, 17), func_175(iParam0, 18), func_175(iParam0, 19), func_175(iParam0, 20), func_175(iParam0, 21), 0, 0, 0);
func_194(iParam0, 0);
if(Local_198.f_1036.f_1[iParam0 /*12*/].f_11 !=-1 && func_130(Local_198.f_1641.f_1[Local_198.f_1036.f_1[iParam0 /*12*/].f_11 /*2*/])){
func_193(iParam0, 8);
}
if(func_175(iParam0, 32)){
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
}
if(!func_175(iParam0, 1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_1334.f_908[iParam0 /*5*/]));
}
if(func_175(iParam0, 2)){
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1334.f_908[iParam0 /*5*/], 1, 1);
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Local_1334.f_908[iParam0 /*5*/], 1);
NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, 1, 1);
}
if(func_175(iParam0, 3)){
ENTITY::SET_ENTITY_COLLISION(iParam1, false, 0);
}
if(func_175(iParam0, 4)){
ENTITY::SET_ENTITY_LIGHTS(iParam1, 1);
}
if(func_175(iParam0, 5)){
ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, 0);
}
if(func_175(iParam0, 6)){
ENTITY::SET_ENTITY_DYNAMIC(iParam1, 1);
}
if(func_175(iParam0, 7)){
ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
}
if(func_175(iParam0, 15)){
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1334.f_908[iParam0 /*5*/]), 1200);
}
if(func_175(iParam0, 8)){
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
}
if(func_175(iParam0, 9)){
ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_1334.f_908[iParam0 /*5*/]), 1);
}
if(func_175(iParam0, 34)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, func_197(iParam0), 0, 0, 1);
}elseif(func_175(iParam0, 16)){
ENTITY::SET_ENTITY_COORDS(iParam1, func_197(iParam0), 1, 0, 0, 1);
}
if(func_175(iParam0, 33)){
ENTITY::SET_ENTITY_ROTATION(iParam1, func_196(iParam0), 2, 1);
}
if(func_175(iParam0, 10)){
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
}
if(func_175(iParam0, 11)){
ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLE(iParam1, 1);
}
if(func_192(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, 1);
}
if(func_175(iParam0, 13)){
ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
}
if(func_175(iParam0, 14)){
Stack.Push(Local_274.f_432.f_24 !=0);
Stack.Push(iParam0);
Stack.Push(&uVar0);
Stack.Push(&uVar1);
Call_Loc(Local_274.f_432.f_24);
if(StackVal && StackVal){
AUDIO::LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, 1);
AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar1, 0);
}}
if(Local_274.f_432.f_33 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_432.f_33);
}}

int func_192(int iParam0){
if(func_175(iParam0, 12)){
return 1;
}
if(Local_198.f_1036.f_1[iParam0 /*12*/].f_11 !=-1 && func_130(Local_198.f_1641.f_1[Local_198.f_1036.f_1[iParam0 /*12*/].f_11 /*2*/])){
return 1;
}
if(func_35(22)){
return 1;
}
return 0;
}


void func_193(int iParam0, int iParam1){
if(func_17(&(Local_1334.f_908[iParam0 /*5*/].f_2), iParam1)){}}


void func_194(int iParam0, int iParam1){
if(func_125(&(Local_1334.f_908[iParam0 /*5*/].f_2), iParam1)){}}

int func_195(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9){
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


Vector3 func__196(int iParam0){
struct<3> Var0;
if(Local_274.f_432.f_38 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_432.f_38);
Var0={
StackVal, StackVal, StackVal 
};
}
if(func_102(Var0)){
Var0={
Local_198.f_1036.f_1[iParam0 /*12*/].f_8 
};
}
return Var0;
}


Vector3 func__197(int iParam0){
struct<3> Var0;
if(Local_274.f_432.f_37 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_432.f_37);
Var0={
StackVal, StackVal, StackVal 
};
}
if(func_102(Var0)){
Var0={
Local_198.f_1036.f_1[iParam0 /*12*/].f_4 
};
}
return Var0;
}

int func_198(int iParam0){
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1288)){
return 0;
}
return 1;
}

int func_199(int iParam0){
int iVar0;
if(Local_198.f_1036.f_1[iParam0 /*12*/].f_11 !=-1){
iVar0=Local_198.f_1036.f_1[iParam0 /*12*/].f_11;
if(!func_137(Local_198.f_1641.f_1[iVar0 /*2*/])){
return 0;
}}
if(Local_274.f_432.f_23 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_432.f_23);
return StackVal;
}
return 1;
}


void func_200(int iParam0, int iParam1){
if(Local_198.f_1036.f_1[iParam0 /*12*/].f_11==-1){
return;
}
if(func_205(iParam0) > 1 && func_205(iParam0) < 3){
if(func_201(iParam0, iParam1)){
func_193(iParam0, 8);
}else{
func_194(iParam0, 8);
}}}


bool func_201(int iParam0, int iParam1){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
iVar0=func_190(iParam0);
if(iVar0 !=-1 && Local_198.f_1036.f_374[iVar0 /*6*/].f_2 !=-1){
switch (Local_198.f_1036.f_374[iVar0 /*6*/].f_1){
case 2:
return func_161(Local_198.f_1036.f_374[iVar0 /*6*/].f_2, 2);
case 1:
return func_83(Local_198.f_1036.f_374[iVar0 /*6*/].f_2, 2);
}}
default:
}
return func_202(iParam0, 8);
}


bool func_202(int iParam0, int iParam1){
return func_4(&(Local_1334.f_908[iParam0 /*5*/].f_2), iParam1);
}

int func_203(int iParam0){
if(Local_274.f_432.f_27 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_432.f_27);
return StackVal;
}
return 0;
}


void func_204(int iParam0, int iParam1){
Local_1334.f_908[iParam0 /*5*/].f_1=iParam1;
}

int func_205(int iParam0){
return Local_1334.f_908[iParam0 /*5*/].f_1;
}


void func_206(){
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
while (iVar0 < Local_198.f_688){
bVar6=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_723[iVar0 /*8*/]);
if(bVar6){
iVar3=NETWORK::NET_TO_VEH(Local_1334.f_723[iVar0 /*8*/]);
bVar5=func_505(Local_1334.f_723[iVar0 /*8*/]);
bVar7=func_503(iVar3, 1, 1, 0, 0, 0, 1, 0, 0);
if(bVar5){
iVar1=func_500(iVar0, 2);
}}
if(func_144(iVar0) > 2){
if(func_144(iVar0) !=5 && func_144(iVar0) !=3){
if(!bVar6){
func_499(iVar0, 5);
}elseif(!bVar5){
func_499(iVar0, 5);
}elseif(func_498(iVar0, iVar3, bVar7)){
func_499(iVar0, 5);
}else{
func_497(iVar0, &iVar2);
}}}else{
func_497(iVar0, &iVar2);
}
if(Local_274.f_377.f_46 !=0){
Stack.Push(iVar0);
Stack.Push(iVar3);
Stack.Push(bVar5);
Stack.Push(iVar1);
Call_Loc(Local_274.f_377.f_46);
}
func_494(iVar0, iVar3);
switch (func_144(iVar0)){
case 0:
if(func_493(iVar0)){
func_499(iVar0, 2);
}
break;
case 1:
if(!bVar6){
if(func_492(iVar0)){
func_499(iVar0, 2);
}}else{
func_146(&(Local_1334.f_723[iVar0 /*8*/]));
}
break;
case 2:
if(!bVar4){
if(func_491(iVar0)){
if(func_223(iVar0)){
func_499(iVar0, 4);
bVar4=true;
}}}
break;
case 4:
if(bVar6){
if(func_222(iVar0, iVar3)){
func_499(iVar0, 5);
}else{
if(bVar5){
func_221(iVar0, iVar3);
func_212(iVar0, iVar3);
}
break;
case 5:
if(func_174(iVar0, 0)){
func_8(10);
}
if(bVar6){
if(func_222(iVar0, iVar3)){
}else{
if(func_174(iVar0, 23)){
if(bVar6){
func_146(&(Local_1334.f_723[iVar0 /*8*/]));
}}
if(func_211(iVar0)){
func_146(&(Local_1334.f_723[iVar0 /*8*/]));
func_499(iVar0, 1);
}
break;
case 3:
break;
case 6:
if(bVar6 && func_210(iVar0, iVar3)){
func_146(&(Local_1334.f_723[iVar0 /*8*/]));
}
break;
case 7:
break;
}
if(bVar7){
func_209(iVar0, 13);
}
else{
func_208(iVar0, 13);
}}
iVar0++;
func_207(&iVar2);
}


void func_207(int iParam0){
if(Local_1334.f_1074.f_22 !=*iParam0){
Local_1334.f_1074.f_22=*iParam0;
}
if(func_13(&uLocal_1330, 3000, 0)){
func_30(&uLocal_1330);
}}


void func_208(int iParam0, int iParam1){
if(func_125(&(Local_1334.f_723[iParam0 /*8*/].f_2), iParam1)){}}


void func_209(int iParam0, int iParam1){
if(func_17(&(Local_1334.f_723[iParam0 /*8*/].f_2), iParam1)){}}

int func_210(int iParam0, int iParam1){
if(func_174(iParam0, 23) || func_161(iParam0, 15)){
return 1;
}
Stack.Push(Local_274.f_377.f_52 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_377.f_52);
if(StackVal && StackVal){
return 1;
}
return 0;
}

int func_211(int iParam0){
if(func_582() !=0){
return 0;
}
if(func_161(iParam0, 15)){
return func_47(iParam0);
}
if(func_174(iParam0, 13)){
if(Local_274.f_377.f_33 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_33);
return StackVal;
}
return 1;
}
return 0;
}


void func_212(int iParam0, int iParam1){
int iVar0;
struct<3> Var1;
int iVar2;
if(!func_161(iParam0, 15)){
return;
}
iVar0=func_49(1, iParam0);
if(iVar0==-1){
return;
}
if(!func_13(&uLocal_1330, 3000, 0)){
return;
}
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
Local_1334.f_1074[iVar0 /*8*/].f_4=vdist(Var1, func_213());
iVar2=func_167(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
Local_1334.f_1074[iVar0 /*8*/].f_3=vdist(Var1, ENTITY::GET_ENTITY_COORDS(iVar2, 0));
}}


Vector3 func__213(){
if(Local_274.f_679.f_4.f_2 !=0){
Call_Loc(Local_274.f_679.f_4.f_2);
return StackVal, StackVal, StackVal;
}
return func_214(func_220());
}


Vector3 func__214(int iParam0){
struct<3> Var0;
struct<3> Var1;
if(bLocal_1285 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_1290, 0)){
if(VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_1295)){
Var0={
func_217(iParam0) 
};
if(!func_102(Var0)){
return Var0;
}}
Var1={
func_216(iParam0) 
};
if(!func_102(Var1)){
return Var1;
}}
return func_215(iParam0);
}


Vector3 func__215(int iParam0){
if(iParam0 !=0){
return Global_1956139.f_1[iParam0 /*6*/];
}
return 0f, 0f, 0f;
}


Vector3 func__216(int iParam0){
if(iParam0 !=0){
return Global_1956139.f_1[iParam0 /*6*/].f_3;
}
return 0f, 0f, 0f;
}


Vector3 func__217(int iParam0){
switch (iParam0){
case 795:
case 796:
case 797:
case 798:
case 799:
case 800:
case 801:
case 802:
return func_218(func_219(iParam0));
default:
}
return 0f, 0f, 0f;
}


Vector3 func__218(int iParam0){
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

int func_219(int iParam0){
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

int func_220(){
if(Local_274.f_679.f_4.f_1 !=0){
Call_Loc(Local_274.f_679.f_4.f_1);
return StackVal;
}
if(iLocal_1291 !=-1){
return Local_1230.f_1[Local_1347[iLocal_1291 /*251*/].f_139 /*4*/];
}
return 0;
}


void func_221(int iParam0, int iParam1){
struct<3> Var0;
float fVar1;
if(iParam0 !=Local_198.f_688.f_347){
return;
}
Var0={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
fVar1=500f;
if(func_102(Local_1334.f_1200)){
Local_1334.f_1200={
5000f, 8500f, 0f 
};
}
if(vdist2(Var0, Local_1334.f_1200) > (550f * 550f)){
if(Local_1334.f_1171 !=-1){
MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_1334.f_1171, 0);
}
Local_1334.f_1200={
Var0 
};
Local_1334.f_1171=MISC::ADD_POP_MULTIPLIER_SPHERE(Local_1334.f_1200, fVar1, 1f, 0.02f, 0, 1);
}}

int func_222(int iParam0, int iParam1){
Stack.Push(Local_274.f_377.f_52 !=0);
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_377.f_52);
if(StackVal && StackVal){
func_146(&(Local_1334.f_723[iParam0 /*8*/]));
return 1;
}
return 0;
}

int func_223(int iParam0){
int iVar0;
bool bVar1;
int iVar2;
func_135(1, iParam0);
iVar0=Local_198.f_688.f_1[iParam0 /*15*/].f_3;
func_490(&iVar0, iParam0);
if(!func_134(iVar0)){
return 0;
}
bVar1=true;
if(func_102(Local_1334.f_1194)){
if(func_161(iParam0, 15)){
func_488(1);
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
if(!func_483(iParam0)){
bVar1=false;
}}elseif(!func_475(iParam0)){
bVar1=false;
}}else{
if(func_174(iParam0, 35) && !func_161(iParam0, 24)){
if(!func_86(Local_198.f_688.f_1[iParam0 /*15*/].f_4, 10f, 1065353216, 0f, 0f, 0, 0, 0, 0f, 0, -1, 0, 0, 0, 0, 0, 1)){
func_209(iParam0, 24);
}}
if(func_174(iParam0, 17) || func_161(iParam0, 24)){
if(!func_347(iParam0, &(Local_1334.f_1194), &(Local_1334.f_1203))){
bVar1=false;
}}elseif(func_174(iParam0, 25)){
Stack.Push(iParam0);
Stack.Push(&(Local_1334.f_1194));
Stack.Push(&(Local_1334.f_1203));
Call_Loc(Local_274.f_377.f_37);
if(!StackVal){
bVar1=false;
}}elseif(func_174(iParam0, 18)){
if(!func_475(iParam0)){
bVar1=false;
}}elseif(func_174(iParam0, 19)){
if(!func_483(iParam0)){
bVar1=false;
}}else{
Local_1334.f_1194={
Local_198.f_688.f_1[iParam0 /*15*/].f_4 
};
Local_1334.f_1203=Local_198.f_688.f_1[iParam0 /*15*/].f_7;
}}}
if(bVar1){
if(!func_174(iParam0, 30)){
func_324(Local_1334.f_1194, 30f, 0);
MISC::CLEAR_AREA(Local_1334.f_1194, 30f, 0, 0, 0, 1);
}
if(func_321(&(Local_1334.f_723[iParam0 /*8*/]), iVar0, Local_1334.f_1194, Local_1334.f_1203, 1, 1, 1, 0, 1, 1, 0, 0, Local_1334.f_1194.f_2 <=-100f, 0)){
iVar2=NETWORK::NET_TO_VEH(Local_1334.f_723[iParam0 /*8*/]);
func_488(0);
func_224(iParam0, iVar2);
func_103();
return 1;
}}else{
func_103();
}
return 0;
}


void func_224(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam1);
if(!func_244(iParam0, iParam1)){
func_243(iParam0, iParam1);
}
if(Local_198.f_688.f_1[iParam0 /*15*/].f_9 !=-1 && func_130(Local_198.f_1641.f_1[Local_198.f_688.f_1[iParam0 /*15*/].f_9 /*2*/])){
func_209(iParam0, 2);
}
if(func_242(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, 1);
}
ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_174(iParam0, 10));
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_174(iParam0, 3));
VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, func_174(iParam0, 6));
VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_174(iParam0, 5));
if(VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0)){
VEHICLE::ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(iParam1);
}
if(func_174(iParam0, 4)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
}
if(func_174(iParam0, 25)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_1334.f_1194, 0, 0, 1);
}
if(func_174(iParam0, 8)){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam1, 0);
}
if(func_174(iParam0, 28)){
NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_1334.f_723[iParam0 /*8*/], 1, 1);
NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, 1, 1);
}
if(func_161(iParam0, 14)){
ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam1, 1);
VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(iParam1, 0);
if(func_241(iParam0, iVar0)){
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam1, func_240(iParam0, iVar0));
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, 0);
VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
}
func_238(iParam1, iVar0);
func_237(iParam1, 1);
VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, 0);
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam1, func_174(iParam0, 7), 0);
func_236(iParam0, iParam1);
iVar1=func_235(iParam0);
if(iVar1 !=-1 && func_234(iVar1) !=-1){
func_233(NETWORK::NET_TO_ENT(Local_1334.f_723[iParam0 /*8*/]), Local_1334.f_1253.f_1[func_234(iVar1) /*5*/].f_1);
}}
if(func_174(iParam0, 11)){
ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
}
if(func_174(iParam0, 32)){
VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, 1);
}
if(func_174(iParam0, 33)){
VEHICLE::SET_VEHICLE_SIREN(iParam1, 1);
}
if(func_232(iParam1)){
if(func_174(iParam0, 34)){
VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, 1, 1);
}else{
VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam1, 0, 1);
}}
if(func_161(iParam0, 15)){
iVar2=func_231(iParam0);
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
if(func_174(iParam0, 19) || ENTITY::IS_ENTITY_IN_AIR(iParam1)){
VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam1, 2);
}}
if(VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)){
VEHICLE::SET_BOAT_ANCHOR(iParam1, 1);
}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iParam1, 1);
}
if(func_161(iParam0, 15) || func_174(iParam0, 19)){
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
if(!func_230() || func_229()){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, 1);
}
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_198.f_688.f_1[iParam0 /*15*/].f_3)){
func_227(iParam0, iParam1);
}
ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(iParam1, 1);
func_225(iParam1);
NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_1334.f_723[iParam0 /*8*/], 1);
if(Local_274.f_377.f_43 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_377.f_43);
}}


void func_225(int iParam0){
int iVar0;
func_226(iParam0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 11);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
}}


void func_226(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh")){
DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", true);
}}}


void func_227(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 6){
if(VEHICLE::GET_IS_DOOR_VALID(iParam1, iVar0)){
iVar1=func_228(iParam0, iVar0);
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

int func_228(int iParam0, int iParam1){
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
if(MISC::IS_BIT_SET(Local_198.f_688.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1))){
return iVar1;
}
iVar1++;
}
return -1;
}

int func_229(){
return 0;
}

int func_230(){
return 0;
}

int func_231(int iParam0){
return func_168(func_170(func_49(1, iParam0), 0));
}

int func_232(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("akula") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("annihilator2")){
return 1;
}else{
return 0;
}}
return 0;
}


void func_233(int iParam0, bool bParam1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
}}

int func_234(int iParam0){
return Local_1334.f_2.f_53[iParam0];
}

int func_235(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if(Local_1334.f_2.f_39[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_236(int iParam0, int iParam1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2)){
DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", 1);
}}


void func_237(int iParam0, bool bParam1){
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


void func_238(int iParam0, int iParam1){
switch (iParam1){
case joaat("phantom2"):
case joaat("dune5"):
VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(iParam0, 0);
break;
}
func_239(iParam0);
}


void func_239(int iParam0){
if(!Global_262145.f_4712){
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
}}


float func_240(int iParam0, int iParam1){
if(Local_274.f_377.f_36 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_36);
return StackVal;
}
switch (iParam1){
case joaat("insurgent3"):
return 1f;
default:
}
return 0.2f;
}


bool func_241(int iParam0, int iParam1){
return func_240(iParam0, iParam1) !=1f;
}

int func_242(int iParam0){
if(Local_198.f_688.f_1[iParam0 /*15*/].f_9 !=-1){
if(func_130(Local_198.f_1641.f_1[Local_198.f_688.f_1[iParam0 /*15*/].f_9 /*2*/])){
return 1;
}}
if(func_35(22)){
return 1;
}
return 0;
}


void func_243(int iParam0, int iParam1){
if(Local_198.f_688.f_1[iParam0 /*15*/].f_8 !=-1){
VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_198.f_688.f_1[iParam0 /*15*/].f_8, Local_198.f_688.f_1[iParam0 /*15*/].f_8);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_198.f_688.f_1[iParam0 /*15*/].f_8, Local_198.f_688.f_1[iParam0 /*15*/].f_8);
}}

int func_244(var uParam0, int iParam1){
struct<101> Var0;
if(Local_274.f_377.f_44 !=0){
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
Call_Loc(Local_274.f_377.f_44);
if(StackVal){
func_245(iParam1, &Var0, 0, 1, 1);
return 1;
}}
return 0;
}


void func_245(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(PLAYER::PLAYER_ID() !=func_66()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_298(iParam0, uParam1, bParam2, bParam3);
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
if(func_297(ENTITY::GET_ENTITY_MODEL(iParam0))){
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
if(func_296(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
}
if(func_295(iParam0)){
func_289(iParam0, func_292(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
}
if(MISC::IS_BIT_SET(uParam1->f_95, 0)){
func_260(iParam0, &(uParam1->f_81));
}
if((!func_252(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_249(iParam0);
}
if(func_248(iVar0)){
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
if(func_247(ENTITY::GET_ENTITY_MODEL(iParam0))){
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
if(func_246(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
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


bool func_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_247(int iParam0){
return func_297(iParam0);
}

int func_248(int iParam0){
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


void func_249(int iParam0){
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
func_250(Var0);
}}}}


void func_250(struct<3> Param0){
struct<3> Var0;
Var0.f_0=-1745262668;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=Param0.f_0;
Var0.f_2.f_1=Param0.f_1;
Var0.f_2.f_2=Param0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_251(1, 1));
}

int func_251(int iParam0, bool bParam1){
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
}elseif(!func_89(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}

int func_252(int iParam0){
int iVar0;
if(func_259()){
iVar0=0;
while (iVar0 < 60){
if(func_164(iVar0)==iParam0){
if(func_253(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_253(int iParam0){
return func_254(iParam0, 6, 1);
}

int func_254(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_258()==0){
return MISC::IS_BIT_SET(func_255(func_257(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_255(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_256(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_256(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_91();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_257(int iParam0){
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

int func_258(){
return Global_32163;
}


bool func_259(){
return Global_100733.f_388 > 0;
}

int func_260(int iParam0, var uParam1){
int iVar0;
bool bVar1;
if(!func_270(iParam0, uParam1)){
return 1;
}
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==0){
if(!func_268(iParam0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
if(func_263(&iParam0, bVar1)){
}else{
return 1;
}}else{
return 1;
}}elseif(iVar0 >=3){
return 1;
}elseif(func_261(iParam0)){}
return 0;
}

int func_261(int iParam0){
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
func_262(iParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_262(int iParam0){
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

int func_263(int iParam0, bool bParam1){
func_267();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0)){
Global_1949998.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
if(Global_1949998.f_11 < 0f){
Global_1949998.f_11=0f;
}}
func_265(*iParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
Global_1949998.f_1.f_2=(Global_1949998.f_1.f_2 - Global_1949998.f_11);
if(Global_1949998.f_4.f_2 < 0f){
Global_1949998.f_12=1;
}
Global_1949998.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("comet4")){
Global_1949998.f_13=255;
}
if(Global_1949998.f_12){
if(func_264(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)){
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
if(((Global_1949998.f_23==0 && func_264(iParam0, bParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)) || Global_1949998.f_23 !=0) && ((Global_1949998.f_24==0 && func_264(iParam0, bParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13)) || Global_1949998.f_24 !=0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577913=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577913=MISC::GET_GAME_TIMER();
}
return 1;
}}
return 0;
}


bool func_264(var uParam0, bool bParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8){
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(bParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_265(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
if(((!func_266(Global_1950024, 0f, 0f, 0f, 0) && !func_266(Global_1950027, 0f, 0f, 0f, 0)) && !func_266(Global_1950030, 0f, 0f, 0f, 0)) && !Global_1950033==0f){
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


bool func_266(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_267(){
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

int func_268(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_269(iParam0)){
return 1;
}}
return 0;
}

int func_269(int iParam0){
int iVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
return MISC::IS_BIT_SET(iVar0, 16);
}}}
return 0;
}

int func_270(int iParam0, var uParam1){
bool bVar0;
bool bVar1;
if(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
bVar0=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
}else{
bVar0=func_66();
}
bVar1=false;
if(bVar0==PLAYER::PLAYER_ID()){
if(func_281(15, 0)){
bVar1=true;
}elseif(func_277(1)){
bVar1=true;
}}else{
bVar1=true;
}
if(((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || bVar0==func_66()) || !func_9(bVar0, 0, 0)) || !bVar1) || func_271(iParam0)){
return 0;
}
return 1;
}

int func_271(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
if(func_273(PLAYER::PLAYER_ID())==3){
if(func_272(iParam0) !=-1){
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

int func_272(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_273(bool bParam0){
if(func_276(bParam0)==233){
return func_274(bParam0);
}
return -1;
}

int func_274(bool bParam0){
if(func_275(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_275(bool bParam0, int iParam1){
if(Global_1894573[bParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_276(bool bParam0){
if(func_275(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_33;
}
return -1;
}


bool func_277(bool bParam0){
return func_278(PLAYER::PLAYER_ID(), bParam0);
}

int func_278(bool bParam0, bool bParam1){
return func_279(bParam0, bParam1, 1);
}

int func_279(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_66()){
return 0;
}
if(!bParam1){
if(func_280(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_66() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_280(bool bParam0, int iParam1){
if(bParam0 !=func_66()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_66()){
if(Global_1894573[bParam0 /*608*/].f_10==bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_281(int iParam0, bool bParam1){
var uVar0;
int iVar1;
if(bParam1){
if(iParam0==15){
return 1;
}}
if(func_286(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return 1;
break;
}}
uVar0=func_283(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_282(iVar1));
}

int func_282(int iParam0){
return (iParam0 % 32);
}

int func_283(int iParam0){
int iVar0;
iVar0=func_255(func_284(iParam0), -1, 0);
return iVar0;
}

int func_284(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_285(iVar0);
switch (iVar1){
case 0:
return 1291;
break;
}
return 1291;
}

int func_285(int iParam0){
return (iParam0 / 32);
}

int func_286(bool bParam0){
if(bParam0 !=func_66()){
if(func_287(bParam0) && Global_2657589[bParam0 /*466*/].f_321.f_10==bParam0){
return 1;
}}
return 0;
}

int func_287(bool bParam0){
if(bParam0 !=func_66()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[bParam0 /*466*/].f_321.f_7)==22;
}}}
return 0;
}

int func_288(int iParam0){
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


void func_289(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_291(iParam1);
func_290(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uVar0);
}


bool func_290(int iParam0, var uParam1){
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

int func_291(int iParam0){
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

int func_292(int iParam0, int iParam1, int iParam2){
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
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_293()) && Global_1576216){
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 13;
}}
return 0;
}

int func_293(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_294() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_294(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_295(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_296(int iParam0, var uParam1){
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

int func_297(int iParam0){
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


void func_298(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_319(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_318(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_318(iVar6));
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
if(func_316(uParam1->f_5) || func_316(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_315(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_314()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_313(uParam1->f_66)){
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
func_312(iParam0, uParam1->f_69);
}}else{
func_312(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_304(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_318(iVar7 + 1))){
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
if(((func_299() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
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

int func_299(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_303(7)){
if(func_301(Global_2672505.f_4.f_16) || func_300(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_300(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_301(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_302(iParam0, 9);
}
return 0;
}


bool func_302(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_303(int iParam0){
return func_4(&(Global_2672505.f_184), iParam0);
}

int func_304(int iParam0, var uParam1, var uParam2){
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
}elseif(func_310(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_309(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_307(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_307(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_306(iParam0);
if(func_305(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_305(int iParam0){
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


void func_306(var uParam0){
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

int func_307(int iParam0, int iParam1){
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
iVar0=func_308(iParam0, 38) + 1;
iVar1=func_308(iParam0, 24) + 1;
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

int func_308(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_310(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_309(int iParam0, int iParam1){
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

int func_310(int iParam0, int iParam1, int iParam2){
if(!func_311() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_311(){
return 0;
}


void func_312(int iParam0, var uParam1){
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

int func_313(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


bool func_314(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_315(int iParam0){
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

int func_316(int iParam0){
if(!func_311() && func_317(iParam0)){
return 1;
}
return 0;
}

int func_317(int iParam0){
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

int func_318(int iParam0){
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

int func_319(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_320(PLAYER::PLAYER_ID(), -1)){
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
if(func_273(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_272(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_320(bool bParam0, int iParam1){
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

int func_321(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13){
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
func_322(Param2, fParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_322(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_323(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_323(bool bParam0, struct<3> Param1, int iParam2){
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


void func_324(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_343(&(Global_77348.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77348.f_555[0 /*21*/], iParam2) <=fParam1){
func_325(iVar0);
}}
iVar0++;
}}


void func_325(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_343(&(Global_77348.f_555[0 /*21*/]), iParam0)){
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
if(((((iParam0==24 && func_342(iParam0, 0)) && Global_78257.f_66==0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] !=0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3) && (!func_329(0, Global_77348.f_555[0 /*21*/].f_12) || !func_329(1, Global_77348.f_555[0 /*21*/].f_12))){
func_328(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), &Global_78257);
Global_78335=Global_113648.f_32751.f_5591;
}
func_326(iParam0, 0);
}}}


void func_326(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_342(iParam0, 0)){
func_327(iParam0, 1, 0);
func_327(iParam0, 2, 0);
func_327(iParam0, 3, 0);
func_327(iParam0, 4, 0);
func_327(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_327(iParam0, 0, 0);
}}


void func_327(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
}}


void func_328(var uParam0, var uParam1){
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

int func_329(int iParam0, int iParam1){
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
if(iParam0 < 0 || iParam0 >=func_341(&(Global_113648.f_32751.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_330(Global_113648.f_32751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_330(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_340()){
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
if((((!func_339() && !func_338()) && !func_337()) && !func_336()) && !func_340()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_335() || MISC::IS_PC_VERSION()) || func_334()){
}elseif(!func_337()){
return 0;
}}
if(bParam1){
if(!func_333(iParam0, iParam2)){
return 0;
}}
if(!func_331(iParam0)){
return 0;
}
return 1;
}

int func_331(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_332()){
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

int func_332(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_333(int iParam0, int iParam1){
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


var func__334(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


bool func_335(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_336(){
return 0;
}

int func_337(){
return 1;
}

int func_338(){
return 1;
}

int func_339(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_340(){
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

int func_341(var uParam0){
return *uParam0;
}

int func_342(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

int func_343(var uParam0, int iParam1){
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
uParam0->f_4=func_344(0, 1);
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
uParam0->f_4=func_344(0, 1);
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
uParam0->f_4=func_344(1, 1);
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
uParam0->f_4=func_344(1, 2);
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
uParam0->f_4=func_344(1, 1);
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
uParam0->f_4=func_344(1, 2);
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
uParam0->f_4=func_344(2, 1);
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
uParam0->f_4=func_344(2, 1);
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
uParam0->f_4=func_344(2, 1);
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
if(func_340()){
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
if(func_340()){
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
if(!func_266(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_266(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_266(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_344(int iParam0, int iParam1){
struct<82> Var0;
if(func_346(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_345(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_345(int iParam0, var uParam1, int iParam2){
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


bool func_346(int iParam0){
return iParam0 < 3;
}


bool func_347(int iParam0, var uParam1, var uParam2){
struct<35> Var0;
func_488(1);
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_38);
Var0={
StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal 
};
return func_348(Local_198.f_688.f_1[iParam0 /*15*/].f_4, Local_198.f_688.f_1[iParam0 /*15*/].f_4, Local_198.f_688.f_1[iParam0 /*15*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_348(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6){
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
if(!func_472()){
return 0;
}
if(func_471() && !Global_2635559.f_680==MISC::GET_FRAME_COUNT()){
if(!Global_2635559.f_676==0){
Global_2635559.f_676=0;
func_470();
func_469();
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_675){
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) < func_468(0)){
return 0;
}else{
Global_2635559.f_676=0;
}}}else{
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_677) > 30000){
Global_2635559.f_676=0;
}
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) > func_468(1)){
Global_2635559.f_676=0;
}}}
if(uParam6->f_6){
if(func_462(Param0)){
if(func_461(&Param0, 1)){
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
func_460();
func_470();
if(!uParam6->f_27 || (((((((((func_459(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2793046.f_936) && !Global_2793046.f_925) && !Global_2793046.f_933) && !Global_2793046.f_937) && !Global_2793046.f_954) && !Global_2793046.f_966) && !Global_2793046.f_938) && !Global_2793046.f_988)){
func_440(Param0, iParam2);
}
if(func_426(Param0)){
func_440(Param0, iParam2);
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
if(((uParam6->f_3 && func_86(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_424(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0)){
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
func_368(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var5);
}
func_366(Global_2635559.f_683, Global_2635559.f_686, iParam2, &(Global_2635559.f_673));
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
if(func_365(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 1036831949)){
Global_2635559.f_676=4;
Global_2635559.f_700=NETWORK::GET_NETWORK_TIME_ACCURATE();
}else{
bVar0=true;
}
}
else{
bVar0=true;
}}else{
func_363(Global_2635559.f_683, 0);
func_362(-1);
}}else{
Global_2635559.f_671=0;
Global_2635559.f_672=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_678) > 3000){
func_362(-1);
}
break;
case 4:
if(uParam6->f_12 && !uParam6->f_11){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_700) < 10000){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_699)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635559.f_699)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635559.f_699)){
if(func_361(Global_2635559.f_683, Global_2635559.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_350(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 0, 0, 0, 1, 0)){
func_363(Global_2635559.f_683, 0);
func_362(-1);
}else{
bVar0=true;
}}else{
func_363(Global_2635559.f_683, 0);
func_362(-1);
}
}}else{
func_362(-1);
}}else{
func_362(1);
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
func_368(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var6);
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
func_349(1);
return 1;
}
return 0;
}


void func_349(bool bParam0){
Global_2635559.f_676=0;
func_460();
func_470();
if(bParam0){
func_469();
}}

int func_350(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
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
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_88(bVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_96(bVar1)){
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
if(func_360(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_351(func_93(bVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_351(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_359(iParam3, 1008981770)){
func_352(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_352(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_358(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_353(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
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


void func_353(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_356(iParam0);
if(iVar0 !=0){
func_354(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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


void func_354(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_355(iParam0, &Global_1577994);
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


void func_355(int iParam0, var uParam1){
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

int func_356(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_357(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_357(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


void func_358(var uParam0, struct<3> Param1){
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


float func_359(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_353(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}

int func_360(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_351(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_352(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_352(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)){
return 1;
}
return 0;
}

int func_361(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar1=iVar0;
if(func_9(bVar1, 0, 1) && func_9(bParam3, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(func_351(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_351(func_93(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(func_351(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_9(bVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(func_351(func_93(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_362(int iParam0){
if(Global_2635559.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_681) < 30000){
if(iParam0==-1 || (iParam0 > -1 && Global_2635559.f_682 < iParam0)){
Global_2635559.f_676=2;
}else{
Global_2635559.f_676=5;
}}else{
Global_2635559.f_676=5;
}}


void func_363(struct<3> Param0, int iParam1){
struct<3> Var0;
if(iParam1==0 && func_364(Param0, 0.01f)){
return;
}
if(iParam1 < 30 && vmag(Param0) > 0f){
Var0={
Global_2635559.f_2737[iParam1 /*3*/] 
};
Global_2635559.f_2737[iParam1 /*3*/]={
Param0 
};
func_363(Var0, iParam1 + 1);
}}

int func_364(struct<3> Param0, float fParam1){
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

int func_365(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
float fVar4;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 0;
}else{
func_470();
iVar3=0;
while (iVar3 < 3){
if(Global_2635559.f_687[iVar3]==-1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_352(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
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


void func_366(struct<3> Param0, var uParam1, int iParam2, var uParam3){
struct<8> Var0;
*uParam3=func_367(&Param0, &uParam1, &iParam2);
Var0.f_0=1556360603;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=uParam1;
Var0.f_6=iParam2;
Var0.f_7=*uParam3;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_251(1, 1));
}

int func_367(var uParam0, var uParam1, var uParam2){
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


void func_368(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635559.f_1754 > 0){
iVar0=0;
while (func_419(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_369(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_369(var uParam0, var uParam1, var uParam2){
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
if(func_415(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_410(uParam0, 1)){
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
if(func_356(uParam2->f_34) !=0){
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
if(!func_403(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_400(Var1)){
Var1={
func_395(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_394(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_390(Var1, uParam2)){
if((uParam2->f_48 && !func_410(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_389(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_415(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_388(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_86(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_86(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_350(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_378(Var1, uParam2->f_54, &fVar23);
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
func_377(Var1, fVar2, iVar14);
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
if(func_390(Var1, uParam2)){
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
func_375(0, uParam2);
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
func_374(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
if(func_415(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_410(&Var27, bVar29)){
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
func_370(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643122.f_164=iVar6;
}
return 0;
}


void func_370(var uParam0, var uParam1, var uParam2, struct<3> Param3){
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
if(!func_371(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
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

int func_371(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4){
if(func_373(Param0, fParam1, bParam2, iParam3, 0) || func_372(Param0, bParam2, iParam4)){
return 1;
}
return 0;
}

int func_372(struct<3> Param0, bool bParam1, int iParam2){
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
if(func_351(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
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

int func_373(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4){
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
}}elseif(vdist(func_93(bVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_9(bVar1, 0, 1)){
if(vdist(func_93(bVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_374(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_395(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_400(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_375(int iParam0, var uParam1){
if(!func_390(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=(Global_2643122.f_162 - 1);
func_376(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163){
func_375(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_375(iParam0 + 1, uParam1);
}}


void func_376(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_377(struct<3> Param0, float fParam1, int iParam2){
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
func_377(Var0, uVar1, iParam2 + 1);
}}}

int func_378(struct<3> Param0, float fParam1, float fParam2){
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
if(func_379(bVar3)){
Var1={
func_93(bVar3) 
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

int func_379(bool bParam0){
if(func_9(bParam0, 0, 1)){
if(!func_386(bParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam0)){
if(!PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_383(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_380(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_383(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_96(bParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_381(iParam0, bVar0, iParam1, bVar1) || !func_381(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_381(iParam0, bVar0, iParam1, bVar1) || !func_381(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_381(iParam0, bVar0, iParam1, bVar1) || !func_381(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_381(iParam0, bVar0, iParam1, bVar1) || !func_381(iParam1, bVar1, iParam0, bVar0)){
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

int func_381(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_9(iVar1, 1, 1) || func_89(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_382(iVar1)){
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


var func__382(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_383(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_384(bParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[bParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_384(int iParam0){
return func_385(iParam0);
}


var func__385(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_386(bool bParam0){
if(func_89(bParam0, 0)){
return 1;
}
if(func_387()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_387(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_388(struct<3> Param0, float fParam1, int iParam2){
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
if(func_360(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
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
if(func_360(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_389(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
if(func_361(Param0, fParam1, iParam2, bParam3, iParam4) || func_424(Param0, fParam1, iParam2, bParam3, iParam5)){
return 1;
}
return 0;
}

int func_390(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_393(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_391(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
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

int func_391(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_392(&Param1, &Param2);
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


void func_392(var uParam0, var uParam1){
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


bool func_393(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
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

int func_394(struct<3> Param0, float fParam1){
int iVar0;
if(func_383(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_39172 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_39172){
if(Global_4980736.f_39173[iVar0 /*148*/].f_7 !=0){
if(func_351(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_5991 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_5991){
if(Global_4980736.f_5994[iVar0 /*492*/].f_15 !=0){
if(func_351(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_84915 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[iVar0 /*499*/].f_12 !=0){
if(func_351(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[iVar0], 0)){
if(func_351(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[iVar0], 0)){
if(func_351(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}


Vector3 func__395(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
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
if(!func_398(Param0, *uParam1, Param4)){
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
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_397(Param0)){
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
fVar10=func_396(iParam7, 3.5f);
}else{
fVar10=func_396(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_398(Param0, *uParam1, Param4)){
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
fVar10=func_396(iParam7, 3.5f);
}else{
fVar10=func_396(iParam7, 1.5f);
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


float func_396(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_353(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_397(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_398(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_358(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_399(Var1, Var0) >=0f){
return 1;
}
return 0;
}


float func_399(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_400(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_402(Param0);
iVar0=0;
while (iVar0 < Global_2642829[iVar1]){
if(func_401(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642829[8]){
if(func_401(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_401(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_402(struct<2> Param0, var uParam1){
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

int func_403(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_409(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_408(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
if(func_404(Var1, &uVar0) || func_409(Var1)){
Var1={
*uParam0 
};
func_408(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_404(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_407()){
return 0;
}
iVar1=func_406();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635559.f_368[iVar0 /*12*/].f_9==1){
if(func_405(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_405(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_393(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_391(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_406(){
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


bool func_407(){
return Global_1950108.f_528;
}


void func_408(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
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
func_358(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_358(&Var0, 0f, 0f, fParam5);
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

int func_409(struct<3> Param0){
float fVar0;
if(Global_2635559.f_596 > 0f){
fVar0=vdist(Param0, Global_2635559.f_593);
if(fVar0 < Global_2635559.f_596){
return 1;
}}
return 0;
}


bool func_410(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_393(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_391(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0)){
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
func_411(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}


Vector3 func__411(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_408(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_414(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_412(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_393(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_391(Var1, Param1, Param2, 0, 0)){
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


void func_412(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
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
func_413(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_399(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_399(Var2, Var1) >=0f){
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
func_413(0f, 0f, 1f, Var0) 
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
func_413(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_399(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_399(Var2, Var11) >=0f){
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


Vector3 func__413(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_414(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
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

int func_415(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_462(Param0)){
if(func_418(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_416(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_364(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_408(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_416(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_404(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_417(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_404(Var2, &uVar1) || func_409(Var2)){
Var2={
*uParam0 
};
func_417(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}


void func_417(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_411(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_411(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_411(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_408(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_414(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_412(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}

int func_418(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16)){
if(func_405(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0)){
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
func_417(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_418(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_417(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_419(var uParam0, var uParam1, var uParam2){
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
if(func_415(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_410(uParam0, 1)){
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
func_422(*uParam0);
}elseif(uParam2->f_29){
func_421();
}else{
func_420();
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
if((uParam2->f_12 && !func_389(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_415(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_388(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_86(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_86(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_350(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_378(Var3, uParam2->f_54, &fVar12);
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
func_377(Var3, fVar4, iVar5);
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
func_375(0, uParam2);
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


void func_420(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}}


void func_421(){
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


void func_422(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635559.f_1754){
uVar1=func_423(Param0, fVar0, &fVar0);
Global_2635559.f_2160[iVar2]=uVar1;
iVar2++;
}}

int func_423(struct<3> Param0, float fParam1, float fParam2){
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

int func_424(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_425(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_360(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
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

int func_425(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_359(iParam1, 1008981770);
fVar1=func_359(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_426(struct<3> Param0){
var uVar0;
if(Global_2793046.f_936 && func_427(Param0, &uVar0)){
return 1;
}
return 0;
}

int func_427(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
*iParam1=-1;
iVar2=func_439(Param0, 0);
if(!iVar2==-1){
iVar0=83;
while (iVar0 <=87){
iVar1=iVar0;
if(func_428(iVar1)){
if(func_439(Global_1950108.f_542[iVar0 /*3*/], 0)==iVar2){
*iParam1=iVar0 + 1000;
return 1;
}}
iVar0++;
}}
return 0;
}

int func_428(int iParam0){
int iVar0;
int iVar1;
iVar0=func_438(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_293==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_66()){
if(Global_1853910[iVar1 /*862*/].f_267.f_293==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
if(func_437(PLAYER::PLAYER_ID(), 0) || (func_434(PLAYER::PLAYER_ID()) && func_288(func_433(PLAYER::PLAYER_ID()))==12)){
return 1;
}
if(func_432(PLAYER::PLAYER_ID()) || (func_434(PLAYER::PLAYER_ID()) && func_288(func_433(PLAYER::PLAYER_ID()))==8)){
return 1;
}
if(func_431(PLAYER::PLAYER_ID()) || (func_434(PLAYER::PLAYER_ID()) && func_288(func_433(PLAYER::PLAYER_ID()))==5)){
return 1;
}
if(func_430(PLAYER::PLAYER_ID()) || (func_434(PLAYER::PLAYER_ID()) && func_288(func_433(PLAYER::PLAYER_ID()))==10)){
return 1;
}
if(func_429(PLAYER::PLAYER_ID()) || (func_434(PLAYER::PLAYER_ID()) && func_288(func_433(PLAYER::PLAYER_ID()))==6)){
return 1;
}
return 0;
}

int func_429(bool bParam0){
if(bParam0 !=func_66()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[bParam0 /*466*/].f_321.f_7)==6;
}}}
return 0;
}

int func_430(bool bParam0){
if(bParam0 !=func_66()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[bParam0 /*466*/].f_321.f_7)==10;
}}}
return 0;
}

int func_431(bool bParam0){
if(bParam0 !=func_66()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_66()){
return func_288(Global_2657589[bParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_432(bool bParam0){
if(bParam0 !=func_66()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_66()){
return func_288(Global_2657589[bParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_433(bool bParam0){
if(bParam0 !=func_66() && func_9(bParam0, 1, 1)){
return Global_2657589[bParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_434(bool bParam0){
if(bParam0 !=func_66() && func_9(bParam0, 1, 1)){
if(func_436(bParam0) && !func_435(bParam0)){
return 1;
}}
return 0;
}

int func_435(int iParam0){
if(iParam0 !=func_66() && func_9(iParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 4);
}
return 0;
}

int func_436(bool bParam0){
if(bParam0 !=func_66() && func_9(bParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_437(bool bParam0, bool bParam1){
var uVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(uVar0)==joaat("terbyte")){
return 1;
}}}
if(bParam0 !=func_66()){
if(func_9(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_66()){
return func_288(Global_2657589[bParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_438(int iParam0){
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

int func_439(struct<3> Param0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1 || iParam1==0){
if(func_405(Param0, &(Global_2640505[iVar0 /*17*/]), 0.1f, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_440(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2[3];
int iVar3[3];
if(Global_2635559.f_45.f_319){
return;
}
if(!func_458()){
if(iParam1==0){
}
iVar1=func_457(Param0);
if(iVar1 > -1){
func_469();
switch (iVar1){
case 0:
func_456(-1139.678f, -2694.165f, 12.949f, 283.4298f);
func_456(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
func_456(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
func_456(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
func_456(-1110.51f, -2693.236f, 12.9595f, 298.84f);
func_456(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
func_456(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
func_456(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
func_456(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
break;
case 1:
func_456(-1411.731f, -533.6462f, 30.2703f, 215.116f);
func_456(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
func_456(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
func_456(-1438.8f, -584.4678f, 29.595f, 118.1207f);
break;
case 2:
func_456(-780.5905f, 292.8159f, 84.673f, 97.2697f);
func_456(-788.6147f, 291.8073f, 84.72f, 97.7348f);
func_456(-765.572f, 294.4459f, 84.5182f, 93.9327f);
func_456(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
break;
case 3:
func_456(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
func_456(-647.239f, 49.2068f, 40.7135f, 355.9723f);
func_456(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
func_456(-610.5603f, 5.1258f, 41.2404f, 98.696f);
break;
case 4:
func_456(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
func_456(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
func_456(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
func_456(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
break;
case 5:
func_456(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
func_456(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
func_456(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
func_456(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
break;
case 6:
func_456(-58.1347f, -573.486f, 36.5789f, 341.8442f);
func_456(-64.227f, -590.2214f, 35.1654f, 338.972f);
func_456(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
func_456(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
break;
case 7:
func_456(-232.1917f, -978.1431f, 28.166f, 160.2115f);
func_456(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
func_456(-251.993f, -998.3963f, 28.3747f, 249.3297f);
func_456(-262.222f, -994.5226f, 29.23f, 249.4673f);
break;
case 8:
func_456(151.624f, -1309.343f, 28.2023f, 243.201f);
func_456(152.7886f, -1305.608f, 28.2023f, 243.9973f);
func_456(145.8017f, -1287.19f, 28.312f, 120.6275f);
func_456(142.8935f, -1282.286f, 28.3156f, 120.3024f);
break;
case 9:
func_456(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
func_456(-2322.187f, 277.638f, 168.4671f, 23.4249f);
func_456(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
func_456(-2314.396f, 290.9f, 168.4671f, 114.3983f);
func_456(-2316.81f, 296.424f, 168.4671f, 113.6228f);
func_456(-2318.572f, 299.2423f, 168.4671f, 293.83f);
func_456(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
func_456(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
func_456(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
func_456(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
func_456(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
func_456(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
break;
case 10:
func_454(78);
break;
case 11:
func_454(79);
break;
case 12:
func_454(82);
break;
case 13:
func_454(81);
break;
case 14:
func_454(73);
break;
case 15:
func_456(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_456(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_456(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_456(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 16:
func_454(75);
break;
case 17:
func_454(76);
break;
case 18:
func_454(77);
break;
case 19:
func_456(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
func_456(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
func_456(-931.6637f, 703.693f, 151.369f, 87.7447f);
func_456(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
break;
case 20:
func_454(80);
break;
case 21:
case 25:
func_454(87);
break;
case 22:
case 26:
func_454(88);
break;
case 23:
case 27:
func_454(89);
break;
case 24:
case 28:
func_454(90);
break;
case 29:
case 30:
if(func_453(iParam1)){
func_454(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
}
break;
case 31:
func_456(-352.53f, -1836.742f, 21.924f, 274.8f);
func_456(-336.412f, -1837.341f, 22.497f, 264.6f);
func_456(-320.707f, -1840.342f, 23.195f, 257.4f);
func_456(-304.646f, -1843.295f, 24.219f, 261.599f);
func_456(-288.991f, -1844.123f, 25.228f, 269.599f);
func_456(-273.031f, -1842.69f, 26.27f, 278.199f);
func_456(-361.271f, -1814.526f, 21.63f, 96.399f);
func_456(-343.939f, -1813.331f, 22.368f, 87.999f);
func_456(-326.881f, -1814.914f, 23.106f, 78.799f);
func_456(-310.941f, -1818.223f, 23.957f, 78.799f);
func_456(-294.16f, -1820.207f, 25.092f, 89.199f);
func_456(-277.392f, -1819.237f, 26.283f, 100.199f);
func_456(-257.213f, -1838.977f, 27.318f, 285.799f);
func_456(-261.286f, -1815.615f, 27.439f, 110.399f);
func_456(-246.086f, -1808.691f, 28.576f, 117.398f);
func_456(-231.901f, -1800.767f, 28.619f, 119.398f);
func_456(-199.77f, -1989.34f, 26.62f, 180.997f);
func_456(-201.159f, -1971.41f, 26.62f, 190.798f);
func_456(-205.571f, -1954.537f, 26.62f, 199.998f);
func_456(-197.879f, -1940.822f, 26.62f, 114.998f);
func_456(-141.311f, -1967.41f, 21.805f, 91.997f);
func_456(-141.145f, -1977.861f, 21.813f, 91.997f);
func_456(-140.565f, -1988.289f, 21.815f, 91.997f);
func_456(-145.045f, -2032.168f, 21.956f, 73.597f);
func_456(-147.923f, -2041.781f, 21.956f, 73.597f);
func_456(-185.791f, -1948.005f, 26.62f, 18.596f);
func_456(-181.155f, -1965.422f, 26.62f, 8.196f);
func_456(-179.172f, -1984.332f, 26.62f, 1.396f);
func_456(-225.88f, -1824.637f, 28.897f, 299.596f);
func_456(-211.722f, -1816.401f, 28.859f, 300.796f);
func_456(-217.99f, -1792.624f, 28.649f, 119.196f);
func_456(-203.828f, -1784.264f, 28.678f, 119.996f);
func_456(-194.254f, -2018.756f, 26.62f, 75f);
func_456(-186.956f, -2031.369f, 26.62f, 338f);
func_456(-194.916f, -2047.94f, 26.62f, 329.8f);
func_456(-205.565f, -2064.553f, 26.62f, 320.2f);
func_456(-218.606f, -2077.97f, 26.62f, 311.2f);
func_456(-233.372f, -2089.601f, 26.62f, 304f);
func_456(-207.822f, -2002.11f, 26.62f, 173.799f);
func_456(-207.567f, -2027.579f, 26.62f, 158.599f);
func_456(-215.235f, -2042.272f, 26.62f, 148.999f);
func_456(-227.643f, -2058.498f, 26.62f, 138.799f);
func_456(-242.977f, -2071.452f, 26.62f, 125.798f);
func_456(-256.624f, -2087.982f, 26.62f, 204.198f);
func_456(-249.549f, -2098.767f, 26.62f, 294.198f);
func_456(-228.998f, -2048.889f, 26.62f, 141.198f);
func_456(-176.963f, -2009.239f, 24.519f, 261.597f);
func_456(-195.128f, -1806.447f, 28.814f, 299.997f);
func_456(-180.02f, -1797.414f, 28.797f, 299.997f);
func_456(-165.796f, -1787.672f, 28.788f, 304.597f);
func_456(-188.124f, -1774.765f, 28.711f, 123.197f);
func_456(-417.428f, -1836.374f, 19.238f, 121.797f);
func_456(-430.967f, -1844.844f, 18.468f, 121.797f);
func_456(-444.94f, -1853.739f, 17.786f, 121.797f);
break;
}}elseif(func_450(Param0, &iVar2, &iVar3) || (func_427(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)))){
func_469();
iVar0=0;
while (iVar0 < iVar2){
if(iVar2[iVar0] > 1000){
iVar2[iVar0]=(iVar2[iVar0] - 1000);
iVar3[iVar0]=1;
}
if(iVar2[iVar0] >=83 && iVar2[iVar0] <=87){
Global_2635559.f_516=1;
}
if(!iVar3[iVar0] && func_449(iVar2[iVar0], -1)){
if(func_453(iParam1)){
func_454(iVar2[iVar0]);
}}elseif(iVar3[iVar0]){
if(((func_448(PLAYER::PLAYER_PED_ID()) || func_447(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)){
if(func_446(iParam1)){
func_445(iVar2[iVar0]);
}
elseif(func_444(iParam1)){
func_443(iVar2[iVar0]);
func_445(iVar2[iVar0]);
}
else{
func_443(iVar2[iVar0]);
func_445(iVar2[iVar0]);
}}else{
func_441(iVar2[iVar0], iParam1);
}}else{
func_454(iVar2[iVar0]);
}
iVar0++;
}}}}


void func_441(int iParam0, int iParam1){
switch (iParam0){
case 23:
func_456(434.1898f, 6535.824f, 27.0084f, 66.9998f);
func_456(434.9146f, 6539.661f, 26.9691f, 66.9998f);
func_456(435.1928f, 6543.298f, 26.889f, 66.9998f);
func_456(429.8495f, 6506.581f, 27.1807f, 59.7997f);
func_456(429.8463f, 6511.11f, 27.0717f, 60.9997f);
func_456(434.2748f, 6581.816f, 26.1303f, 85.1993f);
func_456(443.1016f, 6580.717f, 26.0739f, 85.1993f);
func_456(451.9748f, 6579.937f, 26.0319f, 85.1993f);
break;
case 26:
func_456(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
func_456(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
func_456(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
func_456(-142.1459f, 6342.532f, 30.49f, 44.7982f);
func_456(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
func_456(-151.1909f, 6358.461f, 30.4907f, 223.398f);
func_456(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
func_456(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
break;
case 24:
func_456(60.7522f, 6465.807f, 30.3941f, 213.3973f);
func_456(57.4131f, 6462.55f, 30.3663f, 213.3973f);
func_456(48.0438f, 6452.668f, 30.3245f, 213.3973f);
func_456(40.6765f, 6445.235f, 30.3475f, 213.3973f);
func_456(37.8298f, 6442.521f, 30.3489f, 213.3973f);
func_456(35.0212f, 6439.866f, 30.3332f, 213.3973f);
func_456(32.1837f, 6437.21f, 30.2991f, 213.3973f);
func_456(29.4732f, 6434.526f, 30.3702f, 213.3973f);
break;
case 25:
func_456(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
func_456(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
func_456(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
func_456(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
func_456(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
func_456(-360.983f, 6130.575f, 30.4401f, 45.7965f);
func_456(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
func_456(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
break;
case 22:
func_456(45.2181f, 6341.107f, 30.2296f, 14.3964f);
func_456(41.6057f, 6339.476f, 30.2306f, 14.3964f);
func_456(39.2508f, 6359.469f, 30.2398f, 207.3965f);
func_456(36.3203f, 6356.893f, 30.2398f, 207.3965f);
func_456(51.6043f, 6365.022f, 30.2399f, 33.5965f);
func_456(65.6465f, 6380.626f, 30.2398f, 212.9964f);
func_456(24.8587f, 6366.36f, 30.2286f, 32.7965f);
func_456(19.6254f, 6360.736f, 30.2305f, 32.7965f);
break;
case 28:
func_456(94.0245f, 181.2181f, 103.5566f, 160.3953f);
func_456(91.0039f, 182.2811f, 103.6179f, 160.3953f);
func_456(68.365f, 148.2105f, 103.5812f, 339.9951f);
func_456(62.2104f, 150.5185f, 103.6101f, 339.9951f);
func_456(69.5198f, 186.4278f, 103.9415f, 69.7949f);
func_456(62.59f, 189.0833f, 103.9981f, 69.7949f);
func_456(55.6095f, 191.8089f, 104.2827f, 69.7949f);
func_456(154.7309f, 182.1333f, 104.6903f, 160.1945f);
break;
case 31:
func_456(322.4916f, -714.5293f, 28.1574f, 158.5941f);
func_456(329.5591f, -694.4284f, 28.1656f, 158.5941f);
func_456(324.565f, -684.3934f, 28.3133f, 247.194f);
func_456(326.4054f, -679.9403f, 28.3192f, 247.194f);
func_456(297.1177f, -804.3891f, 28.4859f, 160.594f);
func_456(288.5461f, -814.6994f, 28.1563f, 163.194f);
func_456(286.0127f, -821.7357f, 28.3093f, 163.194f);
func_456(283.6725f, -828.9533f, 28.1247f, 158.994f);
break;
case 29:
func_456(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
func_456(-1454.819f, -359.998f, 42.7885f, 311.3925f);
func_456(-1462.675f, -360.1352f, 42.9255f, 223.392f);
func_456(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
func_456(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
func_456(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
func_456(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
func_456(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
break;
case 30:
func_456(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
func_456(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
func_456(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
func_456(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
func_456(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
func_456(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
func_456(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
func_456(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
break;
case 27:
func_456(1414.237f, -1656.344f, 60.2449f, 332.7893f);
func_456(1416.668f, -1659.933f, 60.6982f, 332.7893f);
func_456(1419.327f, -1663.972f, 61.2382f, 332.7893f);
func_456(1421.557f, -1667.367f, 61.7479f, 332.7893f);
func_456(1423.744f, -1670.853f, 62.3125f, 332.7893f);
func_456(1412.157f, -1652.746f, 59.9105f, 332.7893f);
func_456(1426.201f, -1673.598f, 62.7133f, 330.1893f);
func_456(1435.804f, -1694.73f, 65.0743f, 352.5892f);
break;
case 33:
func_456(2810.787f, 4435.92f, 47.5295f, 20.7996f);
func_456(2808.413f, 4443.922f, 47.3732f, 14.7995f);
func_456(2806.298f, 4451.786f, 47.1865f, 15.3995f);
func_456(2803.925f, 4459.858f, 46.9823f, 15.3995f);
func_456(2801.756f, 4467.755f, 46.8147f, 15.3995f);
func_456(2893.563f, 4430.258f, 47.338f, 105.9994f);
func_456(2903.725f, 4425.854f, 47.3523f, 23.1992f);
func_456(2907.076f, 4418.059f, 47.6301f, 23.1992f);
break;
case 36:
func_456(1680.448f, 4821.131f, 41.0599f, 186.399f);
func_456(1679.76f, 4829.447f, 40.9167f, 186.399f);
func_456(1678.668f, 4838.03f, 41.0221f, 187.7989f);
func_456(1677.612f, 4846.028f, 41.0452f, 187.7989f);
func_456(1675.851f, 4860.434f, 41.0901f, 187.7989f);
func_456(1674.843f, 4868.343f, 41.0684f, 187.7989f);
func_456(1673.543f, 4875.752f, 41.0684f, 186.7986f);
func_456(1672.525f, 4884.972f, 41.0478f, 186.7986f);
break;
case 34:
func_456(422.863f, 3583.901f, 32.2386f, 313.5986f);
func_456(426.6211f, 3583.208f, 32.2386f, 313.5986f);
func_456(430.466f, 3582.042f, 32.2386f, 313.5986f);
func_456(434.2751f, 3580.881f, 32.2386f, 313.5986f);
func_456(438.1525f, 3579.911f, 32.2386f, 313.5986f);
func_456(442.0173f, 3578.948f, 32.2386f, 313.5986f);
func_456(420.2694f, 3572.995f, 32.2385f, 353.7984f);
func_456(424.4825f, 3572.1f, 32.2386f, 348.1984f);
break;
case 35:
func_456(627.005f, 2726.019f, 40.7692f, 4.3984f);
func_456(620.9771f, 2725.759f, 40.7897f, 4.3984f);
func_456(614.8536f, 2725.355f, 40.8321f, 4.3984f);
func_456(611.1158f, 2737.387f, 40.9734f, 185.3984f);
func_456(598.9713f, 2736.261f, 41.0602f, 186.5986f);
func_456(592.6151f, 2735.886f, 41.0602f, 186.5986f);
func_456(586.0421f, 2735.9f, 41.0535f, 186.5986f);
func_456(627.4468f, 2742.742f, 40.8963f, 183.5979f);
break;
case 32:
func_456(214.3318f, 2492.26f, 53.9736f, 312.7978f);
func_456(213.9953f, 2496.666f, 53.8128f, 312.7978f);
func_456(213.7524f, 2501.251f, 53.5958f, 312.7978f);
func_456(213.6645f, 2505.908f, 53.3477f, 312.7978f);
func_456(213.4478f, 2510.734f, 53.1055f, 312.7978f);
func_456(212.9148f, 2515.268f, 52.9376f, 312.7978f);
func_456(211.5983f, 2519.216f, 52.6753f, 312.7978f);
func_456(210.1288f, 2523.187f, 52.3493f, 312.7978f);
break;
case 38:
func_456(153.6785f, -2476.192f, 4.9877f, 178.4004f);
func_456(150.9209f, -2516.979f, 4.9909f, 179.9999f);
func_456(150.9499f, -2524.965f, 4.9905f, 179.9999f);
func_456(153.866f, -2467.242f, 4.9877f, 178.4004f);
func_456(150.8115f, -2533.139f, 4.9895f, 180.0004f);
func_456(153.8647f, -2433.386f, 5.2336f, 170.2002f);
func_456(142.7427f, -2536.147f, 5f, 205.0002f);
func_456(138.8267f, -2535.865f, 5f, 205.0002f);
break;
case 41:
func_456(-341.4255f, -2734.451f, 5.0413f, 314.8f);
func_456(-334.0134f, -2741.43f, 5.0269f, 314.8f);
func_456(-329.7832f, -2745.604f, 5.0196f, 314.8f);
func_456(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
func_456(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
func_456(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
func_456(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
func_456(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
break;
case 39:
func_456(1143.73f, -3105.091f, 4.8989f, 146.1979f);
func_456(1140.009f, -3104.954f, 4.8985f, 146.1979f);
func_456(1136.267f, -3104.69f, 4.8969f, 146.1979f);
func_456(1132.732f, -3104.277f, 4.8944f, 146.1979f);
func_456(1128.724f, -3104.54f, 4.896f, 146.1979f);
func_456(1125.106f, -3104.057f, 4.8942f, 146.1979f);
func_456(1117.8f, -3103.674f, 4.8922f, 146.1979f);
func_456(1114.015f, -3103.448f, 4.8931f, 146.1979f);
break;
case 40:
func_456(653.1188f, -2700.255f, 5.2101f, 24.7971f);
func_456(656.1305f, -2707.245f, 5.214f, 24.7971f);
func_456(659.3307f, -2714.378f, 5.2188f, 22.7968f);
func_456(662.2627f, -2722.228f, 5.2188f, 19.1968f);
func_456(649.2115f, -2728.359f, 5.1124f, 20.5967f);
func_456(646.2606f, -2720.833f, 5.1103f, 21.3967f);
func_456(643.4582f, -2713.846f, 5.1099f, 21.3967f);
func_456(640.3513f, -2706.571f, 5.108f, 21.3967f);
break;
case 37:
func_456(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
func_456(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
func_456(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
func_456(-238.214f, -2614.847f, 5.0502f, 271.5953f);
func_456(-238.013f, -2630.961f, 5.0331f, 271.3949f);
func_456(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
func_456(-253.401f, -2631.108f, 5.0319f, 272.195f);
func_456(-245.5563f, -2631.06f, 5.0323f, 272.195f);
break;
case 83:
func_456(-1190.795f, -3371.393f, 12.945f, 348.399f);
func_456(-1185.634f, -3373.893f, 12.945f, 348.399f);
func_456(-1114.818f, -3414.185f, 12.945f, 314.199f);
func_456(-1110.976f, -3416.37f, 12.945f, 314.199f);
func_456(-1098.621f, -3460.792f, 12.9453f, 329.799f);
func_456(-1093.31f, -3463.464f, 12.9453f, 329.799f);
func_456(-1089.433f, -3443.234f, 12.945f, 329.799f);
func_456(-1084.271f, -3446.31f, 12.945f, 329.799f);
func_456(-1093.808f, -3452.407f, 12.9451f, 329.799f);
func_456(-1088.383f, -3455.466f, 12.9451f, 329.799f);
func_456(-1118.474f, -3411.385f, 12.9451f, 313.199f);
func_456(-1181.003f, -3375.658f, 12.945f, 346.799f);
func_456(-1212.071f, -3382.283f, 12.9451f, 328.999f);
func_456(-1217.708f, -3378.623f, 12.9451f, 328.999f);
func_456(-1216.986f, -3390.396f, 12.9452f, 328.999f);
func_456(-1222.566f, -3386.707f, 12.9452f, 328.999f);
func_456(-1222.06f, -3398.882f, 12.9452f, 328.999f);
func_456(-1227.698f, -3394.946f, 12.9451f, 328.999f);
func_456(-1097.517f, -3472.086f, 12.9453f, 328.999f);
func_456(-1102.951f, -3468.619f, 12.9452f, 328.999f);
func_456(-1227.253f, -3407.38f, 12.9452f, 328.999f);
func_456(-1232.836f, -3403.572f, 12.9452f, 328.999f);
break;
case 84:
func_456(-1364.879f, -3285.201f, 12.945f, 330.2f);
func_456(-1359.229f, -3288.52f, 12.945f, 330.2f);
func_456(-1369.636f, -3293.617f, 12.945f, 330.2f);
func_456(-1363.881f, -3296.796f, 12.945f, 330.2f);
func_456(-1432.898f, -3247.702f, 12.945f, 330.2f);
func_456(-1437.282f, -3255.429f, 12.945f, 330.2f);
func_456(-1441.623f, -3262.969f, 12.945f, 330.2f);
func_456(-1443.954f, -3251.006f, 12.945f, 330.2f);
func_456(-1374.159f, -3301.61f, 12.945f, 330.2f);
func_456(-1368.508f, -3304.924f, 12.945f, 330.2f);
func_456(-1359.905f, -3276.118f, 12.9448f, 330.4f);
func_456(-1354.228f, -3279.63f, 12.9448f, 330.4f);
func_456(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
func_456(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
func_456(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
func_456(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
func_456(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
func_456(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
func_456(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
func_456(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
func_456(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
func_456(-1444.064f, -3273.751f, 12.945f, 330.7996f);
break;
case 85:
func_456(-2060.105f, 3186.159f, 31.81f, 329.599f);
func_456(-2065.521f, 3189.007f, 31.81f, 150.199f);
func_456(-2055.006f, 3194.989f, 31.81f, 329.599f);
func_456(-2060.471f, 3197.816f, 31.81f, 150.199f);
func_456(-2049.611f, 3204.032f, 31.81f, 329.599f);
func_456(-2055.048f, 3206.958f, 31.81f, 150.199f);
func_456(-2049.627f, 3216.253f, 31.81f, 150.199f);
func_456(-2039.024f, 3222.121f, 31.81f, 329.599f);
func_456(-2044.17f, 3213.208f, 31.81f, 329.599f);
func_456(-2044.672f, 3224.638f, 31.81f, 150.199f);
func_456(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
func_456(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
func_456(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
func_456(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
func_456(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
func_456(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
func_456(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
func_456(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
func_456(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
func_456(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
func_456(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
func_456(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
break;
case 86:
func_456(-1843.828f, 3085.094f, 31.81f, 165.8f);
func_456(-1828.571f, 3084.114f, 31.841f, 329.2f);
func_456(-1823.414f, 3092.762f, 31.843f, 330f);
func_456(-1819.045f, 3100.435f, 31.845f, 330f);
func_456(-1833.313f, 3075.722f, 31.838f, 330f);
func_456(-1847.648f, 3076.8f, 31.835f, 165.8f);
func_456(-1838.479f, 3078.576f, 31.863f, 150.599f);
func_456(-1833.605f, 3086.784f, 31.863f, 150.599f);
func_456(-1828.424f, 3095.617f, 31.863f, 150.599f);
func_456(-1823.95f, 3102.821f, 31.862f, 150.599f);
func_456(-1819.284f, 3110.67f, 31.8615f, 150.2f);
func_456(-1814.545f, 3108.229f, 31.8476f, 330.6f);
func_456(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
func_456(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
func_456(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
func_456(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
func_456(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
func_456(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
func_456(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
func_456(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
func_456(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
func_456(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
break;
case 87:
func_456(-2538.561f, 3303.172f, 31.814f, 296.999f);
func_456(-2530.309f, 3307.445f, 31.816f, 296.999f);
func_456(-2521.733f, 3311.833f, 31.817f, 296.999f);
func_456(-2512.881f, 3316.428f, 31.819f, 296.999f);
func_456(-2502.952f, 3321.518f, 31.821f, 296.999f);
func_456(-2542.613f, 3310.728f, 31.814f, 296.999f);
func_456(-2534.195f, 3314.753f, 31.815f, 296.999f);
func_456(-2525.635f, 3318.97f, 31.817f, 296.999f);
func_456(-2516.674f, 3323.545f, 31.819f, 296.999f);
func_456(-2507.153f, 3328.454f, 31.82f, 296.999f);
func_456(-2547.689f, 3298.791f, 31.812f, 296.999f);
func_456(-2551.261f, 3306.304f, 31.8123f, 296.999f);
func_456(-2497.446f, 3333.296f, 31.821f, 296.999f);
func_456(-2494.089f, 3326.065f, 31.8218f, 296.999f);
func_456(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
func_456(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
func_456(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
func_456(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
func_456(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
func_456(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
func_456(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
func_456(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
break;
case 89:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(1284.416f, 2890.299f, 45.0276f, 336.3999f);
func_456(1273.248f, 2901.428f, 45.0426f, 338.3999f);
func_456(1262.945f, 2911.535f, 43.2959f, 341.9999f);
func_456(1272.094f, 2873.387f, 45.3443f, 328.5991f);
func_456(1259.785f, 2892.217f, 45.1126f, 339.9999f);
func_456(1231.279f, 2910.881f, 43.3085f, 12f);
func_456(1306.515f, 2839.475f, 46.8947f, 132.3996f);
func_456(1307.453f, 2825.276f, 45.1566f, 127.1998f);
func_456(1257.029f, 2872.157f, 45.9766f, 338.5992f);
func_456(1225.764f, 2930.095f, 41.6173f, 14.7999f);
}else{
func_456(1265.123f, 2836.949f, 47.1021f, 119.9996f);
func_456(1258.145f, 2831.643f, 46.4503f, 135.7993f);
func_456(1240.847f, 2828.721f, 46.4388f, 39.5992f);
func_456(1236.877f, 2835.49f, 46.3491f, 22.9991f);
func_456(1235.697f, 2843.403f, 46.0231f, 2.7991f);
func_456(1237.686f, 2850.607f, 45.5261f, 335.5991f);
func_456(1241.126f, 2858.816f, 45.0176f, 339.7991f);
func_456(1249.715f, 2810.588f, 47.2648f, 255.1992f);
func_456(1257.696f, 2808.609f, 47.014f, 266.1992f);
func_456(1265.577f, 2808.353f, 46.7598f, 277.199f);
func_456(1273.808f, 2808.484f, 46.3872f, 263.999f);
func_456(1282.535f, 2807.134f, 45.9705f, 250.7989f);
func_456(1290.168f, 2803.745f, 45.8005f, 238.7988f);
func_456(1296.445f, 2798.777f, 46.0903f, 228.9988f);
func_456(1302.041f, 2792.33f, 45.957f, 221.7987f);
func_456(1251.389f, 2825.818f, 45.9856f, 119.1982f);
func_456(1285.48f, 2819.238f, 45.044f, 228.3993f);
func_456(1293.023f, 2814.164f, 44.8859f, 233.399f);
func_456(1242.18f, 2814.153f, 47.7108f, 227.3991f);
func_456(1236.362f, 2819.623f, 47.6845f, 224.399f);
func_456(1231.532f, 2825.855f, 47.4649f, 210.5992f);
func_456(1228.177f, 2833.423f, 47.3171f, 197.5993f);
func_456(1243.095f, 2866.749f, 44.6219f, 353.7992f);
func_456(1307.346f, 2785.787f, 46.1136f, 219.9997f);
func_456(1300.752f, 2808.224f, 44.5688f, 228.9997f);
func_456(1306.571f, 2802.468f, 44.6275f, 224.1992f);
func_456(1244.465f, 2875.697f, 44.5839f, 353.7992f);
func_456(1312.441f, 2795.427f, 45.2701f, 218.5991f);
}
break;
case 90:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(14.4916f, 2660.726f, 79.0178f, 310.1999f);
func_456(3.855f, 2672.388f, 78.437f, 319.2f);
func_456(-7.057f, 2682.247f, 77.472f, 319.2f);
func_456(-14.041f, 2663.43f, 77.4221f, 319.2f);
func_456(41.8086f, 2597.059f, 81.3524f, 301.9997f);
func_456(60.2273f, 2609.745f, 79.5672f, 305.9998f);
func_456(34.0188f, 2659.723f, 78.9894f, 314.2f);
func_456(29.4879f, 2675.34f, 76.0202f, 314.2f);
func_456(19.0088f, 2686.16f, 75.6897f, 314.2f);
func_456(7.6101f, 2697.113f, 76.2923f, 314.2f);
}else{
func_456(50.6405f, 2633.902f, 79.4503f, 305.1998f);
func_456(46.2894f, 2639.951f, 79.9122f, 305.1998f);
func_456(55.3668f, 2627.773f, 79.6363f, 305.1998f);
func_456(59.9522f, 2620.408f, 80.0499f, 305.1998f);
func_456(42.1486f, 2646.073f, 80.108f, 305.1998f);
func_456(68.1481f, 2630.07f, 77.0725f, 305.1998f);
func_456(62.6048f, 2637.014f, 76.1722f, 305.1998f);
func_456(57.3543f, 2643.56f, 75.5301f, 305.1998f);
func_456(52.611f, 2649.698f, 76.1354f, 305.1998f);
func_456(74.5845f, 2640.475f, 72.602f, 305.1998f);
func_456(68.5462f, 2646.784f, 71.6298f, 305.1998f);
func_456(62.426f, 2652.977f, 71.7029f, 305.1998f);
func_456(79.5597f, 2650.835f, 68.668f, 305.1998f);
func_456(72.6035f, 2656.857f, 67.3294f, 305.1998f);
func_456(83.4156f, 2660.237f, 64.3198f, 305.1998f);
func_456(102.851f, 2688.009f, 51.732f, 224f);
func_456(109.815f, 2681.012f, 51.112f, 224f);
func_456(116.355f, 2674.26f, 50.529f, 224f);
func_456(125.138f, 2665.98f, 49.8f, 224f);
func_456(132.228f, 2659.865f, 49.26f, 228.4f);
func_456(139.354f, 2653.536f, 48.737f, 228.4f);
func_456(88.512f, 2702.995f, 53.042f, 224.199f);
func_456(81.565f, 2710.357f, 53.67f, 224.199f);
func_456(75.156f, 2716.981f, 54.223f, 224.199f);
func_456(68.442f, 2723.806f, 54.775f, 226.199f);
func_456(61.449f, 2730.606f, 55.308f, 226.199f);
func_456(53.702f, 2738.167f, 55.855f, 226.199f);
func_456(91.2443f, 2667.262f, 59.9931f, 314.599f);
}
break;
case 91:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(2772.011f, 3889.062f, 42.94f, 145.4f);
func_456(2785.592f, 3880.409f, 43.695f, 146.199f);
func_456(2788.387f, 3898.107f, 45.364f, 140.999f);
func_456(2801.558f, 3912.485f, 44.931f, 131.999f);
func_456(2805.531f, 3892.253f, 47.01f, 106.399f);
func_456(2824.791f, 3894.787f, 47.4293f, 105.3989f);
func_456(2761.739f, 3945.948f, 44.59f, 135.398f);
func_456(2814.589f, 3930.404f, 44.816f, 134.9978f);
func_456(2747.627f, 3930.92f, 43.8497f, 138.3978f);
func_456(2796.312f, 3928.316f, 42.6106f, 134.5979f);
}else{
func_456(2730.174f, 3890.294f, 42.435f, 54.6f);
func_456(2714.633f, 3918.283f, 42.938f, 16f);
func_456(2716.533f, 3910.15f, 42.699f, 19.6f);
func_456(2757.499f, 3874.045f, 42.724f, 64.8f);
func_456(2747.99f, 3878.676f, 42.561f, 62.8f);
func_456(2738.337f, 3884.314f, 42.614f, 57.2f);
func_456(2711.836f, 3926.255f, 42.931f, 21.6f);
func_456(2707.586f, 3934.558f, 42.984f, 27.6f);
func_456(2702.361f, 3943.039f, 42.951f, 30.6f);
func_456(2696.696f, 3951.317f, 43.012f, 34.8f);
func_456(2766.778f, 3868.911f, 42.822f, 59.8f);
func_456(2775.397f, 3863.697f, 43.204f, 54.2f);
func_456(2738.841f, 3869.927f, 42.492f, 242.799f);
func_456(2746.49f, 3865.861f, 42.808f, 239.599f);
func_456(2754.829f, 3861.039f, 42.906f, 240.799f);
func_456(2762.616f, 3856.316f, 42.895f, 240.799f);
func_456(2770.463f, 3851.383f, 43.216f, 233.199f);
func_456(2778.129f, 3844.914f, 43.26f, 229.199f);
func_456(2785.341f, 3837.918f, 43.141f, 224.999f);
func_456(2730.65f, 3875.186f, 42.437f, 231.999f);
func_456(2724.14f, 3880.885f, 42.469f, 224.599f);
func_456(2718.541f, 3887.508f, 42.614f, 217.399f);
func_456(2783.246f, 3857.409f, 43.175f, 45.199f);
func_456(2790.716f, 3850.631f, 43.125f, 45.199f);
func_456(2690.655f, 3959.246f, 43.255f, 40.199f);
func_456(2797.912f, 3842.523f, 43.166f, 40.199f);
func_456(2791.836f, 3830.845f, 43.14f, 221.999f);
func_456(2712.952f, 3894.566f, 42.484f, 14.799f);
}
break;
case 92:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(3374.661f, 5559.709f, 12.3726f, 138.7999f);
func_456(3366.365f, 5569.449f, 13.9704f, 112.8f);
func_456(3358.493f, 5581.463f, 16.1783f, 112.8f);
func_456(3356.705f, 5595.363f, 15.4029f, 112.8f);
func_456(3336.662f, 5552.357f, 19.491f, 249.6f);
func_456(3336.791f, 5567.825f, 20.432f, 249.6f);
func_456(3335.259f, 5599.046f, 22.4606f, 249.6f);
func_456(3336.811f, 5613.029f, 22.2159f, 249.6f);
func_456(3354.696f, 5609.699f, 15.9453f, 111.3999f);
func_456(3354.006f, 5624.206f, 16.018f, 111.3999f);
}else{
func_456(3372.053f, 5506.134f, 20.8174f, 99.5999f);
func_456(3374.923f, 5520.177f, 20.3207f, 86f);
func_456(3350.643f, 5490.432f, 18.8423f, 139.9997f);
func_456(3364.189f, 5502.98f, 19.648f, 125.7999f);
func_456(3354.101f, 5484.773f, 19.619f, 116.399f);
func_456(3365.919f, 5519.949f, 18.8008f, 102.9988f);
func_456(3341.889f, 5506.809f, 19.584f, 161.199f);
func_456(3338.581f, 5497.709f, 19.376f, 161.199f);
func_456(3335.674f, 5489.348f, 19.542f, 161.199f);
func_456(3332.019f, 5479.563f, 19.738f, 150.998f);
func_456(3327.404f, 5470.857f, 19.302f, 159.398f);
func_456(3323.903f, 5461.49f, 18.492f, 156.398f);
func_456(3320.016f, 5452.957f, 17.834f, 153.198f);
func_456(3315.782f, 5444.61f, 17.115f, 150.798f);
func_456(3335.451f, 5455.723f, 18.2323f, 162.1979f);
func_456(3338.788f, 5464.803f, 18.8631f, 163.7977f);
func_456(3362.476f, 5488.211f, 20.4432f, 108.5979f);
func_456(3371.259f, 5491.274f, 21.5286f, 104.9989f);
func_456(3342.201f, 5517.014f, 19.642f, 170.199f);
func_456(3343.267f, 5526.085f, 18.902f, 175.598f);
func_456(3343.531f, 5536.075f, 18.217f, 178.598f);
func_456(3357.257f, 5496.71f, 18.9729f, 132.5977f);
func_456(3342.346f, 5473.345f, 19.1235f, 159.3987f);
func_456(3347.236f, 5480.447f, 19.4672f, 131.199f);
func_456(3357.623f, 5516.9f, 16.9016f, 118.7991f);
func_456(3361.366f, 5545.886f, 15.5532f, 118.7991f);
func_456(3352.612f, 5541.013f, 16.3238f, 131.999f);
func_456(3343.349f, 5546.494f, 17.8738f, 173.9988f);
}
break;
case 93:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(43.848f, 6845.657f, 13.379f, 247.2f);
func_456(50.379f, 6861.146f, 15.105f, 247.2f);
func_456(32.501f, 6871.777f, 13.3283f, 247.2f);
func_456(38.437f, 6885.796f, 13.3627f, 247.2f);
func_456(55.806f, 6875.081f, 14.824f, 247.2f);
func_456(11.616f, 6877.079f, 11.466f, 247.2f);
func_456(18.954f, 6891.633f, 11.37f, 247.2f);
func_456(26.68f, 6907.587f, 11.869f, 247.2f);
func_456(7.479f, 6907.895f, 12.024f, 247.2f);
func_456(44.9981f, 6901.352f, 11.9426f, 247.2f);
}else{
func_456(35.591f, 6836.608f, 13.288f, 274.4f);
func_456(36.028f, 6830.135f, 13.801f, 270.8f);
func_456(35.114f, 6823.884f, 14.527f, 260.8f);
func_456(48.779f, 6838.693f, 14.337f, 273.6f);
func_456(56.738f, 6821.8f, 15.244f, 244.8f);
func_456(48.377f, 6825.895f, 14.656f, 249.8f);
func_456(49.11f, 6831.439f, 13.991f, 274.8f);
func_456(53.544f, 6818.275f, 16.342f, 243f);
func_456(46.162f, 6821.945f, 15.483f, 249.8f);
func_456(60.129f, 6836.8f, 15.605f, 269.6f);
func_456(40.88f, 6802.952f, 20.113f, 242.6f);
func_456(48.203f, 6799.134f, 20.897f, 244.4f);
func_456(70.449f, 6809.271f, 16.846f, 243f);
func_456(61.436f, 6814.266f, 16.71f, 244.2f);
func_456(56.142f, 6793.458f, 19.806f, 242.6f);
func_456(65.759f, 6791.12f, 18.433f, 276.4f);
func_456(77.305f, 6805.391f, 18.558f, 245.6f);
func_456(85.893f, 6800.243f, 18.535f, 249.8f);
func_456(56.85f, 6780.582f, 18.822f, 297.999f);
func_456(65.636f, 6784.669f, 18.789f, 293.799f);
func_456(74.121f, 6788.498f, 18.739f, 293.799f);
func_456(97.779f, 6796.32f, 19.02f, 276.799f);
func_456(106.76f, 6796.983f, 18.914f, 272.599f);
func_456(112.387f, 6802.858f, 18.994f, 210.599f);
func_456(117.58f, 6802.644f, 18.663f, 209.399f);
func_456(122.481f, 6802.693f, 18.468f, 209.399f);
func_456(127.182f, 6802.686f, 18.218f, 209.399f);
func_456(132.429f, 6801.882f, 17.949f, 209.399f);
}
break;
case 94:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
func_456(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
func_456(-2232.397f, 2274.252f, 31.602f, 296.7993f);
func_456(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
func_456(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
func_456(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
func_456(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
func_456(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
func_456(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
func_456(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
}else{
func_456(-2239.671f, 2390.292f, 10.756f, 189.2002f);
func_456(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
func_456(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
func_456(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
func_456(-2238.044f, 2372.67f, 15.07f, 187.4004f);
func_456(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
func_456(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
func_456(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
func_456(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
func_456(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
func_456(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
func_456(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
func_456(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
func_456(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
func_456(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
func_456(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
func_456(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
func_456(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
func_456(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
func_456(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
func_456(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
func_456(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
func_456(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
func_456(-2255.106f, 2285.415f, 31.617f, 130.3999f);
func_456(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
func_456(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
func_456(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
func_456(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
}
break;
case 95:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(4.0332f, 3378.618f, 41.0822f, 247.1989f);
func_456(38.819f, 3321.2f, 37.0283f, 203.999f);
func_456(26.877f, 3309.062f, 37.93f, 191.9991f);
func_456(15.6727f, 3297.846f, 39.0535f, 191.9991f);
func_456(-24.2865f, 3367.527f, 41.4783f, 264.399f);
func_456(-23.1279f, 3352.254f, 40.52f, 280.399f);
func_456(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
func_456(97.4844f, 3335.385f, 34.6164f, 7.9981f);
func_456(20.409f, 3370.839f, 38.8393f, 235.799f);
func_456(48.457f, 3336.586f, 35.8912f, 270.3979f);
}else{
func_456(25.9869f, 3349.706f, 36.0366f, 273.9994f);
func_456(25.0176f, 3356.915f, 36.4258f, 276.9998f);
func_456(36.2443f, 3351.358f, 36.2386f, 272.5997f);
func_456(35.9352f, 3358.816f, 37.0033f, 276.7998f);
func_456(25.9651f, 3342.673f, 36.2157f, 270.7997f);
func_456(30.027f, 3292.351f, 38.604f, 140.199f);
func_456(49.1614f, 3358.589f, 35.9759f, 263.5988f);
func_456(48.288f, 3352.494f, 35.5841f, 261.1988f);
func_456(23.897f, 3283.152f, 39.381f, 145.399f);
func_456(60.9182f, 3356.21f, 35.8814f, 255.3988f);
func_456(18.723f, 3274.025f, 40.054f, 155.799f);
func_456(59.0177f, 3350.004f, 35.3204f, 255.7989f);
func_456(36.958f, 3298.847f, 38.001f, 127.799f);
func_456(54.165f, 3311.582f, 36.517f, 303.799f);
func_456(61.607f, 3317.105f, 35.916f, 306.999f);
func_456(68.994f, 3323.129f, 35.364f, 308.199f);
func_456(76.266f, 3329.467f, 34.805f, 311.399f);
func_456(82.757f, 3335.915f, 34.344f, 316.598f);
func_456(46.5977f, 3306.196f, 37.1628f, 304.9976f);
func_456(14.664f, 3263.688f, 40.931f, 160.398f);
func_456(50.8234f, 3324.118f, 36.2129f, 305.1976f);
func_456(11.7852f, 3256.101f, 41.7031f, 159.198f);
func_456(89.575f, 3343.311f, 33.932f, 318.398f);
func_456(58.4154f, 3329.423f, 35.6197f, 305.5979f);
func_456(65.3201f, 3334.253f, 35.1903f, 306.5977f);
func_456(72.1063f, 3339.793f, 34.8449f, 308.5977f);
func_456(95.6614f, 3349.917f, 33.696f, 316.1977f);
func_456(85.4387f, 3353.183f, 33.8047f, 317.9978f);
}
break;
case 96:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(2135.708f, 1757.503f, 102.073f, 40.999f);
func_456(2148.674f, 1764.557f, 102.75f, 40.999f);
func_456(2160.511f, 1771.173f, 104.149f, 40.999f);
func_456(2172.842f, 1777.391f, 105.369f, 40.999f);
func_456(2127.938f, 1736.353f, 100.835f, 222.199f);
func_456(2141.682f, 1739.865f, 99.833f, 222.199f);
func_456(2152.786f, 1747.776f, 99.785f, 222.199f);
func_456(2166.356f, 1754.682f, 100.07f, 220.399f);
func_456(2090.66f, 1701.805f, 101.681f, 243.199f);
func_456(2066.149f, 1716.735f, 102.112f, 228.2f);
}else{
func_456(2073.044f, 1725.935f, 102.5096f, 225.2f);
func_456(2077.24f, 1730.299f, 102.5247f, 225.2f);
func_456(2081.68f, 1734.742f, 102.5588f, 225.2f);
func_456(2086.052f, 1739.045f, 102.6618f, 225.2f);
func_456(2090.55f, 1743.53f, 102.6058f, 225.2f);
func_456(2095.295f, 1748.274f, 102.3022f, 225.2f);
func_456(2101.779f, 1721.807f, 101.927f, 225.2f);
func_456(2107.08f, 1727.001f, 101.932f, 225.2f);
func_456(2095.867f, 1716.475f, 101.925f, 225.2f);
func_456(2112.387f, 1732.492f, 101.849f, 225.2f);
func_456(2089.718f, 1710.779f, 101.978f, 225.2f);
func_456(2111.639f, 1717.132f, 100.855f, 225.2f);
func_456(2117.297f, 1722.655f, 100.704f, 225.2f);
func_456(2105.821f, 1711.672f, 101.065f, 225.2f);
func_456(2098.759f, 1704.866f, 101.209f, 225.2f);
func_456(2121.208f, 1713.145f, 99.65f, 225.2f);
func_456(2115.34f, 1707.542f, 99.829f, 225.2f);
func_456(2109.211f, 1702.247f, 100.079f, 225.2f);
func_456(2124.167f, 1704.036f, 98.584f, 225.2f);
func_456(2118.181f, 1698.253f, 98.645f, 225.2f);
func_456(2127.253f, 1694.878f, 97.078f, 225.2f);
func_456(2117.786f, 1738.219f, 101.839f, 225.2f);
func_456(2122.34f, 1728.011f, 100.627f, 225.2f);
func_456(2126.288f, 1718.542f, 99.501f, 225.2f);
func_456(2129.762f, 1709.847f, 98.352f, 225.2f);
func_456(2132.765f, 1700.777f, 96.999f, 225.2f);
func_456(2120.399f, 1689.165f, 97.388f, 225.2f);
func_456(2098.994f, 1747.929f, 102.2403f, 225.2f);
}
break;
case 97:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_456(1871.691f, 358.5369f, 162.1067f, 153.1979f);
func_456(1858.966f, 351.2935f, 161.7614f, 166.598f);
func_456(1873.611f, 342.6637f, 161.6936f, 142.998f);
func_456(1887.645f, 343.1557f, 162.1659f, 138.5979f);
func_456(1888.644f, 328.0839f, 161.7489f, 139.398f);
func_456(1898.596f, 315.2232f, 161.4418f, 173.7979f);
func_456(1896.729f, 266.5388f, 161.1619f, 113.5978f);
func_456(1900.167f, 281.3884f, 161.7807f, 115.197f);
func_456(1856.286f, 294.624f, 161.442f, 167.9966f);
func_456(1868.622f, 309.7907f, 162.6084f, 155.1968f);
}else{
func_456(1856.378f, 255.9146f, 162.7158f, 147.6202f);
func_456(1837.279f, 227.3696f, 165.2592f, 164.3995f);
func_456(1835.192f, 219.3931f, 167.5468f, 169.9994f);
func_456(1833.557f, 211.859f, 169.864f, 169.9994f);
func_456(1839.534f, 194.4053f, 171.3841f, 172.9989f);
func_456(1838.289f, 185.8157f, 171.2585f, 174.1989f);
func_456(1837.478f, 177.0607f, 170.7063f, 174.1989f);
func_456(1840.463f, 202.6959f, 170.8702f, 174.1989f);
func_456(1836.296f, 168.7307f, 170.5786f, 174.1989f);
func_456(1835.412f, 159.3162f, 170.4163f, 171.1989f);
func_456(1826.91f, 214.9648f, 172.2502f, 18.7986f);
func_456(1823.805f, 223.0288f, 172.0794f, 21.7986f);
func_456(1820.599f, 231.144f, 172.2987f, 21.7986f);
func_456(1817.245f, 239.1232f, 172.0878f, 21.7986f);
func_456(1814.089f, 247.0423f, 171.7386f, 24.9986f);
func_456(1810.879f, 255.6553f, 171.7517f, 19.3986f);
func_456(1807.729f, 265.4899f, 172.2307f, 15.1986f);
func_456(1823.147f, 197.3122f, 172.235f, 192.3984f);
func_456(1824.641f, 184.4241f, 171.5948f, 183.3985f);
func_456(1825.019f, 171.2314f, 170.5843f, 183.3985f);
func_456(1824.748f, 162.8998f, 170.4961f, 173.1985f);
func_456(1817.345f, 214.6964f, 172.5223f, 203.9982f);
func_456(1813.466f, 222.3717f, 172.3316f, 200.9982f);
func_456(1809.114f, 230.8225f, 172.346f, 205.1983f);
func_456(1805.594f, 239.3896f, 172.0033f, 197.9984f);
func_456(1802.515f, 247.4269f, 171.8964f, 197.9984f);
func_456(1833.982f, 150.4025f, 170.411f, 163.7985f);
func_456(1823.079f, 154.5105f, 170.8194f, 163.7985f);
}
break;
case 123:
case 124:
case 125:
func_442(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
func_442(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
func_442(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
func_442(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
func_442(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
func_442(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
func_442(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
func_442(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
func_442(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
func_442(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
func_442(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
func_442(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
func_442(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
func_442(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
func_442(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
func_442(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
func_442(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
func_442(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
func_442(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
func_442(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
func_442(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
func_442(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
func_442(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
func_442(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
func_442(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
func_442(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
func_442(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
func_442(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
func_442(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
func_442(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
func_442(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
func_442(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
break;
default:
break;
}}


void func_442(struct<3> Param0, float fParam1, int iParam2, bool bParam3){
struct<2> Var0;
struct<2> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
if(!iParam2==0){
func_353(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
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
func_456(Var4, fParam1);
}else{
func_456(Param0, fParam1);
}}


void func_443(int iParam0){
switch (iParam0){
case 83:
func_456(-1133.454f, -3371.672f, 12.945f, 329.799f);
func_456(-1119.748f, -3379.991f, 12.945f, 329.799f);
func_456(-1147.602f, -3363.505f, 12.945f, 329.799f);
func_456(-1161.988f, -3354.852f, 12.945f, 329.799f);
func_456(-1116.563f, -3358.99f, 12.945f, 329.799f);
func_456(-1131.23f, -3350.104f, 12.945f, 329.799f);
func_456(-1145.252f, -3341.608f, 12.945f, 329.799f);
func_456(-1115.202f, -3339.265f, 12.945f, 329.799f);
func_456(-1129.559f, -3330.697f, 12.945f, 329.799f);
func_456(-1114.664f, -3320.954f, 12.945f, 329.799f);
func_456(-1199.923f, -3369.502f, 12.945f, 350.399f);
func_456(-1212.069f, -3363.568f, 12.945f, 350.399f);
func_456(-1223.637f, -3356.694f, 12.945f, 350.399f);
func_456(-1102.284f, -3420.613f, 12.945f, 354.599f);
func_456(-1091.131f, -3427.396f, 12.945f, 354.599f);
func_456(-1079.372f, -3434.306f, 12.945f, 354.599f);
func_456(-1067.498f, -3441.878f, 13.114f, 354.599f);
func_456(-1055.714f, -3448.819f, 12.977f, 354.599f);
func_456(-1043.37f, -3455.796f, 13.146f, 354.599f);
func_456(-1017.023f, -3382.777f, 12.8401f, 330.6f);
func_456(-1010.608f, -3386.103f, 12.8401f, 330.6f);
func_456(-1004.658f, -3389.823f, 12.8401f, 330.6f);
func_456(-998.3798f, -3393.644f, 12.8401f, 330.6f);
func_456(-991.5242f, -3397.297f, 12.8401f, 330.6f);
func_456(-985.0826f, -3401.247f, 12.8401f, 330.6f);
func_456(-978.2733f, -3405.031f, 12.8401f, 330.6f);
func_456(-971.724f, -3409.109f, 12.8401f, 330.6f);
func_456(-964.4719f, -3413.202f, 13.1463f, 330.6f);
func_456(-1022.94f, -3392.372f, 12.8401f, 330.6f);
func_456(-1016.219f, -3395.82f, 12.8401f, 330.6f);
func_456(-1009.873f, -3399.143f, 12.8401f, 330.6f);
func_456(-1003.436f, -3402.982f, 12.8401f, 330.6f);
func_456(-997.0872f, -3406.928f, 12.8401f, 330.6f);
func_456(-990.2305f, -3410.548f, 12.8401f, 330.6f);
func_456(-983.4429f, -3414.093f, 12.8401f, 330.6f);
func_456(-976.8809f, -3417.846f, 12.8401f, 330.6f);
func_456(-969.4039f, -3421.727f, 13.1463f, 330.6f);
func_456(-1028.251f, -3401.834f, 12.8401f, 330.6f);
func_456(-1021.631f, -3405.433f, 12.8401f, 330.6f);
func_456(-1015.209f, -3408.563f, 12.8401f, 330.6f);
func_456(-1008.81f, -3412.484f, 12.8401f, 330.6f);
func_456(-1002.277f, -3415.987f, 12.8401f, 330.6f);
func_456(-995.7023f, -3419.97f, 12.8401f, 330.6f);
func_456(-989.1453f, -3423.988f, 12.8401f, 330.6f);
func_456(-982.6298f, -3427.981f, 12.8401f, 330.6f);
func_456(-974.9305f, -3431.833f, 13.1463f, 330.6f);
break;
case 84:
func_456(-1356.991f, -3242.228f, 12.945f, 330f);
func_456(-1369.313f, -3234.758f, 12.945f, 330f);
func_456(-1381.751f, -3227.408f, 12.945f, 330f);
func_456(-1394.302f, -3220.021f, 12.945f, 330f);
func_456(-1354.339f, -3223.129f, 12.945f, 330f);
func_456(-1366.302f, -3215.809f, 12.945f, 330f);
func_456(-1378.492f, -3208.645f, 12.945f, 330f);
func_456(-1350.322f, -3203.405f, 12.945f, 330f);
func_456(-1362.684f, -3196.451f, 12.945f, 330f);
func_456(-1347.089f, -3182.69f, 12.945f, 330f);
func_456(-1452.642f, -3222.367f, 12.945f, 347.799f);
func_456(-1464.229f, -3215.108f, 12.945f, 347.799f);
func_456(-1476.133f, -3207.652f, 12.945f, 347.799f);
func_456(-1488.295f, -3200.033f, 12.945f, 347.799f);
func_456(-1336.877f, -3272.344f, 12.945f, 8.199f);
func_456(-1323.381f, -3279.614f, 12.945f, 8.199f);
func_456(-1309.671f, -3287.749f, 12.945f, 8.199f);
func_456(-1296.963f, -3294.511f, 12.945f, 8.199f);
func_456(-1501.978f, -3193.849f, 12.945f, 350.599f);
func_456(-1344.716f, -3288.333f, 12.9445f, 331.2f);
func_456(-1338.141f, -3290.335f, 12.9445f, 331.2f);
func_456(-1331.473f, -3294.178f, 12.9445f, 331.2f);
func_456(-1324.921f, -3297.998f, 12.9445f, 331.2f);
func_456(-1318.129f, -3301.957f, 12.9445f, 331.2f);
func_456(-1350.466f, -3294.226f, 12.9445f, 331.2f);
func_456(-1343.482f, -3297.576f, 12.9445f, 331.2f);
func_456(-1336.398f, -3302.456f, 12.9445f, 331.2f);
func_456(-1329.82f, -3306.82f, 12.945f, 331.2f);
func_456(-1322.761f, -3310.353f, 12.945f, 331.2f);
func_456(-1316.587f, -3314.556f, 12.945f, 331.2f);
func_456(-1326.538f, -3318.499f, 12.945f, 331.2f);
func_456(-1335.74f, -3313.678f, 12.945f, 331.2f);
func_456(-1350.848f, -3302.619f, 12.9446f, 331.2f);
func_456(-1357.961f, -3306.886f, 12.945f, 331.2f);
func_456(-1335.202f, -3322.428f, 12.9452f, 331.2f);
func_456(-1351.401f, -3311.566f, 12.9452f, 331.2f);
func_456(-1344.255f, -3305.965f, 12.9451f, 331.2f);
func_456(-1299.832f, -3305.573f, 12.945f, 331.2f);
func_456(-1293.414f, -3309.413f, 12.945f, 331.2f);
func_456(-1286.835f, -3313.157f, 12.945f, 331.2f);
func_456(-1303.988f, -3313.1f, 12.945f, 331.2f);
func_456(-1297.402f, -3316.699f, 12.945f, 331.2f);
func_456(-1290.969f, -3320.519f, 12.945f, 331.2f);
func_456(-1308.27f, -3320.612f, 12.945f, 331.2f);
func_456(-1301.968f, -3324.714f, 12.945f, 331.2f);
func_456(-1295.483f, -3328.422f, 12.945f, 331.2f);
break;
case 85:
func_456(-2039.992f, 3132.191f, 31.81f, 149.399f);
func_456(-2025.075f, 3128.63f, 31.81f, 197.599f);
func_456(-2049.589f, 3142.464f, 31.81f, 109.199f);
func_456(-2088.648f, 3081.327f, 31.81f, 150.599f);
func_456(-2070.669f, 3111.575f, 31.81f, 123.399f);
func_456(-2053.385f, 3109.703f, 31.81f, 150.599f);
func_456(-2044.448f, 3094.012f, 31.81f, 181.799f);
func_456(-2071.825f, 3093.477f, 31.81f, 150.599f);
func_456(-2060.579f, 3085.924f, 31.81f, 150.599f);
func_456(-2062.712f, 3066.073f, 31.81f, 150.599f);
func_456(-2094.385f, 3190.445f, 31.81f, 117.799f);
func_456(-2083.056f, 3182.885f, 31.81f, 117.799f);
func_456(-2071.578f, 3175.554f, 31.81f, 117.799f);
func_456(-2120.249f, 3173.97f, 31.81f, 25.199f);
func_456(-2067.547f, 3146.325f, 31.81f, 14.998f);
func_456(-2080.506f, 3154.591f, 31.81f, 15.798f);
func_456(-2093.278f, 3159.793f, 31.81f, 14.798f);
func_456(-2106.614f, 3167.605f, 31.81f, 21.198f);
func_456(-2106.347f, 3196.902f, 31.81f, 117.799f);
func_456(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
func_456(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
func_456(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
func_456(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
func_456(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
func_456(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
func_456(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
func_456(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
func_456(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
func_456(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
func_456(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
func_456(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
func_456(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
func_456(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
func_456(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
func_456(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
func_456(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
func_456(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
func_456(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
func_456(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
func_456(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
func_456(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
func_456(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
func_456(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
func_456(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
func_456(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
func_456(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
break;
case 86:
func_456(-1885.187f, 3095.344f, 31.81f, 150.2f);
func_456(-1898.637f, 3072.816f, 31.811f, 150.2f);
func_456(-1886.469f, 3065.78f, 31.811f, 150.2f);
func_456(-1874.621f, 3058.437f, 31.81f, 150.2f);
func_456(-1862.818f, 3051.244f, 31.81f, 150.2f);
func_456(-1915.317f, 3041.652f, 31.811f, 150.2f);
func_456(-1896.724f, 2997.848f, 31.81f, 150.2f);
func_456(-1932.975f, 3011.781f, 31.81f, 150.2f);
func_456(-1875.668f, 3034.438f, 31.811f, 150.2f);
func_456(-1886.144f, 3016.285f, 31.81f, 150.2f);
func_456(-1913.706f, 3104.196f, 31.81f, 118.599f);
func_456(-1925.44f, 3112.236f, 31.81f, 118.599f);
func_456(-1938.08f, 3119.383f, 31.81f, 118.599f);
func_456(-1927.822f, 3072.679f, 31.81f, 13.399f);
func_456(-1940.575f, 3079.031f, 31.81f, 13.399f);
func_456(-1953.344f, 3084.888f, 31.81f, 13.399f);
func_456(-1965.91f, 3091.929f, 31.81f, 13.399f);
func_456(-1978.86f, 3100.029f, 31.81f, 13.399f);
func_456(-1950.928f, 3126.457f, 31.81f, 118.999f);
func_456(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
func_456(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
func_456(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
func_456(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
func_456(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
func_456(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
func_456(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
func_456(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
func_456(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
func_456(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
func_456(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
func_456(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
func_456(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
func_456(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
func_456(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
func_456(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
func_456(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
func_456(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
func_456(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
func_456(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
func_456(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
func_456(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
func_456(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
func_456(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
func_456(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
func_456(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
func_456(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
break;
case 87:
func_456(-2484.323f, 3249.294f, 31.828f, 151f);
func_456(-2495.313f, 3255.746f, 31.828f, 151f);
func_456(-2472.644f, 3242.684f, 31.828f, 151f);
func_456(-2506.313f, 3262.27f, 31.823f, 151f);
func_456(-2461.494f, 3235.93f, 31.828f, 151f);
func_456(-2505.602f, 3238.049f, 31.828f, 151f);
func_456(-2481.937f, 3224.8f, 31.828f, 151f);
func_456(-2516.813f, 3244.266f, 31.823f, 151f);
func_456(-2470.03f, 3217.899f, 31.828f, 151f);
func_456(-2493.933f, 3231.308f, 31.828f, 151f);
func_456(-2443.467f, 3227.753f, 31.828f, 175.8f);
func_456(-2431.365f, 3220.9f, 31.828f, 175.8f);
func_456(-2419.883f, 3214.708f, 31.828f, 175.8f);
func_456(-2501.903f, 3272.865f, 31.822f, 123.999f);
func_456(-2513.555f, 3280.176f, 31.817f, 123.999f);
func_456(-2524.776f, 3287.276f, 31.973f, 123.999f);
func_456(-2407.718f, 3208.055f, 31.827f, 176.199f);
func_456(-2395.689f, 3201.125f, 31.827f, 176.199f);
func_456(-2383.498f, 3194.211f, 31.833f, 176.199f);
func_456(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
func_456(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
func_456(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
func_456(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
func_456(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
func_456(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
func_456(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
func_456(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
func_456(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
func_456(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
func_456(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
func_456(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
func_456(-2383.986f, 3223.995f, 31.986f, 150.5996f);
func_456(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
func_456(-2370.524f, 3215.946f, 32.002f, 150.5996f);
func_456(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
func_456(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
func_456(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
func_456(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
func_456(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
func_456(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
func_456(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
func_456(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
func_456(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
func_456(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
func_456(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
func_456(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
break;
default:
break;
}}

int func_444(int iParam0){
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


void func_445(int iParam0){
switch (iParam0){
case 83:
case 84:
func_456(-947.712f, -3367.704f, 12.944f, 60f);
func_456(-904.692f, -3293.072f, 12.944f, 60f);
func_456(-863.71f, -3221.978f, 12.944f, 60f);
func_456(-966.418f, -3162.773f, 12.944f, 60f);
func_456(-1007.435f, -3233.93f, 12.944f, 60f);
func_456(-1050.455f, -3308.559f, 12.944f, 60f);
func_456(-1145.673f, -3253.456f, 12.944f, 60f);
func_456(-1098.386f, -3181.428f, 12.944f, 60f);
func_456(-1060.474f, -3108.903f, 12.944f, 60f);
func_456(-1155.391f, -3053.632f, 12.944f, 60f);
func_456(-1196.114f, -3125.146f, 12.948f, 60f);
func_456(-1235.552f, -3201.86f, 12.944f, 60f);
func_456(-1344.446f, -3139.177f, 12.944f, 60f);
func_456(-1301.308f, -3064.341f, 12.944f, 60f);
func_456(-1260.135f, -2992.912f, 12.944f, 60f);
func_456(-1364.244f, -2932.9f, 12.98f, 60f);
func_456(-1405.284f, -3004.108f, 12.96f, 60f);
func_456(-1448.29f, -3078.72f, 12.95f, 60f);
func_456(-1535.732f, -3028.318f, 12.945f, 60f);
func_456(-1492.639f, -2953.558f, 12.945f, 60f);
func_456(-1451.506f, -2882.2f, 12.944f, 60f);
func_456(-1553.927f, -2823.12f, 13.002f, 60f);
func_456(-1595.097f, -2894.571f, 12.944f, 60f);
func_456(-1637.836f, -2968.714f, 12.945f, 60f);
func_456(-1740.971f, -2911.484f, 12.944f, 330f);
func_456(-1696.293f, -2833.978f, 12.944f, 330f);
func_456(-1651.502f, -2756.273f, 12.945f, 330f);
func_456(-1588.258f, -2647.575f, 12.944f, 330f);
func_456(-1536.862f, -2681.378f, 12.945f, 330f);
func_456(-1529.025f, -2544.485f, 12.944f, 330f);
break;
case 85:
case 86:
case 87:
func_456(-1970.422f, 2825.696f, 31.81f, 60.4f);
func_456(-2033.307f, 2855.526f, 31.83f, 60.4f);
func_456(-2091.018f, 2888.691f, 31.81f, 60.4f);
func_456(-2206.717f, 2955.363f, 31.81f, 60.4f);
func_456(-2268.817f, 2990.846f, 31.81f, 60.4f);
func_456(-2324.039f, 3023.154f, 31.811f, 60.4f);
func_456(-2435.806f, 3087.705f, 31.824f, 60.4f);
func_456(-2543.753f, 3149.909f, 31.821f, 60.4f);
func_456(-1944.848f, 2898.798f, 31.81f, 125.398f);
func_456(-1978.705f, 2924.367f, 31.846f, 151.999f);
func_456(-2064.849f, 2955.153f, 31.867f, 151.199f);
func_456(-2106.165f, 2980.687f, 31.81f, 104.599f);
func_456(-2302.367f, 3088.676f, 31.814f, 150.598f);
func_456(-2152.113f, 2924.162f, 31.81f, 60.198f);
func_456(-2488.232f, 3118.146f, 31.822f, 59.798f);
func_456(-2277.922f, 3133.756f, 31.811f, 120.598f);
func_456(-2604.776f, 3185.186f, 31.812f, 59.998f);
func_456(-2608.107f, 3305.049f, 31.812f, 60.198f);
func_456(-2718.936f, 3323.203f, 31.81f, 201.198f);
func_456(-2658.718f, 3216.499f, 31.812f, 59.998f);
func_456(-2380.372f, 3055.341f, 31.826f, 60.4f);
func_456(-2790.616f, 3286.24f, 31.812f, 240.397f);
func_456(-2770.946f, 3322.605f, 31.812f, 240.397f);
func_456(-2678.805f, 3339.186f, 31.812f, 199.597f);
func_456(-2743.882f, 3224.094f, 31.81f, 303.397f);
func_456(-2701.354f, 3203.092f, 31.994f, 328.397f);
func_456(-2249.816f, 2944.609f, 31.937f, 330.196f);
func_456(-2586.579f, 3137.286f, 31.935f, 330.196f);
func_456(-2134.76f, 2878.728f, 31.81f, 330.196f);
func_456(-1949.075f, 2861.21f, 31.811f, 58.798f);
break;
default:
break;
}}

int func_446(int iParam0){
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

int func_447(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f){
return 1;
}
return 0;
}

int func_448(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f){
return 1;
}
return 0;
}

int func_449(int iParam0, int iParam1){
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

int func_450(struct<2> Param0, var uParam1, var uParam2, var uParam3){
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
if(func_428(iVar0)){
fVar3=300f;
}else{
fVar3=0f;
}}
if(iVar0 >=89 && iVar0 <=97){
if(func_451(iVar0)){
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

int func_451(int iParam0){
int iVar0;
int iVar1;
iVar0=func_452(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_300==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_66()){
if(Global_1853910[iVar1 /*862*/].f_267.f_300==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
return 0;
}

int func_452(int iParam0){
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

int func_453(int iParam0){
if((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 1;
}
return 0;
}


void func_454(int iParam0){
switch (iParam0){
case 78:
func_456(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
func_456(-612.8933f, 692.116f, 148.7577f, 79.1005f);
func_456(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
func_456(-639.3558f, 696.9992f, 150.5134f, 77.481f);
break;
case 79:
func_456(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_456(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_456(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_456(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 82:
func_456(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_456(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_456(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_456(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 81:
func_456(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
func_456(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
func_456(-1283.894f, 467.2136f, 95.4036f, 95.058f);
func_456(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
break;
case 73:
func_456(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
func_456(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
func_456(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
func_456(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
break;
case 75:
func_456(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_456(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_456(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_456(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 76:
func_456(-668.575f, 668.7567f, 149.4004f, 69.8844f);
func_456(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_456(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_456(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
break;
case 77:
func_456(128.4334f, 578.7522f, 182.2934f, 106.5458f);
func_456(97.7791f, 576.8907f, 181.5599f, 91.3539f);
func_456(83.5896f, 576.4791f, 181.0832f, 89.7262f);
func_456(69.9599f, 575.9902f, 180.5019f, 91.4926f);
break;
case 80:
func_456(-872.1293f, 698.7591f, 148.5084f, 339.673f);
func_456(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
func_456(-907.3458f, 695.8158f, 150.396f, 270.6491f);
func_456(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
break;
case 87:
if(func_455()){
func_456(-1608.297f, -556.875f, 33.406f, 310f);
func_456(-1616.095f, -563.402f, 33.049f, 309.4f);
func_456(-1560.29f, -531.69f, 34.576f, 35.3994f);
func_456(-1555.303f, -538.781f, 34.044f, 35.3994f);
}else{
func_456(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
func_456(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
func_456(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
func_456(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
func_456(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
func_456(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
func_456(-1611.769f, -601.588f, 31.2908f, 50.7362f);
func_456(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
}
break;
case 88:
if(func_455()){
func_456(-1402.362f, -511.396f, 30.888f, 35.4f);
func_456(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
func_456(-1407.634f, -503.839f, 31.35f, 35.4f);
func_456(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
}else{
func_456(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
func_456(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
func_456(-1346.236f, -523.9114f, 30.6f, 124.7302f);
func_456(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
func_456(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
func_456(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
func_456(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
func_456(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
}
break;
case 89:
if(func_455()){
func_456(-102.737f, -597.379f, 35.053f, 160.999f);
func_456(-97.793f, -589.568f, 35.082f, 134.799f);
func_456(-110.357f, -619.402f, 35.055f, 160.599f);
func_456(-112.561f, -627.723f, 35.046f, 165.399f);
}else{
func_456(-108.2604f, -613.6386f, 35.055f, 160.8063f);
func_456(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
func_456(-112.84f, -629.6357f, 35.0662f, 174.9843f);
func_456(-98.7403f, -590.3209f, 35.075f, 139.7632f);
func_456(-98.3748f, -612.642f, 35.137f, 161.1124f);
func_456(-92.595f, -595.4065f, 35.1888f, 161.3083f);
func_456(-104.4742f, -630.1472f, 35.1396f, 161.184f);
func_456(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
}
break;
case 90:
if(func_455()){
func_456(-59.349f, -779.238f, 43.134f, 228.398f);
func_456(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
func_456(-65.212f, -772.66f, 43.151f, 219.398f);
func_456(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
}else{
func_456(-59.684f, -779.4568f, 43.114f, 228.7591f);
func_456(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
func_456(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
func_456(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
func_456(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
func_456(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
func_456(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
func_456(-9.239f, -773.0505f, 43.0788f, 318.0367f);
}
break;
case 91:
func_456(246.5035f, -1798.749f, 26.1131f, 212.5996f);
func_456(247.8968f, -1797.017f, 26.1131f, 212.5996f);
func_456(249.3848f, -1795.374f, 26.1131f, 212.5996f);
func_456(250.8498f, -1793.695f, 26.1131f, 212.5996f);
func_456(262.9285f, -1784.205f, 26.1131f, 164.5991f);
func_456(266.8129f, -1787.476f, 26.1131f, 164.5991f);
func_456(264.814f, -1785.801f, 26.1131f, 164.5991f);
func_456(269.0069f, -1789.16f, 26.1131f, 164.5991f);
break;
case 92:
func_456(-1464.5f, -927.9f, 9f, 296.7991f);
func_456(-1466f, -926.1f, 9f, 296.7991f);
func_456(-1467.9f, -924.7f, 9f, 296.7991f);
func_456(-1469.7f, -923.7f, 9f, 296.7991f);
func_456(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
func_456(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
func_456(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
func_456(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
break;
case 93:
func_456(30.0784f, -1024.16f, 28.4469f, 234.5994f);
func_456(29.1695f, -1026.719f, 28.4453f, 234.5994f);
func_456(28.2538f, -1029.296f, 28.4421f, 234.5994f);
func_456(27.3737f, -1031.767f, 28.3937f, 234.5994f);
func_456(32.6932f, -1017.063f, 28.4531f, 234.5994f);
func_456(33.672f, -1014.399f, 28.4552f, 234.5994f);
func_456(37.488f, -1014.344f, 28.4781f, 175.5986f);
func_456(39.4909f, -1015.097f, 28.484f, 175.5986f);
break;
case 94:
func_456(45.0033f, 2784.392f, 56.8782f, 103.5999f);
func_456(43.316f, 2785.903f, 56.8782f, 103.5999f);
func_456(41.6126f, 2787.36f, 56.8782f, 103.5999f);
func_456(39.9584f, 2788.773f, 56.8782f, 103.5999f);
func_456(35.2347f, 2792.135f, 56.8781f, 208.7997f);
func_456(33.7771f, 2790.379f, 56.8781f, 208.7997f);
func_456(30.7578f, 2786.8f, 56.8781f, 208.7997f);
func_456(29.3121f, 2785.045f, 56.8745f, 208.7997f);
break;
case 95:
func_456(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
func_456(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
func_456(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
func_456(-337.675f, 6074.252f, 30.2727f, 152.9999f);
func_456(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
func_456(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
func_456(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
func_456(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
break;
case 96:
func_456(1738.422f, 3716.779f, 33.0787f, 6.9999f);
func_456(1736.207f, 3715.989f, 33.094f, 6.9999f);
func_456(1748.442f, 3714.17f, 33.0889f, 39.399f);
func_456(1750.475f, 3715.007f, 33.1067f, 39.399f);
func_456(1747.18f, 3721.102f, 33.007f, 95.199f);
func_456(1746.413f, 3723.255f, 32.9738f, 95.199f);
func_456(1740.67f, 3717.613f, 33.0616f, 8.199f);
func_456(1733.937f, 3715.08f, 33.1236f, 8.199f);
break;
case 97:
func_456(947.9371f, -1452.737f, 30.143f, 331.5991f);
func_456(950.2141f, -1452.826f, 30.1364f, 331.5991f);
func_456(952.4588f, -1452.882f, 30.129f, 331.5991f);
func_456(954.6608f, -1452.869f, 30.1303f, 331.5991f);
func_456(935.1006f, -1452.701f, 30.1907f, 316.999f);
func_456(932.5459f, -1452.579f, 30.2194f, 316.999f);
func_456(929.9319f, -1452.567f, 30.2647f, 316.999f);
func_456(927.4857f, -1452.446f, 30.3167f, 316.999f);
break;
case 98:
func_456(186.6051f, 306.8702f, 104.389f, 162.3999f);
func_456(184.3881f, 306.7666f, 104.3845f, 162.3999f);
func_456(182.1681f, 306.6823f, 104.375f, 162.3999f);
func_456(183.3219f, 296.2871f, 104.3707f, 350.7995f);
func_456(180.9933f, 296.3411f, 104.3704f, 350.7995f);
func_456(178.6569f, 296.4709f, 104.3701f, 350.7995f);
func_456(195.1475f, 304.4284f, 104.4644f, 77.3989f);
func_456(195.0814f, 301.8218f, 104.5287f, 77.3989f);
break;
case 99:
func_456(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
func_456(-33.3895f, -199.7716f, 51.355f, 5.3995f);
func_456(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
func_456(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
func_456(-17.9628f, -206.2525f, 51.3702f, 29.399f);
func_456(-14.8043f, -207.5648f, 51.4707f, 29.399f);
func_456(-11.8482f, -208.6405f, 51.5633f, 29.399f);
func_456(-9.1304f, -209.4894f, 51.6472f, 29.399f);
break;
case 100:
func_456(2478.52f, 4082.137f, 36.8208f, 227.5999f);
func_456(2477.557f, 4079.946f, 36.8014f, 227.5999f);
func_456(2465.123f, 4081.35f, 37.0655f, 167.4f);
func_456(2463.017f, 4082.271f, 37.0653f, 167.4f);
func_456(2467.7f, 4080.332f, 37.0649f, 167.4f);
func_456(2469.587f, 4079.538f, 37.061f, 167.4f);
func_456(2481.354f, 4088.553f, 36.9131f, 209.4f);
func_456(2482.442f, 4091.023f, 36.9472f, 209.4f);
break;
case 101:
func_456(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
func_456(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
func_456(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
func_456(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
func_456(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
func_456(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
func_456(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
func_456(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
break;
case 102:
func_456(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
func_456(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
func_456(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
func_456(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
func_456(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
func_456(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
func_456(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
func_456(-1127.039f, -1564.395f, 3.292f, 168.9988f);
break;
default:
break;
}}


bool func_455(){
return Global_2683864.f_17;
}


void func_456(struct<3> Param0, float fParam1){
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

int func_457(struct<3> Param0){
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
if(func_401(Param0, &(Global_2642883[iVar0 /*7*/]))){
Global_2635559.f_2907=iVar0;
return iVar0;
}
iVar0++;
}
Global_2635559.f_2907=-1;
return -1;
}

int func_458(){
if(MISC::IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2684801.f_6436){
return 0;
}
return 0;
}

int func_459(struct<2> Param0, var uParam1, bool bParam2, float fParam3){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=0;
iVar0=83;
while (iVar0 <=84 + 1){
if(bParam2){
if(func_428(iVar0)){
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


void func_460(){
int iVar0;
iVar0=0;
while (iVar0 < 30){
Global_2635559.f_2737[iVar0 /*3*/]={
0f, 0f, 0f 
};
iVar0++;
}}

int func_461(var uParam0, bool bParam1){
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
if(func_401(Var1, &(Global_2642839[iVar0 /*7*/]))){
if(bParam1){
func_412(&Var1, Global_2642839[iVar0 /*7*/], Global_2642839[iVar0 /*7*/].f_3, Global_2642839[iVar0 /*7*/].f_6, 1036831949, 0);
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

int func_462(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_466(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_465(Param0, 1008981770)){
if(!func_418(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_418(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_464(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_463(&(Global_2635559.f_45[iVar0 /*12*/])) 
};
if(!func_418(&Var1, 0, 0, 0, 1)){
if(!func_418(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__463(var uParam0){
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

int func_464(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_405(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_465(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_405(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_466(bool bParam0, bool bParam1){
if(func_258() !=0){
return func_467(bParam0) !=0;
}
return func_383(bParam0, bParam1, 0);
}

int func_467(int iParam0){
if(func_9(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}

int func_468(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}


void func_469(){
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


void func_470(){
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

int func_471(){
if(!Global_2635559.f_606==0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_611) < func_468(0)){
return 1;
}
return 0;
}

int func_472(){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE()==5){
return 0;
}}
if(Global_2635559.f_517==MISC::GET_FRAME_COUNT()){
return 0;
}
if(!func_474(PLAYER::PLAYER_ID()) && !func_473(0)){
return 0;
}
return 1;
}


bool func_473(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_474(bool bParam0){
if(bParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, bParam0);
}
return 1;
}

int func_475(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
var uVar4;
if(func_481(iParam0, &Var1, &Var2, &uVar4, &iVar0)){
if(MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var2, Var1, uVar4, &Var3)){
if(func_477(iParam0, Var3, Var2, iVar0)){
Local_1334.f_1194={
Var3 
};
Local_1334.f_1203=func_476(Var3, Var2);
return 1;
}}}
return 0;
}


float func_476(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_477(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
if(func_161(iParam0, 15)){
if(!func_478(iParam0, Param1, Param2, iParam3)){
return 0;
}}
if(Local_274.f_377.f_42 !=0){
Stack.Push(iParam0);
Stack.Push(Param1);
Call_Loc(Local_274.f_377.f_42);
if(!StackVal){
return 0;
}}elseif(!func_86(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
return 0;
}
return 1;
}

int func_478(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
struct<3> Var2;
fVar0=vdist(Param1, Param2);
if(fVar0 > func_480()){
return 0;
}
fVar1=vdist(Param1, func_213());
if(fVar1 < func_177()){
return 0;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam3)){
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam3, Param1) 
};
if(MISC::ABSF(Var2.f_0) > func_479()){
return 0;
}}
return 1;
}


float func_479(){
if(Local_274.f_624.f_6 !=0){
Call_Loc(Local_274.f_624.f_6);
return StackVal;
}
return 100f;
}


float func_480(){
if(Local_274.f_624.f_5 !=0){
Call_Loc(Local_274.f_624.f_5);
return StackVal;
}
return Local_198.f_1531.f_12;
}

int func_481(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4){
if(func_161(iParam0, 15)){
*uParam4=func_231(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(*uParam4) && !ENTITY::IS_ENTITY_DEAD(*uParam4, 0)){
*uParam1={
ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam4) 
};
*uParam2={
ENTITY::GET_ENTITY_COORDS(*uParam4, 0) 
};
}else{
return 0;
}}elseif(Local_274.f_377.f_39 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_39);
*uParam1={
StackVal, StackVal, StackVal 
};
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_39);
*uParam2={
StackVal, StackVal, StackVal 
};
}else{
*uParam1={
Local_198.f_688.f_1[iParam0 /*15*/].f_4 
};
*uParam2={
Local_198.f_688.f_1[iParam0 /*15*/].f_4 
};
}
if(iLocal_1308 > 0){
func_482(uParam1);
}
if(!func_161(iParam0, 15) && Local_274.f_377.f_41 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_41);
*uParam3=StackVal;
}elseif((uParam1->f_2 >=0f && uParam1->f_2 < 90f) || (uParam1->f_2 >=270f && uParam1->f_2 < 360f)){
*uParam3=120f;
}else{
*uParam3=60f;
}
return 1;
}


void func_482(var uParam0){
if(iLocal_1308 < 5){
switch (iLocal_1308){
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
iLocal_1308=0;
}
iLocal_1308++;
}

int func_483(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
if(func_485(iParam0, &Var2, &Var1, &iVar0)){
if(func_484(iParam0, Var2, Var1, iVar0)){
Local_1334.f_1194={
Var2 
};
Local_1334.f_1203=func_476(Var2, Var1);
return 1;
}}
return 0;
}

int func_484(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3){
float fVar0;
if(func_161(iParam0, 15)){
if(!func_478(iParam0, Param1, Param2, iParam3)){
return 0;
}}
if(!func_86(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0)){
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

int func_485(int iParam0, var uParam1, var uParam2, var uParam3){
float fVar0;
bool bVar1;
bool bVar2;
int iVar3;
fVar0=200f;
if(func_161(iParam0, 15)){
*uParam3=func_231(iParam0);
if(!ENTITY::DOES_ENTITY_EXIST(*uParam3)){
return 0;
}
if(func_166()==4){
bVar1=func_170(func_49(1, iParam0), 0);
bVar2=bVar1;
if(!func_9(bVar2, 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2)){
return 0;
}
iVar3=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar2);
*uParam2={
Local_1347[iVar3 /*251*/].f_141 
};
}else{
*uParam2={
ENTITY::GET_ENTITY_COORDS(*uParam3, 0) 
};
}
fVar0=(func_480() / 2f);
}else{
*uParam2={
Local_198.f_688.f_1[iParam0 /*15*/].f_4 
};
}
*uParam1={
func_487(*uParam2, 0f, ((-1f * fVar0) * sin((to_float(iLocal_1308) * 30f))), (fVar0 * cos((to_float(iLocal_1308) * 30f))), 0f) 
};
uParam1->f_2=(uParam1->f_2 + func_486());
iLocal_1308++;
if(iLocal_1308 >=12){
iLocal_1308=0;
}
return 1;
}


float func_486(){
return 60f;
}


Vector3 func__487(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3){
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


void func_488(bool bParam0){
if(!func_1440(83)){
if(bParam0){
PATHFIND::LOAD_ALL_PATH_NODES(1);
func_155(83);
}}elseif(!bParam0){
PATHFIND::LOAD_ALL_PATH_NODES(0);
func_489(83);
}}


void func_489(int iParam0){
if(func_125(&uLocal_1301, iParam0)){}}


void func_490(var uParam0, int iParam1){
int iVar0;
if(!func_161(iParam1, 15)){
return;
}
if(Local_274.f_624.f_10==0){
return;
}
Call_Loc(Local_274.f_624.f_10);
iVar0=StackVal;
if(iVar0==0 || !STREAMING::IS_MODEL_VALID(iVar0)){
return;
}
*uParam0=iVar0;
}

int func_491(int iParam0){
int iVar0;
if(!func_145(1, iParam0)){
return 0;
}
iVar0=Local_198.f_688.f_1[iParam0 /*15*/].f_9;
if(iVar0 !=-1){
if(!func_137(Local_198.f_1641.f_1[iVar0 /*2*/]) || !func_13(&(Local_1334.f_1186), 2000, 0)){
return 0;
}}
if(NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_1288)){
return 0;
}
Stack.Push(Local_274.f_377.f_54 !=0);
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_54);
if(StackVal && !StackVal){
return 0;
}
return 1;
}

int func_492(int iParam0){
int iVar0;
if(func_161(iParam0, 15)){
if(!func_13(&(Local_1334.f_1074.f_17), func_151(), 0)){
return 0;
}}
if(Local_274.f_377.f_34 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_34);
iVar0=StackVal;
if(iVar0 !=-1){
if(!func_13(&(Local_1334.f_723[iParam0 /*8*/].f_6), iVar0, 0)){
return 0;
}else{
func_30(&(Local_1334.f_723[iParam0 /*8*/].f_6));
}}}
return 1;
}

int func_493(int iParam0){
int iVar0;
if(func_161(iParam0, 15)){
if(func_154()){
iVar0=0;
while (iVar0 < 2){
if(func_153(iVar0, iParam0)){
return 1;
}
iVar0++;
}
return 0;
}
return func_154();
}
if(Local_274.f_377.f_23 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_377.f_23);
return StackVal;
}
return 1;
}


void func_494(int iParam0, int iParam1){
if(Local_198.f_688.f_1[iParam0 /*15*/].f_9==-1){
return;
}
if(func_144(iParam0) > 2 && func_144(iParam0) < 5){
if(func_495(iParam0, iParam1)){
func_209(iParam0, 2);
}else{
func_208(iParam0, 2);
}}}


bool func_495(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
iVar0=func_496(iParam1);
if(iVar0 !=func_66() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0)){
iVar1=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
return func_162(iVar1, 2);
}}
return func_161(iParam0, 2);
}


bool func_496(int iParam0){
int iVar0;
bool bVar1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!PED::IS_PED_INJURED(iVar0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
if(bVar1 !=func_66() && func_9(bVar1, 0, 1)){
return bVar1;
}}}
return func_66();
}


void func_497(int iParam0, int iParam1){
int iVar0;
if(func_161(iParam0, 15)){
iVar0=0;
while (iVar0 < 2){
if(iParam0==Local_1334.f_1074[iVar0 /*8*/].f_5){
*iParam1=0;
}
iVar0++;
}}}

int func_498(int iParam0, int iParam1, bool bParam2){
var uVar0;
var uVar1;
if(func_161(iParam0, 15)){
if(!bParam2){
uVar0=func_49(1, iParam0);
return 1;
}
if(func_48(iParam0)){
uVar1=func_49(1, iParam0);
return 1;
}
return 0;
}
return 0;
}


void func_499(int iParam0, int iParam1){
Local_1334.f_723[iParam0 /*8*/].f_1=iParam1;
}

int func_500(int iParam0, int iParam1){
int iVar0;
if(iParam1 !=func_502()){
return -1;
}
iVar0=0;
while (iVar0 < Local_198.f_19){
if(iParam0==func_501(iVar0)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_501(int iParam0){
return Local_1334.f_2.f_39[iParam0];
}

int func_502(){
return Local_198.f_19.f_5[0 /*13*/].f_11;
}

int func_503(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
if(iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=0;
while (iVar0 < iVar1){
iVar2=func_504(iParam0, (iVar0 - 1), bParam6, iParam7);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(iParam3 && iVar2==PLAYER::PLAYER_PED_ID()){
}elseif(bParam2){
if(PED::IS_PED_A_PLAYER(iVar2)){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
if(((!PED::IS_PED_INJURED(iVar2) && iVar3 !=func_66()) && func_9(iVar3, 1, 1)) || iParam8){
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

int func_504(int iParam0, int iParam1, bool bParam2, int iParam3){
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

int func_505(int iParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_506(NETWORK::NET_TO_VEH(iParam0));
}
return 0;
}

int func_506(int iParam0){
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


void func_507(){
func_508();
}


void func_508(){
struct<20> Var0;
if(!func_3(8)){
if(func_516() > 0 && Local_1230.f_0 > 0){
if(func_1440(53)){
Var0={
func_515(func_10()) 
};
if(func_509(func_10(), Local_1334.f_1228, &Var0)){
func_16(8);
}}}}}

int func_509(bool bParam0, struct<3> Param1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
if(!func_514(Param1)){
return 0;
}
if(bParam0==func_66()){
return 0;
}
if(*uParam2 > 18){
return 0;
}
iVar0=func_513(bParam0);
if(iVar0 !=-1){
iVar1=0;
while (iVar1 < *uParam2){
if((*uParam2)[iVar1] !=0){
iVar2=func_512(iVar0, (*uParam2)[iVar1]);
if(iVar2 !=-1){
if(!func_511(Param1, Global_2650102.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/])){
if(!func_15(&(Global_1956139.f_5765)) || func_13(&(Global_1956139.f_5765), 10000, 0)){
func_18(&(Global_1956139.f_5765), 0, 0);
func_510(bParam0, Param1, uParam2);
}
return 0;
}}}
iVar1++;
}
return 1;
}
return 0;
}


void func_510(bool bParam0, struct<3> Param1, var uParam2){
struct<26> Var0;
int iVar1;
int iVar2;
if(!func_514(Param1)){
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
iVar2=func_251(1, 1);
if(!iVar2==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 26, iVar2);
}}

int func_511(struct<3> Param0, struct<3> Param1){
if(!func_514(Param0)){
return 0;
}
if(Param0.f_0==Param1.f_0 && Param0.f_2==Param1.f_2){
return 1;
}
return 0;
}

int func_512(int iParam0, int iParam1){
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

int func_513(bool bParam0){
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

int func_514(struct<3> Param0){
if(Param0.f_0==-1 || Param0.f_2==-1000){
return 0;
}
return 1;
}
struct<20> func_515(int iParam0){
struct<20> Var0;
int iVar1;
int iVar2;
Var0=18;
Var0.f_19=0;
if(!func_71(iParam0)){
return Var0;
}
if(func_9(iParam0, 0, 1)){
iVar1=0;
while (iVar1 < 10){
if(Global_2650102.f_199.f_962[iVar1 /*75*/]==iParam0){
iVar2=0;
while (iVar2 < 18){
if(Global_2650102.f_199.f_962[iVar1 /*75*/].f_1[iVar2] !=0 && !func_514(Global_2650102.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/])){
Var0[Var0.f_19]=Global_2650102.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
Var0.f_19++;
}
iVar2++;
}}else{
iVar1++;
}}}
return Var0;
}

int func_516(){
int iVar0;
iVar0=(iVar0 + func_40());
Stack.Push(iVar0);
Call_Loc(Local_274.f_734);
iVar0=(StackVal + StackVal);
return iVar0;
}


void func_517(){
int iVar0;
iVar0=0;
Stack.Push(iVar0);
Call_Loc(Local_274.f_734);
while (StackVal < StackVal){
func_521(iVar0);
func_518(iVar0);
iVar0++;
}}


void func_518(int iParam0){
bool bVar0;
int iVar1;
Stack.Push(iParam0);
Call_Loc(Local_274.f_734.f_3);
bVar0=StackVal;
if(bVar0==func_66()){
return;
}
iVar1=func_520(iParam0);
if(iVar1 !=func_66() && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1)){
if(func_9(bVar0, 0, 1)){
func_519(iParam0, bVar0);
}}}


void func_519(int iParam0, bool bParam1){
Local_1334.f_1300[iParam0 /*4*/].f_3=bParam1;
}

int func_520(int iParam0){
return Local_1334.f_1300[iParam0 /*4*/].f_3;
}


void func_521(int iParam0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_734.f_1);
if(StackVal && !func_548(iParam0, 0)){
if(func_523(&(Local_1334.f_1300[iParam0 /*4*/].f_2), 1, iParam0, func_547(iParam0), func_546(), func_545(iParam0), func_544(iParam0))){
func_522(iParam0, 0);
}}}


void func_522(int iParam0, int iParam1){
if(func_17(&(Local_1334.f_1300[iParam0 /*4*/]), iParam1)){}}

int func_523(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6){
if(*uParam0==-1){
*uParam0=func_543();
if(*uParam0==-1){
return 0;
}}
if(Local_1334.f_1253 !=iParam4){
Local_1334.f_1253=iParam4;
}
if(Local_1334.f_1253.f_1[*uParam0 /*5*/].f_2==-1){
Local_1334.f_1253.f_1[*uParam0 /*5*/].f_2=iParam1;
Local_1334.f_1253.f_1[*uParam0 /*5*/].f_3=iParam2;
}
if(func_524(&(Local_1334.f_1253.f_1[*uParam0 /*5*/]), bParam3, *uParam0, Local_1334.f_1253, &(Local_1334.f_1228), uParam5, uParam6)){
return 1;
}
return 0;
}

int func_524(var uParam0, bool bParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
struct<3> Var4;
bool bVar5;
if(bParam1==func_66()){
return 0;
}
if(!func_514(*uParam4)){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
*uParam4={
func_542() 
};
}else{
return 0;
}}
if(!func_511(*uParam4, Global_1956139.f_5767)){
if((MISC::GET_FRAME_COUNT() - Global_1956139.f_5767.f_4) <=90 || (func_15(&(Global_1956139.f_5590)) && !func_13(&(Global_1956139.f_5590), 1500, 0))){
return 0;
}else{
func_540();
func_539(*uParam4);
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
iVar2=func_537(PLAYER::PLAYER_ID(), bVar0);
if(func_536(iVar2)){
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), bVar0);
}
bVar0++;
}}
uVar3=func_535(bParam1, bParam2);
*uParam0=bParam1;
uParam0->f_1=uVar3;
if(func_534(*uParam0)){
Var4={
func_532(*uParam0) 
};
if((Global_1956139.f_5767.f_4==MISC::GET_FRAME_COUNT() || func_531(*uParam0) !=iParam3) || !func_511(*uParam4, Var4)){
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
func_526(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
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
func_525(*uParam0, iParam3, uParam5, *uParam4, uParam6);
Global_1956139.f_5592=MISC::GET_FRAME_COUNT();
}
return 0;
}


void func_525(struct<2> Param0, int iParam1, var uParam2, struct<3> Param3, var uParam4){
struct<10> Var0;
int iVar1;
if(!func_514(Param3)){
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
iVar1=func_251(1, 1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 10, iVar1);
}}


void func_526(struct<2> Param0, char* sParam1){
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
bVar1=func_530(Param0);
bVar2=func_534(Param0);
uVar3=func_531(Param0);
iVar4=func_529(Param0);
uVar5=func_527(Param0);
if(iVar4==0){
StringCopy(&cVar6, "Initial", 16);
}elseif(iVar4==2){
StringCopy(&cVar6, "Delivered", 16);
}elseif(iVar4==-1){
StringCopy(&cVar6, "Invalid", 16);
}else{
IntToString(&cVar6, iVar4, 16);
}}}

int func_527(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_528(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_14;
}
iVar0++;
}
return 0;
}

int func_528(struct<2> Param0, struct<2> Param1){
if(Param0.f_1 !=-1 && Param1.f_1 !=-1){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return 0;
}

int func_529(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_528(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/];
}
iVar0++;
}
return -1;
}


bool func_530(struct<2> Param0){
return (Param0.f_1 !=-1 && Param0.f_0 !=func_66());
}

int func_531(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_528(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_3;
}
iVar0++;
}
return 0;
}


Vector3 func__532(struct<2> Param0){
int iVar0;
struct<3> Var1;
iVar0=func_533(Param0);
if(iVar0 < 0 || iVar0 >=64){
Var1=-1;
Var1.f_1=-1;
Var1.f_2=-1000;
return Var1;
}
return Global_2650102.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_533(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(func_528(Param0, Global_2650102.f_199.f_1[iVar0 /*15*/].f_1)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_534(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 64){
if(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1.f_1 !=-1 && func_528(Global_2650102.f_199.f_1[iVar0 /*15*/].f_1, Param0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_535(bool bParam0, int iParam1){
bool bVar0;
if(Global_1956139.f_5772[iParam1] !=-1){
return Global_1956139.f_5772[iParam1];
}
bVar0=false;
while (bVar0 < 31){
if(!MISC::IS_BIT_SET(Global_1956139.f_5767.f_3, bVar0)){
MISC::SET_BIT(&(Global_1956139.f_5767.f_3), bVar0);
return func_537(bParam0, bVar0);
}
bVar0++;
}
return -1;
}

int func_536(int iParam0){
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

int func_537(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_538(bParam0);
return (iVar0 + bParam1);
}

int func_538(bool bParam0){
return MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(bParam0));
}


void func_539(struct<3> Param0){
Global_1956139.f_5767={
Param0 
};
}


void func_540(){
Global_1956139.f_5767.f_3=0;
Global_1956139.f_5767.f_4=0;
Global_1956139.f_5767={
func_541() 
};
}


Vector3 func__541(){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1000;
return Var0;
}


Vector3 func__542(){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1000;
Var0.f_1=NETWORK::GET_CLOUD_TIME_AS_INT();
Var0.f_0=SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
Var0.f_2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
return Var0;
}

int func_543(){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < 9){
if(!func_530(Local_1334.f_1253.f_1[iVar1 /*5*/])){
iVar0=iVar1;
}else{
iVar1++;
}}
return iVar0;
}

int func_544(int iParam0){
return 0;
}

int func_545(int iParam0){
return 1;
}

int func_546(){
return 23;
}


bool func_547(int iParam0){
return func_10();
}


bool func_548(int iParam0, int iParam1){
return func_4(&(Local_1334.f_1300[iParam0 /*4*/]), iParam1);
}


void func_549(){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
func_560(iVar0);
func_555(iVar0);
iVar0++;
}
func_550();
}


void func_550(){
if(Local_198.f_19 <=0){
return;
}
if(!func_554()){
return;
}
Stack.Push(Local_274.f_124.f_36 !=0);
Call_Loc(Local_274.f_124.f_36);
if(StackVal && StackVal){
return;
}
if(func_553()){
if(func_552()){
func_8(5);
}}elseif(func_551()){
func_8(5);
}}

int func_551(){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if(func_165(iVar0, 3)){
return 1;
}
iVar0++;
}
return 0;
}

int func_552(){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if(!func_165(iVar0, 3)){
return 0;
}
iVar0++;
}
return 1;
}


bool func_553(){
return func_35(0);
}

int func_554(){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if(!func_165(iVar0, 6)){
return 0;
}
iVar0++;
}
return 1;
}


void func_555(int iParam0){
if(func_165(iParam0, 29) && func_558(iParam0)){
if(func_557(iParam0)){
func_556(iParam0, 29);
}}}


void func_556(int iParam0, int iParam1){
if(func_125(&(Local_1334.f_2.f_20[iParam0 /*3*/]), iParam1)){}}

int func_557(int iParam0){
int iVar0;
if(func_558(iParam0)){
iVar0=func_501(iParam0);
return (Local_1334.f_723[iVar0 /*8*/].f_1==5 || func_165(iParam0, 0));
}
return 1;
}


bool func_558(int iParam0){
return (func_559(iParam0) && func_502()==2);
}


bool func_559(int iParam0){
return Local_1334.f_2.f_39[iParam0] !=-1;
}


void func_560(int iParam0){
if(Local_198.f_19.f_5[iParam0 /*13*/].f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_23);
if(StackVal){
if(!func_165(iParam0, 6)){
if(func_134(Local_198.f_19.f_5[iParam0 /*13*/].f_2)){
if(NETWORK::CAN_REGISTER_MISSION_PICKUPS(1)){
if(func_562(iParam0)){
func_561(iParam0, 6);
}}}}}}}


void func_561(int iParam0, int iParam1){
if(func_17(&(Local_1334.f_2.f_20[iParam0 /*3*/]), iParam1)){}}

int func_562(int iParam0){
struct<3> Var0;
float fVar1;
struct<3> Var2;
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_2[iParam0])){
Var0={
func_578(iParam0) 
};
fVar1=Local_198.f_19.f_5[iParam0 /*13*/].f_6;
Var2={
Local_198.f_19.f_5[iParam0 /*13*/].f_7 
};
if(func_102(Var0)){
return 0;
}
Local_1334.f_2[iParam0]=NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_577(iParam0), Var0, !func_576(iParam0, 0), Local_198.f_19.f_5[iParam0 /*13*/].f_2));
ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), fVar1);
if(!func_102(Var2)){
ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), Var2, 2, 1);
}
func_570(iParam0, Var0);
if(Local_274.f_124.f_30 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_30);
}}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_2[iParam0])){
if(func_523(&(Local_1334.f_2.f_53[iParam0]), 0, iParam0, func_569(iParam0), func_568(), func_567(iParam0), func_563(iParam0))){
func_233(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), Local_1334.f_1253.f_1[func_234(iParam0) /*5*/].f_1);
Local_1334.f_2.f_46[iParam0]=NETWORK::GET_CLOUD_TIME_AS_INT();
return 1;
}}
return 0;
}

int func_563(int iParam0){
return func_564(func_566(), func_565(), 1, func_10());
}

int func_564(int iParam0, int iParam1, int iParam2, bool bParam3){
switch (Global_1894573[bParam3 /*608*/].f_10.f_183){
case 1:
return 845;
case 2:
return 846;
case 3:
return 847;
case 4:
return 848;
case 5:
return 849;
case 6:
return 850;
case 7:
return 851;
case 8:
return 852;
case 9:
return 853;
case 10:
return 854;
case 11:
return 855;
case 12:
return 856;
case 13:
return 857;
case 14:
return 858;
case 15:
return 859;
case 16:
return 860;
case 17:
return 861;
case 18:
return 862;
case 19:
return 863;
case 20:
return 864;
case 21:
return 865;
case 22:
return 866;
default:
}
return 0;
}

int func_565(){
return Local_1334.f_1207.f_1;
}

int func_566(){
return Local_1334.f_1207;
}

int func_567(int iParam0){
return 1;
}

int func_568(){
return 23;
}


bool func_569(int iParam0){
return func_10();
}


void func_570(int iParam0, struct<3> Param1){
if(func_559(iParam0)){
func_561(iParam0, 29);
if(iParam0 !=func_575(func_501(iParam0))){
func_561(iParam0, 40);
}}elseif(!func_576(iParam0, 7)){
func_561(iParam0, 39);
}
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1334.f_2[iParam0], 1);
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1200);
ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 50, 0);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), true);
ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), 1, 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), true);
OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1);
OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1);
if(func_574()){
OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1);
}
if(func_573(iParam0)){
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), true);
}else{
func_561(iParam0, 28);
}
if(!func_576(iParam0, 1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]));
}
if(func_576(iParam0, 2)){
ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), Param1, 1, 0, 0, 1);
}
if(func_576(iParam0, 3)){
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]));
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1);
}
if(func_576(iParam0, 4)){
ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), 1);
}
if((func_576(iParam0, 6) || func_576(iParam0, 7)) || func_559(iParam0)){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), false, 0);
}
if(Local_198.f_19.f_5[iParam0 /*13*/].f_12 !=-1){
func_561(iParam0, 23);
}
if(func_572(iParam0)){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), 1);
}
if(func_576(iParam0, 9) || Local_274.f_124.f_38 !=0){
func_571(iParam0, 1, 0);
}}


void func_571(int iParam0, int iParam1, int iParam2){
OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), iParam1, iParam2);
}

int func_572(int iParam0){
if(Local_198.f_19.f_5[iParam0 /*13*/].f_12 !=-1 && func_130(Local_198.f_1641.f_1[Local_198.f_19.f_5[iParam0 /*13*/].f_12 /*2*/])){
return 1;
}
if(func_576(iParam0, 8)){
return 1;
}
if(func_35(22)){
return 1;
}
return 0;
}


bool func_573(int iParam0){
if(func_165(iParam0, 29)){
return 0;
}
return !func_576(iParam0, 5);
}

int func_574(){
return 0;
}

int func_575(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < Local_198.f_19){
if(Local_1334.f_2.f_39[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_576(int iParam0, int iParam1){
return func_4(&(Local_198.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_577(int iParam0){
if(Local_274.f_124.f_28 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_28);
return StackVal;
}
return 68603185;
}


Vector3 func__578(int iParam0){
if(func_580(iParam0)){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_27);
return StackVal, StackVal, StackVal;
}elseif(func_558(iParam0)){
return Local_198.f_688.f_1[func_501(iParam0) /*15*/].f_4 + func_579(iParam0, Local_198.f_688.f_1[func_501(iParam0) /*15*/].f_3);
}
return Local_198.f_19.f_5[iParam0 /*13*/].f_3;
}


Vector3 func__579(int iParam0, int iParam1){
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


bool func_580(var uParam0){
struct<3> Var0;
if(Local_274.f_124.f_27==0){
return 0;
}
Stack.Push(uParam0);
Call_Loc(Local_274.f_124.f_27);
Var0={
StackVal, StackVal, StackVal 
};
return !func_102(Var0);
}


void func_581(){
}

int func_582(){
return Local_1334.f_1148;
}


void func_583(int iParam0){
Local_1334.f_1147=iParam0;
}

int func_584(){
int iVar0;
int iVar1;
int iVar2;
if(!func_1434(func_1438(), func_1436())){
return 0;
}
if(Local_1334.f_1151==-1){
Local_1334.f_1151=func_1438();
}
if(Local_1334.f_1152==-1){
Local_1334.f_1152=func_1436();
}
if(!func_608()){
return 0;
}
func_607();
func_604();
Local_1334.f_1161=NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_603(), -1, 0);
func_602();
func_599();
func_598();
func_595();
func_593();
func_591();
iVar0=0;
while (iVar0 < 3){
func_588(iVar0);
iVar0++;
}
iVar1=0;
while (iVar1 < 8){
Local_1334.f_1173[iVar1]=-1;
iVar1++;
}
iVar2=0;
while (iVar2 < 1){
Local_1334.f_1065[iVar2]=-1;
iVar2++;
}
Local_1334.f_1165=MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
Local_1334.f_1146=func_587();
STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_1334.f_1158), &(Local_1334.f_1159));
Global_1894573[iLocal_1289 /*608*/].f_526=Local_1334.f_1158;
Global_1894573[iLocal_1289 /*608*/].f_527=Local_1334.f_1159;
func_586();
if(!func_585()){
return 0;
}
Call_Loc(Local_274.f_1);
return StackVal;
}

int func_585(){
return 1;
}


void func_586(){
if(Local_1334.f_1166==-1){
Local_1334.f_1166=NETWORK::GET_CLOUD_TIME_AS_INT();
}}

int func_587(){
return -1;
}


void func_588(int iParam0){
float fVar0;
float fVar1;
float fVar2;
struct<3> Var3;
if(Local_274.f_562.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_562.f_2);
Local_1334.f_1097.f_2[iParam0 /*3*/]={
StackVal, StackVal, StackVal 
};
return;
}
if(Local_198.f_1719.f_1[iParam0 /*18*/].f_14){
Local_1334.f_1097.f_2[iParam0 /*3*/]={
Local_198.f_1719.f_1[iParam0 /*18*/].f_15 
};
return;
}
fVar0=(Local_198.f_1719.f_1[iParam0 /*18*/].f_7 / 2f);
fVar1=(fVar0 * 0.25f);
fVar2=(fVar0 * 0.5f);
Var3={
func_589(iParam0) 
};
if(func_109()){
Var3.f_0=(Var3.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}else{
Var3.f_0=(Var3.f_0 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}
if(func_109()){
Var3.f_1=(Var3.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}else{
Var3.f_1=(Var3.f_1 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
}
Local_1334.f_1097.f_2[iParam0 /*3*/]={
Var3 
};
}


Vector3 func__589(int iParam0){
if(Local_274.f_562.f_3 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_562.f_3);
return StackVal, StackVal, StackVal;
}
if(Local_198.f_1719.f_1[iParam0 /*18*/].f_2 !=-1){
return func_590(Local_198.f_1719.f_1[iParam0 /*18*/].f_2, Local_198.f_1719.f_1[iParam0 /*18*/].f_3);
}
return Local_198.f_1719.f_1[iParam0 /*18*/].f_4;
}


Vector3 func__590(int iParam0, int iParam1){
switch (iParam0){
case 3:
return Local_198.f_19.f_5[iParam1 /*13*/].f_3;
case 0:
return Local_198.f_103.f_1[iParam1 /*21*/].f_3;
case 1:
return Local_198.f_688.f_1[iParam1 /*15*/].f_4;
case 2:
return Local_198.f_1036.f_1[iParam1 /*12*/].f_4;
default:
}
return 0f, 0f, 0f;
}


void func_591(){
int iVar0;
iVar0=0;
while (iVar0 < Local_198.f_103){
Local_1334.f_72[iVar0 /*25*/].f_16=func_592(iVar0);
iVar0++;
}}

int func_592(int iParam0){
if(Local_198.f_103.f_1[iParam0 /*21*/].f_16==-1){
if(iParam0 < 14){
return (iParam0 + 1 * (1000 / Local_198.f_103));
}else{
return ((iParam0 + 1 - 14) * (1000 / Local_198.f_103));
}}
return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_198.f_103.f_1[iParam0 /*21*/].f_16);
}


void func_593(){
Local_1334.f_1074.f_20=func_594();
}


var func__594(){
switch (Local_1334.f_1149){
case 2:
return Global_262145.f_16693;
case 3:
return Global_262145.f_16694;
default:
}
return Global_262145.f_16695;
}


void func_595(){
if(func_597()){
Local_1334.f_1149=4;
}else{
switch (func_596()){
case 1:
Local_1334.f_1149=2;
break;
case 2:
Local_1334.f_1149=3;
break;
default:
Local_1334.f_1149=4;
break;
}}}

int func_596(){
return Local_1334.f_1207.f_2.f_1;
}


bool func_597(){
return Local_1334.f_1207.f_2.f_3;
}


void func_598(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Local_1334.f_1300[iVar0 /*4*/].f_3=func_66();
iVar0++;
}}


void func_599(){
int iVar0;
iVar0=0;
while (iVar0 < Local_198.f_19){
Local_1334.f_2.f_53[iVar0]=-1;
iVar0++;
}
func_600();
}


void func_600(){
int iVar0;
if(func_601()){
if(func_37(&(Local_1334.f_2.f_39), &(Local_1334.f_1065.f_3))){
func_16(2);
}}else{
iVar0=0;
while (iVar0 < Local_198.f_19){
Local_1334.f_2.f_39[iVar0]=Local_198.f_19.f_5[iVar0 /*13*/].f_10;
iVar0++;
}}}

int func_601(){
return 0;
}


void func_602(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
iVar0=0;
while (iVar0 < Local_198.f_19){
iVar3=Local_198.f_19.f_5[iVar0 /*13*/].f_10;
iVar4=Local_198.f_19.f_5[iVar0 /*13*/].f_11;
if(iVar3 !=-1 && iVar4 !=0){
switch (iVar4){
case 2:
func_209(iVar3, 14);
break;
}}
iVar0++;
}
iVar5=0;
while (iVar5 < 2){
iVar2=Local_198.f_1531[iVar5 /*4*/];
if(iVar2 !=-1){
func_209(iVar2, 15);
}
iVar7=0;
iVar6=0;
while (iVar6 < 1){
iVar2=Local_198.f_1531[iVar5 /*4*/].f_1[iVar6];
if(iVar2 !=-1){
func_209(iVar2, 15);
iVar7++;
}
iVar6++;
}
Local_198.f_1531[iVar5 /*4*/].f_3=iVar7;
iVar5++;
}
func_26();
iVar1=0;
while (iVar1 < Local_198.f_103){
iVar2=Local_198.f_103.f_1[iVar1 /*21*/].f_8;
if(iVar2 !=-1 && func_161(iVar2, 15)){
if(Local_198.f_103.f_1[iVar1 /*21*/].f_9==-1){
iVar5=0;
while (iVar5 < 2){
iVar8=0;
if(iVar2==Local_198.f_1531[iVar5 /*4*/]){
Local_1334.f_1074[iVar5 /*8*/].f_2=iVar1;
}else{
iVar6=0;
while (iVar6 < 1){
iVar2=Local_198.f_1531[iVar5 /*4*/].f_1[iVar6];
if(iVar2==Local_198.f_1531[iVar5 /*4*/].f_1[iVar6]){
Local_1334.f_1074[iVar5 /*8*/].f_6[iVar8]=iVar1;
iVar8++;
}
iVar6++;
}}
iVar5++;
}}
func_82(iVar1, 19);
}
iVar9=0;
while (iVar9 < Local_198.f_1775){
if(Local_198.f_1775.f_1[iVar9 /*82*/]==iVar1){
func_82(iVar1, 21);
}
iVar9++;
}
iVar1++;
}}


char* func_603(){
switch (Global_2697021){
case 0:
return "freemode";
default:
}
return "freemode";
}


void func_604(){
Local_1334.f_1160=func_605() + 1;
Global_1894573[bLocal_1288 /*608*/].f_10.f_391=Local_1334.f_1160;
}

int func_605(){
if(func_67()==func_66()){
return 0;
}
return func_606(func_67());
}

int func_606(bool bParam0){
if(func_98(bParam0)==func_66()){
return 0;
}
return Global_1894573[bParam0 /*608*/].f_10.f_19;
}


void func_607(){
}

int func_608(){
func_1433();
func_643();
if(!func_610()){
return 0;
}
func_609();
Stack.Push(Local_274.f_0 !=0);
Call_Loc(Local_274.f_0);
if(StackVal && !StackVal){
return 0;
}
return 1;
}


void func_609(){
}

int func_610(){
if(func_1440(12)){
return 1;
}
if(!func_619()){
return 0;
}
func_614();
func_612();
func_611();
if(Local_274.f_13 !=0){
Call_Loc(Local_274.f_13);
}
func_155(12);
return 1;
}


void func_611(){
}


void func_612(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 2){
iVar1=0;
while (iVar1 < 1){
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 0){
iVar0++;
}
if(Local_198.f_1591 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1591){
iVar0++;
}}
if(Local_198.f_2127 > 0){
iVar0=0;
while (iVar0 < Local_198.f_2127){
iVar1=0;
while (iVar1 < Local_198.f_2127.f_1[iVar0 /*33*/].f_14){
iVar1++;
}
iVar1=0;
while (iVar1 < Local_198.f_2127.f_1[iVar0 /*33*/].f_24){
iVar1++;
}
iVar0++;
}}
if(Local_198.f_1545 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1545){
iVar0++;
}}
if(Local_198.f_1941 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1941){
iVar0++;
}}
if(Local_198.f_1641 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1641){
iVar0++;
}}
if(Local_198.f_19 > 0){
iVar0=0;
while (iVar0 < Local_198.f_19){
if(-1 !=Local_198.f_19.f_5[iVar0 /*13*/].f_10){
}
iVar0++;
}}
if(Local_198.f_1775 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1775){
iVar1=0;
while (iVar1 < 10){
iVar1++;
}
iVar0++;
}}
if(Local_198.f_103 > 0){
iVar0=0;
while (iVar0 < Local_198.f_103){
if(-1 !=Local_198.f_103.f_1[iVar0 /*21*/].f_8){
}
if(-1 !=Local_198.f_103.f_1[iVar0 /*21*/].f_8){
}
if(Local_198.f_103.f_1[iVar0 /*21*/].f_10 !=-1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_198.f_2214[Local_198.f_103.f_1[iVar0 /*21*/].f_10 /*16*/]))){
}}
iVar0++;
}}
iVar0=0;
while (iVar0 < 6){
iVar1=0;
while (iVar1 < 2){
if(Local_198.f_103.f_548[iVar0 /*6*/].f_1[iVar1] !=-1){
}
iVar1++;
}
iVar0++;
}
if(Local_198.f_1625 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1625){
iVar0++;
}}
iVar0=0;
while (iVar0 < 4){
if(!func_102(Local_198.f_2407[iVar0 /*42*/])){
iVar1=0;
while (iVar1 < 8){
if(!func_102(Local_198.f_2407[iVar0 /*42*/].f_6[iVar1 /*3*/])){
}
iVar1++;
}}
iVar0++;
}
if(Local_198.f_1036 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1036){
iVar0++;
}}
if(func_613() > 0){
iVar0=0;
while (iVar0 < func_613()){
iVar0++;
}}
if(Local_198.f_1719 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1719){
iVar0++;
}}
if(Local_198.f_2576 > 0){
iVar0=0;
while (iVar0 < Local_198.f_2576){
iVar0++;
}}
if(Local_198.f_1645 > 0){
iVar0=0;
while (iVar0 < Local_198.f_1645){
iVar0++;
}}
if(Local_198.f_688 > 0){
iVar0=0;
while (iVar0 < Local_198.f_688){
iVar0++;
}}}

int func_613(){
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
while (iVar4 < Local_198.f_103){
if(Local_198.f_103.f_1[iVar4 /*21*/].f_10 !=-1){
bVar3=true;
iVar2=0;
while (iVar2 < 12){
if(iVar1[iVar2]==Local_198.f_103.f_1[iVar4 /*21*/].f_10){
bVar3=false;
}
iVar2++;
}
if(bVar3){
iVar1[iVar0]=Local_198.f_103.f_1[iVar4 /*21*/].f_10;
iVar0++;
}}
iVar4++;
}
return iVar0;
}


void func_614(){
var uVar0;
var uVar1;
uVar0=uVar0;
uVar1=uVar1;
func_618(Local_198.f_1531.f_13, 2, "data.Ambush.iCount", "MAX_NUM_AMBUSH_VEHICLES");
func_618(func_617(), 3, "data.BottomRightHUD (GET_NUM_BOTTOM_RIGHT_HUD())", "MAX_NUM_BOTTOM_RIGHT_HUD");
func_618(Local_198.f_1591, 8, "data.CustomSpawns.iCount", "MAX_NUM_CUSTOM_SPAWNS");
func_618(Local_198.f_2127, 2, "data.Cutscene.iNumScenes", "MAX_NUM_CUTSCENES");
func_618(Local_198.f_1545, 4, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
func_618(Local_198.f_1941, 8, "data.Interact.iNumLocations", "MAX_NUM_INTERACT_LOCATIONS");
func_618(Local_198.f_1641, 1, "data.Interior.iCount", "MAX_NUM_MISSION_INTERIORS");
func_618(Local_198.f_19, 6, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
func_618(Local_198.f_103, 26, "data.Ped.iCount", "MAX_NUM_PEDS");
func_618(func_616(), 6, "data.Ped.Group GET_NUM_PED_GROUPS()", "MAX_NUM_PED_GROUPS");
func_618(Local_198.f_1775, 2, "data.Patrol.iCount", "MAX_NUM_PATROLS");
func_618(Local_198.f_1625, 2, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
func_618(Local_198.f_1036, 31, "data.Prop.iCount", "MAX_NUM_PROPS");
func_618(func_613(), 12, "data.Scenario (GET_NUM_PED_SCENARIOS())", "MAX_NUM_SCENARIOS");
func_618(Local_198.f_1719, 3, "data.SearchArea.iNumAreas", "MAX_NUM_SEARCH_AREAS");
func_618(func_615(), 4, "data.Portal (GET_NUM_PORTALS())", "MAX_NUM_MISSION_PORTALS");
func_618(Local_198.f_2576, 37, "data.Tags.iCount", "MAX_NUM_TAGS");
func_618(Local_198.f_1645, 8, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
func_618(Local_198.f_688, 23, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
}

int func_615(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 4){
if(!func_102(Local_198.f_2407[iVar1 /*42*/])){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_616(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < Local_198.f_103){
if(Local_198.f_103.f_1[iVar0 /*21*/].f_14 > iVar1){
iVar1=Local_198.f_103.f_1[iVar0 /*21*/].f_14;
}
iVar0++;
}
return iVar1 + 1;
}

int func_617(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < 3){
iVar0++;
iVar1++;
}
return iVar0;
}


void func_618(int iParam0, int iParam1, char* sParam2, char* sParam3){
if(iParam0 <=iParam1){}}

int func_619(){
if(!func_642(Local_1298.f_0)){
return 1;
}
return func_620(func_640(), &Local_198, &Local_275);
}

int func_620(char* sParam0, var uParam1, var uParam2){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
func_639();
if(!DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam0, 0)){
return 0;
}
func_622(uParam1);
func_621(uParam2);
return 1;
}


void func_621(var uParam0){
DATAFILE::DATAFILE_DELETE(0);
*uParam0=0;
uParam0->f_1=0;
StringCopy(&(uParam0->f_2), "", 64);
uParam0->f_18=0;
uParam0->f_19=0;
}


void func_622(var uParam0){
int iVar0;
var uVar1;
var uVar2;
iVar0=DATAFILE::DATAFILE_GET_FILE_DICT(0);
uVar1=DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
Global_4718592.f_114152=DATAFILE::DATADICT_GET_INT(iVar0, "debugOnlyVersion");
func_623(&uVar1, uParam0, 0, &uVar2);
}


bool func_623(var uParam0, var uParam1, bool bParam2, var uParam3){
if(!bParam2 || *uParam3==0){
func_624(uParam0, uParam1);
}
if(!bParam2 || *uParam3==1){}
if(!bParam2 || *uParam3==2){
*uParam3=0;
return 1;
}
*uParam3++;
return !bParam2;
}


void func_624(var uParam0, var uParam1){
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
var uVar65[2];
int iVar66[2];
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
var uVar117[1];
int iVar118[1];
var uVar119;
bool bVar120;
int iVar121;
int iVar122;
var uVar123;
bool bVar124;
var uVar125;
bool bVar126;
var uVar127[1];
int iVar128[1];
var uVar129;
bool bVar130;
int iVar131;
var uVar132;
bool bVar133;
var uVar134;
bool bVar135;
var uVar136;
bool bVar137;
var uVar138;
bool bVar139;
int iVar140;
int iVar141;
var uVar142;
bool bVar143;
var uVar144;
bool bVar145;
int iVar146;
int iVar147;
var uVar148;
bool bVar149;
var uVar150;
bool bVar151;
var uVar152;
bool bVar153;
int iVar154;
int iVar155;
var uVar156;
bool bVar157;
var uVar158;
bool bVar159;
int iVar160;
int iVar161;
var uVar162[1];
int iVar163[1];
var uVar164;
bool bVar165;
var uVar166;
bool bVar167;
var uVar168;
bool bVar169;
int iVar170;
int iVar171;
var uVar172[1];
int iVar173[1];
var uVar174;
bool bVar175;
var uVar176;
bool bVar177;
var uVar178;
bool bVar179;
var uVar180;
bool bVar181;
var uVar182;
bool bVar183;
var uVar184;
bool bVar185;
int iVar186;
var uVar187;
bool bVar188;
var uVar189;
bool bVar190;
var uVar191;
bool bVar192;
var uVar193;
bool bVar194;
var uVar195;
bool bVar196;
var uVar197;
bool bVar198;
int iVar199;
int iVar200;
var uVar201;
bool bVar202;
int iVar203;
var uVar204[10];
int iVar205[10];
var uVar206[10];
int iVar207[10];
var uVar208[10];
int iVar209[10];
var uVar210[10];
int iVar211[10];
int iVar212;
var uVar213;
bool bVar214;
int iVar215;
var uVar216;
bool bVar217;
var uVar218;
bool bVar219;
var uVar220;
bool bVar221;
var uVar222[8];
int iVar223[8];
var uVar224[8];
int iVar225[8];
var uVar226[1];
int iVar227[1];
int iVar228;
int iVar229;
var uVar230;
bool bVar231;
var uVar232;
bool bVar233;
func_638(&iVar5, *uParam0, "me");
func_638(&iVar6, iVar5, "blp");
func_638(&iVar7, iVar5, "ents");
func_638(&iVar24, *uParam0, "pd");
func_638(&iVar25, iVar24, "pds");
func_638(&iVar62, iVar24, "grp");
func_638(&uVar63, iVar62, "rel");
func_638(&iVar64, iVar62, "trg");
func_638(&iVar71, *uParam0, "vh");
func_638(&iVar72, iVar71, "veh");
func_638(&iVar87, iVar72, "blp");
func_638(&iVar96, *uParam0, "pp");
func_638(&iVar97, iVar96, "prps");
func_638(&iVar110, *uParam0, "want");
func_638(&iVar111, *uParam0, "modt");
func_638(&iVar112, *uParam0, "amb");
func_638(&iVar113, iVar112, "veh");
func_638(&iVar116, iVar113, "vehv");
func_638(&iVar121, *uParam0, "gt");
func_638(&iVar122, iVar121, "loc");
func_638(&iVar131, iVar122, "blp");
func_638(&iVar140, *uParam0, "cst");
func_638(&iVar141, iVar140, "csts");
func_638(&iVar146, *uParam0, "pop");
func_638(&iVar147, iVar146, "blkr");
func_638(&iVar154, *uParam0, "inte");
func_638(&iVar155, iVar154, "int");
func_638(&iVar160, *uParam0, "ta");
func_638(&iVar161, iVar160, "ars");
func_638(&iVar170, *uParam0, "sear");
func_638(&iVar171, iVar170, "area");
func_638(&iVar186, iVar171, "blp");
func_638(&iVar199, *uParam0, "ptrl");
func_638(&iVar200, iVar199, "pat");
func_638(&iVar203, iVar200, "nd");
func_638(&iVar212, *uParam0, "sro");
func_638(&iVar215, *uParam0, "port");
func_638(&iVar228, *uParam0, "tags");
func_638(&iVar229, iVar228, "tag");
if(func_637(*uParam0, "fmbs")==7){
bVar4=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar7, &Var0)==7){
iVar9[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar7, "mn")==7){
bVar11=true;
}
if(func_637(iVar7, "pos")==7){
bVar13=true;
}
if(func_637(iVar7, "head")==7){
bVar15=true;
}
if(func_637(iVar7, "rot")==7){
bVar17=true;
}
if(func_637(iVar7, "cv")==7){
bVar19=true;
}
if(func_637(iVar7, "crt")==7){
bVar21=true;
}
if(func_637(iVar7, "int")==7){
bVar23=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar25, &Var0)==7){
iVar27[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar25, "mn")==7){
bVar29=true;
}
if(func_637(iVar25, "pos")==7){
bVar31=true;
}
if(func_637(iVar25, "head")==7){
bVar33=true;
}
if(func_637(iVar25, "wpn")==7){
bVar35=true;
}
if(func_637(iVar25, "veh")==7){
bVar37=true;
}
if(func_637(iVar25, "st")==7){
bVar39=true;
}
if(func_637(iVar25, "scen")==7){
bVar41=true;
}
if(func_637(iVar25, "anim")==7){
bVar43=true;
}
if(func_637(iVar25, "int")==7){
bVar45=true;
}
if(func_637(iVar25, "asi")==7){
bVar47=true;
}
if(func_637(iVar25, "grp")==7){
bVar49=true;
}
if(func_637(iVar25, "mvmt")==7){
bVar51=true;
}
if(func_637(iVar25, "mrd")==7){
bVar53=true;
}
if(func_637(iVar25, "sr")==7){
bVar55=true;
}
if(func_637(iVar25, "sa")==7){
bVar57=true;
}
if(func_637(iVar25, "hr")==7){
bVar59=true;
}
if(func_637(iVar25, "dr")==7){
bVar61=true;
}
iVar2=0;
while (iVar2 < 2){
StringCopy(&Var0, "ar", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar64, &Var0)==7){
iVar66[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar62, "ed")==7){
bVar68=true;
}
if(func_637(iVar62, "gt")==7){
bVar70=true;
}
iVar2=0;
while (iVar2 < 2){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar72, &Var0)==7){
iVar74[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar72, "mn")==7){
bVar76=true;
}
if(func_637(iVar72, "pos")==7){
bVar78=true;
}
if(func_637(iVar72, "head")==7){
bVar80=true;
}
if(func_637(iVar72, "col")==7){
bVar82=true;
}
if(func_637(iVar72, "int")==7){
bVar84=true;
}
if(func_637(iVar72, "vds")==7){
bVar86=true;
}
if(func_637(iVar87, "sprt")==7){
bVar89=true;
}
if(func_637(iVar87, "hclr")==7){
bVar91=true;
}
if(func_637(iVar87, "scl")==7){
bVar93=true;
}
if(func_637(iVar87, "sh")==7){
bVar95=true;
}
iVar2=0;
while (iVar2 < 2){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar97, &Var0)==7){
iVar99[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar97, "mn")==7){
bVar101=true;
}
if(func_637(iVar97, "pos")==7){
bVar103=true;
}
if(func_637(iVar97, "head")==7){
bVar105=true;
}
if(func_637(iVar97, "rot")==7){
bVar107=true;
}
if(func_637(iVar97, "int")==7){
bVar109=true;
}
if(func_637(iVar113, "idx")==7){
bVar115=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "idx", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar116, &Var0)==7){
iVar118[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar113, "numv")==7){
bVar120=true;
}
if(func_637(iVar122, "pos")==7){
bVar124=true;
}
if(func_637(iVar122, "rad")==7){
bVar126=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar122, &Var0)==7){
iVar128[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar122, "brd")==7){
bVar130=true;
}
if(func_637(iVar131, "sprt")==7){
bVar133=true;
}
if(func_637(iVar131, "hclr")==7){
bVar135=true;
}
if(func_637(iVar131, "scl")==7){
bVar137=true;
}
if(func_637(iVar131, "sh")==7){
bVar139=true;
}
if(func_637(iVar141, "vcst")==7){
bVar143=true;
}
if(func_637(iVar141, "hcst")==7){
bVar145=true;
}
if(func_637(iVar147, "typ")==7){
bVar149=true;
}
if(func_637(iVar147, "min")==7){
bVar151=true;
}
if(func_637(iVar147, "max")==7){
bVar153=true;
}
if(func_637(iVar155, "typ")==7){
bVar157=true;
}
if(func_637(iVar155, "var")==7){
bVar159=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar161, &Var0)==7){
iVar163[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar161, "vmn")==7){
bVar165=true;
}
if(func_637(iVar161, "vmx")==7){
bVar167=true;
}
if(func_637(iVar161, "fwd")==7){
bVar169=true;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar171, &Var0)==7){
iVar173[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar171, "typ")==7){
bVar175=true;
}
if(func_637(iVar171, "iei")==7){
bVar177=true;
}
if(func_637(iVar171, "vco")==7){
bVar179=true;
}
if(func_637(iVar171, "ent")==7){
bVar181=true;
}
if(func_637(iVar171, "tri")==7){
bVar183=true;
}
if(func_637(iVar171, "ita")==7){
bVar185=true;
}
if(func_637(iVar186, "sprt")==7){
bVar188=true;
}
if(func_637(iVar186, "hclr")==7){
bVar190=true;
}
if(func_637(iVar186, "scl")==7){
bVar192=true;
}
if(func_637(iVar186, "sh")==7){
bVar194=true;
}
if(func_637(iVar171, "bce")==7){
bVar196=true;
}
if(func_637(iVar171, "vce")==7){
bVar198=true;
}
if(func_637(iVar200, "pedi")==7){
bVar202=true;
}
iVar2=0;
while (iVar2 < 10){
StringCopy(&Var0, "scro", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar203, &Var0)==7){
iVar205[iVar2]=1;
}
StringCopy(&Var0, "pos", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar203, &Var0)==7){
iVar207[iVar2]=1;
}
StringCopy(&Var0, "look", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar203, &Var0)==7){
iVar209[iVar2]=1;
}
StringCopy(&Var0, "dur", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar203, &Var0)==7){
iVar211[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar212, "name")==7){
bVar214=true;
}
if(func_637(iVar215, "pos")==7){
bVar217=true;
}
if(func_637(iVar215, "head")==7){
bVar219=true;
}
if(func_637(iVar215, "plnkp")==7){
bVar221=true;
}
iVar2=0;
while (iVar2 < 8){
StringCopy(&Var0, "wrpc", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar215, &Var0)==7){
iVar223[iVar2]=1;
}
iVar2++;
}
iVar2=0;
while (iVar2 < 8){
StringCopy(&Var0, "wrph", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar215, &Var0)==7){
iVar225[iVar2]=1;
}
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
if(func_637(iVar215, &Var0)==7){
iVar227[iVar2]=1;
}
iVar2++;
}
if(func_637(iVar229, "typ")==7){
bVar231=true;
}
if(func_637(iVar229, "id")==7){
bVar233=true;
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
while (iVar2 < 2){
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
iVar2=0;
while (iVar2 < 1){
if(iVar118[iVar2]){
StringCopy(&Var0, "idx", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar117[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar116, &Var0);
}
iVar2++;
}
if(bVar120){
uVar119=DATAFILE::DATADICT_GET_ARRAY(iVar113, "numv");
}
if(bVar124){
uVar123=DATAFILE::DATADICT_GET_ARRAY(iVar122, "pos");
}
if(bVar126){
uVar125=DATAFILE::DATADICT_GET_ARRAY(iVar122, "rad");
}
iVar2=0;
while (iVar2 < 1){
if(iVar128[iVar2]){
StringCopy(&Var0, "bsa", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar127[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar122, &Var0);
}
iVar2++;
}
if(bVar130){
uVar129=DATAFILE::DATADICT_GET_ARRAY(iVar122, "brd");
}
if(bVar133){
uVar132=DATAFILE::DATADICT_GET_ARRAY(iVar131, "sprt");
}
if(bVar135){
uVar134=DATAFILE::DATADICT_GET_ARRAY(iVar131, "hclr");
}
if(bVar137){
uVar136=DATAFILE::DATADICT_GET_ARRAY(iVar131, "scl");
}
if(bVar139){
uVar138=DATAFILE::DATADICT_GET_ARRAY(iVar131, "sh");
}
if(bVar143){
uVar142=DATAFILE::DATADICT_GET_ARRAY(iVar141, "vcst");
}
if(bVar145){
uVar144=DATAFILE::DATADICT_GET_ARRAY(iVar141, "hcst");
}
if(bVar149){
uVar148=DATAFILE::DATADICT_GET_ARRAY(iVar147, "typ");
}
if(bVar151){
uVar150=DATAFILE::DATADICT_GET_ARRAY(iVar147, "min");
}
if(bVar153){
uVar152=DATAFILE::DATADICT_GET_ARRAY(iVar147, "max");
}
if(bVar157){
uVar156=DATAFILE::DATADICT_GET_ARRAY(iVar155, "typ");
}
if(bVar159){
uVar158=DATAFILE::DATADICT_GET_ARRAY(iVar155, "var");
}
iVar2=0;
while (iVar2 < 1){
if(iVar163[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar162[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar161, &Var0);
}
iVar2++;
}
if(bVar165){
uVar164=DATAFILE::DATADICT_GET_ARRAY(iVar161, "vmn");
}
if(bVar167){
uVar166=DATAFILE::DATADICT_GET_ARRAY(iVar161, "vmx");
}
if(bVar169){
uVar168=DATAFILE::DATADICT_GET_ARRAY(iVar161, "fwd");
}
iVar2=0;
while (iVar2 < 1){
if(iVar173[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar172[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar171, &Var0);
}
iVar2++;
}
if(bVar175){
uVar174=DATAFILE::DATADICT_GET_ARRAY(iVar171, "typ");
}
if(bVar177){
uVar176=DATAFILE::DATADICT_GET_ARRAY(iVar171, "iei");
}
if(bVar179){
uVar178=DATAFILE::DATADICT_GET_ARRAY(iVar171, "vco");
}
if(bVar181){
uVar180=DATAFILE::DATADICT_GET_ARRAY(iVar171, "ent");
}
if(bVar183){
uVar182=DATAFILE::DATADICT_GET_ARRAY(iVar171, "tri");
}
if(bVar185){
uVar184=DATAFILE::DATADICT_GET_ARRAY(iVar171, "ita");
}
if(bVar188){
uVar187=DATAFILE::DATADICT_GET_ARRAY(iVar186, "sprt");
}
if(bVar190){
uVar189=DATAFILE::DATADICT_GET_ARRAY(iVar186, "hclr");
}
if(bVar192){
uVar191=DATAFILE::DATADICT_GET_ARRAY(iVar186, "scl");
}
if(bVar194){
uVar193=DATAFILE::DATADICT_GET_ARRAY(iVar186, "sh");
}
if(bVar196){
uVar195=DATAFILE::DATADICT_GET_ARRAY(iVar171, "bce");
}
if(bVar198){
uVar197=DATAFILE::DATADICT_GET_ARRAY(iVar171, "vce");
}
if(bVar202){
uVar201=DATAFILE::DATADICT_GET_ARRAY(iVar200, "pedi");
}
iVar2=0;
while (iVar2 < 10){
if(iVar205[iVar2]){
StringCopy(&Var0, "scro", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar204[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar203, &Var0);
}
if(iVar207[iVar2]){
StringCopy(&Var0, "pos", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar206[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar203, &Var0);
}
if(iVar209[iVar2]){
StringCopy(&Var0, "look", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar208[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar203, &Var0);
}
if(iVar211[iVar2]){
StringCopy(&Var0, "dur", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar210[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar203, &Var0);
}
iVar2++;
}
if(bVar214){
uVar213=DATAFILE::DATADICT_GET_ARRAY(iVar212, "name");
}
if(bVar217){
uVar216=DATAFILE::DATADICT_GET_ARRAY(iVar215, "pos");
}
if(bVar219){
uVar218=DATAFILE::DATADICT_GET_ARRAY(iVar215, "head");
}
if(bVar221){
uVar220=DATAFILE::DATADICT_GET_ARRAY(iVar215, "plnkp");
}
iVar2=0;
while (iVar2 < 8){
if(iVar223[iVar2]){
StringCopy(&Var0, "wrpc", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar222[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar215, &Var0);
}
iVar2++;
}
iVar2=0;
while (iVar2 < 8){
if(iVar225[iVar2]){
StringCopy(&Var0, "wrph", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar224[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar215, &Var0);
}
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
if(iVar227[iVar2]){
StringCopy(&Var0, "ibs", 16);
StringIntConCat(&Var0, iVar2, 16);
uVar226[iVar2]=DATAFILE::DATADICT_GET_ARRAY(iVar215, &Var0);
}
iVar2++;
}
if(bVar231){
uVar230=DATAFILE::DATADICT_GET_ARRAY(iVar229, "typ");
}
if(bVar233){
uVar232=DATAFILE::DATADICT_GET_ARRAY(iVar229, "id");
}
*uParam1={
func_636(*uParam0, "fmnm", "") 
};
iVar1=0;
while (iVar1 < 2){
uParam1->f_16[iVar1]=func_635(uVar3, iVar1, 0, bVar4);
iVar1++;
}
uParam1->f_19=func_634(iVar5, "num", 0);
uParam1->f_19.f_1=func_633(iVar6, "sprt", -1);
uParam1->f_19.f_1.f_1=func_633(iVar6, "hclr", 12);
uParam1->f_19.f_1.f_2=func_632(iVar6, "scl", 1f);
uParam1->f_19.f_1.f_3=func_630(iVar6, "sh", 0);
iVar1=0;
while (iVar1 < 6){
iVar2=0;
while (iVar2 < 1){
uParam1->f_19.f_5[iVar1 /*13*/][iVar2]=func_635(uVar8[iVar2], iVar1, 0, iVar9[iVar2]);
iVar2++;
}
uParam1->f_19.f_5[iVar1 /*13*/].f_2=func_629(uVar10, iVar1, 0, bVar11);
uParam1->f_19.f_5[iVar1 /*13*/].f_3={
func_628(uVar12, iVar1, 0f, 0f, 0f, bVar13) 
};
uParam1->f_19.f_5[iVar1 /*13*/].f_6=func_627(uVar14, iVar1, 0f, bVar15);
uParam1->f_19.f_5[iVar1 /*13*/].f_7={
func_628(uVar16, iVar1, 0f, 0f, 0f, bVar17) 
};
uParam1->f_19.f_5[iVar1 /*13*/].f_10=func_635(uVar18, iVar1, -1, bVar19);
uParam1->f_19.f_5[iVar1 /*13*/].f_11=func_629(uVar20, iVar1, 2, bVar21);
uParam1->f_19.f_5[iVar1 /*13*/].f_12=func_635(uVar22, iVar1, -1, bVar23);
iVar1++;
}
uParam1->f_103=func_634(iVar24, "num", 0);
iVar1=0;
while (iVar1 < 26){
iVar2=0;
while (iVar2 < 1){
uParam1->f_103.f_1[iVar1 /*21*/][iVar2]=func_635(uVar26[iVar2], iVar1, 0, iVar27[iVar2]);
iVar2++;
}
uParam1->f_103.f_1[iVar1 /*21*/].f_2=func_629(uVar28, iVar1, 0, bVar29);
uParam1->f_103.f_1[iVar1 /*21*/].f_3={
func_628(uVar30, iVar1, 0f, 0f, 0f, bVar31) 
};
uParam1->f_103.f_1[iVar1 /*21*/].f_6=func_627(uVar32, iVar1, 0f, bVar33);
uParam1->f_103.f_1[iVar1 /*21*/].f_7=func_629(uVar34, iVar1, 0, bVar35);
uParam1->f_103.f_1[iVar1 /*21*/].f_8=func_635(uVar36, iVar1, -1, bVar37);
uParam1->f_103.f_1[iVar1 /*21*/].f_9=func_629(uVar38, iVar1, 0, bVar39);
uParam1->f_103.f_1[iVar1 /*21*/].f_10=func_635(uVar40, iVar1, -1, bVar41);
uParam1->f_103.f_1[iVar1 /*21*/].f_11=func_635(uVar42, iVar1, -1, bVar43);
uParam1->f_103.f_1[iVar1 /*21*/].f_12=func_635(uVar44, iVar1, -1, bVar45);
uParam1->f_103.f_1[iVar1 /*21*/].f_13=func_635(uVar46, iVar1, -1, bVar47);
uParam1->f_103.f_1[iVar1 /*21*/].f_14=func_635(uVar48, iVar1, 0, bVar49);
uParam1->f_103.f_1[iVar1 /*21*/].f_15=func_629(uVar50, iVar1, 2, bVar51);
uParam1->f_103.f_1[iVar1 /*21*/].f_16=func_635(uVar52, iVar1, -1, bVar53);
uParam1->f_103.f_1[iVar1 /*21*/].f_17=func_627(uVar54, iVar1, 60f, bVar55);
uParam1->f_103.f_1[iVar1 /*21*/].f_18=func_627(uVar56, iVar1, 60f, bVar57);
uParam1->f_103.f_1[iVar1 /*21*/].f_19=func_627(uVar58, iVar1, 60f, bVar59);
uParam1->f_103.f_1[iVar1 /*21*/].f_20=func_627(uVar60, iVar1, -1f, bVar61);
iVar1++;
}
iVar1=0;
while (iVar1 < 6){
iVar2=0;
while (iVar2 < 2){
uParam1->f_103.f_548[iVar1 /*6*/].f_1[iVar2]=func_635(uVar65[iVar2], iVar1, -1, iVar66[iVar2]);
iVar2++;
}
uParam1->f_103.f_548[iVar1 /*6*/].f_4=func_635(uVar67, iVar1, 0, bVar68);
uParam1->f_103.f_548[iVar1 /*6*/].f_5=func_635(uVar69, iVar1, -1, bVar70);
iVar1++;
}
uParam1->f_688=func_634(iVar71, "num", 0);
iVar1=0;
while (iVar1 < 23){
iVar2=0;
while (iVar2 < 2){
uParam1->f_688.f_1[iVar1 /*15*/][iVar2]=func_635(uVar73[iVar2], iVar1, 0, iVar74[iVar2]);
iVar2++;
}
uParam1->f_688.f_1[iVar1 /*15*/].f_3=func_629(uVar75, iVar1, 0, bVar76);
uParam1->f_688.f_1[iVar1 /*15*/].f_4={
func_628(uVar77, iVar1, 0f, 0f, 0f, bVar78) 
};
uParam1->f_688.f_1[iVar1 /*15*/].f_7=func_627(uVar79, iVar1, 0f, bVar80);
uParam1->f_688.f_1[iVar1 /*15*/].f_8=func_635(uVar81, iVar1, -1, bVar82);
uParam1->f_688.f_1[iVar1 /*15*/].f_9=func_635(uVar83, iVar1, -1, bVar84);
uParam1->f_688.f_1[iVar1 /*15*/].f_10=func_635(uVar85, iVar1, 0, bVar86);
uParam1->f_688.f_1[iVar1 /*15*/].f_11=func_629(uVar88, iVar1, -1, bVar89);
uParam1->f_688.f_1[iVar1 /*15*/].f_11.f_1=func_629(uVar90, iVar1, 12, bVar91);
uParam1->f_688.f_1[iVar1 /*15*/].f_11.f_2=func_627(uVar92, iVar1, 1f, bVar93);
uParam1->f_688.f_1[iVar1 /*15*/].f_11.f_3=func_626(uVar94, iVar1, 0, bVar95);
iVar1++;
}
uParam1->f_688.f_347=func_634(iVar71, "trv", -1);
uParam1->f_1036=func_634(iVar96, "num", 0);
iVar1=0;
while (iVar1 < 31){
iVar2=0;
while (iVar2 < 2){
uParam1->f_1036.f_1[iVar1 /*12*/][iVar2]=func_635(uVar98[iVar2], iVar1, 0, iVar99[iVar2]);
iVar2++;
}
uParam1->f_1036.f_1[iVar1 /*12*/].f_3=func_629(uVar100, iVar1, 0, bVar101);
uParam1->f_1036.f_1[iVar1 /*12*/].f_4={
func_628(uVar102, iVar1, 0f, 0f, 0f, bVar103) 
};
uParam1->f_1036.f_1[iVar1 /*12*/].f_7=func_627(uVar104, iVar1, 0f, bVar105);
uParam1->f_1036.f_1[iVar1 /*12*/].f_8={
func_628(uVar106, iVar1, 0f, 0f, 0f, bVar107) 
};
uParam1->f_1036.f_1[iVar1 /*12*/].f_11=func_635(uVar108, iVar1, -1, bVar109);
iVar1++;
}
uParam1->f_1519=func_634(iVar110, "wnum", 0);
uParam1->f_1519.f_1=func_634(iVar110, "wfak", -1);
uParam1->f_1519.f_2=func_632(iVar110, "wblk", 250f);
uParam1->f_1522=func_634(iVar111, "time", -1);
uParam1->f_1522.f_1=func_633(iVar111, "disp", 0);
iVar1=0;
while (iVar1 < 2){
uParam1->f_1531[iVar1 /*4*/]=func_635(uVar114, iVar1, -1, bVar115);
iVar2=0;
while (iVar2 < 1){
uParam1->f_1531[iVar1 /*4*/].f_1[iVar2]=func_635(uVar117[iVar2], iVar1, -1, iVar118[iVar2]);
iVar2++;
}
uParam1->f_1531[iVar1 /*4*/].f_3=func_635(uVar119, iVar1, 0, bVar120);
iVar1++;
}
uParam1->f_1531.f_9=func_634(iVar112, "wvs", 3);
uParam1->f_1531.f_10=func_634(iVar112, "spd", 15000);
uParam1->f_1531.f_11=func_634(iVar112, "rspd", 5000);
uParam1->f_1531.f_12=func_632(iVar112, "sdst", 200f);
uParam1->f_1531.f_13=func_634(iVar112, "num", 0);
uParam1->f_1545=func_634(iVar121, "num", 0);
iVar1=0;
while (iVar1 < 4){
uParam1->f_1545.f_1[iVar1 /*11*/]={
func_628(uVar123, iVar1, 0f, 0f, 0f, bVar124) 
};
uParam1->f_1545.f_1[iVar1 /*11*/].f_3=func_627(uVar125, iVar1, -1f, bVar126);
iVar2=0;
while (iVar2 < 1){
uParam1->f_1545.f_1[iVar1 /*11*/].f_4[iVar2]=func_635(uVar127[iVar2], iVar1, 0, iVar128[iVar2]);
iVar2++;
}
uParam1->f_1545.f_1[iVar1 /*11*/].f_6=func_627(uVar129, iVar1, 0f, bVar130);
uParam1->f_1545.f_1[iVar1 /*11*/].f_7=func_629(uVar132, iVar1, -1, bVar133);
uParam1->f_1545.f_1[iVar1 /*11*/].f_7.f_1=func_629(uVar134, iVar1, 12, bVar135);
uParam1->f_1545.f_1[iVar1 /*11*/].f_7.f_2=func_627(uVar136, iVar1, 1f, bVar137);
uParam1->f_1545.f_1[iVar1 /*11*/].f_7.f_3=func_626(uVar138, iVar1, 0, bVar139);
iVar1++;
}
uParam1->f_1591=func_634(iVar140, "num", 0);
iVar1=0;
while (iVar1 < 8){
uParam1->f_1591.f_1[iVar1 /*4*/]={
func_628(uVar142, iVar1, 0f, 0f, 0f, bVar143) 
};
uParam1->f_1591.f_1[iVar1 /*4*/].f_3=func_627(uVar144, iVar1, 0f, bVar145);
iVar1++;
}
uParam1->f_1625=func_634(iVar146, "num", 0);
iVar1=0;
while (iVar1 < 2){
uParam1->f_1625.f_1[iVar1 /*7*/]=func_629(uVar148, iVar1, -1, bVar149);
uParam1->f_1625.f_1[iVar1 /*7*/].f_1={
func_628(uVar150, iVar1, 0f, 0f, 0f, bVar151) 
};
uParam1->f_1625.f_1[iVar1 /*7*/].f_4={
func_628(uVar152, iVar1, 0f, 0f, 0f, bVar153) 
};
iVar1++;
}
uParam1->f_1641=func_634(iVar154, "num", 0);
iVar1=0;
while (iVar1 < 1){
uParam1->f_1641.f_1[iVar1 /*2*/]=func_629(uVar156, iVar1, -1, bVar157);
uParam1->f_1641.f_1[iVar1 /*2*/].f_1=func_635(uVar158, iVar1, 0, bVar159);
iVar1++;
}
uParam1->f_1645=func_634(iVar160, "num", 0);
iVar1=0;
while (iVar1 < 8){
iVar2=0;
while (iVar2 < 1){
uParam1->f_1645.f_1[iVar1 /*9*/][iVar2]=func_635(uVar162[iVar2], iVar1, 0, iVar163[iVar2]);
iVar2++;
}
uParam1->f_1645.f_1[iVar1 /*9*/].f_2={
func_628(uVar164, iVar1, 0f, 0f, 0f, bVar165) 
};
uParam1->f_1645.f_1[iVar1 /*9*/].f_5={
func_628(uVar166, iVar1, 0f, 0f, 0f, bVar167) 
};
uParam1->f_1645.f_1[iVar1 /*9*/].f_8=func_627(uVar168, iVar1, 0f, bVar169);
iVar1++;
}
uParam1->f_1719=func_634(iVar170, "num", 0);
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 1){
uParam1->f_1719.f_1[iVar1 /*18*/][iVar2]=func_635(uVar172[iVar2], iVar1, 0, iVar173[iVar2]);
iVar2++;
}
uParam1->f_1719.f_1[iVar1 /*18*/].f_2=func_629(uVar174, iVar1, -1, bVar175);
uParam1->f_1719.f_1[iVar1 /*18*/].f_3=func_635(uVar176, iVar1, -1, bVar177);
uParam1->f_1719.f_1[iVar1 /*18*/].f_4={
func_628(uVar178, iVar1, 0f, 0f, 0f, bVar179) 
};
uParam1->f_1719.f_1[iVar1 /*18*/].f_7=func_627(uVar180, iVar1, -1f, bVar181);
uParam1->f_1719.f_1[iVar1 /*18*/].f_8=func_627(uVar182, iVar1, -1f, bVar183);
uParam1->f_1719.f_1[iVar1 /*18*/].f_9=func_635(uVar184, iVar1, -1, bVar185);
uParam1->f_1719.f_1[iVar1 /*18*/].f_10=func_629(uVar187, iVar1, -1, bVar188);
uParam1->f_1719.f_1[iVar1 /*18*/].f_10.f_1=func_629(uVar189, iVar1, 12, bVar190);
uParam1->f_1719.f_1[iVar1 /*18*/].f_10.f_2=func_627(uVar191, iVar1, 1f, bVar192);
uParam1->f_1719.f_1[iVar1 /*18*/].f_10.f_3=func_626(uVar193, iVar1, 0, bVar194);
uParam1->f_1719.f_1[iVar1 /*18*/].f_14=func_626(uVar195, iVar1, 0, bVar196);
uParam1->f_1719.f_1[iVar1 /*18*/].f_15={
func_628(uVar197, iVar1, 0f, 0f, 0f, bVar198) 
};
iVar1++;
}
uParam1->f_1775=func_634(iVar199, "num", 0);
iVar1=0;
while (iVar1 < 2){
uParam1->f_1775.f_1[iVar1 /*82*/]=func_635(uVar201, iVar1, -1, bVar202);
iVar2=0;
while (iVar2 < 10){
uParam1->f_1775.f_1[iVar1 /*82*/].f_1[iVar2 /*8*/]=func_635(uVar204[iVar2], iVar1, -1, iVar205[iVar2]);
uParam1->f_1775.f_1[iVar1 /*82*/].f_1[iVar2 /*8*/].f_1={
func_628(uVar206[iVar2], iVar1, 0f, 0f, 0f, iVar207[iVar2]) 
};
uParam1->f_1775.f_1[iVar1 /*82*/].f_1[iVar2 /*8*/].f_4={
func_628(uVar208[iVar2], iVar1, 0f, 0f, 0f, iVar209[iVar2]) 
};
uParam1->f_1775.f_1[iVar1 /*82*/].f_1[iVar2 /*8*/].f_7=func_635(uVar210[iVar2], iVar1, 2000, iVar211[iVar2]);
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 12){
uParam1->f_2214[iVar1 /*16*/]={
func_625(uVar213, iVar1, "", bVar214) 
};
iVar1++;
}
iVar1=0;
while (iVar1 < 4){
uParam1->f_2407[iVar1 /*42*/]={
func_628(uVar216, iVar1, 0f, 0f, 0f, bVar217) 
};
uParam1->f_2407[iVar1 /*42*/].f_3=func_627(uVar218, iVar1, 0f, bVar219);
uParam1->f_2407[iVar1 /*42*/].f_4=func_635(uVar220, iVar1, -1, bVar221);
iVar2=0;
while (iVar2 < 8){
uParam1->f_2407[iVar1 /*42*/].f_6[iVar2 /*3*/]={
func_628(uVar222[iVar2], iVar1, 0f, 0f, 0f, iVar223[iVar2]) 
};
iVar2++;
}
iVar2=0;
while (iVar2 < 8){
uParam1->f_2407[iVar1 /*42*/].f_31[iVar2]=func_627(uVar224[iVar2], iVar1, 0f, iVar225[iVar2]);
iVar2++;
}
iVar2=0;
while (iVar2 < 1){
uParam1->f_2407[iVar1 /*42*/].f_40[iVar2]=func_635(uVar226[iVar2], iVar1, 0, iVar227[iVar2]);
iVar2++;
}
iVar1++;
}
uParam1->f_2576=func_634(iVar228, "num", 0);
iVar1=0;
while (iVar1 < 37){
uParam1->f_2576.f_1[iVar1 /*2*/]=func_629(uVar230, iVar1, 0, bVar231);
uParam1->f_2576.f_1[iVar1 /*2*/].f_1=func_635(uVar232, iVar1, -1, bVar233);
iVar1++;
}}
struct<16> func_625(var uParam0, int iParam1, char* sParam2, bool bParam3){
struct<16> Var0;
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
}else{
StringCopy(&Var0, sParam2, 64);
}
return Var0;
}

int func_626(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
}
return iParam2;
}


float func_627(var uParam0, int iParam1, float fParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
}
return fParam2;
}


Vector3 func__628(var uParam0, int iParam1, struct<3> Param2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
}
return Param2;
}

int func_629(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
}
return iParam2;
}

int func_630(int iParam0, char* sParam1, int iParam2){
if(func_631(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==1){
return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
}
return iParam2;
}


bool func_631(int iParam0){
return iParam0 !=0;
}


float func_632(int iParam0, char* sParam1, float fParam2){
if(func_631(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==3){
return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
}
return fParam2;
}

int func_633(int iParam0, char* sParam1, int iParam2){
if(func_631(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==2){
return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
}
return iParam2;
}

int func_634(int iParam0, char* sParam1, int iParam2){
if(func_631(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==2){
return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
}
return iParam2;
}

int func_635(var uParam0, int iParam1, int iParam2, bool bParam3){
if(bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0)){
return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
}
return iParam2;
}
struct<16> func_636(int iParam0, char* sParam1, char* sParam2){
struct<16> Var0;
if(func_631(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1)==4){
StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
}else{
StringCopy(&Var0, sParam2, 64);
}
return Var0;
}

int func_637(int iParam0, char* sParam1){
if(!func_631(iParam0)){
return 0;
}
return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}


void func_638(var uParam0, int iParam1, char* sParam2){
if(!func_631(iParam1)){
return;
}
if(!func_631(*uParam0) && DATAFILE::DATADICT_GET_TYPE(iParam1, sParam2)==6){
*uParam0=DATAFILE::DATADICT_GET_DICT(iParam1, sParam2);
if(!func_631(*uParam0)){
}}
if(!func_631(*uParam0)){}}


void func_639(){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0){
DATAFILE::DATAFILE_DELETE(0);
}}


char* func_640(){
return func_641(func_566(), func_565());
}


char* func_641(int iParam0, int iParam1){
switch (iParam1){
case 0:
return "Sum2_Auto_Shop_1";
case 1:
return "Sum2_Auto_Shop_2";
case 2:
return "Sum2_Auto_Shop_3";
case 3:
return "Sum2_Underwater_Cargo_1";
case 4:
return "Sum2_Underwater_Cargo_2";
case 5:
return "Sum2_Underwater_Cargo_3";
default:
}
return "";
}

int func_642(int iParam0){
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


void func_643(){
if(func_1440(21)){
return;
}
func_644();
func_155(21);
}


void func_644(){
switch (func_566()){
case 0:
func_1196();
break;
case 1:
func_645();
break;
}}


void func_645(){
Local_274.f_11=226680;
Local_274.f_11.f_1=223254;
Local_274.f_0=223245;
Local_274.f_1=223224;
Local_274.f_2=223203;
Local_274.f_13=219527;
Local_274.f_10=219432;
Local_274.f_15.f_3=219169;
Local_274.f_15.f_27=219090;
Local_274.f_15.f_27.f_2=219053;
Local_274.f_15.f_1=219037;
Local_274.f_15.f_2=218974;
Local_274.f_3=218917;
Local_274.f_3.f_1=213777;
Local_274.f_3.f_2.f_1=199170;
Local_274.f_3.f_4=199137;
Local_274.f_3.f_4.f_1=198961;
Local_274.f_3.f_4.f_2=198849;
Local_274.f_112.f_6=198783;
Local_274.f_92=198774;
Local_274.f_484=198699;
Local_274.f_484.f_1=198506;
Local_274.f_484.f_2=198033;
Local_274.f_484.f_30=197781;
Local_274.f_484.f_30.f_13=197641;
Local_274.f_484.f_30.f_14=197411;
Local_274.f_484.f_30.f_4=197335;
Local_274.f_484.f_30.f_5=197284;
Local_274.f_484.f_30.f_11=197178;
Local_274.f_484.f_30.f_9=197108;
Local_274.f_484.f_53=197013;
Local_274.f_484.f_56.f_1=196530;
Local_274.f_484.f_56.f_2=194039;
Local_274.f_484.f_56.f_3=193944;
Local_274.f_484.f_56.f_4=193849;
Local_274.f_484.f_56.f_6=193801;
Local_274.f_484.f_56=192934;
Local_274.f_484.f_64.f_2=192875;
Local_274.f_484.f_64.f_3=192727;
Local_274.f_484.f_64.f_13=192609;
Local_274.f_484.f_64.f_9=192600;
Local_274.f_484.f_21=191865;
Local_274.f_484.f_22=191681;
Local_274.f_592.f_10=191643;
Local_274.f_592.f_11=191590;
Local_274.f_592.f_8=191579;
Local_274.f_592.f_22=191517;
Local_274.f_592.f_24=191397;
Local_274.f_377.f_23=191368;
Local_274.f_377.f_43=191311;
Local_274.f_377.f_45=190567;
Local_274.f_377.f_49=190365;
Local_274.f_377.f_31=190319;
Local_274.f_624=190260;
Local_274.f_624.f_3=190236;
Local_274.f_624.f_2=190131;
Local_274.f_624.f_4=190106;
Local_274.f_624.f_7=190093;
Local_274.f_624.f_8=190040;
Local_274.f_124.f_32=190010;
Local_274.f_124.f_31=189975;
Local_274.f_124.f_41=189966;
Local_274.f_124=189935;
Local_274.f_124.f_13=189891;
Local_274.f_124.f_4=189861;
Local_274.f_124.f_5=189851;
Local_274.f_124.f_23=189820;
Local_274.f_734=189811;
Local_274.f_734.f_2=189705;
Local_274.f_734.f_4=189491;
Local_274.f_734.f_5=177708;
Local_274.f_432=177681;
Local_274.f_432.f_13=177653;
Local_274.f_432.f_4=177628;
Local_274.f_432.f_5=177605;
Local_274.f_432.f_14=177532;
Local_274.f_432.f_19=177370;
Local_274.f_432.f_20=177357;
Local_274.f_432.f_35=174256;
Local_274.f_475.f_4=174237;
Local_274.f_679.f_4.f_1=173931;
Local_274.f_166.f_192=173474;
Local_274.f_166.f_142=173163;
Local_274.f_166=172291;
Local_274.f_166.f_1=172118;
Local_274.f_166.f_2.f_94=172085;
Local_274.f_53.f_2.f_1=171978;
Local_274.f_53.f_2.f_2=171810;
Local_274.f_53.f_2=171801;
Local_274.f_642.f_1=171499;
Local_274.f_642=171428;
Local_274.f_658.f_11=171418;
Local_274.f_658.f_10=171406;
Local_274.f_658.f_12=170966;
Local_274.f_658.f_9=170954;
Local_274.f_658.f_13=170602;
Local_274.f_658.f_7=170593;
Local_274.f_658.f_9=170954;
Local_274.f_658.f_2=170584;
Local_274.f_658.f_4=170526;
Local_274.f_658.f_14=170486;
Local_274.f_104=170257;
Local_274.f_104.f_1=170058;
Local_274.f_104.f_2=170049;
Local_274.f_104.f_3.f_1=169926;
Local_274.f_104.f_3.f_2=169914;
Local_274.f_104.f_3.f_3=169902;
Local_274.f_104.f_3=169629;
Local_274.f_638=169543;
Local_274.f_638.f_1=169292;
Local_274.f_638.f_3=164455;
Local_274.f_62.f_3=164428;
Local_274.f_62.f_4=164401;
Local_274.f_62.f_1=164374;
}


var func__646(){
return func_647();
}


var func__647(){
return Global_262145.f_17557;
}


var func__648(){
return func_649();
}


var func__649(){
return Global_262145.f_12870;
}


var func__650(){
return func_651();
}


var func__651(){
return Global_262145.f_15578;
}


void func_652(int iParam0){
if(iParam0==0){
func_653(Local_198.f_2195[0 /*6*/].f_1);
}}


void func_653(char* sParam0){
int iVar0;
int iVar1;
int iVar2[3];
int iVar3[3];
int iVar4[3];
iVar0=0;
while (iVar0 < 3){
iVar4[iVar0]=0;
iVar2[iVar0]=4;
iVar3[iVar0]=4;
if(func_548(iVar0, 2)){
iVar4[iVar1]=2;
iVar2[iVar1]=func_695(iVar0);
iVar3[iVar1]=2;
iVar1++;
}elseif(func_693(iVar0)){
iVar4[iVar1]=1;
iVar2[iVar1]=func_661(iVar0);
iVar1++;
}
iVar0++;
}
func_654(3, sParam0, -1, 1, 1, 1, 1, 1, 1, 1, 1, 18, 6, -1, 4, -1082130432, -1082130432, 0, func_660(0, &iVar2), func_660(1, &iVar2), func_660(2, &iVar2), func_660(3, &iVar2), func_660(4, &iVar2), func_660(5, &iVar2), func_660(6, &iVar2), func_660(7, &iVar2), 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, func_659(0, &iVar4), func_659(1, &iVar4), func_659(2, &iVar4), func_659(3, &iVar4), func_659(4, &iVar4), func_659(5, &iVar4), func_659(6, &iVar4), func_659(7, &iVar4), 0, 0, func_660(0, &iVar3), func_660(1, &iVar3), func_660(2, &iVar3), func_660(3, &iVar3), func_660(4, &iVar3), func_660(5, &iVar3), func_660(6, &iVar3), func_660(7, &iVar3), 0);
}


void func_654(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, int iParam46, int iParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, bool bParam56){
bool bVar0;
int iVar1;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_658(2, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655472.f_1=1;
func_657(2, bVar0);
Global_1655472.f_2120[bVar0]=iParam0;
StringCopy(&(Global_1655472.f_2120.f_99[bVar0 /*16*/]), sParam1, 64);
Global_1655472.f_2120.f_260[bVar0]=iParam2;
Global_1655472.f_2120.f_11[bVar0]=iParam3;
Global_1655472.f_2120.f_22[bVar0]=iParam4;
Global_1655472.f_2120.f_33[bVar0]=iParam5;
Global_1655472.f_2120.f_44[bVar0]=iParam6;
Global_1655472.f_2120.f_55[bVar0]=iParam7;
Global_1655472.f_2120.f_66[bVar0]=iParam8;
Global_1655472.f_2120.f_77[bVar0]=iParam9;
Global_1655472.f_2120.f_88[bVar0]=iParam10;
Global_1655472.f_2120.f_282[bVar0]=iParam11;
Global_1655472.f_2120.f_293[bVar0]=iParam12;
Global_1655472.f_2120.f_271[bVar0]=iParam13;
Global_1655472.f_2120.f_315[bVar0]=iParam14;
Global_1655472.f_2120.f_326[bVar0 /*3*/]=iParam15;
Global_1655472.f_2120.f_326[bVar0 /*3*/].f_1=iParam16;
Global_1655472.f_2120.f_357[bVar0]=iParam17;
Global_1655472.f_2120.f_368[bVar0]=uParam18;
Global_1655472.f_2120.f_379[bVar0]=uParam19;
Global_1655472.f_2120.f_390[bVar0]=uParam20;
Global_1655472.f_2120.f_401[bVar0]=uParam21;
Global_1655472.f_2120.f_412[bVar0]=uParam22;
Global_1655472.f_2120.f_423[bVar0]=uParam23;
Global_1655472.f_2120.f_434[bVar0]=uParam24;
Global_1655472.f_2120.f_445[bVar0]=uParam25;
Global_1655472.f_2120.f_456[bVar0]=iParam26;
Global_1655472.f_2120.f_467[bVar0]=iParam27;
Global_1655472.f_2120.f_478[bVar0]=iParam28;
Global_1655472.f_2120.f_489[bVar0]=iParam29;
Global_1655472.f_2120.f_500[bVar0]=iParam30;
Global_1655472.f_2120.f_511[bVar0]=iParam31;
Global_1655472.f_2120.f_522[bVar0]=iParam32;
Global_1655472.f_2120.f_533[bVar0]=iParam33;
Global_1655472.f_2120.f_544[bVar0]=iParam37;
Global_2803253[bVar0]=uParam38;
Global_2803264[bVar0]=uParam39;
Global_2803275[bVar0]=uParam40;
Global_2803286[bVar0]=uParam41;
Global_2803297[bVar0]=uParam42;
Global_2803308[bVar0]=uParam43;
Global_2803319[bVar0]=uParam44;
Global_2803330[bVar0]=uParam45;
Global_1655472.f_2120.f_631[bVar0]=uParam48;
Global_1655472.f_2120.f_642[bVar0]=uParam49;
Global_1655472.f_2120.f_653[bVar0]=uParam50;
Global_1655472.f_2120.f_664[bVar0]=uParam51;
Global_1655472.f_2120.f_675[bVar0]=uParam52;
Global_1655472.f_2120.f_686[bVar0]=uParam53;
Global_1655472.f_2120.f_697[bVar0]=uParam54;
Global_1655472.f_2120.f_708[bVar0]=uParam55;
if(bParam56){
Global_1655472.f_1172=0;
}else{
Global_1655472.f_1172=1;
}
Global_1655472.f_2120.f_576[bVar0]=iParam34;
if(iParam34 > -1){
func_656(2, bVar0);
}else{
func_655(2, bVar0);
}
Global_1655472.f_2120.f_587[bVar0]=iParam35;
Global_1655472.f_2120.f_598[bVar0]=iParam36;
Global_1655472.f_2120.f_609[bVar0]=iParam46;
Global_1655472.f_2120.f_620[bVar0]=iParam47;
}}


void func_655(int iParam0, bool bParam1){
MISC::CLEAR_BIT(&(Global_1655472.f_7057[iParam0]), bParam1);
}


void func_656(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655472.f_7057[iParam0]), bParam1);
}


void func_657(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), bParam1);
}

int func_658(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}

int func_659(int iParam0, int iParam1){
if(iParam0 > 2){
return 0;
}
if((*iParam1)[iParam0]==2){
return 1;
}
return 0;
}

int func_660(int iParam0, int iParam1){
if(iParam0 > 2){
return 0;
}
return (*iParam1)[iParam0];
}

int func_661(int iParam0){
if(iParam0 > 2){
return 0;
}
return func_662(bLocal_1288, -2, 0, 0, 0);
}

int func_662(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(func_386(bParam0) && !bParam4){
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
if(((func_386(PLAYER::PLAYER_ID()) || (func_692() && func_691())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
iVar1=func_690();
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_688(iParam1, bParam0, 0);
}else{
return func_674(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_674(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_688(iParam1, bParam0, 0);
}else{
return func_663(0, -1, 0);
}}else{
return func_663(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_688(iParam1, bParam0, 0);
}else{
return func_674(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_674(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_663(bool bParam0, int iParam1, bool bParam2){
return func_664(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_664(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_673() || (func_672() && func_670())) && Global_1665699.f_1){
if(bParam1){
return func_669(iParam2, iVar0);
}else{
return func_669(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_380(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_668(1);
}else{
return func_668(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_665(iVar0, iParam2, 1, 4);
}else{
return func_665(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_668(1);
}
return func_668(0);
}

int func_665(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_667(iParam0, iParam1, iParam3);
if(func_666(Global_4718592.f_113724, 1)){
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

int func_666(int iParam0, bool bParam1){
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

int func_667(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_380(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_668(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_669(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_667(iParam1, iParam0, 4);
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

int func_670(){
if(func_671()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_671(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_672(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_673(){
if(func_671() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_674(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
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
if(func_680()){
iVar3=func_679(bParam0);
if(!iVar3==-1){
return func_677(iVar3);
}}
if((func_676(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_380(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_668(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_675(1);
}else{
return func_664(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/]==0){
if(bParam0==bParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_668(1);
}else{
return func_664(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==bParam0){
return 28;
}}
iVar4=func_679(bParam0);
if(!iVar4==-1){
return func_677(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_675(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_676(bool bParam0, bool bParam1, int iParam2, int iParam3){
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

int func_677(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_678(iParam0);
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


var func__678(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_679(bool bParam0){
if(!bParam0==func_66()){
if(func_73(bParam0, 1)){
return Global_2648605.f_818.f_11[func_98(bParam0)];
}}
return -1;
}

int func_680(){
if((((((func_455() || func_687()) || func_94()) || func_686()) || func_685()) || func_683()) || func_681()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_681(){
return func_682(Global_4718592.f_113724);
}

int func_682(int iParam0){
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

int func_683(){
return func_684(Global_4718592.f_113724);
}

int func_684(int iParam0){
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


var func__685(){
return Global_2683864.f_24;
}


var func__686(){
return Global_2683864.f_21;
}


var func__687(){
return Global_2683864.f_18;
}

int func_688(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_680()){
iVar2=func_679(iParam1);
if(!iVar2==-1){
return func_677(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_66()){
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
iVar0=func_664(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_689(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_380(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_675(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_689(int iParam0){
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


var func__690(){
return Global_2621446.f_2;
}


var func__691(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


bool func_692(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_693(int iParam0){
switch (iParam0){
case 0:
return func_694(8);
case 1:
return func_694(9);
case 2:
return func_694(10);
default:
}
return 0;
}


bool func_694(int iParam0){
return func_4(&(Local_1334.f_1204), iParam0);
}

int func_695(int iParam0){
return func_662(bLocal_1288, -2, 0, 0, 0);
}

int func_696(int iParam0){
int iVar0;
switch (iParam0){
case 0:
return func_698();
case 1:
iVar0=(10000 - func_697(&(Local_114.f_17), 0, 0));
if(iVar0 < 2500){
Local_198.f_2195[1 /*6*/].f_4=6;
}else{
Local_198.f_2195[1 /*6*/].f_4=1;
}
return iVar0;
default:
}
return 0;
}

int func_697(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

int func_698(){
return func_699();
}

int func_699(){
int iVar0;
int iVar1;
iVar0=0;
Stack.Push(iVar0);
Call_Loc(Local_274.f_734);
while (StackVal < StackVal){
if((func_548(iVar0, 0) && func_520(iVar0) !=func_66()) && !func_548(iVar0, 2)){
iVar1++;
}
iVar0++;
}
return iVar1;
}

int func_700(int iParam0){
switch (iParam0){
case 0:
return (func_701() >=5 && func_701() < 7);
case 1:
return (Local_114.f_15 > -1 && func_15(&(Local_114.f_17)));
default:
}
return 0;
}

int func_701(){
return Local_1347[iLocal_1291 /*251*/];
}

int func_702(int iParam0){
switch (iParam0){
case -1:
if(func_703(0)){
return 0;
}
break;
case 0:
if(func_701()==1){
return 1;
}
break;
case 1:
if(func_701()==2){
return 2;
}
break;
case 2:
if(func_701()==4){
return 3;
}
break;
case 3:
if(PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(iLocal_1290) > 0){
return 4;
}elseif(func_701()==5){
return 5;
}
break;
case 4:
if(func_701()==5){
return 5;
}elseif(PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(iLocal_1290)==0){
return 3;
}
break;
case 5:
if(func_701()==6){
return 6;
}
break;
case 6:
if(func_701() > 7){
return 7;
}
break;
case 7:
break;
}
return -1;
}


bool func_703(int iParam0){
return (func_704(iParam0) && Local_1262.f_2 !=iParam0);
}


bool func_704(int iParam0){
return func_142(&Local_1262, iParam0);
}


char* func_705(){
return "MPSUM2_FAIL";
}


char* func_706(){
return "MPSUM2_MUSIC_STOP";
}


char* func_707(int iParam0){
switch (iParam0){
case 0:
return "MPSUM2_GNRL_DELIVERING_START";
case 1:
return "MPSUM2_GNRL_IDLE";
case 2:
return "MPSUM2_GNRL_IDLE";
case 3:
return "MPSUM2_GNRL_SUSPENSE";
case 4:
return "MPSUM2_GNRL_MED_INTENSITY";
case 5:
return "MPSUM2_GNRL_SUSPENSE";
case 6:
return "MPSUM2_GNRL_DELIVERING";
case 7:
return "MPSUM2_GNRL_SUSPENSE";
default:
}
return "";
}

int func_708(var uParam0){
return 0;
}

int func_709(var uParam0, int iParam1){
if(!bLocal_1285){
return 0;
}
if(iParam1==0){
return func_710(uParam0, "DLC_HEISTS_OBH_BAG_EXIT_ANIM_PICK_UP", 0, 1);
}elseif(iParam1==1){
return func_710(uParam0, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}elseif(iParam1 >=2 && iParam1 <=4){
return func_710(uParam0, "PICKUP_DEFAULT", "HUD_FRONTEND_STANDARD_PICKUPS_SOUNDSET", 1);
}elseif(iParam1==5){
return func_710(uParam0, "Generic_Door_Push", "GTAO_Script_Doors_Sounds", 1);
}elseif(iParam1==6){
return func_710(uParam0, "Garage_Door_Open", "GTAO_Script_Doors_Faded_Screen_Sounds", 1);
}
return 0;
}

int func_710(var uParam0, char* sParam1, char* sParam2, int iParam3){
if(*uParam0==-1){
*uParam0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, iParam3);
return 1;
}
return 0;
}

int func_711(int iParam0){
switch (iParam0){
case 0:
return func_713(iLocal_1292, 3);
case 1:
return func_713(iLocal_1292, 4);
case 2:
return func_712(0, iLocal_1292, 1);
case 3:
return func_712(1, iLocal_1292, 1);
case 4:
return func_712(2, iLocal_1292, 1);
case 5:
return (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1243.f_2[0 /*7*/].f_1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1243.f_2[0 /*7*/].f_1) > 0.28f);
case 6:
return (CAM::IS_SCREEN_FADED_OUT() && func_713(iLocal_1292, 51));
default:
}
return 0;
}


bool func_712(int iParam0, int iParam1, int iParam2){
return func_4(&(Local_1347[iParam1 /*251*/].f_244[iParam0 /*2*/]), iParam2);
}


bool func_713(int iParam0, int iParam1){
return func_4(&(Local_1347[iParam0 /*251*/].f_238), iParam1);
}

int func_714(int iParam0){
switch (iParam0){
case 1:
return 10000;
case 3:
return 5000;
default:
}
return 0;
}

int func_715(var uParam0){
if(func_713(iLocal_1292, 13)){
func_716(13);
return 1;
}
return 0;
}


void func_716(int iParam0){
if(func_125(&(Local_1347[iLocal_1291 /*251*/].f_238), iParam0)){}}

int func_717(var uParam0){
return 0;
}

int func_718(var uParam0, var uParam1){
return 2;
}


char* func_719(int iParam0){
switch (iParam0){
case 0:
if(func_720(bLocal_1288)){
switch (Local_1334.f_1162){
case 0:
return "SM2WB_CUO_1A";
case 1:
return "SM2WB_CUO_1B";
case 2:
return "SM2WB_CUO_1C";
default:
}}else{
switch (Local_1334.f_1162){
case 0:
return "SM2WB_CUO_2A";
case 1:
return "SM2WB_CUO_2B";
case 2:
return "SM2WB_CUO_2C";
}
default:
}
break;
case 1:
switch (Local_1334.f_1162){
case 0:
return "SM2WB_CUF_1A";
case 1:
return "SM2WB_CUF_1B";
case 2:
return "SM2WB_CUF_1C";
default:
}
break;
case 2:
switch (Local_1334.f_1162){
case 0:
return "SM2WB_CUD_1A";
case 1:
return "SM2WB_CUD_1B";
case 2:
return "SM2WB_CUD_1C";
default:
}
break;
case 3:
switch (Local_1334.f_1162){
case 0:
return "SM2WB_CUR_1A";
case 1:
return "SM2WB_CUR_1B";
case 2:
return "SM2WB_CUR_1C";
default:
}
break;
}
return "";
}

int func_720(bool bParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
return Global_2657589[bParam0 /*466*/].f_240;
}


char* func_721(var uParam0){
return "SM2WBAU";
}

int func_722(int iParam0){
switch (iParam0){
case 0:
return !(func_727(bLocal_1288) && func_724(bLocal_1288, 0));
case 1:
return func_703(0);
case 2:
return (func_713(iLocal_1292, 3) && func_723(iLocal_1290, Local_198.f_1545.f_1[2 /*11*/], 1) < 1000f);
case 3:
return func_22() >=7;
default:
}
return 0;
}


float func_723(int iParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}

int func_724(bool bParam0, bool bParam1){
if(Global_1853746 !=func_66()){
if(!func_726(Global_1853746)){
return 0;
}
if(bParam1){
if(PLAYER::PLAYER_ID() !=Global_1853746){
if(MISC::IS_BIT_SET(Global_2657589[Global_1853746 /*466*/].f_199, 24) || func_725(Global_1853746)){
return 1;
}}}}
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_199, 24);
}

int func_725(int iParam0){
if(iParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 9);
}
return 0;
}

int func_726(int iParam0){
if(iParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 2);
}
return 0;
}

int func_727(bool bParam0){
if(func_728(Global_1853910[bParam0 /*862*/].f_267.f_33)){
return 1;
}
return 0;
}

int func_728(int iParam0){
switch (iParam0){
case 87:
case 88:
case 89:
case 90:
return 1;
break;
}
return 0;
}


char* func_729(var uParam0, var uParam1){
return "SM2_WBOSS1";
}

int func_730(var uParam0){
return 184;
}


char* func_731(int iParam0){
switch (iParam0){
case 0:
return "EXEC_HP_INT2";
case 1:
return "EXEC_HP_INT3";
case 2:
return "EXEC_HP_INT4";
case 3:
return "EXEC_HP_INT5";
default:
}
return "";
}

int func_732(int iParam0){
switch (iParam0){
case 0:
return func_701()==1;
case 1:
return (func_701() >=4 && func_735());
case 2:
return func_701()==5;
case 3:
return (func_701()==5 && func_733());
default:
}
return 0;
}

int func_733(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(func_734(Local_1334.f_1207.f_16[iVar0])){
return 1;
}
iVar0++;
}
return 0;
}

int func_734(bool bParam0){
switch (bParam0){
case 0:
return func_694(3);
case 1:
return func_694(4);
case 2:
return func_694(5);
case 3:
return func_694(6);
case 4:
return func_694(7);
default:
}
return 0;
}


bool func_735(){
return (((func_701() > 3 && func_701() < 6) && !func_736(2, iLocal_1292)) && func_703(2));
}


bool func_736(int iParam0, int iParam1){
return func_142(&(Local_1347[iParam1 /*251*/].f_233), iParam0);
}

int func_737(var uParam0){
return 1;
}


char* func_738(var uParam0){
if(*uParam0 !=-1){
switch (*uParam0){
case 0:
return "EXEC_TIC_SC_R";
case 1:
return "EXEC_TIC_RB_R";
case 3:
return "EXEC_TIC_DX_R";
case 4:
return "EXEC_TIC_SU_R";
case 5:
return "EXEC_TIC_SD_R";
case 6:
return func_740(1);
case 7:
return func_739(1);
}
default:
}
return "";
}


char* func_739(bool bParam0){
if(bParam0){
return "EXEC_TIC_DSCGSR";
}
return "EXEC_TIC_DSCGSL";
}


char* func_740(bool bParam0){
if(bParam0){
return "EXEC_TIC_CSCGSR";
}
return "EXEC_TIC_CSCGSL";
}


char* func_741(var uParam0){
if(*uParam0 !=-1){
switch (*uParam0){
case 0:
return "EXEC_TIC_SC_L";
case 1:
return "EXEC_TIC_RB_L";
case 3:
return "EXEC_TIC_DX_L";
case 4:
return "EXEC_TIC_SU_L";
case 6:
return func_740(0);
case 7:
return func_739(0);
}
default:
}
return "";
}


Vector3 func__742(int iParam0, int iParam1){
return Local_198.f_688.f_1[Local_198.f_103.f_1[iParam0 /*21*/].f_8 /*15*/].f_4;
}

int func_743(int iParam0){
if(func_746(iParam0)){
return 1;
}elseif(func_744(iParam0)){
return 2;
}
return 0;
}

int func_744(int iParam0){
if(Local_198.f_103.f_1[iParam0 /*21*/].f_8==func_745(29) || Local_198.f_103.f_1[iParam0 /*21*/].f_8==func_745(30)){
return 1;
}
return 0;
}

int func_745(int iParam0){
return Local_198.f_2576.f_1[iParam0 /*2*/].f_1;
}

int func_746(int iParam0){
if(Local_198.f_103.f_1[iParam0 /*21*/].f_9==-1 && Local_198.f_103.f_1[iParam0 /*21*/].f_8==func_745(31)){
return 1;
}
return 0;
}


void func_747(int iParam0){
switch (iParam0){
case 0:
func_756(iParam0);
break;
case 1:
func_755(iParam0, 0, 29);
func_751(iParam0, 0, 2, 172750);
func_751(iParam0, 0, 1, 172564);
func_755(iParam0, 1, 16);
func_751(iParam0, 1, 2, 172750);
func_751(iParam0, 1, 0, 172528);
func_755(iParam0, 2, 7);
func_751(iParam0, 2, 0, 172465);
break;
case 2:
func_755(iParam0, 0, 0);
func_751(iParam0, 0, 1, 172750);
func_755(iParam0, 1, 7);
func_751(iParam0, 1, 0, 172465);
break;
}}

int func_748(var uParam0, var uParam1){
if(func_22() > 6 || func_723(iLocal_1290, Local_198.f_1545.f_1[2 /*11*/], 1) > (Local_198.f_1545.f_1[2 /*11*/].f_3 * 2f)){
return 1;
}
return 0;
}

int func_749(int iParam0, int iParam1){
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam1, 1), func_742(iParam0, 0)) < 5f){
return 1;
}
return 0;
}

int func_750(var uParam0, int iParam1){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Local_198.f_1645.f_1[1 /*9*/].f_2, Local_198.f_1645.f_1[1 /*9*/].f_5, Local_198.f_1645.f_1[1 /*9*/].f_8, 0, 1, 0)){
return 1;
}
return 0;
}


void func_751(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
var uVar1;
iVar0=Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18;
uVar1=iParam2;
Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/]=uVar1;
Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/].f_1=iParam3;
Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18++;
}

int func_752(int iParam0, var uParam1){
return func_753(iParam0, 0);
}

int func_753(int iParam0, int iParam1){
if(func_77(Local_198.f_103.f_1[iParam0 /*21*/].f_14)){
if((func_13(&(Local_1334.f_72[iParam0 /*25*/].f_14), Local_1334.f_72[iParam0 /*25*/].f_16, 0) || func_754(iParam0)) || iParam1){
return 1;
}}
return 0;
}

int func_754(int iParam0){
if(((((func_83(iParam0, 1) || func_83(iParam0, 0)) || func_83(iParam0, 14)) || func_83(iParam0, 12)) || func_83(iParam0, 11)) || func_83(iParam0, 13)){
return 1;
}
return 0;
}


void func_755(int iParam0, int iParam1, int iParam2){
Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/]=iParam2;
Local_278.f_498[iParam0 /*97*/]++;
}


void func_756(int iParam0){
func_755(iParam0, 0, 0);
func_757(iParam0, 0, 3);
func_757(iParam0, 0, 2);
func_757(iParam0, 0, 1);
func_755(iParam0, 1, 8);
func_757(iParam0, 1, 3);
func_755(iParam0, 2, 21);
func_757(iParam0, 2, 3);
func_755(iParam0, 3, 7);
}


void func_757(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
iVar0=Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18;
uVar1=iParam2;
Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/]=uVar1;
Local_278.f_498[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18++;
}


void func_758(int iParam0){
func_764(iParam0, 173450);
func_764(iParam0, 173376);
func_764(iParam0, 173352);
func_764(iParam0, 173320);
func_764(iParam0, 173221);
}

int func_759(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=Local_198.f_103.f_1[iParam0 /*21*/].f_14;
iVar0=0;
while (iVar0 < 2){
iVar2=Local_198.f_103.f_548[iVar1 /*6*/].f_1[iVar0];
if(iVar2 !=-1){
if(func_760(iVar2)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_760(int iParam0){
return func_142(&(Local_1334.f_1109), iParam0);
}

int func_761(int iParam0){
func_82(iParam0, 15);
if(func_83(iParam0, 14)){
return 1;
}
return 0;
}

int func_762(int iParam0){
if(func_83(iParam0, 10)){
return 1;
}
return 0;
}

int func_763(int iParam0){
if(func_83(iParam0, 13)){
return 1;
}
return 0;
}


void func_764(int iParam0, int iParam1){
Local_278[iParam0 /*19*/].f_10[Local_278[iParam0 /*19*/].f_16]=iParam1;
Local_278[iParam0 /*19*/].f_16++;
}

int func_765(int iParam0){
if(func_83(iParam0, 12)){
return 1;
}
return 0;
}


void func_766(int iParam0, int iParam1, bool bParam2){
float fVar0;
func_767(iParam0, iParam1, bParam2, func_746(iParam0), 1);
if(!bParam2 && PED::IS_PED_IN_ANY_VEHICLE(iParam1, 1)){
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 3, 0);
if(func_744(iParam0)){
WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("weapon_pistol"), 100, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, 1);
PED::SET_PED_FIRING_PATTERN(iParam1, -753768974);
}else{
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 52, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 53, 1);
PED::SET_PED_FIRING_PATTERN(iParam1, joaat("FIRING_PATTERN_BURST_FIRE"));
}
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
}
if((!func_746(iParam0) && PED::IS_PED_IN_ANY_HELI(iParam1)) && Local_1334.f_1149 > 2){
PED::SET_PED_ACCURACY(iParam1, Global_262145.f_16682);
PED::SET_PED_SHOOT_RATE(iParam1, Global_262145.f_16683);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 49, 1);
fVar0=(100f + (Global_262145.f_16684 * 100f));
ENTITY::SET_ENTITY_HEALTH(iParam1, round(fVar0), 0);
}}


void func_767(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
float fVar0;
float fVar1;
if(bParam3){
return;
}
fVar0=1f;
switch (Local_1334.f_1149){
case 2:
PED::SET_PED_ACCURACY(iParam1, Global_262145.f_16682);
PED::SET_PED_SHOOT_RATE(iParam1, Global_262145.f_16683);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 49, 1);
fVar0=Global_262145.f_16684;
break;
case 3:
PED::SET_PED_ACCURACY(iParam1, Global_262145.f_16678);
PED::SET_PED_SHOOT_RATE(iParam1, Global_262145.f_16679);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 49, 1);
fVar0=Global_262145.f_16680;
break;
default:
if(bParam2){
PED::SET_PED_ACCURACY(iParam1, 40);
}
break;
}
if(bParam4){
fVar1=(100f + (fVar0 * 100f));
ENTITY::SET_ENTITY_HEALTH(iParam1, round(fVar1), 0);
}}

int func_768(){
if(func_22()==6){
if(!func_771(0) && func_769()){
switch (func_565()){
case 3:
return 879;
case 4:
return 880;
case 5:
return 881;
}
default:}
return 0;
}
if(func_22() >=7){
return func_564(func_566(), func_565(), 1, func_10());
}
return 0;
}


bool func_769(){
return func_770() > 0;
}

int func_770(){
int iVar0;
int iVar1;
iVar0=0;
Stack.Push(iVar0);
Call_Loc(Local_274.f_734);
while (StackVal < StackVal){
if((func_548(iVar0, 0) && func_520(iVar0)==bLocal_1288) && !func_548(iVar0, 2)){
iVar1++;
}
iVar0++;
}
return iVar1;
}

int func_771(int iParam0){
int iVar0;
iVar0=0;
Stack.Push(iVar0);
Call_Loc(Local_274.f_734);
while (StackVal < StackVal){
if(!func_772(iVar0, iParam0)){
return 0;
}
iVar0++;
}
return 1;
}

int func_772(int iParam0, int iParam1){
if(func_548(iParam0, 2)){
return 1;
}
if(iParam1 && func_712(iParam0, iLocal_1292, 2)){
return 1;
}
return 0;
}

int func_773(int iParam0){
if(iParam0==2){
return 0;
}
return 1;
}


void func_774(int iParam0, int iParam1, var uParam2){
bool bVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
if(iParam0==func_745(1)){
if(func_713(iLocal_1292, 3)){
func_804(iParam0, 0, 1);
}}
if(func_803(iParam0)){
if(func_802(iParam0, &bVar0)){
if((!func_801(bVar0) && func_734(bVar0)) && func_800(Local_1334.f_908[iParam0 /*5*/])){
if(!ENTITY::GET_ENTITY_COLLISION_DISABLED(iParam1)){
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam1, 0, 0);
}
func_799(bVar0);
}
if((!func_798(bVar0) && func_797(bVar0, &iVar1)) && func_794(&(Local_114.f_22[bVar0]), joaat("tr_prop_tr_cont_coll_01a"), func_796(iVar1), func_795(iVar1), 1)){
ENTITY::SET_ENTITY_COORDS(Local_114.f_22[bVar0], func_796(iVar1), 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(Local_114.f_22[bVar0], func_792(iVar1), 2, 1);
ENTITY::FREEZE_ENTITY_POSITION(Local_114.f_22[bVar0], true);
func_791(bVar0);
}
if((!func_790(bVar0) && func_798(bVar0)) && func_734(bVar0)){
ENTITY::SET_ENTITY_COLLISION(Local_114.f_22[bVar0], true, 0);
func_789(bVar0);
}}}
if(func_788(iParam0)){
if(func_787(iParam0, &bVar2)){
if((!func_786(bVar2) && func_734(bVar2)) && func_800(Local_1334.f_908[iParam0 /*5*/])){
ENTITY::SET_ENTITY_COLLISION(iParam1, true, 0);
func_785(bVar2);
}}}
if(func_784(iParam0)){
if(func_783(iParam0, &iVar3)){
if((!func_782(iVar3) && func_781(iVar3)) && func_800(Local_1334.f_908[iParam0 /*5*/])){
func_804(iParam0, 0, 0);
func_780(iVar3);
}}}
if(func_779(iParam0)){
if(((!func_778(bVar4) && func_777(iParam0, &bVar4)) && func_734(bVar4)) && func_800(Local_1334.f_908[iParam0 /*5*/])){
func_804(iParam0, 0, 0);
func_775(bVar4);
}}}

int func_775(bool bParam0){
switch (bParam0){
case 0:
func_776(28);
break;
case 1:
func_776(29);
break;
case 2:
func_776(30);
break;
case 3:
func_776(31);
break;
case 4:
func_776(32);
break;
}
return 0;
}


void func_776(int iParam0){
if(func_17(&(Local_1347[iLocal_1291 /*251*/].f_238), iParam0)){}}

int func_777(int iParam0, int iParam1){
if(iParam0==func_745(16)){
*iParam1=0;
return 1;
}elseif(iParam0==func_745(17)){
*iParam1=1;
return 1;
}elseif(iParam0==func_745(18)){
*iParam1=2;
return 1;
}elseif(iParam0==func_745(19)){
*iParam1=3;
return 1;
}elseif(iParam0==func_745(20)){
*iParam1=4;
return 1;
}
*iParam1=-1;
return 0;
}

int func_778(int iParam0){
switch (iParam0){
case 0:
return func_694(25);
case 1:
return func_694(26);
case 2:
return func_694(27);
case 3:
return func_694(28);
case 4:
return func_694(29);
default:
}
return 0;
}


bool func_779(int iParam0){
return ((((iParam0==func_745(16) || iParam0==func_745(17)) || iParam0==func_745(18)) || iParam0==func_745(19)) || iParam0==func_745(20));
}


void func_780(int iParam0){
switch (iParam0){
case 0:
func_776(20);
break;
case 1:
func_776(21);
break;
case 2:
func_776(22);
break;
}}

int func_781(int iParam0){
switch (iParam0){
case 0:
return func_694(8);
case 1:
return func_694(9);
case 2:
return func_694(10);
default:
}
return 0;
}

int func_782(int iParam0){
switch (iParam0){
case 0:
return func_694(17);
case 1:
return func_694(18);
case 2:
return func_694(19);
default:
}
return 0;
}

int func_783(int iParam0, var uParam1){
if(iParam0==func_745(32)){
*uParam1=0;
return 1;
}elseif(iParam0==func_745(33)){
*uParam1=1;
return 1;
}elseif(iParam0==func_745(34)){
*uParam1=2;
return 1;
}
return 0;
}


bool func_784(int iParam0){
return ((iParam0==func_745(32) || iParam0==func_745(33)) || iParam0==func_745(34));
}


void func_785(bool bParam0){
switch (bParam0){
case 0:
func_776(43);
break;
case 1:
func_776(44);
break;
case 2:
func_776(45);
break;
case 3:
func_776(46);
break;
case 4:
func_776(47);
break;
}}

int func_786(int iParam0){
switch (iParam0){
case 0:
return func_694(30);
case 1:
return func_694(31);
case 2:
return func_694(32);
case 3:
return func_694(33);
case 4:
return func_694(34);
default:
}
return 0;
}

int func_787(int iParam0, var uParam1){
if(iParam0==func_745(9)){
*uParam1=0;
return 1;
}elseif(iParam0==func_745(10)){
*uParam1=1;
return 1;
}elseif(iParam0==func_745(11)){
*uParam1=2;
return 1;
}elseif(iParam0==func_745(12)){
*uParam1=3;
return 1;
}elseif(iParam0==func_745(13)){
*uParam1=4;
return 1;
}
*uParam1=-1;
return 0;
}

int func_788(int iParam0){
if((((iParam0==func_745(9) || iParam0==func_745(10)) || iParam0==func_745(11)) || iParam0==func_745(12)) || iParam0==func_745(13)){
return 1;
}
return 0;
}

int func_789(bool bParam0){
switch (bParam0){
case 0:
func_776(38);
break;
case 1:
func_776(39);
break;
case 2:
func_776(40);
break;
case 3:
func_776(41);
break;
case 4:
func_776(42);
break;
}
return 0;
}

int func_790(bool bParam0){
switch (bParam0){
case 0:
return func_713(iLocal_1292, 38);
case 1:
return func_713(iLocal_1292, 39);
case 2:
return func_713(iLocal_1292, 40);
case 3:
return func_713(iLocal_1292, 41);
case 4:
return func_713(iLocal_1292, 42);
default:
}
return 0;
}


void func_791(bool bParam0){
switch (bParam0){
case 0:
func_776(33);
break;
case 1:
func_776(34);
break;
case 2:
func_776(35);
break;
case 3:
func_776(36);
break;
case 4:
func_776(37);
break;
}
MISC::SET_BIT(&(Local_114.f_21), bParam0);
}


Vector3 func__792(int iParam0){
switch (func_793(iParam0)){
case 2:
return Local_198.f_1036.f_1[func_745(iParam0) /*12*/].f_8;
case 3:
return Local_198.f_19.f_5[func_745(iParam0) /*13*/].f_7;
default:
}
return 0f, 0f, 0f;
}

int func_793(int iParam0){
return Local_198.f_2576.f_1[iParam0 /*2*/];
}

int func_794(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4){
int iVar0;
iVar0=iParam1;
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(func_134(iVar0)){
*uParam0=OBJECT::CREATE_OBJECT(iVar0, Param2, 0, false, 0);
ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
ENTITY::SET_ENTITY_COLLISION(*uParam0, false, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
if(bParam4){
ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, 0);
}
return 1;
}}else{
return 1;
}
return 0;
}


float func_795(int iParam0){
switch (func_793(iParam0)){
case 0:
return Local_198.f_103.f_1[func_745(iParam0) /*21*/].f_6;
case 1:
return Local_198.f_688.f_1[func_745(iParam0) /*15*/].f_7;
case 2:
return Local_198.f_1036.f_1[func_745(iParam0) /*12*/].f_7;
case 3:
return Local_198.f_19.f_5[func_745(iParam0) /*13*/].f_6;
default:
}
return 0f;
}


Vector3 func__796(int iParam0){
switch (func_793(iParam0)){
case 0:
return Local_198.f_103.f_1[func_745(iParam0) /*21*/].f_3;
case 1:
return Local_198.f_688.f_1[func_745(iParam0) /*15*/].f_4;
case 2:
return Local_198.f_1036.f_1[func_745(iParam0) /*12*/].f_4;
case 3:
return Local_198.f_19.f_5[func_745(iParam0) /*13*/].f_3;
default:
}
return 0f, 0f, 0f;
}

int func_797(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1=4;
return 1;
case 1:
*uParam1=5;
return 1;
case 2:
*uParam1=6;
return 1;
case 3:
*uParam1=7;
return 1;
case 4:
*uParam1=8;
return 1;
default:
}
*uParam1=4;
return 0;
}

int func_798(bool bParam0){
switch (bParam0){
case 0:
return func_713(iLocal_1292, 33);
case 1:
return func_713(iLocal_1292, 34);
case 2:
return func_713(iLocal_1292, 35);
case 3:
return func_713(iLocal_1292, 36);
case 4:
return func_713(iLocal_1292, 37);
default:
}
return 0;
}


void func_799(int iParam0){
switch (iParam0){
case 0:
func_776(23);
break;
case 1:
func_776(24);
break;
case 2:
func_776(25);
break;
case 3:
func_776(26);
break;
case 4:
func_776(27);
break;
}}

int func_800(int iParam0){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_133(iParam0)){
return 1;
}}
return 0;
}

int func_801(int iParam0){
switch (iParam0){
case 0:
return func_694(20);
case 1:
return func_694(21);
case 2:
return func_694(22);
case 3:
return func_694(23);
case 4:
return func_694(24);
default:
}
return 0;
}

int func_802(int iParam0, var uParam1){
if(iParam0==func_745(4)){
*uParam1=0;
return 1;
}elseif(iParam0==func_745(5)){
*uParam1=1;
return 1;
}elseif(iParam0==func_745(6)){
*uParam1=2;
return 1;
}elseif(iParam0==func_745(7)){
*uParam1=3;
return 1;
}elseif(iParam0==func_745(8)){
*uParam1=4;
return 1;
}
*uParam1=-1;
return 0;
}

int func_803(int iParam0){
if((((iParam0==func_745(4) || iParam0==func_745(5)) || iParam0==func_745(6)) || iParam0==func_745(7)) || iParam0==func_745(8)){
return 1;
}
return 0;
}


void func_804(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(func_800(Local_1334.f_908[iParam0 /*5*/])){
iVar0=NETWORK::NET_TO_ENT(Local_1334.f_908[iParam0 /*5*/]);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(bParam2){
if(bParam1){
NETWORK::SET_ENTITY_LOCALLY_VISIBLE(iVar0);
}else{
NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(iVar0);
}}else{
ENTITY::SET_ENTITY_VISIBLE(iVar0, bParam1, 0);
}
if(!bParam2){
if(bParam1){
ENTITY::SET_ENTITY_COLLISION(iVar0, true, 0);
}else{
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar0, 0, 0);
}}}}}


float func_805(var uParam0){
return 0.25f;
}

int func_806(int iParam0, var uParam1){
int iVar0;
if(func_783(iParam0, &iVar0) && func_807(iVar0)){
return 1;
}
return 0;
}

int func_807(int iParam0){
switch (iParam0){
case 0:
return (func_734(Local_1334.f_1207.f_16[iParam0]) && !func_693(iParam0));
case 1:
return (func_734(Local_1334.f_1207.f_16[iParam0]) && !func_693(iParam0));
case 2:
return (func_734(Local_1334.f_1207.f_16[iParam0]) && !func_693(iParam0));
default:
}
return 0;
}

int func_808(int iParam0){
if(func_784(iParam0) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iParam0 /*5*/])){
return func_723(iLocal_1290, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_1334.f_908[iParam0 /*5*/]), 1), 1) < 30f;
}
return 0;
}

int func_809(int iParam0){
if(func_784(iParam0)){
return 18;
}
return 6;
}

int func_810(int iParam0){
if(func_784(iParam0)){
return 457;
}
return 32;
}


char* func_811(int iParam0){
if(func_784(iParam0)){
return "EXEC_BP_INT5";
}
return "";
}


var func__812(int iParam0){
int iVar0;
return (func_783(iParam0, &iVar0) && func_807(iVar0));
}


void func_813(var uParam0, bool bParam1){
if(bParam1){
func_814(func_877(), func_876());
func_776(48);
}}


void func_814(int iParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam0 > 0){
if(Local_198.f_1528.f_1){
func_875();
}
func_826(0, iLocal_1290, "", -1859646258, 186409565, iParam0, 1, -1, 0, 0, 0);
Local_1227.f_6=(Local_1227.f_6 + iParam0);
}
if(iParam1 > 0){
if(func_332()){
func_815(1748245957, iParam1, &iVar0, 0, 1, 0);
StringCopy(&(Global_4535172[iVar0 /*85*/].f_14.f_26), "fm_content_cargo_underwater_cargo", 32);
}else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iParam1, "fm_content_cargo_underwater_cargo", &uVar1);
}
Local_1227.f_5=(Local_1227.f_5 + iParam1);
}}


void func_815(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_332()){
return;
}
iVar0=1;
if(bParam4){
iVar0=4;
}elseif(bParam3){
iVar0=2;
}elseif(bParam5){
iVar0=8;
}
switch (iParam0){
case -1645229221:
case -585718395:
case -1359375127:
case 454359403:
case -982394051:
case 1643659499:
case -2072289654:
case 650665123:
case 1654961868:
case -876847842:
case 68030260:
case -2122299283:
case 366672791:
case 283351220:
case 291576838:
case 1182673174:
case -516219046:
case 1036455748:
case 277665518:
case 2043854386:
case 1839532116:
case 1022400740:
case 1940862352:
case -1389227906:
case 711665950:
case 1704445500:
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 1612072658:
case -517447402:
case 1948102096:
case 1108628223:
case -1834046564:
case -1239008812:
case -222363842:
case -1276678868:
case 1564537328:
case -96593501:
case 742499889:
case 2050093329:
case -1752488069:
case 634375935:
case 2115896461:
case 797947947:
case 1941570214:
case 665109499:
case -1330755006:
case 1976384368:
case 268924934:
case 1869490922:
case -336803850:
case -1412692765:
case 618167454:
case 980623936:
case 437291904:
case -135813048:
case -930104477:
case -1420909320:
case -1733398043:
case -1892760262:
case -1545737048:
case 2039302543:
case 402505853:
case -1143510182:
case 1678112166:
case 837955913:
case -1532467144:
case 1815541181:
if(iParam1 > 0 || Global_262145.f_28375){
func_816(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case -31156877:
case -1027218631:
case -1398318418:
case 1652884147:
case -57868256:
case -1216489292:
case -46622315:
case -352356931:
case -990286235:
case 563463121:
case 1734805203:
case 941287179:
case -1186079845:
case -1985150258:
case -1127021384:
case -109201286:
case 312105838:
case 1982688246:
case -661030418:
case 1301046174:
case -1586170317:
case 393059668:
case 23796958:
case -1077156170:
case 1780666425:
case -2043695058:
case -1922554349:
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case 1349151477:
case 1620609399:
case 1961641934:
case 210955503:
case -59668082:
case 1736933716:
case -1468524125:
case 111573502:
case 1525644423:
case 968073639:
case 1577781788:
case -934465332:
case -1194253122:
case -212607085:
case -815546555:
case 1048226110:
case 569170531:
case -856006867:
case 848090538:
case -47546905:
case -293060240:
case 463142405:
case 1550217370:
case -101307780:
case -664597565:
case 599804707:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case 1052472386:
case -2130199671:
case -1227654538:
case 1864522104:
case 215608230:
case -876012764:
case -722894325:
case 1407278493:
case -1579394494:
case -27443911:
case 1179783540:
case 923419301:
case -308826175:
case 603298940:
case -12619854:
case -311112675:
case 870439158:
case -974288740:
case -4138654:
case -1180954122:
case -1918051016:
case 844330594:
case 1934825517:
case 1852024236:
case 2099238988:
case 1952643559:
case -1172900789:
case -2015399333:
case -1574795641:
case -961034881:
case 1135468152:
case 1265272476:
case -634726636:
case 696556762:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
func_816(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}
switch (iParam0){
case -1342064661:
case -1693570755:
case 1868043300:
case -697248883:
case -1295545795:
case 914079366:
case 395122350:
case -331981076:
case 1671535231:
case -1896606724:
case -1291433573:
case 538631715:
case 133782822:
case 2081885153:
case -1314365345:
case 1322977732:
case 396623013:
case 1981664462:
case -1921250821:
case -1370731547:
case 1683798242:
case -910968288:
case -168319378:
case 1637817605:
case 830018386:
case 1051883823:
case -2013760296:
case -1033889004:
case -2081984382:
case 1089562091:
if(iParam1 > 0 || Global_262145.f_28375){
func_816(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
}
break;
case 1240683675:
case 1241904665:
case -1100963799:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
case -2017925037:
case 1668610896:
case -2032529561:
case -1224479447:
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case 1220095570:
case 2050320631:
case 592672421:
case 1775876058:
case -842062976:
case -518651910:
case 14658715:
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
case -837690641:
case -1029672338:
case -1503749970:
case -1843409092:
case 1669058563:
case 2102747615:
case 2030771998:
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
case 1280785534:
case -1878824774:
case 247992227:
case -229237358:
case -1123183389:
case 1814197076:
case 713955548:
case -2026544524:
case -719580138:
case -163417439:
case -550417574:
case 208223429:
case -1433071892:
case 761999406:
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case 1628412596:
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
case 1633116913:
case 668586600:
case 15168061:
case 590289134:
case 99792878:
case 1866258778:
case -178394060:
case 409592287:
case 593836803:
case 1973036520:
case 2063456538:
case -728008329:
case 119239868:
func_816(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_816(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_332()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_91()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam3==1067618600 || iParam3==-1303831698){
Global_4536675=1;
return 0;
}}}
bVar3=false;
iVar2=0;
while (iVar2 < 15){
if(Global_4535172[iVar2 /*85*/].f_66.f_2==0){
bVar3=true;
}
iVar2++;
}
if(!bVar3){
return 0;
}
*uParam0=15;
iVar4=2147483647;
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6)){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4)){
*uParam0=func_823(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
if(iVar1 && !bVar0){
}
if(bVar0){
if(*uParam0 !=-1){
Global_4535172[*uParam0 /*85*/].f_66.f_8=1;
Global_4535172[*uParam0 /*85*/].f_66.f_12=1;
}}
Global_4536659=1;
return 1;
}}else{
if(iParam7 & 2 !=0){
Global_4536673=1;
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
if(iParam7 & 8 !=0){
Global_4536676=iParam4;
Global_4536678=iParam3;
Global_4536679=1;
Global_4536677=iParam5;
}
bVar5=false;
if(bVar5){
func_822(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_817(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_817(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_818(iParam0);
}}


void func_818(int iParam0){
bool bVar0;
bVar0=false;
if(!func_332()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_821(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_819(&(Global_4535172[iParam0 /*85*/]));
}}


void func_819(var uParam0){
uParam0->f_66=0;
uParam0->f_66=2147483647;
uParam0->f_66.f_1=0;
uParam0->f_66.f_2=0;
uParam0->f_66.f_3=-1593119440;
uParam0->f_66.f_4=-2085313189;
uParam0->f_66.f_5=0;
uParam0->f_66.f_6=1227573907;
uParam0->f_66.f_7=-1161833819;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_13=0;
uParam0->f_2=0;
func_820(&(uParam0->f_14));
func_820(&(uParam0->f_14.f_13));
StringCopy(&(uParam0->f_14.f_26), "", 32);
StringCopy(&(uParam0->f_14.f_34), "", 24);
StringCopy(&(uParam0->f_14.f_40), "", 16);
StringCopy(&(uParam0->f_14.f_44), "", 32);
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_66.f_8=0;
uParam0->f_66.f_9=0;
uParam0->f_66.f_10=0;
uParam0->f_66.f_11=0;
uParam0->f_66.f_13=0;
uParam0->f_66.f_12=0;
uParam0->f_66.f_14=0;
uParam0->f_66.f_15=0;
uParam0->f_66.f_16=0;
uParam0->f_66.f_18=0;
}


void func_820(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
uParam0->f_11=0;
uParam0->f_12=0;
}

int func_821(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_822(int iParam0, var uParam1){
Global_2697015=uParam1;
Global_2697014=iParam0;
}

int func_823(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_332()){
iParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=iParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=iParam2;
Global_4535172[iVar0 /*85*/].f_66.f_7=uParam3;
Global_4535172[iVar0 /*85*/].f_66.f_5=0;
Global_4535172[iVar0 /*85*/].f_66=iParam0;
Global_4535172[iVar0 /*85*/].f_66.f_6=iParam4;
Global_4535172[iVar0 /*85*/].f_66.f_11=uParam8;
Global_4535172[iVar0 /*85*/].f_66.f_10=uParam7;
Global_4535172[iVar0 /*85*/].f_66.f_13=iParam9;
Global_4535172[iVar0 /*85*/].f_66.f_12=0;
Global_4535172[iVar0 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
Global_4535172[iVar0 /*85*/].f_66.f_18=0;
Global_4536659=0;
if(bParam6){
Global_4535172[iVar0 /*85*/].f_66.f_5=1;
}
if(iParam1==-1135378931 && bParam10){
func_824(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_824(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
struct<3> Var0;
int iVar1;
if(iParam19 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=45913685;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam19;
iVar1=func_63(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_825();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_825(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_826(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_827(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_827(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
int iVar0;
int iVar1;
iVar0=func_837(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
iVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_833(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
}}}else{
func_828(iParam1, iVar0, sParam8, iParam10);
}
return iVar0;
}


void func_828(int iParam0, int iParam1, char* sParam2, int iParam3){
struct<3> Var0;
Var0={
func_831(iParam0, 1) 
};
if(iParam0==func_830(PLAYER::PLAYER_PED_ID())){
func_829(1);
}
func_833(Var0, iParam1, 0, sParam2, iParam3);
}


void func_829(int iParam0){
Global_2672505.f_1682=iParam0;
}

int func_830(int iParam0){
return iParam0;
}


Vector3 func__831(int iParam0, bool bParam1){
struct<3> Var0;
struct<3> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(CAM::IS_GAMEPLAY_CAM_RENDERING()){
Var1={
CAM::GET_GAMEPLAY_CAM_ROT(2) 
};
}
if(iParam0==func_832(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
fVar2=0f;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar2=ENTITY::GET_ENTITY_HEADING(iParam0);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
fVar2=Var1.f_2;
}}
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
if(bParam1){
fVar5=(Var4.f_2 + 0.18f);
}else{
fVar5=(Var3.f_2 + 0.18f);
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) 
};
return Var0;
}

int func_832(int iParam0){
return iParam0;
}


void func_833(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4){
int iVar0;
int iVar1;
if(iParam1 !=0){
iVar1=-1;
iVar0=0;
while (iVar0 < 20){
if(Global_2672505.f_1081[iVar0 /*30*/].f_6==0 || Global_2672505.f_1081[iVar0 /*30*/].f_6==7){
iVar1=iVar0;
iVar0=20;
}
iVar0++;
}
if(iVar1 !=-1){
Global_2672505.f_1081[iVar1 /*30*/]={
Param0 
};
Global_2672505.f_1081[iVar1 /*30*/].f_6=1;
Global_2672505.f_1081[iVar1 /*30*/].f_4=func_836(Global_2672505.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672505.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672505.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672505.f_1081[iVar1 /*30*/].f_9=func_835();
Global_2672505.f_1081[iVar1 /*30*/].f_10=func_834();
StringCopy(&(Global_2672505.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672505.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
}}}

int func_834(){
if(Global_2672505.f_1682){
Global_2672505.f_1682=0;
return 1;
}
Global_2672505.f_1682=0;
return 0;
}


var func__835(){
var uVar0;
uVar0=Global_2672505.f_1684;
Global_2672505.f_1684=1;
return uVar0;
}


float func_836(struct<3> Param0, var uParam1, var uParam2){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
if(fVar0 < 5f){
*uParam1=0.402f;
*uParam2=0.476f;
return 0f;
}
if(fVar0 > 20f){
*uParam1=0.212f;
*uParam2=0.286f;
return 1f;
}
fVar1=(1f - ((fVar0 - 5f) / (20f - 5f)));
fVar2=(fVar1 * (0.402f - 0.212f));
fVar3=(fVar1 * (0.476f - 0.286f));
*uParam1=(fVar2 + 0.212f);
*uParam2=(fVar3 + 0.286f);
return fVar1;
}


var func__837(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_838(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_838(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_868();
if(func_867(sParam2)){}
if(func_866()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_864(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_863(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_861(0, &iVar1);
break;
case 3:
func_861(1, &iVar1);
break;
case 1:
func_859(&iVar1);
break;
}}
if(iVar1 > Global_1961999){
return 0;
}
if(iParam1==0){
if(iVar1 > iVar2){
if(iParam0==1){
iVar1=iVar2;
}
if(iParam0==2 || iParam0==3){
iVar1=iVar2;
}}}
if(bParam7){
func_857(1165, iVar1, -1);
if(iParam1==0){
func_848((func_856(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 !=-1){
func_857(1166, iVar1, -1);
}
func_843(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_839((func_841(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_839((func_841(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_839(int iParam0){
if(func_866()){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5=iParam0;
func_840(joaat("mpply_globalxp"), iParam0);
}}


void func_840(int iParam0, var uParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}}

int func_841(bool bParam0){
if(bParam0 > -1){
if(func_9(bParam0, 0, 1)){
if(bParam0==PLAYER::PLAYER_ID()){
return func_842(joaat("mpply_globalxp"));
}else{
return Global_1853910[bParam0 /*862*/].f_205.f_5;
}}else{
return func_842(joaat("mpply_globalxp"));
}}
return 0;
}

int func_842(int iParam0){
int iVar0;
var uVar1;
iVar0=iParam0;
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_843(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_99(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_846(func_847(&Var0));
if(iVar1==0){
func_845(&Global_1665493, iParam0);
func_844(joaat("mpply_crew_local_xp_0"), Global_1665493);
}elseif(iVar1==1){
func_845(&Global_1665494, iParam0);
func_844(joaat("mpply_crew_local_xp_1"), Global_1665494);
}elseif(iVar1==2){
func_845(&Global_1665495, iParam0);
func_844(joaat("mpply_crew_local_xp_2"), Global_1665495);
}elseif(iVar1==3){
func_845(&Global_1665496, iParam0);
func_844(joaat("mpply_crew_local_xp_3"), Global_1665496);
}elseif(iVar1==4){
func_845(&Global_1665497, iParam0);
func_844(joaat("mpply_crew_local_xp_4"), Global_1665497);
}}}}


void func_844(int iParam0, var uParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}
switch (iParam0){
case joaat("mpply_crew_0_id"):
Global_1665488=uParam1;
break;
case joaat("mpply_crew_1_id"):
Global_1665490=uParam1;
break;
case joaat("mpply_crew_2_id"):
Global_1665490=uParam1;
break;
case joaat("mpply_crew_3_id"):
Global_1665491=uParam1;
break;
case joaat("mpply_crew_4_id"):
Global_1665492=uParam1;
break;
case joaat("mpply_crew_local_xp_0"):
Global_1665493=uParam1;
break;
case joaat("mpply_crew_local_xp_1"):
Global_1665494=uParam1;
break;
case joaat("mpply_crew_local_xp_2"):
Global_1665495=uParam1;
break;
case joaat("mpply_crew_local_xp_3"):
Global_1665496=uParam1;
break;
case joaat("mpply_crew_local_xp_4"):
Global_1665497=uParam1;
break;
case joaat("mpply_became_cheater_num"):
Global_1665498=uParam1;
break;
case joaat("mpply_friendly"):
Global_1665499=uParam1;
break;
case joaat("mpply_offensive_language"):
Global_1665500=uParam1;
break;
case joaat("mpply_griefing"):
Global_1665501=uParam1;
break;
case joaat("mpply_helpful"):
Global_1665502=uParam1;
break;
case joaat("mpply_offensive_tagplate"):
Global_1665503=uParam1;
break;
case joaat("mpply_offensive_ugc"):
Global_1665504=uParam1;
break;
default:
break;
}}


void func_845(var uParam0, int iParam1){
*uParam0=(*uParam0 + iParam1);
}

int func_846(int iParam0){
if(iParam0==Global_1665488){
return 0;
}elseif(iParam0==Global_1665489){
return 1;
}elseif(iParam0==Global_1665490){
return 2;
}elseif(iParam0==Global_1665491){
return 3;
}elseif(iParam0==Global_1665492){
return 4;
}else{
return -1;
}
return -1;
}

int func_847(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694468;
}}
return Global_2694468;
}


void func_848(int iParam0, int iParam1, int iParam2){
if(func_866()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10070==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < Global_1665638[func_256(-1)]){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==Global_1665638[func_256(-1)]){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0==0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
if(iParam2==0){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0 < 0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
return;
}}
if(func_474(PLAYER::PLAYER_ID())){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6=func_854(iParam0, 1);
}
func_853(640, iParam0, -1, 1);
func_852(641, func_854(iParam0, 1), -1, 1, 0);
Global_1665638[func_256(-1)]=iParam0;
func_849(-1109644434, 7, 0);
}}


void func_849(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_851(iParam1, iParam2)){
iVar0=func_850();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_850(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694420[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_851(int iParam0, var uParam1){
if(Global_1575048){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575060) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}


void func_852(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_256(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_853(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_256(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_256(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_256(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_256(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_256(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_256(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_256(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_256(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_256(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_256(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_256(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_256(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_256(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_256(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_256(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_256(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_256(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_256(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_256(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_256(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_256(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_256(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_256(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_256(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_256(iParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_256(iParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_256(iParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_256(iParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_256(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_256(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_256(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_256(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_256(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_256(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_256(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_256(iParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_256(iParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_256(iParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_256(iParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_256(iParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_256(iParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_256(iParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_256(iParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_256(iParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_256(iParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_256(iParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_256(iParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_256(iParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_256(iParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_256(iParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_256(iParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_256(iParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_256(iParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_256(iParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_256(iParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_256(iParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_256(iParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_256(iParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_256(iParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_256(iParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_256(iParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_256(iParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_256(iParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_256(iParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_256(iParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_256(iParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_256(iParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_256(iParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_256(iParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_256(iParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_256(iParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_256(iParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_256(iParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_256(iParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_256(iParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_256(iParam2)]=iParam1;
break;
default:
break;
}}

int func_854(int iParam0, bool bParam1){
if(bParam1){}
return func_855(iParam0, 0);
}

int func_855(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
if(iParam1==0){}
iVar1=8000;
iVar2=0;
iVar3=((iVar1 - iVar2) / 2);
iVar0=0;
while (iVar0 <=100){
if(iVar1==iVar2){
iVar0=8000;
if(iVar3==0){
iVar3=1;
}
return iVar3;
}
if(Global_297010[iVar3]==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(Global_297010[iVar3] < iParam0){
if(iVar2==iVar3){
iVar2++;
}else{
iVar2=iVar3;
}}elseif(iVar1==iVar3){
iVar1=(iVar1 - 1);
}else{
iVar1=iVar3;
}
fVar4=(((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
iVar3=round(fVar4);
iVar0++;
}
return 8000;
}

int func_856(bool bParam0){
if(Global_1574632.f_9==0){
if(bParam0 > -1){
if(bParam0==PLAYER::PLAYER_ID()){
return Global_1665638[func_256(-1)];
}elseif(func_474(bParam0)){
return Global_1853910[bParam0 /*862*/].f_205.f_1;
}}}else{
return Global_1665638[func_256(-1)];
}
return 0;
}


void func_857(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_255(iParam0, func_256(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_858(iParam0)){
func_852(iParam0, iVar0, iParam2, 1, 0);
}else{
func_853(iParam0, iVar0, iParam2, 1);
}}

int func_858(int iParam0){
if(Global_1665487){
switch (iParam0){
case 788:
case 789:
case 790:
case 791:
case 8729:
case 778:
case 779:
case 780:
case 781:
case 8731:
case 768:
case 769:
case 770:
case 771:
case 8733:
case 758:
case 759:
case 760:
case 761:
case 8735:
case 1304:
case 7236:
case 640:
case 1279:
case 765:
case 766:
case 767:
case 8734:
case 9538:
case 11803:
case 1237:
case 1878:
case 2269:
case 2932:
case 3061:
case 12424:
case 3056:
case 3057:
case 3058:
case 3059:
case 3060:
case 3235:
case 3237:
case 3639:
case 3640:
case 3641:
case 3642:
case 3643:
case 3644:
case 3645:
case 3646:
case 3647:
case 3648:
case 3230:
case 3224:
case 3666:
case 3667:
case 3668:
case 3669:
case 3670:
case 3671:
case 3692:
case 3233:
case 3232:
case 4023:
case 4022:
case 4026:
case 4025:
case 4029:
case 4028:
case 4032:
case 4031:
case 6113:
case 6112:
case 6171:
case 6170:
case 6536:
case 6535:
case 6549:
case 6548:
case 6562:
case 6561:
case 6565:
case 6564:
case 6568:
case 6567:
case 7286:
case 7288:
case 7290:
case 8285:
case 8286:
case 8287:
case 8288:
case 8289:
case 8290:
case 8291:
case 8292:
case 8293:
case 8294:
case 8295:
case 8296:
case 8297:
case 8905:
case 8013:
case 8537:
case 8980:
case 8982:
case 8983:
case 8985:
case 9624:
case 9913:
case 10441:
case 10443:
case 10444:
case 10446:
return 1;
break;
}}
return 0;
}


void func_859(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
bVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(bVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_380(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_100(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_860(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_860(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_860(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}


void func_861(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_9(bVar4, 0, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_100(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
bVar4=iVar0;
if(func_9(bVar4, 1, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
if(func_862(PLAYER::PLAYER_ID(), bVar4) <=20f){
iVar1++;
if(func_100(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_860(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_860(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_862(bool bParam0, bool bParam1){
return vdist(func_93(bParam0), func_93(bParam1));
return 0f;
}

int func_863(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_860(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_864(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_856(PLAYER::PLAYER_ID())){
iParam0=-func_856(PLAYER::PLAYER_ID());
}}
if(func_865(8000, 0, 0) > 0){
if(func_865(8000, 0, 0) < (iParam0 + func_856(PLAYER::PLAYER_ID()))){
iParam0=(func_865(8000, 0, 0) - func_856(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_865(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return Global_297010[iParam0];
}

int func_866(){
return 1;
}

int func_867(char* sParam0){
if(MISC::IS_STRING_NULL(sParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0")){
return 1;
}
return 0;
}

int func_868(){
int iVar0;
if(func_874(PLAYER::PLAYER_ID()) || func_873(PLAYER::PLAYER_ID())){
if(Global_262145.f_10102 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10102;
}}elseif(func_871() || func_869(PLAYER::PLAYER_ID())){
if(Global_262145.f_23282 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_23282;
}}elseif(Global_262145.f_7095 > 30000){
iVar0=30000;
}else{
iVar0=Global_262145.f_7095;
}
return iVar0;
}

int func_869(bool bParam0){
return func_870(func_276(bParam0));
}

int func_870(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}


bool func_871(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_94();
}
return func_872(Global_4718592.f_113724);
}

int func_872(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5042[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_873(bool bParam0){
return Global_2657589[bParam0 /*466*/].f_121==2;
}


bool func_874(bool bParam0){
return Global_2657589[bParam0 /*466*/].f_121==7;
}


void func_875(){
Global_2696212=1;
}

int func_876(){
return Global_262145.f_17567;
}

int func_877(){
return Global_262145.f_17566;
}


void func_878(var uParam0){
func_879(4, uParam0);
}


void func_879(int iParam0, int iParam1){
struct<2> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_0=iParam0;
Var0.f_1=iParam1;
func_880(5, &Var0);
}


void func_880(int iParam0, int iParam1){
struct<4> Var0;
Var0.f_3=-1;
Var0.f_3.f_1=-1;
Var0.f_0=-1736983835;
Var0.f_1=bLocal_1288;
Var0.f_2=iParam0;
Var0.f_3={
*iParam1 
};
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_881(1));
}


var func__881(int iParam0){
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

int func_882(int iParam0){
switch (iParam0){
case 0:
return (func_713(iLocal_1292, 10) && !func_548(0, 2));
case 1:
return (func_713(iLocal_1292, 11) && !func_548(1, 2));
case 2:
return (func_713(iLocal_1292, 12) && !func_548(2, 2));
default:
}
return 0;
}

int func_883(){
return 3;
}

int func_884(int iParam0){
switch (iParam0){
case 0:
return func_694(35);
default:
}
return 0;
}

int func_885(var uParam0){
return 18;
}

int func_886(var uParam0){
if(Local_198.f_19.f_1 !=-1){
return Local_198.f_19.f_1;
}
return 478;
}


char* func_887(int iParam0){
switch (iParam0){
case 0:
return "EXEC_BP_SC";
default:
}
return func_888();
}


char* func_888(){
return "UC_BLIP_ME";
}

int func_889(int iParam0){
switch (iParam0){
case 0:
return func_22() >=7;
default:
}
return 1;
}

int func_890(){
return 1;
}


void func_891(int iParam0, bool bParam1){
if(bParam1){
switch (iParam0){
case 0:
func_879(7, 0);
break;
}}}


void func_892(int iParam0){
switch (iParam0){
case 0:
func_879(6, 0);
break;
}}

int func_893(){
if(func_22()==6 && func_723(iLocal_1290, Local_198.f_1545.f_1[3 /*11*/], 1) < 200f){
return 1;
}
return 0;
}


float func_894(){
return 800f;
}


float func_895(){
if(func_22() < 7){
return 0f;
}
return 200f;
}

int func_896(int iParam0, var uParam1){
if(func_22() < 7){
return func_897(iParam0) > 0;
}
return 0;
}

int func_897(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
Stack.Push(iVar0);
Call_Loc(Local_274.f_734);
while (StackVal < StackVal){
if((func_548(iVar0, 0) && func_520(iVar0)==iParam0) && !func_548(iVar0, 2)){
iVar1++;
}
iVar0++;
}
return iVar1;
}

int func_898(){
if(func_22() < 7){
return 4;
}
return 3;
}

int func_899(){
if((func_22() >=5 && func_22() < 7) && func_699() >=2){
return 1;
}elseif(func_22() >=7){
return 1;
}
return 0;
}

int func_900(int iParam0, var uParam1){
if(iParam0==func_745(0)){
return 0;
}elseif(iParam0==func_745(14)){
return func_22() > 6;
}
return 1;
}


void func_901(int iParam0, int iParam1){
if(iParam0==func_745(0)){
if(func_903(0) || func_736(0, iLocal_1292)){
if((!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 5) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 5) < 0.8f) && func_800(Local_1334.f_723[iParam0 /*8*/])){
func_902(iParam1, 5, 0, 0, 5, 1065353216);
}}}elseif(iParam0==func_745(14)){
if(func_800(Local_1334.f_723[iParam0 /*8*/])){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 4, 2);
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 5, 2);
}}}


void func_902(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, iParam1, iParam2, iParam3);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, iParam1, iParam4, fParam5);
}


bool func_903(int iParam0){
return func_142(&(Local_1334.f_1182), iParam0);
}


void func_904(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
if(iParam0==func_745(14)){
if(func_701() > 7){
if(func_909(iParam1)){
if(!ENTITY::IS_ENTITY_VISIBLE(iParam1) && func_800(Local_1334.f_723[iParam0 /*8*/])){
ENTITY::SET_ENTITY_VISIBLE(iParam1, true, 0);
ENTITY::SET_ENTITY_COLLISION(iParam1, true, 0);
ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, 1);
}
if(((func_908(35, &iVar0) && func_909(iVar0)) && !ENTITY::IS_ENTITY_VISIBLE(iVar0)) && func_800(Local_1334.f_908[func_745(35) /*5*/])){
ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
}}}}
if(iParam0==func_745(31) && uParam2){
uVar1=Local_1334.f_723[iParam0 /*8*/];
if(func_907(uVar1)){
iVar2=NETWORK::NET_TO_VEH(uVar1);
if(func_906()){
if(!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar2) && func_800(iVar1)){
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar2, 1, 0);
}}elseif(VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar2) && func_800(iVar1)){
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar2, 0, 0);
}
iVar3=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0);
if(!PED::IS_PED_DEAD_OR_DYING(iVar3, 1) && TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(iVar3)){
if(!func_15(&(Local_114.f_19))){
func_14(&(Local_114.f_19), 0, 0);
}
if(func_13(&(Local_114.f_19), 30000, 0) && func_800(NETWORK::PED_TO_NET(iVar3))){
iVar4=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
TASK::SET_MOUNTED_WEAPON_TARGET(iVar3, 0, 0, func_905(iVar4), 2, 0);
}}}}}


Vector3 func__905(int iParam0){
switch (iParam0){
case 0:
return func_796(4);
case 1:
return func_796(5);
case 2:
return func_796(6);
case 3:
return func_796(7);
case 4:
return func_796(8);
default:
}
return 0f, 0f, 0f;
}

int func_906(){
if(CLOCK::GET_CLOCK_HOURS() >=22){
return 1;
}
if(CLOCK::GET_CLOCK_HOURS() <=6 && CLOCK::GET_CLOCK_HOURS() >=0){
return 1;
}
return 0;
}

int func_907(int iParam0){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return 0;
}
if(NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0)){
return 1;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
}
return 0;
}

int func_908(int iParam0, int iParam1){
int iVar0;
switch (func_793(iParam0)){
case 0:
iVar0=Local_1334.f_72[func_745(iParam0) /*25*/];
break;
case 1:
iVar0=Local_1334.f_723[func_745(iParam0) /*8*/];
break;
case 2:
iVar0=Local_1334.f_908[func_745(iParam0) /*5*/];
break;
case 3:
iVar0=Local_1334.f_2[func_745(iParam0)];
break;
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0)){
*iParam1=NETWORK::NET_TO_ENT(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(*iParam1)){
return 1;
}}
return 0;
}

int func_909(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}


void func_910(int iParam0, int iParam1){
if(iParam0==func_745(14)){
ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, 0);
AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam1, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 0, 1, 0);
VEHICLE::SET_CHECK_FOR_ENOUGH_ROOM_FOR_PE(iParam1, 1);
}}

int func_911(int iParam0){
if(iParam0==func_745(14)){
return func_694(35);
}
return 1;
}


void func_912(int iParam0){
if(iParam0==0){
func_776(50);
ENTITY::REMOVE_MODEL_HIDE(Local_198.f_688.f_1[func_745(14) /*15*/].f_4, 5f, Local_198.f_688.f_1[func_745(14) /*15*/].f_3, 0);
func_913(800);
func_879(5, 0);
}}

int func_913(int iParam0){
func_489(40);
if(!CAM::IS_SCREEN_FADED_IN()){
if(!CAM::IS_SCREEN_FADING_IN()){
CAM::DO_SCREEN_FADE_IN(iParam0);
}}else{
return 1;
}
return 0;
}


void func_914(int iParam0){
if(iParam0==0){
ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(Local_198.f_688.f_1[func_745(14) /*15*/].f_4, 5f, Local_198.f_688.f_1[func_745(14) /*15*/].f_3, 0);
func_776(49);
}}


bool func_915(var uParam0, var uParam1){
return bLocal_1288;
}

int func_916(int iParam0){
if(iParam0==0){
if(Local_1334.f_1207.f_20==iLocal_1291){
return func_150(Local_114.f_28, 2000, 1);
}else{
return 1;
}}
return 1;
}

int func_917(int iParam0){
if(iParam0==0){
if(func_713(iLocal_1292, 48)){
return 1;
}else{
return 0;
}}
return 1;
}


void func_918(int iParam0){
int iVar0;
switch (iParam0){
case 0:
break;
case 1:
func_776(3);
func_804(func_745(1), 0, 1);
func_879(0, 0);
break;
case 2:
func_776(4);
func_879(1, 0);
break;
case 3:
case 4:
case 5:
case 6:
case 7:
iVar0=(iParam0 - 3);
func_920(iParam0, 4);
func_879(2, iVar0);
func_919(iVar0);
break;
}}


void func_919(int iParam0){
Local_114.f_15=iParam0;
func_30(&(Local_114.f_17));
}


void func_920(int iParam0, int iParam1){
if(func_125(&(Local_198.f_1941.f_1[iParam0 /*23*/]), iParam1)){}}


void func_921(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
if(func_701()==2 && iParam0==1){
if(func_927(iParam0) > 0.3f){
func_776(3);
}}elseif(func_926(iParam0, &iVar0) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1242.f_20))){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1242.f_20)) > 0.28f){
switch (iVar0){
case 0:
func_925(12);
break;
case 1:
func_925(13);
break;
case 2:
func_925(14);
break;
case 3:
func_925(15);
break;
case 4:
func_925(16);
break;
}
func_920(iParam0, 4);
if(func_924(iVar0, &iVar1) && func_133(Local_1334.f_908[iVar1 /*5*/])){
func_923(iVar0, 1);
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1242.f_20)) > 0.96f){
if(func_922(iVar0, &iVar2)){
ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
}
func_716(19);
}}}

int func_922(int iParam0, var uParam1){
int iVar0;
if(func_924(iParam0, &iVar0) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_908[iVar0 /*5*/])){
*uParam1=NETWORK::NET_TO_ENT(Local_1334.f_908[iVar0 /*5*/]);
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return 1;
}}
return 0;
}


void func_923(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=func_745((16 + iParam0));
if(func_800(Local_1334.f_908[iVar0 /*5*/])){
iVar1=NETWORK::NET_TO_ENT(Local_1334.f_908[iVar0 /*5*/]);
ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam1, 0);
if(bParam1){
ENTITY::SET_ENTITY_COLLISION(iVar1, true, 0);
}else{
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, 0, 0);
}}}

int func_924(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1=func_745(16);
return 1;
case 1:
*uParam1=func_745(17);
return 1;
case 2:
*uParam1=func_745(18);
return 1;
case 3:
*uParam1=func_745(19);
return 1;
case 4:
*uParam1=func_745(20);
return 1;
default:
}
*uParam1=-1;
return 0;
}


void func_925(int iParam0){
if(func_17(&(Local_1334.f_1204), iParam0)){}}

int func_926(int iParam0, int iParam1){
switch (iParam0){
case 3:
case 4:
case 5:
case 6:
case 7:
*iParam1=(iParam0 - 3);
return 1;
default:
}
*iParam1=-1;
return 0;
}


float func_927(int iParam0){
Stack.Push(func_928()==5);
Stack.Push(iLocal_1290);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_2);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_3);
if(StackVal && ENTITY::IS_ENTITY_PLAYING_ANIM(StackVal, StackVal, StackVal, 3)){
Stack.Push(iLocal_1290);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_2);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_3);
return ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(StackVal, StackVal, StackVal);
}
return 0f;
}

int func_928(){
return Local_1242.f_4;
}

int func_929(var uParam0){
return 1;
}


void func_930(int iParam0, var uParam1){
int iVar0;
int iVar1;
switch (iParam0){
case 3:
case 4:
case 5:
case 6:
case 7:
iVar0=Local_1334.f_908[func_745(36) /*5*/];
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0)){
iVar1=NETWORK::NET_TO_ENT(iVar0);
Stack.Push(iVar1);
Stack.Push(uParam1);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_2);
NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(StackVal, StackVal, StackVal, "ACTION_BAG", 1000f, -1000f, 12);
}
break;
}}


char* func_931(int iParam0){
int iVar0;
iVar0=0;
if(func_932(iParam0, &iVar0)){
return "ACTION_SATCHEL_CHARGE";
}
return "";
}

int func_932(int iParam0, int iParam1){
switch (iParam0){
case 3:
*iParam1=func_745(16);
return 1;
case 4:
*iParam1=func_745(17);
return 1;
case 5:
*iParam1=func_745(18);
return 1;
case 6:
*iParam1=func_745(19);
return 1;
case 7:
*iParam1=func_745(20);
return 1;
default:
}
*iParam1=-1;
return 0;
}

int func_933(int iParam0, var uParam1){
int iVar0;
iVar0=0;
if(func_932(iParam0, &iVar0) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iVar0 /*5*/])){
*uParam1=Local_1334.f_908[iVar0 /*5*/];
return 1;
}
return 0;
}


Vector3 func__934(var uParam0){
int iVar0;
iVar0=uParam0;
switch (iVar0){
case 3:
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(0), func_935(0), 0f, 0f, 0f);
case 4:
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(1), func_935(1), 0f, 0f, 0f);
case 5:
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(2), func_935(2), 0f, 0f, 0f);
case 6:
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(3), func_935(3), 0f, 0f, 0f);
case 7:
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(4), func_935(4), 0f, 0f, 0f);
break;
}
Stack.Push(uParam0);
Call_Loc(Local_274.f_484.f_2);
return StackVal, StackVal, StackVal;
}


float func_935(int iParam0){
switch (func_565()){
case 3:
switch (iParam0){
case 0:
return 160.9044f;
case 1:
return 233.1711f;
case 2:
return 29.73276f;
case 3:
return 8.36471f;
case 4:
return 213.345f;
default:
}
break;
case 4:
switch (iParam0){
case 0:
return 31.913f;
case 1:
return 11.21647f;
case 2:
return 291.6281f;
case 3:
return 319.6754f;
case 4:
return 317.6068f;
default:
}
break;
case 5:
switch (iParam0){
case 0:
return 186.8f;
case 1:
return 200.599f;
case 2:
return 187.999f;
case 3:
return 215.7829f;
case 4:
return 217.544f;
default:
}
break;
}
return 0f;
}


Vector3 func__936(int iParam0){
switch (func_565()){
case 3:
switch (iParam0){
case 0:
return -889.3368f, 6613.08f, -32.7787f;
case 1:
return -911.3469f, 6642.394f, -32.3627f;
case 2:
return -943.5456f, 6661.073f, -24.7404f;
case 3:
return -991.3332f, 6721.854f, -43.6796f;
case 4:
return -1032.918f, 6723.631f, -87.794f;
default:
}
break;
case 4:
switch (iParam0){
case 0:
return 3121.13f, -214.6268f, -24.5869f;
case 1:
return 3141.291f, -243.8573f, -26.0447f;
case 2:
return 3152.108f, -318.8211f, -25.0715f;
case 3:
return 3175.828f, -362.0913f, -29.5461f;
case 4:
return 3133.189f, -385.3009f, -21.886f;
default:
}
break;
case 5:
switch (iParam0){
case 0:
return -2826.548f, -386.7751f, -39.442f;
case 1:
return -2832.813f, -464.5189f, -18.906f;
case 2:
return -2836.979f, -614.4651f, -58.596f;
case 3:
return -2761.65f, -580.4293f, -46.6093f;
case 4:
return -2781.574f, -479.0222f, -50.84f;
default:
}
break;
}
return 0f, 0f, 0f;
}


float func_937(int iParam0){
switch (iParam0){
case 0:
return 0.58f;
case 2:
return 0.341f;
default:
}
return 0.99f;
}


char* func_938(int iParam0){
switch (iParam0){
case 0:
return "";
case 1:
return "TUN_PREP_GRAB_MIDD_IG3_FACIAL";
case 2:
return "";
case 3:
case 4:
case 5:
case 6:
case 7:
return "ACTION_FACIAL";
default:
}
return "";
}


char* func_939(int iParam0){
switch (iParam0){
case 0:
return "OPEN_TRUNK_STEALTH";
case 1:
return "TUN_PREP_GRAB_MIDD_IG3";
case 2:
return "SHORT_ACTION_01_MALE";
case 3:
case 4:
case 5:
case 6:
case 7:
return "ACTION";
default:
}
return "";
}


char* func_940(int iParam0){
switch (iParam0){
case 0:
if(func_941(iLocal_1290)){
return "ANIM_HEIST@HS4F@IG14_OPEN_CAR_TRUNK@FEMALE@";
}else{
return "ANIM_HEIST@HS4F@IG14_OPEN_CAR_TRUNK@MALE@";
}
break;
case 1:
if(func_941(iLocal_1290)){
return "ANIM@SCRIPTED@PLAYER@FREEMODE@TUN_PREP_GRAB_MIDD_IG3@HEELED@";
}else{
return "ANIM@SCRIPTED@PLAYER@FREEMODE@TUN_PREP_GRAB_MIDD_IG3@MALE@";
}
break;
case 2:
return "ANIM_HEIST@HS3F@IG12_CHANGE_CLOTHES@";
break;
case 3:
case 4:
case 5:
case 6:
case 7:
if(func_941(iLocal_1290)){
return "ANIM@SCRIPTED@FREEMODE@UNDERWATER_SATCHEL_BOMB@HEELED@";
}else{
return "ANIM@SCRIPTED@FREEMODE@UNDERWATER_SATCHEL_BOMB@MALE@";
}
break;
}
return "";
}

int func_941(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar2=-1;
iVar3=-1;
if(iVar0==joaat("mp_f_freemode_01")){
iVar1=func_947(iParam0, 6);
if(iVar1 >=256){
iVar2=func_943(iVar0, iVar1, 6, 4);
iVar3=func_942(iVar2);
}
if(((((((((((((iVar1 >=0 && iVar1 <=15) || (iVar1 >=96 && iVar1 <=111)) || (iVar1 >=112 && iVar1 <=127)) || (iVar1 >=128 && iVar1 <=143)) || (iVar1 >=192 && iVar1 <=207)) || (iVar1 >=224 && iVar1 <=239)) || iVar3==0) || iVar3==6) || iVar3==7) || iVar3==8) || iVar3==12) || iVar3==14) || (iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("high_heels"), 0))){
return 1;
}}
return 0;
}

int func_942(int iParam0){
int iVar0;
iVar0=-1;
if(iParam0==0){
return iVar0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_0"), 0)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_1"), 0)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_2"), 0)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_3"), 0)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_4"), 0)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_5"), 0)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_6"), 0)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_7"), 0)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_8"), 0)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_9"), 0)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_10"), 0)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_11"), 0)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_12"), 0)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_13"), 0)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_14"), 0)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_15"), 0)){
iVar0=15;
}
return iVar0;
}

int func_943(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_946(iParam0));
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
iVar4=(iParam1 - func_944(iParam0, func_945(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_945(iParam2));
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

int func_944(int iParam0, int iParam1){
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

int func_945(int iParam0){
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

int func_946(int iParam0){
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

int func_947(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_945(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_948(iParam0, iVar1, iVar2, iParam1);
}

int func_948(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_945(iParam3);
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


float func_949(int iParam0){
int iVar0;
iVar0=iParam0;
switch (iVar0){
case 0:
case 1:
return func_950(iVar0);
case 2:
switch (func_565()){
case 3:
return -20f;
case 4:
return -177.12f;
case 5:
return -93.6f;
default:
}
break;
case 3:
switch (func_565()){
case 3:
return 164f;
default:
}
return func_795(4);
break;
case 4:
return func_795(5);
case 5:
return func_795(6);
case 6:
return func_795(7);
case 7:
return func_795(8);
}
return func_476(Local_1293, Local_198.f_1941.f_1[iParam0 /*23*/].f_3);
}


float func_950(int iParam0){
int iVar0;
switch (iParam0){
case 0:
case 1:
if(func_951(func_745(0), &iVar0)){
return ENTITY::GET_ENTITY_HEADING(iVar0);
}else{
return func_795(0);
}
break;
case 2:
return func_795(3);
case 3:
return func_795(4);
case 4:
return func_795(5);
case 5:
return func_795(6);
case 6:
return func_795(7);
case 7:
return func_795(8);
}
return 0f;
}

int func_951(int iParam0, int iParam1){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_723[iParam0 /*8*/])){
*iParam1=NETWORK::NET_TO_VEH(Local_1334.f_723[iParam0 /*8*/]);
if(ENTITY::DOES_ENTITY_EXIST(*iParam1) && func_952(*iParam1)){
return 1;
}}
return 0;
}

int func_952(int iParam0){
if(func_909(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}


char* func_953(int iParam0){
switch (iParam0){
case 0:
return "EXEC_HP_INT1A";
case 1:
return "EXEC_HP_INT2A";
case 2:
return "EXEC_HP_INT3A";
case 3:
case 4:
case 5:
case 6:
case 7:
return "EXEC_HP_INT4A";
default:
}
return "FMC_HT_INTERACT";
}

int func_954(int iParam0){
switch (iParam0){
case 0:
return 1;
case 2:
return 1;
case 3:
case 4:
case 5:
case 6:
case 7:
return 1;
default:
}
return 0;
}

int func_955(int iParam0){
var uVar0;
if(func_956(iParam0, &uVar0)){
return 1;
}
return 0;
}

int func_956(int iParam0, var uParam1){
switch (iParam0){
case 3:
case 4:
case 5:
case 6:
case 7:
*uParam1=(iParam0 - 3);
return func_957(*uParam1);
default:
}
*uParam1=-1;
return 0;
}


bool func_957(int iParam0){
return iParam0==Local_114.f_15;
}

int func_958(int iParam0){
int iVar0;
if(func_926(iParam0, &iVar0)){
return 6;
}elseif(iParam0==2){
return 3;
}
return Local_198.f_1941.f_1[iParam0 /*23*/].f_8.f_1;
}

int func_959(int iParam0){
switch (iParam0){
case 0:
return 326;
case 2:
return 729;
case 3:
case 4:
case 5:
case 6:
case 7:
return 677;
default:
}
return -1;
}

int func_960(int iParam0){
int iVar0;
switch (iParam0){
case 0:
return func_723(iLocal_1290, func_796(0), 1) < 30f;
case 3:
case 4:
case 5:
case 6:
case 7:
return (func_961(iParam0, &iVar0) && func_723(iLocal_1290, Local_198.f_1036.f_1[iVar0 /*12*/].f_4, 1) < 30f);
default:
}
return 0;
}

int func_961(int iParam0, var uParam1){
switch (iParam0){
case 3:
*uParam1=func_745(4);
return 1;
case 4:
*uParam1=func_745(5);
return 1;
case 5:
*uParam1=func_745(6);
return 1;
case 6:
*uParam1=func_745(7);
return 1;
case 7:
*uParam1=func_745(8);
return 1;
default:
}
*uParam1=-1;
return 0;
}


char* func_962(int iParam0){
bool bVar0;
switch (iParam0){
case 0:
return "EXEC_BP_INT1";
case 1:
return "EXEC_BP_INT2";
case 2:
return "EXEC_BP_INT3";
case 3:
case 4:
case 5:
case 6:
case 7:
if(func_926(iParam0, &bVar0)){
if(!func_781(bVar0) && func_734(bVar0)){
return "EXEC_BP_INT5";
}else{
return "EXEC_BP_INT4";
}}
break;
}
return "BLIP_DEST";
}


bool func_963(int iParam0){
switch (iParam0){
case 3:
return ((func_22()==5 && !func_694(3)) && !func_964());
case 4:
return ((func_22()==5 && !func_694(4)) && !func_964());
case 5:
return ((func_22()==5 && !func_694(5)) && !func_964());
case 6:
return ((func_22()==5 && !func_694(6)) && !func_964());
case 7:
return ((func_22()==5 && !func_694(7)) && !func_964());
default:
}
return func_967(iParam0);
}

int func_964(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(!func_734(Local_1334.f_1207.f_16[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}


Vector3 func__965(int iParam0){
switch (iParam0){
case 0:
return func_966(0);
case 1:
return func_966(1);
break;
}
return Local_198.f_1941.f_1[iParam0 /*23*/].f_3;
}


Vector3 func__966(int iParam0){
int iVar0;
int iVar1;
switch (iParam0){
case 0:
if(func_951(func_745(0), &iVar0)){
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 0.15f, -3.5f, 1f);
}else{
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_796(0), func_795(0), 0.15f, -3.5f, 1f);
}
break;
case 1:
if(func_951(func_745(0), &iVar0)){
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 0.15f, -3.5f, 0f);
}else{
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_796(0), func_795(0), -0.15f, -3.5f, 0f);
}
break;
case 2:
switch (func_565()){
case 3:
return -649.736f, 6198.314f, 3.004f;
case 4:
return 2827.536f, -715.164f, 2.26f;
case 5:
return -2267.736f, -405.514f, 3.16f;
default:
}
break;
case 3:
case 4:
case 5:
case 6:
case 7:
switch (iParam0){
case 3:
iVar1=4;
break;
case 4:
iVar1=5;
break;
case 5:
iVar1=6;
break;
case 6:
iVar1=7;
break;
case 7:
iVar1=8;
break;
default:
return 0f, 0f, 0f;
}
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_796(iVar1), func_795(iVar1), 0f, -2.56f, 1.24f);
}
return 0f, 0f, 0f;
}

int func_967(int iParam0){
switch (iParam0){
case 0:
if(!func_903(iParam0) && !func_736(iParam0, iLocal_1292)){
return func_22() > 0;
}
break;
case 1:
if((func_903(0) && !func_736(iParam0, iLocal_1292)) && func_22() < 6){
return 1;
}
break;
case 2:
return func_735();
break;
case 3:
case 4:
case 5:
case 6:
case 7:
if((Local_114.f_15==-1 && !func_903(iParam0)) && func_736(1, iLocal_1292)){
return 1;
}
break;
}
return 0;
}


bool func_968(){
if(!func_736(1, iLocal_1292) || !func_736(2, iLocal_1292)){
return 1;
}
return func_969()==19;
}

int func_969(){
if(func_701() !=-1){
return Local_277[func_701() /*21*/];
}
return -1;
}

int func_970(){
return 1;
}

int func_971(){
if(func_972()){
return 1;
}
return 0;
}

int func_972(){
if(func_70()){
if(!func_973(1)){
return 1;
}}
return 0;
}


bool func_973(int iParam0){
return func_4(&uLocal_1312, iParam0);
}


void func_974(){
if(bLocal_1286 && func_22()==6){
if((func_975()==3 && iLocal_1348 > 0) && iLocal_1348==iLocal_1349){
func_925(36);
}}}

int func_975(){
int iVar0;
int iVar1;
iVar1=0;
Stack.Push(iVar1);
Call_Loc(Local_274.f_734);
while (StackVal < StackVal){
if(func_548(iVar1, 2)){
iVar0++;
}
iVar1++;
}
return iVar0;
}


void func_976(var uParam0, int iParam1){
if(bLocal_1286){
if((func_22() >=6 && !func_694(37)) && func_977(0, iParam1, 36)){
func_925(37);
}
if(func_22()==6){
if(func_713(iParam1, 48)){
if(func_975()==3 && !func_694(35)){
Local_1334.f_1207.f_20=uParam0;
func_925(35);
}}
if(func_713(iParam1, 48)){
iLocal_1348++;
}
if(func_713(iParam1, 50)){
iLocal_1349++;
}}}}


bool func_977(int iParam0, int iParam1, int iParam2){
return func_4(&(Local_1347[iParam1 /*251*/].f_3[iParam0 /*3*/]), iParam2);
}


void func_978(){
if(bLocal_1286 && func_22()==6){
iLocal_1348=0;
iLocal_1349=0;
}}


void func_979(){
func_980();
}


void func_980(){
int iVar0;
if(!func_70() || func_973(1)){
return;
}
if(func_1440(11)){
if(func_1065()==0){
iVar0=func_1064();
}else{
iVar0=func_596();
}}else{
iVar0=func_1064();
}
if(iVar0==0){
func_1063(1);
}else{
switch (func_1000(iVar0)){
case 2:
case 3:
func_981();
func_1063(1);
break;
}}}


void func_981(){
char* sVar0;
int iVar1;
int iVar2;
sVar0=func_998(func_999());
iVar1=func_995(func_999());
iVar2=func_987(func_999());
if(iVar1 > 0){
func_982("CONTRAVALUE", sVar0, iVar1);
}
if(iVar2 > 0){
func_982("CONTRAVALUES", sVar0, iVar2);
}}

int func_982(char* sParam0, char* sParam1, int iParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_983(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_983(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_986() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_89(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_984(iParam2);
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

int func_984(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_985(iVar0);
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


void func_985(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_986(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_987(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(func_994(iParam0)){
iVar2=1;
while (iVar2 <=6){
iVar3=iVar2;
if(func_993(iParam0, iVar3)){
iVar0=(iVar0 + func_992(iVar3));
iVar1++;
}
iVar2++;
}
if(iVar1 < func_988(iParam0)){
iVar2=0;
while (iVar2 <=(func_988(iParam0) - iVar1)){
iVar0=(iVar0 + func_992(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
iVar2++;
}}}
return iVar0;
}

int func_988(int iParam0){
int iVar0;
if(func_991(iParam0)){
iVar0=func_989(func_990(iParam0));
return func_255(iVar0, -1, 0);
}
return 0;
}

int func_989(int iParam0){
if(iParam0==0){
return 3649;
}elseif(iParam0==1){
return 3650;
}elseif(iParam0==2){
return 3651;
}elseif(iParam0==3){
return 3652;
}elseif(iParam0==4){
return 3653;
}
return 3649;
}

int func_990(int iParam0){
int iVar0;
if(func_991(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_991(int iParam0){
if(iParam0 < 1 || iParam0 > 22){
return 0;
}
return 1;
}

int func_992(int iParam0){
if(iParam0==1){
return Global_262145.f_15988;
}elseif(iParam0==2){
return Global_262145.f_15986;
}elseif(iParam0==3){
return Global_262145.f_15990;
}elseif(iParam0==4){
return Global_262145.f_15984;
}elseif(iParam0==5){
return Global_262145.f_15982;
}elseif(iParam0==6){
return Global_262145.f_15992;
}
return 0;
}

int func_993(int iParam0, int iParam1){
int iVar0;
if(func_991(iParam0)){
iVar0=0;
while (iVar0 < 6){
if(Global_1949815[iVar0]==iParam1 && Global_1949822[iVar0]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}

int func_994(int iParam0){
int iVar0;
if(func_991(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}

int func_995(int iParam0){
int iVar0;
int iVar1;
iVar0=(func_997(bLocal_1288, iParam0) - func_988(iParam0));
iVar1=(iVar0 * func_996(iVar0));
return iVar1;
}

int func_996(int iParam0){
if(iParam0 >=Global_262145.f_15787){
return Global_262145.f_15808;
}elseif(iParam0 >=Global_262145.f_15786){
return Global_262145.f_15807;
}elseif(iParam0 >=Global_262145.f_15785){
return Global_262145.f_15806;
}elseif(iParam0 >=Global_262145.f_15784){
return Global_262145.f_15805;
}elseif(iParam0 >=Global_262145.f_15783){
return Global_262145.f_15804;
}elseif(iParam0 >=Global_262145.f_15782){
return Global_262145.f_15803;
}elseif(iParam0 >=Global_262145.f_15781){
return Global_262145.f_15802;
}elseif(iParam0 >=Global_262145.f_15780){
return Global_262145.f_15801;
}elseif(iParam0 >=Global_262145.f_15779){
return Global_262145.f_15800;
}elseif(iParam0 >=Global_262145.f_15778){
return Global_262145.f_15799;
}elseif(iParam0 >=Global_262145.f_15777){
return Global_262145.f_15798;
}elseif(iParam0 >=Global_262145.f_15776){
return Global_262145.f_15797;
}elseif(iParam0 >=Global_262145.f_15775){
return Global_262145.f_15796;
}elseif(iParam0 >=Global_262145.f_15774){
return Global_262145.f_15795;
}elseif(iParam0 >=Global_262145.f_15773){
return Global_262145.f_15794;
}elseif(iParam0 >=Global_262145.f_15772){
return Global_262145.f_15793;
}elseif(iParam0 >=Global_262145.f_15771){
return Global_262145.f_15792;
}elseif(iParam0 >=Global_262145.f_15770){
return Global_262145.f_15791;
}elseif(iParam0 >=Global_262145.f_15769){
return Global_262145.f_15790;
}elseif(iParam0 >=Global_262145.f_15768){
return Global_262145.f_15789;
}
return Global_262145.f_15788;
}

int func_997(bool bParam0, int iParam1){
int iVar0;
if(func_991(iParam1)){
iVar0=0;
while (iVar0 <=4){
if(iParam1==Global_1853910[bParam0 /*862*/].f_267.f_116[iVar0 /*3*/]){
return Global_1853910[bParam0 /*862*/].f_267.f_116[iVar0 /*3*/].f_1;
}
iVar0++;
}}
return 0;
}


char* func_998(int iParam0){
switch (iParam0){
case 1:
return "MP_WHOUSE_0";
break;
case 2:
return "MP_WHOUSE_1";
break;
case 3:
return "MP_WHOUSE_2";
break;
case 4:
return "MP_WHOUSE_3";
break;
case 5:
return "MP_WHOUSE_4";
break;
case 6:
return "MP_WHOUSE_5";
break;
case 7:
return "MP_WHOUSE_6";
break;
case 8:
return "MP_WHOUSE_7";
break;
case 9:
return "MP_WHOUSE_8";
break;
case 10:
return "MP_WHOUSE_9";
break;
case 11:
return "MP_WHOUSE_10";
break;
case 12:
return "MP_WHOUSE_11";
break;
case 13:
return "MP_WHOUSE_12";
break;
case 14:
return "MP_WHOUSE_13";
break;
case 15:
return "MP_WHOUSE_14";
break;
case 16:
return "MP_WHOUSE_15";
break;
case 17:
return "MP_WHOUSE_16";
break;
case 18:
return "MP_WHOUSE_17";
break;
case 19:
return "MP_WHOUSE_18";
break;
case 20:
return "MP_WHOUSE_19";
break;
case 21:
return "MP_WHOUSE_20";
break;
case 22:
return "MP_WHOUSE_21";
break;
}
return "";
}

int func_999(){
return Local_1334.f_1207.f_2;
}

int func_1000(int iParam0){
int iVar0;
if(func_597()){
iVar0=iParam0;
}
func_1001(func_999(), iParam0, iVar0, &Local_114, func_1062());
return Local_114.f_0;
}


void func_1001(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam1 <=0){
if(iParam1==0){
}
*uParam3=3;
return;
}
if(*uParam3 !=0 && *uParam3 !=1){
*uParam3=0;
}
if(*uParam3==0){
if(func_1061() !=-1){
return;
}}
iVar0=func_1060(iParam0);
iVar1=func_990(iParam0);
if(iVar0==0){
*uParam3=2;
return;
}elseif(iParam1 > iVar0){
iParam1=iVar0;
}
if(!func_332()){
if(iVar1 >=0 && iVar0 >=iParam1){
iVar2=(func_1059(iParam0) + iParam1);
func_1045(iParam0, iVar1, iVar2, iParam2, 1, iParam4);
func_853(func_1044(iVar1), iVar2, -1, 1);
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar1 /*3*/].f_1=iVar2;
if((func_1042() + iParam2) <=6){
if(iParam2 !=0){
func_1041(iParam0, iParam2);
iVar3=(func_1042() - 1);
func_1035(iParam0, func_1040(iParam4), iParam2, iVar3);
}}
func_1032(iParam4);
func_1029(iParam0);
func_1017(1);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
}
func_1015(141);
func_849(1490700264, 10, 0);
*uParam3=2;
}else{
*uParam3=3;
}}elseif(iVar1 >=0 && iVar0 >=iParam1){
if(func_1002(iVar1, iParam1, iParam2, uParam3)){
if(*uParam3==2){
iVar4=(func_1059(iParam0) + iParam1);
func_1045(iParam0, iVar1, iVar4, iParam2, 1, iParam4);
func_853(func_1044(iVar1), iVar4, -1, 1);
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar1 /*3*/].f_1=iVar4;
if(func_1042() <=6){
if(iParam2 !=0){
func_1041(iParam0, iParam2);
iVar5=(func_1042() - 1);
func_1035(iParam0, func_1040(iParam4), iParam2, iVar5);
}}
func_1032(iParam4);
func_1029(iParam0);
func_1017(1);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
}
func_849(1490700264, 10, 0);
*uParam3=2;
func_1015(141);
}elseif(*uParam3==3){
*uParam3=3;
}}}else{
*uParam3=3;
}}


bool func_1002(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(*uParam3 !=0 && *uParam3 !=1){
*uParam3=0;
}
switch (*uParam3){
case 0:
iVar0=func_1014(iParam0);
iVar1=func_1013();
iVar2=func_1012(iParam0);
iVar3=func_1011(iParam0);
if(func_1008(78225582, -1799524201, iVar1, 2108234284, 1, 0, 1, 4, iVar0, 3)){
if(func_1008(78225582, 69656641, iVar2, 2108234284, iParam1, 0, 0, 4, 0, 3)){
if(iParam2==0 || func_1008(78225582, 69656641, iVar3, 2108234284, iParam2, 0, 0, 4, 0, 3)){
if(func_1008(78225582, -739932302, 980795479, 2108234284, 1, 0, iParam1, 4, iVar2, 3)){
*uParam3=1;
}
else{
*uParam3=3;
}}else{
*uParam3=3;
}}else{
*uParam3=3;
}}else{
*uParam3=3;
}
if(*uParam3==1 && func_1005()){
}else{
*uParam3=3;
func_818(func_1061());
}
break;
case 1:
if(func_1004(func_1061())){
if(func_1003(func_1061())==2){
*uParam3=2;
func_818(func_1061());
}else{
*uParam3=3;
func_818(func_1061());
}}
break;
}
return *uParam3 !=1;
}

int func_1003(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2;
}
return 0;
}

int func_1004(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2 !=1;
}
return 0;
}

int func_1005(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bVar0=false;
if(!func_332()){
bVar0=true;
}
iVar1=1;
iVar2=func_1061();
if(iVar2==-1){
return 0;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_91()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
if(func_1007(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1)==1){
Global_4536674=1;
}
return 0;
}
if(Global_2695821){
if(Global_4535172[iVar2 /*85*/].f_66.f_6==1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6==-1303831698){
Global_4536675=1;
return 0;
}}}
iVar3=func_1006(iVar2);
if(iVar3 !=2147483647){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3)){
Global_4535172[iVar2 /*85*/].f_66.f_13=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=0;
Global_4535172[iVar2 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
if(bVar0){
Global_4535172[iVar2 /*85*/].f_66.f_8=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=1;
}
Global_4535172[iVar2 /*85*/].f_66.f_18=0;
if(bVar0 || iVar1){
func_824(Global_4535172[iVar2 /*85*/], iVar2);
}
Global_4536659=1;
return 1;
}}
return 0;
}

int func_1006(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_1007(int iParam0, int iParam1, int iParam2){
if(iParam0==-433440095 || iParam0==1474183246){
switch (iParam1){
case 1940862352:
if(iParam2 >=10000){
return 1;
}else{
return 0;
}
break;
case -31156877:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case -1100963799:
if(iParam2 >=1000){
return 1;
}else{
return 2;
}
break;
case 1982688246:
return 0;
break;
case 1718438689:
case -1027218631:
case -1398318418:
case 1652884147:
case -57868256:
case -1216489292:
case -46622315:
case -352356931:
case -990286235:
case 563463121:
case 1734805203:
case 941287179:
case -1186079845:
case -1985150258:
case -1127021384:
case -109201286:
case 312105838:
case -661030418:
case 1301046174:
case -1586170317:
case 393059668:
case 23796958:
case -1077156170:
case 1780666425:
case -2043695058:
case -1922554349:
case 1287308202:
case 691372038:
case 1480707108:
case 1512499951:
case 562283735:
case -154732333:
case -1362660491:
case 645708827:
case 767907967:
case -1970151306:
case 718859568:
case -1955564771:
case 892388724:
case -1426920838:
case 1349151477:
case 1620609399:
case 1961641934:
case 210955503:
case -59668082:
case 1736933716:
case -1468524125:
case 111573502:
case 1525644423:
case 968073639:
case 1577781788:
case -934465332:
case -1194253122:
case -212607085:
case -815546555:
case 1048226110:
case 569170531:
case -856006867:
case 848090538:
case -47546905:
case -293060240:
case 463142405:
case 1550217370:
case -664597565:
case 599804707:
case 1052472386:
case -2130199671:
case -1227654538:
case 1864522104:
case 215608230:
case -876012764:
case -722894325:
case 1407278493:
case -1579394494:
case -27443911:
case 1179783540:
case 923419301:
case -308826175:
case 603298940:
case -12619854:
case -311112675:
case 870439158:
case -974288740:
case -4138654:
case -1180954122:
case -1918051016:
case 844330594:
case 1934825517:
case 1852024236:
case 2099238988:
case 1952643559:
case -1172900789:
case -2015399333:
case -1574795641:
case -961034881:
case 1135468152:
case 1265272476:
case -634726636:
case 696556762:
case 443347049:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
case 1240683675:
case 1241904665:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case -2017925037:
case 1057653594:
case 1810506918:
case 451427308:
case 824622151:
case 1253978276:
case -1576080766:
case 1508411869:
case 1428501742:
case -1918967151:
case 1261538664:
case 1180397655:
case 1414674366:
case 261460130:
case -2027658376:
case 1668610896:
case -2032529561:
return 1;
break;
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case 291576838:
case -1276678868:
case 711665950:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 283351220:
case 1108628223:
case -876847842:
case 68030260:
return 2;
break;
default:
return 0;
break;
}
switch (iParam1){
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case -1224479447:
case 1220095570:
case 2050320631:
case 592672421:
case -842062976:
case 14658715:
case -604793592:
case -823426392:
case -1401862980:
case -173354274:
case 409533976:
case -1472522337:
case 542574408:
case -1261799063:
case 784631574:
case -2027479156:
case -837690641:
case -1029672338:
case -1503749970:
case -1843409092:
case 1669058563:
case 2102747615:
case 2030771998:
case 1708747007:
case 645293860:
case -818859193:
case 300796227:
case -1999832346:
case 1058055395:
case -321151125:
case 2078731875:
case 1280785534:
case -1878824774:
case 247992227:
case -229237358:
case -1123183389:
case 1814197076:
case 713955548:
case -2026544524:
case -719580138:
case -163417439:
case -550417574:
case 208223429:
case -1433071892:
case 761999406:
case -1101941763:
case 1748245957:
case 1036772696:
case -1384648535:
case -800037808:
case -695852120:
case 77355315:
case 2097889166:
case 1707592130:
case 1628412596:
case 883337077:
case -1274418755:
case -1853979468:
case -239888995:
case 1163066566:
case -955087020:
case 1874391251:
return 1;
break;
case 1775876058:
case -518651910:
return 2;
break;
}}elseif((iParam0==-1134853190 || iParam0==925407197) || iParam0==-1589378882){
return 0;
}
return 1;
}

int func_1008(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
bool bVar0;
int iVar1;
struct<4> Var2;
bVar0=false;
if(!func_332()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_91()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam1==1067618600 || iParam1==-1303831698){
Global_4536675=1;
return 0;
}}}
if(iParam2==0){
return 0;
}
iVar1=func_1061();
if(iVar1==-1){
if(!func_1010(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)){
return 0;
}}
if(iVar1 !=-1){
if(iParam8 !=0 && func_1009(iParam1)){
Var2.f_0=iParam8;
Var2.f_1=iParam2;
Var2.f_2=iParam5;
Var2.f_3=iParam6;
}else{
Var2.f_0=iParam2;
Var2.f_1=iParam8;
Var2.f_2=iParam5;
Var2.f_3=iParam6;
}
Global_4535172[iVar1 /*85*/].f_66.f_1=Var2.f_2;
Global_4535172[iVar1 /*85*/].f_66.f_15=Var2.f_0;
Global_4535172[iVar1 /*85*/].f_66.f_16=Var2.f_1;
if(bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4)){
return 1;
}}
return 0;
}

int func_1009(int iParam0){
switch (iParam0){
case -221807075:
case -1224924353:
case -2121967344:
case 1394405165:
case -2052814106:
case 1701289268:
case -1796535835:
case -1928802392:
case 581564040:
case 23048035:
case 2117376854:
case -1377881127:
case -504675202:
case 1906937290:
case -1616616027:
case -1799524201:
case 269396419:
case 69656641:
case -103880010:
case -1494913648:
return 1;
break;
}
return 0;
}

int func_1010(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5){
bool bVar0;
int iVar1;
bool bVar2;
int iVar3;
bVar0=false;
if(!func_332()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_91()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536674=1;
return 0;
}
if(Global_2695821){
if(iParam2==1067618600 || iParam2==-1303831698){
Global_4536675=1;
return 0;
}}}
bVar2=false;
iVar1=0;
while (iVar1 < 15){
if(Global_4535172[iVar1 /*85*/].f_66.f_2==0){
bVar2=true;
}elseif(Global_4535172[iVar1 /*85*/].f_66.f_5==1){
return 0;
}
iVar1++;
}
if(!bVar2){
return 0;
}
*iParam0=0;
if(!bVar0){
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE()){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}
if(bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, uParam3, uParam4)){
*iParam0=func_823(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
return 1;
}
return 0;
}

int func_1011(int iParam0){
char cVar0[64];
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE0_v0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE1_v0", 64);
break;
case 2:
StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE2_v0", 64);
break;
case 3:
StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE3_v0", 64);
break;
case 4:
StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE4_v0", 64);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}

int func_1012(int iParam0){
char cVar0[64];
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE0_v0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE1_v0", 64);
break;
case 2:
StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE2_v0", 64);
break;
case 3:
StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE3_v0", 64);
break;
case 4:
StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE4_v0", 64);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}


var func__1013(){
return Global_4536662;
}

int func_1014(int iParam0){
char cVar0[64];
switch (iParam0){
case 0:
StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE0_v0", 64);
break;
case 1:
StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE1_v0", 64);
break;
case 2:
StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE2_v0", 64);
break;
case 3:
StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE3_v0", 64);
break;
case 4:
StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE4_v0", 64);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
return -1;
}
return MISC::GET_HASH_KEY(&cVar0);
}


void func_1015(int iParam0){
int iVar0;
if(Global_262145.f_9036){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_1016() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_1016(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_1017(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar1=11;
iVar2=0;
iVar3=0;
iVar4=0;
if(Global_1648627==-1){
func_1028();
Global_1648627=0;
}
while (iVar3 < iVar1){
iVar2=(iVar2 + func_1026(iVar3));
iVar3++;
}
iVar4=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2 + 1);
iVar3=0;
while (iVar3 < iVar1){
if(iVar4 < func_1026(iVar3)){
iVar0=iVar3;
iVar3=(iVar1 - 1);
}
iVar4=(iVar4 - func_1026(iVar3));
iVar3++;
}
func_1025(iVar0);
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
iVar6=round((Global_262145.f_15561 * 100f));
if(((((iVar5 <=iVar6 && !func_1024()) && func_1023()) && func_1022(iVar0)) && !func_1021(func_1040(iVar0))) && func_1042() < 6){
Global_1949968=1;
if((func_1019(PLAYER::PLAYER_ID()) && func_276(PLAYER::PLAYER_ID())==167) && !bParam0){
}else{
func_1018(54);
}}else{
Global_1949968=0;
}
Global_1949813=NETWORK::GET_CLOUD_TIME_AS_INT();
Global_1949814=iVar0;
}


void func_1018(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2793046.f_5225.f_7[iVar0]), bVar1);
}


bool func_1019(bool bParam0){
return func_1020(func_276(bParam0));
}

int func_1020(int iParam0){
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}

int func_1021(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_1949815[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_1022(int iParam0){
if(((((iParam0==2 || iParam0==4) || iParam0==6) || iParam0==7) || iParam0==8) || iParam0==9){
return 1;
}
return 0;
}


bool func_1023(){
return Global_2851539[func_91()] >=Global_262145.f_15560;
}

int func_1024(){
return 0;
}


void func_1025(int iParam0){
Global_1648628[Global_1648627]=iParam0;
Global_1648627++;
if(Global_1648627 >=7){
Global_1648627=0;
}}

int func_1026(int iParam0){
if(func_1027(iParam0)){
return 0;
}
if(iParam0==0){
return 11;
}elseif(iParam0==1){
return 11;
}elseif(iParam0==2){
return 11;
}elseif(iParam0==3){
return 11;
}elseif(iParam0==4){
return 11;
}elseif(iParam0==5){
return 11;
}elseif(iParam0==6){
return 11;
}elseif(iParam0==7){
return 11;
}elseif(iParam0==8){
return 11;
}elseif(iParam0==9){
return 11;
}elseif(iParam0==10){
return 11;
}
return 0;
}

int func_1027(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 7){
if(Global_1648628[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_1028(){
int iVar0;
iVar0=0;
while (iVar0 < 7){
Global_1648628[iVar0]=-1;
iVar0++;
}}


void func_1029(int iParam0){
int iVar0;
int iVar1;
int iVar2[4];
int iVar3;
if(func_994(iParam0)){
iVar0=func_990(iParam0);
iVar1=0;
while (iVar1 < 4){
if(iVar1 < 3){
iVar2[iVar1]=MISC::GET_RANDOM_INT_IN_RANGE(1, 21);
if(func_1031(&iVar2, iVar2[iVar1], iVar1)){
if(iVar2[iVar1]==20){
iVar2[iVar1]=1;
}else{
iVar2[iVar1]++;
}
if(func_1031(&iVar2, iVar2[iVar1], iVar1)){
if(iVar2[iVar1]==20){
iVar2[iVar1]=1;
}
else{
iVar2[iVar1]++;
}
if(func_1031(&iVar2, iVar2[iVar1], iVar1)){
if(iVar2[iVar1]==20){
iVar2[iVar1]=1;
}else{
iVar2[iVar1]++;
}
}}}}else{
iVar3=func_1030(iParam0);
iVar2[iVar1]=(20 + iVar3);
}
iVar1++;
}
Global_1949971[iVar0]=iVar2[0];
Global_1949977[iVar0]=iVar2[1];
Global_1949983[iVar0]=iVar2[2];
Global_1949989[iVar0]=iVar2[3];
}}

int func_1030(int iParam0){
int iVar0;
iVar0=1;
while (iVar0 <=6){
if(func_993(iParam0, iVar0)){
return iVar0;
}
iVar0++;
}
return 0;
}

int func_1031(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(iVar0 !=iParam2 && (*iParam0)[iVar0]==iParam1){
return 1;
}
iVar0++;
}
return 0;
}


void func_1032(int iParam0){
switch (iParam0){
case 0:
if(!func_1034(7559, -1)){
func_1033(7559, 1, -1);
func_1033(7556, 1, -1);
}elseif(!func_1034(7560, -1)){
func_1033(7559, 1, -1);
func_1033(7560, 1, -1);
func_1033(7556, 1, -1);
func_1033(7557, 1, -1);
}else{
func_1033(7559, 1, -1);
func_1033(7560, 1, -1);
func_1033(7561, 1, -1);
func_1033(7556, 1, -1);
func_1033(7557, 1, -1);
func_1033(7558, 1, -1);
}
break;
case 1:
if(!func_1034(7589, -1)){
func_1033(7589, 1, -1);
}elseif(!func_1034(7590, -1)){
func_1033(7589, 1, -1);
func_1033(7590, 1, -1);
}else{
func_1033(7589, 1, -1);
func_1033(7590, 1, -1);
func_1033(7591, 1, -1);
}
break;
case 2:
if(!func_1034(7592, -1)){
func_1033(7592, 1, -1);
}elseif(!func_1034(7593, -1)){
func_1033(7592, 1, -1);
func_1033(7593, 1, -1);
}else{
func_1033(7592, 1, -1);
func_1033(7593, 1, -1);
func_1033(7594, 1, -1);
}
break;
case 3:
if(!func_1034(7577, -1)){
func_1033(7577, 1, -1);
}elseif(!func_1034(7578, -1)){
func_1033(7577, 1, -1);
func_1033(7578, 1, -1);
}else{
func_1033(7577, 1, -1);
func_1033(7578, 1, -1);
func_1033(7579, 1, -1);
}
break;
case 4:
if(!func_1034(7568, -1)){
func_1033(7568, 1, -1);
}elseif(!func_1034(7569, -1)){
func_1033(7568, 1, -1);
func_1033(7569, 1, -1);
}else{
func_1033(7568, 1, -1);
func_1033(7569, 1, -1);
func_1033(7570, 1, -1);
}
break;
case 5:
if(!func_1034(7583, -1)){
func_1033(7583, 1, -1);
func_1033(7580, 1, -1);
}elseif(!func_1034(7584, -1)){
func_1033(7583, 1, -1);
func_1033(7584, 1, -1);
func_1033(7580, 1, -1);
func_1033(7581, 1, -1);
}else{
func_1033(7583, 1, -1);
func_1033(7584, 1, -1);
func_1033(7585, 1, -1);
func_1033(7580, 1, -1);
func_1033(7581, 1, -1);
func_1033(7582, 1, -1);
}
break;
case 6:
if(!func_1034(7571, -1)){
func_1033(7571, 1, -1);
}elseif(!func_1034(7572, -1)){
func_1033(7571, 1, -1);
func_1033(7572, 1, -1);
}else{
func_1033(7571, 1, -1);
func_1033(7572, 1, -1);
func_1033(7573, 1, -1);
}
break;
case 7:
if(!func_1034(7574, -1)){
func_1033(7574, 1, -1);
func_1033(7565, 1, -1);
}elseif(!func_1034(7575, -1)){
func_1033(7574, 1, -1);
func_1033(7575, 1, -1);
func_1033(7565, 1, -1);
func_1033(7566, 1, -1);
}else{
func_1033(7574, 1, -1);
func_1033(7575, 1, -1);
func_1033(7576, 1, -1);
func_1033(7565, 1, -1);
func_1033(7566, 1, -1);
func_1033(7567, 1, -1);
}
break;
case 8:
if(!func_1034(7586, -1)){
func_1033(7586, 1, -1);
}elseif(!func_1034(7587, -1)){
func_1033(7586, 1, -1);
func_1033(7587, 1, -1);
}else{
func_1033(7586, 1, -1);
func_1033(7587, 1, -1);
func_1033(7588, 1, -1);
}
break;
case 9:
if(!func_1034(7562, -1)){
func_1033(7562, 1, -1);
}elseif(!func_1034(7563, -1)){
func_1033(7562, 1, -1);
func_1033(7563, 1, -1);
}else{
func_1033(7562, 1, -1);
func_1033(7563, 1, -1);
func_1033(7564, 1, -1);
}
break;
case 10:
if(!func_1034(7553, -1)){
func_1033(7553, 1, -1);
}elseif(!func_1034(7554, -1)){
func_1033(7553, 1, -1);
func_1033(7554, 1, -1);
}else{
func_1033(7553, 1, -1);
func_1033(7554, 1, -1);
func_1033(7555, 1, -1);
}
break;
}}


void func_1033(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_91();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


bool func_1034(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_91();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}


void func_1035(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam3 >=0 && iParam3 < 6){
iVar0=0;
while (iVar0 < iParam2){
Global_1949815[(iParam3 + iVar0)]=iParam1;
Global_1949822[(iParam3 + iVar0)]=iParam0;
func_1038(func_1039((iParam3 + iVar0)), Global_1949815[(iParam3 + iVar0)], -1);
func_1038(func_1037((iParam3 + iVar0)), Global_1949822[(iParam3 + iVar0)], -1);
iVar0++;
}
func_1036();
}}


void func_1036(){
func_853(3666, 0, -1, 1);
}

int func_1037(int iParam0){
if(iParam0==0){
return 7648;
}elseif(iParam0==1){
return 7649;
}elseif(iParam0==2){
return 7650;
}elseif(iParam0==3){
return 7651;
}elseif(iParam0==4){
return 7652;
}elseif(iParam0==5){
return 7653;
}
return 7648;
}


void func_1038(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_91();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_1039(int iParam0){
if(iParam0==0){
return 7642;
}elseif(iParam0==1){
return 7643;
}elseif(iParam0==2){
return 7644;
}elseif(iParam0==3){
return 7645;
}elseif(iParam0==4){
return 7646;
}elseif(iParam0==5){
return 7647;
}
return 7642;
}

int func_1040(int iParam0){
if(iParam0==2){
return 1;
}elseif(iParam0==4){
return 2;
}elseif(iParam0==6){
return 3;
}elseif(iParam0==7){
return 4;
}elseif(iParam0==8){
return 5;
}elseif(iParam0==9){
return 6;
}
return 0;
}


void func_1041(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_989(func_990(iParam0));
iVar1=func_255(iVar0, -1, 0);
iVar1=(iVar1 + iParam1);
func_852(iVar0, iVar1, -1, 1, 0);
}

int func_1042(){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 <=4){
iVar2=func_1043(iVar1);
if(iVar2 !=0){
iVar0=(iVar0 + func_988(iVar2));
}
iVar1++;
}
return iVar0;
}

int func_1043(int iParam0){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iParam0 /*3*/] !=0){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iParam0 /*3*/];
}
return 0;
}

int func_1044(int iParam0){
switch (iParam0){
case 0:
return 3644;
case 1:
return 3645;
case 2:
return 3646;
case 3:
return 3647;
case 4:
return 3648;
default:
}
return 14192;
}


void func_1045(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
int iVar10;
int iVar11;
if(bParam4){
iVar0=func_1059(iParam0);
while (iVar0 <=(iParam2 - 1)){
if(iVar0 < func_1058(iParam0)){
if(iVar2 < iParam3){
if(func_1056(func_1057(iParam0), iVar0)){
iVar3=func_1055(iParam5);
func_1053(iParam1, iVar0, func_1054(iVar3), 1, -1);
iVar2++;
}else{
iVar4=0;
while (iVar4 <=(iParam2 - 1)){
if(func_1056(func_1057(iParam0), iVar4)){
if(!func_1050(func_1051(func_1052(iParam1, iVar4, -1, -1)))){
iVar5=func_1052(iParam1, iVar4, -1, -1);
iVar6=func_1055(iParam5);
func_1053(iParam1, iVar4, func_1054(iVar6), 1, -1);
func_1053(iParam1, (iParam2 - 1), iVar5, 1, -1);
iVar2++;
return;
}}
iVar4++;
}}}else{
iVar7=0;
iVar8=func_1047(iParam0, iVar0, iParam5);
if(iVar0 > 0 && !func_1046(func_1057(iParam0), iVar0)){
while (iVar8==func_1051(func_1052(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10){
iVar8=func_1047(iParam0, iVar0, iParam5);
iVar7++;
}}
if(iVar8 !=0){
if(func_1052(iParam1, iVar0, -1, -1)==0){
func_1053(iParam1, iVar0, func_1054(iVar8), 1, -1);
}}}}
iVar0++;
}}else{
iVar0=iParam2;
while (iVar0 <=(func_1059(iParam0) - 1)){
if(iVar0 < func_1058(iParam0)){
if(iParam3 > 0){
iVar1=0;
while (iVar1 <=(func_1059(iParam0) - 1)){
if(func_1050(func_1051(func_1052(iParam1, iVar1, -1, -1)))){
if(!func_1050(func_1051(func_1052(iParam1, iVar0, -1, -1)))){
iVar10=func_1052(iParam1, iVar1, -1, -1);
func_1053(iParam1, iVar1, func_1052(iParam1, iVar0, -1, -1), 1, -1);
func_1053(iParam1, iVar0, iVar10, 1, -1);
}
}
iVar1++;
}}elseif(func_1050(func_1051(func_1052(iParam1, iVar0, -1, -1)))){
bVar9=false;
iVar1=0;
while (iVar1 <=5){
if(!bVar9){
if(iParam2 >=iVar1){
if(func_1056(func_1057(iParam0), iVar1)){
if(!func_1050(func_1051(func_1052(iParam1, iVar1, -1, -1)))){
iVar11=func_1052(iParam1, iVar1, -1, -1);
func_1053(iParam1, iVar1, func_1052(iParam1, iVar0, -1, -1), 1, -1);
func_1053(iParam1, iVar0, iVar11, 1, -1);
bVar9=true;
}}}
}
iVar1++;
}}}
iVar0++;
}
iVar0=iParam2;
while (iVar0 <=(func_1059(iParam0) - 1)){
if(iVar0 < func_1058(iParam0)){
func_1053(iParam1, iVar0, func_1054(0), 1, -1);
}
iVar0++;
}}
Global_1949945=0;
iVar0=0;
while (iVar0 <=2){
Global_1949941[iVar0]=0;
iVar0++;
}}

int func_1046(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 1:
return 0;
case 2:
if(((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109)){
return 1;
}
break;
}
return 0;
}

int func_1047(int iParam0, int iParam1, var uParam2){
int iVar0;
bool bVar1;
var uVar2;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(func_1046(func_1057(iParam0), iParam1)){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
}
bVar1=false;
if((iVar0==1 || iVar0==2) || iVar0==3){
bVar1=true;
}
uVar2=func_1049(func_1057(iParam0), iParam1);
return func_1048(uParam2, uVar2, bVar1);
}

int func_1048(var uParam0, var uParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
iVar1=uParam0;
iVar2=uParam1;
if(bParam2){
switch (iVar1){
case 0:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_closed_sc");
case 1:
return joaat("ex_prop_crate_closed_ms");
default:
}
break;
case 1:
return joaat("ex_prop_crate_closed_bc");
}
break;
case 1:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_closed_sc");
case 1:
return -1958;
default:
}
break;
case 1:
return joaat("ex_prop_crate_closed_bc");
}
break;
case 4:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_closed_sc");
case 1:
return joaat("ex_prop_crate_closed_mw");
default:
}
break;
case 1:
return joaat("ex_prop_crate_closed_bc");
}
break;
}}
switch (iVar1){
case 0:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_med_sc");
case 1:
return joaat("ex_prop_crate_biohazard_sc");
default:
}
break;
case 1:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_med_bc");
case 1:
return joaat("ex_prop_crate_biohazard_bc");
default:
}
break;
}
break;
case 1:
switch (iVar2){
case 0:
return joaat("ex_prop_crate_tob_sc");
case 1:
return joaat("ex_prop_crate_tob_bc");
default:
}
break;
case 2:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_art_sc");
case 1:
return joaat("ex_prop_crate_art_02_sc");
default:
}
break;
case 1:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_art_bc");
case 1:
return joaat("ex_prop_crate_art_02_bc");
default:
}
break;
}
break;
case 3:
switch (iVar2){
case 0:
return joaat("ex_prop_crate_elec_sc");
case 1:
return joaat("ex_prop_crate_elec_bc");
default:
}
break;
case 4:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_ammo_sc");
case 1:
return joaat("ex_prop_crate_expl_sc");
default:
}
break;
case 1:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_ammo_bc");
case 1:
return joaat("ex_prop_crate_expl_bc");
default:
}
break;
}
break;
case 5:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_narc_sc");
case 1:
return joaat("ex_prop_crate_pharma_sc");
case 2:
return joaat("ex_prop_crate_highend_pharma_sc");
default:
}
break;
case 1:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_narc_bc");
case 1:
return joaat("ex_prop_crate_pharma_bc");
case 2:
return joaat("ex_prop_crate_highend_pharma_bc");
default:
}
break;
}
break;
case 6:
switch (iVar2){
case 0:
return joaat("ex_prop_crate_gems_sc");
case 1:
return joaat("ex_prop_crate_gems_bc");
default:
}
break;
case 7:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_wlife_sc");
case 1:
return joaat("ex_prop_crate_furjacket_sc");
default:
}
break;
case 1:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_wlife_bc");
case 1:
return joaat("ex_prop_crate_furjacket_bc");
default:
}
break;
}
break;
case 8:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_money_sc");
case 1:
return joaat("ex_prop_crate_clothing_sc");
default:
}
break;
case 1:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_money_bc");
case 1:
return joaat("ex_prop_crate_clothing_bc");
default:
}
break;
}
break;
case 9:
switch (iVar2){
case 0:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_jewels_sc");
case 1:
return joaat("ex_prop_crate_jewels_racks_sc");
default:
}
break;
case 1:
switch (iVar0){
case 0:
return joaat("ex_prop_crate_jewels_bc");
case 1:
return joaat("ex_prop_crate_jewels_racks_bc");
default:
}
break;
}
break;
case 10:
switch (iVar2){
case 0:
return joaat("ex_prop_crate_bull_sc_02");
case 1:
return joaat("ex_prop_crate_bull_bc_02");
default:
}
break;
}
return 0;
}

int func_1049(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 1:
return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
case 2:
if(((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109)){
return 1;
}else{
return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
}
break;
}
return -1;
}

int func_1050(int iParam0){
switch (iParam0){
case joaat("ex_prop_crate_oegg"):
case joaat("ex_prop_crate_minig"):
case joaat("ex_prop_crate_xldiam"):
case joaat("ex_prop_crate_shide"):
case joaat("ex_prop_crate_freel"):
case joaat("ex_prop_crate_watch"):
return 1;
default:
}
return 0;
}

int func_1051(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return joaat("ex_prop_crate_closed_sc");
case 2:
return joaat("ex_prop_crate_med_sc");
case 3:
return joaat("ex_prop_crate_tob_sc");
case 4:
return joaat("ex_prop_crate_art_sc");
case 5:
return joaat("ex_prop_crate_elec_sc");
case 6:
return joaat("ex_prop_crate_ammo_sc");
case 7:
return joaat("ex_prop_crate_narc_sc");
case 8:
return joaat("ex_prop_crate_gems_sc");
case 9:
return joaat("ex_prop_crate_wlife_sc");
case 10:
return joaat("ex_prop_crate_jewels_sc");
case 11:
return joaat("ex_prop_crate_bull_sc_02");
case 12:
return joaat("ex_prop_crate_closed_bc");
case 13:
return joaat("ex_prop_crate_med_bc");
case 14:
return joaat("ex_prop_crate_tob_bc");
case 15:
return joaat("ex_prop_crate_art_bc");
case 16:
return joaat("ex_prop_crate_elec_bc");
case 17:
return joaat("ex_prop_crate_ammo_bc");
case 18:
return joaat("ex_prop_crate_narc_bc");
case 19:
return joaat("ex_prop_crate_gems_bc");
case 20:
return joaat("ex_prop_crate_wlife_bc");
case 21:
return joaat("ex_prop_crate_jewels_bc");
case 22:
return joaat("ex_prop_crate_bull_bc_02");
case 23:
return joaat("ex_prop_crate_oegg");
case 24:
return joaat("ex_prop_crate_minig");
case 25:
return joaat("ex_prop_crate_xldiam");
case 26:
return joaat("ex_prop_crate_shide");
case 27:
return joaat("ex_prop_crate_freel");
case 28:
return joaat("ex_prop_crate_watch");
case 29:
return joaat("ex_prop_crate_expl_sc");
case 30:
return joaat("ex_prop_crate_expl_bc");
case 31:
return joaat("ex_prop_crate_jewels_racks_sc");
case 32:
return joaat("ex_prop_crate_jewels_racks_bc");
case 33:
return joaat("ex_prop_crate_furjacket_sc");
case 34:
return joaat("ex_prop_crate_furjacket_bc");
case 35:
return joaat("ex_prop_crate_pharma_sc");
case 36:
return joaat("ex_prop_crate_pharma_bc");
case 37:
return joaat("ex_prop_crate_highend_pharma_sc");
case 38:
return joaat("ex_prop_crate_highend_pharma_bc");
case 39:
return joaat("ex_prop_crate_biohazard_sc");
case 40:
return joaat("ex_prop_crate_biohazard_bc");
case 41:
return joaat("ex_prop_crate_clothing_sc");
case 42:
return joaat("ex_prop_crate_clothing_bc");
case 43:
return joaat("ex_prop_crate_money_sc");
case 44:
return joaat("ex_prop_crate_money_bc");
case 45:
return joaat("ex_prop_crate_closed_ms");
case 46:
return -1958;
case 47:
return joaat("ex_prop_crate_closed_mw");
case 48:
return joaat("ex_prop_crate_art_02_bc");
case 49:
return joaat("ex_prop_crate_art_02_sc");
default:
}
return 0;
}

int func_1052(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
char cVar2[64];
int iVar3;
int iVar4;
switch (iParam0){
case 0:
break;
case 1:
iParam1 +=111;
break;
case 2:
iParam1 +=222;
break;
case 3:
iParam1 +=333;
break;
case 4:
iParam1 +=444;
break;
}
iVar0=0;
iVar1=func_91();
if(iParam3 > -1){
iVar1=iParam3;
}
StringCopy(&cVar2, "MP", 64);
StringIntConCat(&cVar2, iVar1, 64);
StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
StringIntConCat(&cVar2, (iParam1 / 8), 64);
iVar3=MISC::GET_HASH_KEY(&cVar2);
iVar4=(8 * (iParam1 % 8));
if(0 !=iVar3){
if(!STATS::STAT_GET_MASKED_INT(iVar3, &iVar0, iVar4, 8, iParam2)){
iVar0=0;
}}
return iVar0;
}


var func__1053(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
var uVar0;
int iVar1;
char cVar2[64];
int iVar3;
int iVar4;
switch (iParam0){
case 0:
break;
case 1:
iParam1 +=111;
break;
case 2:
iParam1 +=222;
break;
case 3:
iParam1 +=333;
break;
case 4:
iParam1 +=444;
break;
}
iVar1=func_91();
if(iParam4 > -1){
iVar1=iParam4;
}
StringCopy(&cVar2, "MP", 64);
StringIntConCat(&cVar2, iVar1, 64);
StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
StringIntConCat(&cVar2, (iParam1 / 8), 64);
iVar3=MISC::GET_HASH_KEY(&cVar2);
iVar4=(8 * (iParam1 % 8));
if(iParam2 < 0){
iParam2=255;
}
if(0 !=iVar3){
uVar0=STATS::STAT_SET_MASKED_INT(iVar3, iParam2, iVar4, 8, iParam3);
}
return uVar0;
}

int func_1054(int iParam0){
switch (iParam0){
case 0:
return 0;
case joaat("ex_prop_crate_closed_sc"):
return 1;
case joaat("ex_prop_crate_med_sc"):
return 2;
case joaat("ex_prop_crate_tob_sc"):
return 3;
case joaat("ex_prop_crate_art_sc"):
return 4;
case joaat("ex_prop_crate_elec_sc"):
return 5;
case joaat("ex_prop_crate_ammo_sc"):
return 6;
case joaat("ex_prop_crate_narc_sc"):
return 7;
case joaat("ex_prop_crate_gems_sc"):
return 8;
case joaat("ex_prop_crate_wlife_sc"):
return 9;
case joaat("ex_prop_crate_jewels_sc"):
return 10;
case joaat("ex_prop_crate_bull_sc_02"):
return 11;
case joaat("ex_prop_crate_closed_bc"):
return 12;
case joaat("ex_prop_crate_med_bc"):
return 13;
case joaat("ex_prop_crate_tob_bc"):
return 14;
case joaat("ex_prop_crate_art_bc"):
return 15;
case joaat("ex_prop_crate_elec_bc"):
return 16;
case joaat("ex_prop_crate_ammo_bc"):
return 17;
case joaat("ex_prop_crate_narc_bc"):
return 18;
case joaat("ex_prop_crate_gems_bc"):
return 19;
case joaat("ex_prop_crate_wlife_bc"):
return 20;
case joaat("ex_prop_crate_jewels_bc"):
return 21;
case joaat("ex_prop_crate_bull_bc_02"):
return 22;
case joaat("ex_prop_crate_oegg"):
return 23;
case joaat("ex_prop_crate_minig"):
return 24;
case joaat("ex_prop_crate_xldiam"):
return 25;
case joaat("ex_prop_crate_shide"):
return 26;
case joaat("ex_prop_crate_freel"):
return 27;
case joaat("ex_prop_crate_watch"):
return 28;
case joaat("ex_prop_crate_expl_sc"):
return 29;
case joaat("ex_prop_crate_expl_bc"):
return 30;
case joaat("ex_prop_crate_jewels_racks_sc"):
return 31;
case joaat("ex_prop_crate_jewels_racks_bc"):
return 32;
case joaat("ex_prop_crate_furjacket_sc"):
return 33;
case joaat("ex_prop_crate_furjacket_bc"):
return 34;
case joaat("ex_prop_crate_pharma_sc"):
return 35;
case joaat("ex_prop_crate_pharma_bc"):
return 36;
case joaat("ex_prop_crate_highend_pharma_sc"):
return 37;
case joaat("ex_prop_crate_highend_pharma_bc"):
return 38;
case joaat("ex_prop_crate_biohazard_sc"):
return 39;
case joaat("ex_prop_crate_biohazard_bc"):
return 40;
case joaat("ex_prop_crate_clothing_sc"):
return 41;
case joaat("ex_prop_crate_clothing_bc"):
return 42;
case joaat("ex_prop_crate_money_sc"):
return 43;
case joaat("ex_prop_crate_money_bc"):
return 44;
case joaat("ex_prop_crate_closed_ms"):
return 45;
case joaat("ex_prop_crate_closed_rw"):
return 46;
case joaat("ex_prop_crate_closed_mw"):
return 47;
case joaat("ex_prop_crate_art_02_bc"):
return 48;
case joaat("ex_prop_crate_art_02_sc"):
return 49;
default:
}
return 0;
}

int func_1055(var uParam0){
int iVar0;
iVar0=uParam0;
switch (iVar0){
case 2:
return joaat("ex_prop_crate_oegg");
case 4:
return joaat("ex_prop_crate_minig");
case 6:
return joaat("ex_prop_crate_xldiam");
case 7:
return joaat("ex_prop_crate_shide");
case 8:
return joaat("ex_prop_crate_freel");
case 9:
return joaat("ex_prop_crate_watch");
default:
}
return 0;
}

int func_1056(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 1:
return 1;
case 2:
if((((((iParam1 < 7 || (iParam1 > 20 && iParam1 < 28)) || (iParam1 > 41 && iParam1 < 49)) || (iParam1 > 62 && iParam1 < 70)) || (iParam1 > 83 && iParam1 < 87)) || (iParam1 > 92 && iParam1 < 96)) || (iParam1 > 101 && iParam1 < 105)){
return 1;
}
break;
}
return 0;
}

int func_1057(int iParam0){
if(func_991(iParam0)){
switch (iParam0){
case 1:
case 2:
case 3:
case 4:
case 5:
case 9:
return 0;
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 21:
case 7:
return 1;
case 16:
case 17:
case 18:
case 19:
case 20:
case 22:
case 6:
case 8:
return 2;
}
default:
}
return 3;
}

int func_1058(int iParam0){
int iVar0;
if(func_991(iParam0)){
iVar0=func_1057(iParam0);
if(iVar0==0){
return 16;
}elseif(iVar0==1){
return 42;
}else{
return 111;
}}
return 0;
}

int func_1059(int iParam0){
int iVar0;
if(func_991(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(iParam0==Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/].f_1;
}
iVar0++;
}}
return 0;
}

int func_1060(int iParam0){
int iVar0;
int iVar1;
if(func_994(iParam0)){
iVar0=func_1059(iParam0);
iVar1=func_1057(iParam0);
if(iVar1==2){
return (111 - iVar0);
}elseif(iVar1==1){
return (42 - iVar0);
}else{
return (16 - iVar0);
}}
return 0;
}

int func_1061(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(func_1006(iVar0) !=2147483647){
if(func_821(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_1062(){
return Local_1334.f_1207.f_2.f_2;
}


void func_1063(int iParam0){
if(func_17(&uLocal_1312, iParam0)){}}

int func_1064(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < func_40()){
if(func_165(iVar0, 4)){
iVar1++;
}
iVar0++;
}
return iVar1;
}

int func_1065(){
return Local_1334.f_1207.f_2.f_5;
}


void func_1066(){
var uVar0;
if(Local_114.f_15 > -1 && func_13(&(Local_114.f_17), 10000, 0)){
func_1093();
}
func_1087();
func_1082();
func_1078();
func_1070();
if(!func_771(0) && func_769()){
uVar0=Local_198.f_1545.f_1[3 /*11*/].f_3;
func_1069(Local_198.f_1545.f_1[3 /*11*/], 0f, 0f, 0f, uVar0, uVar0, 1f, 12, 1045220557, 150);
}
func_1067();
}


void func_1067(){
if(Local_114.f_15 > -1){
if(AUDIO::HAS_SOUND_FINISHED(Local_114.f_16)){
AUDIO::STOP_SOUND(Local_114.f_16);
Local_114.f_16=-1;
func_1068(&(Local_114.f_16), "Bomb_Beep", func_936(Local_114.f_15), "Under_Water_Cargo_Sounds", 1, 0, 1);
}}elseif(Local_114.f_16 > -1){
AUDIO::STOP_SOUND(Local_114.f_16);
Local_114.f_16=-1;
}}

int func_1068(var uParam0, char* sParam1, struct<3> Param2, char* sParam3, int iParam4, int iParam5, int iParam6){
if(*uParam0==-1){
*uParam0=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_COORD(*uParam0, sParam1, Param2, sParam3, iParam4, iParam5, iParam6);
return 1;
}
return 0;
}


void func_1069(struct<3> Param0, struct<3> Param1, struct<3> Param2, int iParam3, float fParam4, int iParam5){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
HUD::GET_HUD_COLOUR(iParam3, &uVar0, &uVar1, &uVar2, &uVar3);
Param0.f_2=(Param0.f_2 - fParam4);
GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, Param1, Param2, uVar0, uVar1, uVar2, iParam5, 0, 0, 2, 0, 0, 0, 0);
}


void func_1070(){
int iVar0;
var uVar1;
int iVar2;
if(((func_22() >=6 && !func_973(8)) && Local_1334.f_1207.f_20==iLocal_1291) && func_1077(bLocal_1288, Local_1334.f_1228)==0){
iVar0=func_745(14);
Stack.Push(iVar0);
Call_Loc(Local_274.f_377.f_23);
if(StackVal){
uVar1=Local_1334.f_723[iVar0 /*8*/];
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uVar1)){
iVar2=NETWORK::NET_TO_VEH(iVar1);
if(ENTITY::DOES_ENTITY_EXIST(iVar2) && func_188(iVar2)){
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(Local_1334.f_723[iVar0 /*8*/], 5000, 1, 0);
if(func_713(iLocal_1292, 49) && func_694(37)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)){
TASK::TASK_ENTER_VEHICLE(iLocal_1290, iVar2, 20000, -1, 2f, 16, 0);
func_1063(8);
}
else{
func_1063(8);
func_1063(9);
}}}}}}
if(func_701()==7 && func_1076(0, iLocal_1292)){
if(!HUD::DOES_BLIP_EXIST(Local_114.f_32)){
Local_114.f_32=func_1074(Local_198.f_1545.f_1[3 /*11*/], 0);
func_1072(&(Local_114.f_32), 12);
}}elseif(func_701() > 7){
if(HUD::DOES_BLIP_EXIST(Local_114.f_32)){
HUD::REMOVE_BLIP(&(Local_114.f_32));
}}
if((func_701()==7 && func_713(iLocal_1292, 49)) && Local_1334.f_1207.f_20==iLocal_1291){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1243.f_2[0 /*7*/].f_1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1243.f_2[0 /*7*/].f_1) > 0.99f){
if(!func_713(iLocal_1292, 51)){
func_776(51);
}
if(!func_15(&(Local_114.f_28))){
func_1071(800);
func_14(&(Local_114.f_28), 1, 0);
}}}}

int func_1071(int iParam0){
func_155(40);
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(iParam0);
}}else{
return 1;
}
return 0;
}


void func_1072(var uParam0, int iParam1){
int iVar0;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
iVar0=func_1073(iParam1);
HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
}}

int func_1073(int iParam0){
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


var func__1074(struct<3> Param0, bool bParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_1075(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, bParam1);
return uVar0;
}


float func_1075(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


bool func_1076(int iParam0, int iParam1){
return func_142(&(Local_1347[iParam1 /*251*/].f_236), iParam0);
}

int func_1077(bool bParam0, struct<3> Param1){
int iVar0;
int iVar1;
struct<3> Var2;
if(bParam0 !=func_66()){
iVar0=0;
while (iVar0 < 5){
if(func_530(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar0 /*2*/]) && func_534(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar0 /*2*/])){
Var2={
func_532(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar0 /*2*/]) 
};
if(func_511(Var2, Param1)){
iVar1++;
}}
iVar0++;
}}
return iVar1;
}


void func_1078(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
int iVar3;
struct<3> Var4;
int iVar5;
if(func_22() !=5 || !func_736(1, iLocal_1292)){
return;
}
Var1={
0f, 0.05f, 0.025f 
};
Var2={
0.4f, 0.4f, 0.25f 
};
iVar3=1;
iVar5=150;
if(((!func_903(3) && !func_694(12)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_908[func_745(16) /*5*/])) && func_908(16, &iVar0)){
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(0), func_935(0), Var1) 
};
iVar5=func_1080(bLocal_1288, Var4, 0, 5f, 2f, 150);
func_1069(Var4, func_1079(0), Var2, iVar3, 0f, iVar5);
}
if(((!func_903(4) && !func_694(13)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_908[func_745(17) /*5*/])) && func_908(17, &iVar0)){
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(1), func_935(1), Var1) 
};
iVar5=func_1080(bLocal_1288, Var4, 0, 10f, 2f, 150);
func_1069(Var4, func_1079(1), Var2, iVar3, 0f, iVar5);
}
if(((!func_903(5) && !func_694(14)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_908[func_745(18) /*5*/])) && func_908(18, &iVar0)){
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(2), func_935(2), Var1) 
};
iVar5=func_1080(bLocal_1288, Var4, 0, 10f, 2f, 150);
func_1069(Var4, func_1079(2), Var2, iVar3, 0f, iVar5);
}
if(((!func_903(6) && !func_694(15)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_908[func_745(19) /*5*/])) && func_908(19, &iVar0)){
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(3), func_935(3), Var1) 
};
iVar5=func_1080(bLocal_1288, Var4, 0, 10f, 2f, 150);
func_1069(Var4, func_1079(3), Var2, iVar3, 0f, iVar5);
}
if(((!func_903(7) && !func_694(16)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_908[func_745(20) /*5*/])) && func_908(20, &iVar0)){
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_936(4), func_935(4), Var1) 
};
iVar5=func_1080(bLocal_1288, Var4, 0, 10f, 2f, 150);
func_1069(Var4, func_1079(4), Var2, iVar3, 0f, iVar5);
}}


Vector3 func__1079(int iParam0){
switch (func_565()){
case 3:
switch (iParam0){
case 0:
return -60f, 75f, 0f;
case 1:
return -140f, 80f, 0f;
case 2:
return 60f, 90f, 0f;
case 3:
return -270f, 90f, 0f;
case 4:
return -120f, 90f, 0f;
default:
}
break;
case 4:
switch (iParam0){
case 0:
return 60f, 90f, 0f;
case 1:
return -285f, 110f, 0f;
case 2:
return 160f, 90f, 0f;
case 3:
return -230f, 90f, 0f;
case 4:
return -230f, 80f, 0f;
default:
}
break;
case 5:
switch (iParam0){
case 0:
return -100f, 90f, 0f;
case 1:
return -110f, 90f, 0f;
case 2:
return -100f, 90f, 0f;
case 3:
return -130f, 110f, 0f;
case 4:
return -130f, 90f, 0f;
default:
}
break;
}
return 0f, 0f, 0f;
}

int func_1080(bool bParam0, struct<3> Param1, int iParam2, float fParam3, float fParam4, int iParam5){
float fVar0;
fVar0=func_1081(bParam0, Param1, fParam4, fParam3);
return (round((to_float((iParam5 - iParam2)) * fVar0)) + iParam2);
}


float func_1081(bool bParam0, struct<3> Param1, float fParam2, float fParam3){
float fVar0;
struct<3> Var1;
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0) 
};
fVar0=vmag(Var1 - Param1);
if(fVar0 < fParam2){
fVar0=fParam2;
}
if(fVar0 > fParam3){
fVar0=fParam3;
}
fVar0=((fVar0 - fParam2) / (fParam3 - fParam2));
fVar0=(fVar0 - 1f);
fVar0=(fVar0 * -1f);
return fVar0;
}


void func_1082(){
int iVar0;
struct<3> Var1;
if((((func_807(0) && func_1084(0, &Var1)) && func_723(iLocal_1290, Var1, 1) < 1.25f) && func_908(32, &iVar0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1290, iVar0, 287)){
func_1083(0);
}
if((((func_807(1) && func_1084(1, &Var1)) && func_723(iLocal_1290, Var1, 1) < 1.25f) && func_908(33, &iVar0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1290, iVar0, 287)){
func_1083(1);
}
if((((func_807(2) && func_1084(2, &Var1)) && func_723(iLocal_1290, Var1, 1) < 1.25f) && func_908(34, &iVar0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1290, iVar0, 287)){
func_1083(2);
}}


void func_1083(int iParam0){
switch (iParam0){
case 0:
func_776(10);
break;
case 1:
func_776(11);
break;
case 2:
func_776(12);
break;
}}

int func_1084(int iParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
switch (iParam0){
case 0:
iVar0=func_745(32);
break;
case 1:
iVar0=func_745(33);
break;
case 2:
iVar0=func_745(34);
break;
}
if(iVar0 !=-1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1334.f_908[iVar0 /*5*/])){
iVar1=NETWORK::NET_TO_ENT(Local_1334.f_908[iVar0 /*5*/]);
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
iVar2=Local_1334.f_1207.f_16[iParam0];
*uParam1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_905(iVar2), func_1086(iVar2), func_1085(iVar2)) 
};
return 1;
}}
return 0;
}


Vector3 func__1085(int iParam0){
switch (iParam0){
case 0:
return MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), -0.25f, 0.56f;
case 1:
return -0.27f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f), 1.64f;
case 2:
return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.21f, 0.55f), -0.02f, 0.67f;
case 3:
return MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.9f, 0.9f), -0.52f, 0.37f;
case 4:
return 0.57f, -0.17f, 1.44f;
default:
}
return -0.9f, -1.35f, 0.2f;
}


float func_1086(int iParam0){
switch (iParam0){
case 0:
return func_795(4);
case 1:
return func_795(5);
case 2:
return func_795(6);
case 3:
return func_795(7);
case 4:
return func_795(8);
default:
}
return 0f;
}


void func_1087(){
STREAMING::REQUEST_ANIM_DICT("anim@scripted@player@mission@tunf_train_ig1_container_p1@male@");
if(func_694(3) && !func_713(iLocal_1292, 14)){
func_1088(0);
}elseif(func_694(4) && !func_713(iLocal_1292, 15)){
func_1088(1);
}elseif(func_694(5) && !func_713(iLocal_1292, 16)){
func_1088(2);
}elseif(func_694(6) && !func_713(iLocal_1292, 17)){
func_1088(3);
}elseif(func_694(7) && !func_713(iLocal_1292, 18)){
func_1088(4);
}}


void func_1088(int iParam0){
int iVar0;
int iVar1;
var uVar2;
if((func_922(iParam0, &iVar0) && func_1092(iLocal_1290, iVar0, 1) < 2f) && ENTITY::GET_ENTITY_CAN_BE_DAMAGED(iLocal_1290)){
ENTITY::SET_ENTITY_HEALTH(iLocal_1290, func_1091(iParam0, (ENTITY::GET_ENTITY_HEALTH(iLocal_1290) - (ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_1290) / 2)) + 50), iVar0);
}
if(((STREAMING::HAS_ANIM_DICT_LOADED("anim@scripted@player@mission@tunf_train_ig1_container_p1@male@") && func_1090(iParam0, &iVar1)) && func_1089(iParam0, &uVar2)) && func_800(Local_1334.f_908[iVar1 /*5*/])){
ENTITY::PLAY_ENTITY_ANIM(uVar2, "action_container", "anim@scripted@player@mission@tunf_train_ig1_container_p1@male@", 8f, 0, 1, 0, 1f, 0);
}
switch (iParam0){
case 0:
func_776(14);
break;
case 1:
func_776(15);
break;
case 2:
func_776(16);
break;
case 3:
func_776(17);
break;
case 4:
func_776(18);
break;
}}

int func_1089(int iParam0, var uParam1){
switch (iParam0){
case 0:
return func_908(4, uParam1);
case 1:
return func_908(5, uParam1);
case 2:
return func_908(6, uParam1);
case 3:
return func_908(7, uParam1);
case 4:
return func_908(8, uParam1);
default:
}
return 0;
}

int func_1090(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1=func_745(4);
return 1;
case 1:
*uParam1=func_745(5);
return 1;
case 2:
*uParam1=func_745(6);
return 1;
case 3:
*uParam1=func_745(7);
return 1;
case 4:
*uParam1=func_745(8);
return 1;
default:
}
*uParam1=-1;
return 0;
}

int func_1091(int iParam0, int iParam1){
if(iParam0 > iParam1){
return iParam0;
}elseif(iParam1 > iParam0){
return iParam1;
}
return iParam0;
}


float func_1092(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}else{
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}


void func_1093(){
int iVar0;
var uVar1;
var uVar2;
struct<3> Var3;
iVar0=Local_114.f_15;
if(func_1095(iVar0, &uVar1, &uVar2)){
Var3={
func_1094(iVar0) 
};
FIRE::ADD_EXPLOSION(Var3, 58, 0.5f, 1, 1, 1f, 1);
if(STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xm_submarine")){
GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xm_submarine");
if(GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("exp_underwater_mine", Var3, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0)){
}}
func_879(3, iVar0);
switch (iVar0){
case 0:
func_776(5);
break;
case 1:
func_776(6);
break;
case 2:
func_776(7);
break;
case 3:
func_776(8);
break;
case 4:
func_776(9);
break;
}}
Local_114.f_15=-1;
}


Vector3 func__1094(int iParam0){
switch (func_565()){
case 3:
switch (iParam0){
case 0:
return -889.3368f, 6613.08f, -32.7787f;
case 1:
return -911.3469f, 6642.394f, -32.3627f;
case 2:
return -943.5456f, 6661.073f, -24.7404f;
case 3:
return -991.3332f, 6721.854f, -43.6796f;
case 4:
return -1032.918f, 6723.631f, -87.794f;
default:
}
break;
case 4:
switch (iParam0){
case 0:
return 3121.13f, -214.6268f, -24.5869f;
case 1:
return 3141.291f, -243.8573f, -26.0447f;
case 2:
return 3152.108f, -318.8211f, -25.0715f;
case 3:
return 3175.828f, -362.0913f, -29.5461f;
case 4:
return 3133.189f, -385.3009f, -21.886f;
default:
}
break;
case 5:
switch (iParam0){
case 0:
return -2826.548f, -386.7751f, -39.442f;
case 1:
return -2832.813f, -464.5189f, -18.906f;
case 2:
return -2836.979f, -614.4651f, -58.596f;
case 3:
return -2761.65f, -580.4293f, -46.6093f;
case 4:
return -2781.574f, -479.0222f, -50.84f;
default:
}
break;
}
return 0f, 0f, 0f;
}

int func_1095(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 0:
*uParam2=3;
return func_908(4, uParam1);
case 1:
*uParam2=4;
return func_908(5, uParam1);
case 2:
*uParam2=5;
return func_908(6, uParam1);
case 3:
*uParam2=6;
return func_908(7, uParam1);
case 4:
*uParam2=7;
return func_908(8, uParam1);
default:
}
return 0;
}


void func_1096(){
if(((!func_694(11) && func_694(8)) && func_694(9)) && func_694(10)){
func_925(11);
}}

int func_1097(){
return func_1098((20 - func_255(2048, -1, 0)), 20);
}

int func_1098(int iParam0, int iParam1){
if(iParam0 < iParam1){
return iParam0;
}elseif(iParam1 < iParam0){
return iParam1;
}
return iParam0;
}


bool func_1099(){
return func_736(2, iLocal_1292);
}


var func__1100(){
return Local_198.f_688.f_1[MISC::GET_RANDOM_INT_IN_RANGE(func_745(21), func_745(28) + 1) /*15*/].f_3;
}


bool func_1101(){
return (func_22() >=5 && func_1102(ENTITY::GET_ENTITY_COORDS(iLocal_1290, 1), Local_198.f_1545.f_1[2 /*11*/]) < 200f);
}


float func_1102(struct<3> Param0, struct<3> Param1){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1);
}


bool func_1103(){
return (((func_22() < 7 && !func_713(iLocal_1292, 50)) && func_713(iLocal_1292, 3)) && !func_1104(iLocal_1290));
}

int func_1104(int iParam0){
int iVar0;
int iVar1;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5);
iVar1=-1;
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("mp_m_freemode_01"):
if((iVar0 >=1 && iVar0 <=19) || (iVar0 >=21 && iVar0 <=29)){
return 1;
}
iVar1=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("parachute"), 0)){
return 1;
}
break;
case joaat("mp_f_freemode_01"):
if((iVar0 >=1 && iVar0 <=19) || (iVar0 >=21 && iVar0 <=29)){
return 1;
}
iVar1=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("parachute"), 0)){
return 1;
}
break;
}
return 0;
}


void func_1105(){
func_1106();
STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_xm_submarine");
MISC::ENABLE_DISPATCH_SERVICE(5, 1);
MISC::ENABLE_DISPATCH_SERVICE(3, 1);
}


void func_1106(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 5){
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_114.f_22[iVar0], 0, 0);
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_114.f_22[iVar0]));
iVar0++;
}
STREAMING::REMOVE_ANIM_DICT("anim@scripted@player@mission@tunf_train_ig1_container_p1@male@");
}


void func_1107(){
func_1122();
func_1119();
func_1117();
func_1116();
func_1115();
func_1113();
func_1112();
func_1109();
func_1108();
STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xm_submarine");
}


void func_1108(){
Local_198.f_1531.f_10=3000;
}


void func_1109(){
int iVar0;
iVar0=0;
while (iVar0 < Local_198.f_1645){
if(func_116(iVar0, 5)){
func_1110(iVar0, 1);
}
iVar0++;
}
Local_198.f_103.f_548[0 /*6*/].f_1[0]=0;
Local_198.f_103.f_548[1 /*6*/].f_1[0]=1;
func_1110(1, 0);
func_1110(2, 7);
}


void func_1110(int iParam0, int iParam1){
func_1111(&(Local_198.f_1645.f_1[iParam0 /*9*/]), iParam0, iParam1);
}


void func_1111(var uParam0, int iParam1, var uParam2){
if(func_17(uParam0, uParam2)){}}


void func_1112(){
Local_198.f_2195[0 /*6*/].f_1="EXEC_BH_1";
Local_198.f_2195[0 /*6*/]=4;
Local_198.f_2195[0 /*6*/].f_2=3;
Local_198.f_2195[0 /*6*/].f_3=12;
Local_198.f_2195[1 /*6*/].f_1="EXEC_BH_2";
Local_198.f_2195[1 /*6*/]=2;
Local_198.f_2195[1 /*6*/].f_2=10000;
Local_198.f_2195[1 /*6*/].f_3=13;
}


void func_1113(){
Local_198.f_2127=1;
Local_198.f_2127.f_1[0 /*33*/].f_24=1;
Local_198.f_2127.f_1[0 /*33*/].f_2=0;
Local_198.f_2127.f_1[0 /*33*/].f_7="anim@door_trans@hinge_l@";
Local_198.f_2127.f_1[0 /*33*/].f_9="walk_cam_left";
Local_198.f_2127.f_1[0 /*33*/].f_25[0 /*7*/].f_4="walk_player1";
switch (func_565()){
case 3:
Local_198.f_2127.f_1[0 /*33*/].f_6=215.0015f;
break;
case 4:
Local_198.f_2127.f_1[0 /*33*/].f_6=131.0343f;
break;
case 5:
Local_198.f_2127.f_1[0 /*33*/].f_6=270.1122f;
break;
}
Local_198.f_2127.f_1[0 /*33*/].f_3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_198.f_1545.f_1[3 /*11*/], Local_198.f_2127.f_1[0 /*33*/].f_6, -0.75f, 0f, 1.5f) 
};
func_1114(0, 2);
func_1114(0, 3);
func_1114(0, 5);
}


void func_1114(int iParam0, int iParam1){
if(func_17(&(Local_198.f_2127.f_1[iParam0 /*33*/]), iParam1)){}}


void func_1115(){
}


void func_1116(){
Local_198.f_1545.f_1[3 /*11*/].f_3=1f;
}


void func_1117(){
int iVar0;
Local_198.f_1941=8;
iVar0=0;
iVar0=0;
while (iVar0 < Local_198.f_1941){
Local_198.f_1941.f_1[iVar0 /*23*/].f_3={
func_966(iVar0) 
};
Local_198.f_1941.f_1[iVar0 /*23*/].f_16=1;
switch (iVar0){
case 0:
Local_198.f_1941.f_1[iVar0 /*23*/].f_2=2;
Local_198.f_1941.f_1[iVar0 /*23*/].f_8.f_1=9;
Local_198.f_1941.f_1[iVar0 /*23*/].f_16.f_2=-1.5f;
func_1118(iVar0, 14);
func_1118(iVar0, 0);
break;
case 1:
Local_198.f_1941.f_1[iVar0 /*23*/].f_2=2;
Local_198.f_1941.f_1[iVar0 /*23*/].f_8.f_1=18;
func_1118(iVar0, 14);
func_1118(iVar0, 12);
func_1118(iVar0, 0);
break;
case 2:
Local_198.f_1941.f_1[iVar0 /*23*/].f_2=3;
Local_198.f_1941.f_1[iVar0 /*23*/].f_8.f_1=18;
Local_198.f_1941.f_1[iVar0 /*23*/].f_16.f_2=-2f;
Local_198.f_1941.f_1[iVar0 /*23*/].f_6=2f;
func_1118(iVar0, 15);
func_1118(iVar0, 12);
func_920(iVar0, 20);
func_1118(iVar0, 14);
func_1118(iVar0, 5);
break;
case 3:
case 4:
case 5:
case 6:
case 7:
Local_198.f_1941.f_1[iVar0 /*23*/].f_2=3;
Local_198.f_1941.f_1[iVar0 /*23*/].f_8.f_1=18;
Local_198.f_1941.f_1[iVar0 /*23*/].f_6=1f;
break;
default:
Local_198.f_1941.f_1[iVar0 /*23*/].f_2=2;
Local_198.f_1941.f_1[iVar0 /*23*/].f_8.f_1=18;
func_1118(iVar0, 15);
break;
}
iVar0++;
}}


void func_1118(int iParam0, int iParam1){
if(func_17(&(Local_198.f_1941.f_1[iParam0 /*23*/]), iParam1)){}}


void func_1119(){
int iVar0;
int iVar1;
iVar0=func_745(14);
func_1121(iVar0, 30);
func_1121(iVar0, 28);
func_1120(iVar0, 3);
func_1120(iVar0, 35);
Local_198.f_688.f_1[func_745(29) /*15*/].f_3=joaat("dinghy3");
Local_198.f_688.f_1[func_745(30) /*15*/].f_3=joaat("dinghy3");
iVar1=0;
while (iVar1 < 23){
if(Local_198.f_688.f_1[iVar1 /*15*/].f_3==joaat("dinghy")){
Local_198.f_688.f_1[iVar1 /*15*/].f_3=joaat("dinghy3");
}
iVar1++;
}}


void func_1120(int iParam0, int iParam1){
if(func_17(&(Local_198.f_688.f_1[iParam0 /*15*/]), iParam1)){}}


void func_1121(int iParam0, int iParam1){
if(func_125(&(Local_198.f_688.f_1[iParam0 /*15*/]), iParam1)){}}


void func_1122(){
int iVar0;
var uVar1;
int iVar2;
func_1131(func_745(3), 10);
iVar0=func_745(1);
Local_198.f_1036.f_374[0 /*6*/]=iVar0;
Local_198.f_1036.f_374[0 /*6*/].f_1=2;
Local_198.f_1036.f_374[0 /*6*/].f_2=func_745(0);
Local_198.f_1036.f_374[0 /*6*/].f_3={
-0.35f, -2.35f, -0.16f 
};
Local_198.f_1036.f_1[iVar0 /*12*/].f_8={
0f, 0f, 30f 
};
iVar0=func_745(2);
Local_198.f_1036.f_374[1 /*6*/]=iVar0;
Local_198.f_1036.f_374[1 /*6*/].f_1=2;
Local_198.f_1036.f_374[1 /*6*/].f_2=func_745(0);
Local_198.f_1036.f_374[1 /*6*/].f_3={
0.29f, -2.15f, -0.16f 
};
Local_198.f_1036.f_1[iVar0 /*12*/].f_8={
0f, 0f, 140f 
};
func_1128(func_745(4), func_745(9), 2);
func_1128(func_745(5), func_745(10), 3);
func_1128(func_745(6), func_745(11), 4);
func_1128(func_745(7), func_745(12), 5);
func_1128(func_745(8), func_745(13), 6);
if(bLocal_1286){
iVar2=0;
while (iVar2 < 3){
Local_1334.f_1207.f_16[iVar2]=-1;
Local_1334.f_1207.f_16[iVar2]=func_1127(&(Local_1334.f_1207.f_16), 3, 0, 5);
iVar2++;
}}
if(func_1090(Local_1334.f_1207.f_16[0], &uVar1)){
func_1124(0, func_745(32), Local_1334.f_1207.f_16[0], uVar1, 7);
}
if(func_1090(Local_1334.f_1207.f_16[1], &uVar1)){
func_1124(1, func_745(33), Local_1334.f_1207.f_16[1], uVar1, 8);
}
if(func_1090(Local_1334.f_1207.f_16[2], &uVar1)){
func_1124(2, func_745(34), Local_1334.f_1207.f_16[2], uVar1, 9);
}
func_1131(func_745(16), 3);
func_1131(func_745(16), 13);
func_1131(func_745(16), 2);
func_1131(func_745(17), 3);
func_1131(func_745(17), 13);
func_1131(func_745(17), 2);
func_1131(func_745(18), 3);
func_1131(func_745(18), 13);
func_1131(func_745(18), 2);
func_1131(func_745(19), 3);
func_1131(func_745(19), 13);
func_1131(func_745(19), 2);
func_1131(func_745(20), 3);
func_1131(func_745(20), 13);
func_1131(func_745(20), 2);
Local_198.f_1036.f_374[10 /*6*/]=func_745(35);
Local_198.f_1036.f_374[10 /*6*/].f_1=2;
Local_198.f_1036.f_374[10 /*6*/].f_2=func_745(14);
Local_198.f_1036.f_374[10 /*6*/].f_3={
0f, -2.38f, 0.1f 
};
Local_198.f_1036.f_1[func_745(35) /*12*/].f_8={
0f, 0f, 90f 
};
func_1131(func_745(35), 13);
func_1131(func_745(35), 3);
func_1131(func_745(35), 33);
func_1123(func_745(35), 31);
Local_198.f_1036.f_1[func_745(36) /*12*/].f_3=joaat("h4_p_h4_m_bag_var22_arm_s");
func_1131(func_745(36), 3);
func_1131(func_745(36), 13);
func_1131(func_745(36), 10);
func_1131(func_745(36), 2);
}


void func_1123(int iParam0, int iParam1){
if(func_125(&(Local_198.f_1036.f_1[iParam0 /*12*/]), iParam1)){}}


void func_1124(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4){
int iVar0;
iVar0=Local_1334.f_1207.f_16[iParam0];
Local_198.f_1036.f_1[iParam1 /*12*/].f_3=func_1126(iVar0);
Local_198.f_1036.f_1[iParam1 /*12*/].f_7=0f;
Local_198.f_1036.f_1[iParam1 /*12*/].f_8={
func_1125(iParam2) 
};
func_1131(iParam1, 8);
func_1131(iParam1, 30);
func_1131(iParam1, 16);
Local_198.f_1036.f_374[iParam4 /*6*/]=iParam1;
Local_198.f_1036.f_374[iParam4 /*6*/].f_1=3;
Local_198.f_1036.f_374[iParam4 /*6*/].f_2=uParam3;
Local_198.f_1036.f_374[iParam4 /*6*/].f_3={
func_1085(iVar0) 
};
}


Vector3 func__1125(int iParam0){
switch (func_565()){
case 3:
switch (iParam0){
case 4:
return 0f, 0f, 90f;
default:
}
break;
case 4:
switch (iParam0){
case 4:
return 0f, 0f, 90f;
default:
}
break;
case 5:
switch (iParam0){
case 4:
return 0f, 0f, 90f;
default:
}
break;
}
return 0f, 0f, 0f;
}

int func_1126(int iParam0){
switch (iParam0){
case 0:
return joaat("prop_security_case_01");
case 1:
return joaat("bkr_prop_biker_case_shut");
case 2:
return joaat("hei_prop_heist_thermite_case");
case 3:
return joaat("prop_idol_case_01");
case 4:
return joaat("prop_idol_case_02");
default:
}
return 0;
}

int func_1127(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=1;
iVar2=0;
while (iVar0 && iVar2 < 50){
iVar0=0;
iVar3=((MISC::GET_RANDOM_INT_IN_RANGE(0, 50000) % (iParam3 - iParam2)) + iParam2);
iVar1=0;
while (iVar1 <=(iParam1 - 1)){
if((*uParam0)[iVar1]==iVar3){
iVar0=1;
iVar1=999999;
}
iVar1++;
}
iVar2++;
}
if(iVar2==50){
return -1;
}
return iVar3;
}


void func_1128(int iParam0, int iParam1, int iParam2){
func_1131(iParam0, 8);
Local_198.f_1036.f_1[iParam1 /*12*/].f_7=0f;
Local_198.f_1036.f_1[iParam1 /*12*/].f_8={
func_1130(iParam1) 
};
func_1131(iParam1, 1);
func_1131(iParam1, 8);
Local_198.f_1036.f_374[iParam2 /*6*/]=iParam1;
Local_198.f_1036.f_374[iParam2 /*6*/].f_1=3;
Local_198.f_1036.f_374[iParam2 /*6*/].f_2=iParam0;
Local_198.f_1036.f_374[iParam2 /*6*/].f_3={
func_1129(iParam1) 
};
}


Vector3 func__1129(int iParam0){
switch (func_565()){
case 3:
if(iParam0==func_745(9)){
return 0f, 0.75f, 0f;
}elseif(iParam0==func_745(10)){
return 0f, 0.75f, 0.1f;
}elseif(iParam0==func_745(11)){
return 0f, 0.75f, -0.1f;
}elseif(iParam0==func_745(12)){
return 0f, 0.6f, 0.2f;
}elseif(iParam0==func_745(13)){
return 0f, 0.6f, 0.1f;
}
break;
case 4:
if(iParam0==func_745(9)){
return 0f, 0.75f, 0f;
}elseif(iParam0==func_745(10)){
return 0f, 0.75f, 0.1f;
}elseif(iParam0==func_745(11)){
return 0f, 0.75f, -0.1f;
}elseif(iParam0==func_745(12)){
return 0f, 0.6f, 0.2f;
}elseif(iParam0==func_745(13)){
return 0f, 0.6f, 0.1f;
}
break;
case 5:
if(iParam0==func_745(9)){
return 0f, 0.75f, 0f;
}elseif(iParam0==func_745(10)){
return 0f, 0.75f, 0.1f;
}elseif(iParam0==func_745(11)){
return 0f, 0.75f, -0.1f;
}elseif(iParam0==func_745(12)){
return 0f, 0.6f, 0.2f;
}elseif(iParam0==func_745(13)){
return 0f, 0.6f, 0.1f;
}
break;
}
return 0f, 0.75f, 0f;
}


Vector3 func__1130(int iParam0){
switch (func_565()){
case 3:
if(iParam0==func_745(9)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(10)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(11)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(12)){
return 0f, 0f, 90f;
}elseif(iParam0==func_745(13)){
return 0f, 0f, 0f;
}
break;
case 4:
if(iParam0==func_745(9)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(10)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(11)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(12)){
return 0f, 0f, 90f;
}elseif(iParam0==func_745(13)){
return 0f, 0f, 0f;
}
break;
case 5:
if(iParam0==func_745(9)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(10)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(11)){
return 0f, 0f, 0f;
}elseif(iParam0==func_745(12)){
return 0f, 0f, 90f;
}elseif(iParam0==func_745(13)){
return 0f, 0f, 0f;
}
break;
}
return 0f, 0f, 0f;
}


void func_1131(int iParam0, int iParam1){
if(func_17(&(Local_198.f_1036.f_1[iParam0 /*12*/]), iParam1)){}}

int func_1132(){
MISC::ENABLE_DISPATCH_SERVICE(5, 0);
MISC::ENABLE_DISPATCH_SERVICE(3, 0);
return 1;
}

int func_1133(){
Local_1334.f_1162=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
return 1;
}

int func_1134(){
return 1;
}


void func_1135(){
func_1185(0, 4, 226603);
func_1184(0, 1, 1);
func_1182(0, 12, 226452);
func_1185(1, 19, 226360);
func_1182(1, 2, 226339);
func_1182(1, 12, 226452);
func_1185(2, 19, 226322);
func_1182(2, 3, 226298);
func_1182(2, 6, 226277);
func_1182(2, 12, 226452);
func_1185(3, 4, 226200);
func_1184(3, 4, 4);
func_1182(3, 12, 226452);
func_1185(4, 4, 226164);
func_1184(4, 5, 5);
func_1182(4, 12, 226452);
func_1185(5, 19, 226109);
func_1184(5, 6, 6);
func_1182(5, 12, 226452);
func_1185(6, 4, 226073);
func_1182(6, 7, 226048);
func_1182(6, 8, 226027);
func_1182(6, 12, 226452);
func_1185(7, 21, 225760);
func_1184(7, 8, 7);
func_1184(7, 9, 8);
func_1182(7, 12, 226452);
func_1145(8, 9, 10, 11, 12, 225729, 225701, 225658, 225018, 1);
func_1185(12, 48, 223568);
}


void func_1136(){
if(func_1144()){
func_1137();
}}


void func_1137(){
if(!func_1143()){
return;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return;
}
func_1138();
}


void func_1138(){
func_1140();
func_1139(0);
}


void func_1139(bool bParam0){
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


void func_1140(){
if(!func_1142()){}
if(func_1143()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_1141();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_1141(){
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

int func_1142(){
if(!func_1143()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_1141();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_1143(){
if(Global_1574757==20){
return 0;
}
return 1;
}

int func_1144(){
if(!func_1143()){
return 0;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return 0;
}
return 1;
}


void func_1145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9){
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
func_1185(iVar0, 22, iParam5);
func_1182(iVar0, iParam4, 224876);
func_1146(iVar0, iVar1);
func_1146(iVar0, iVar4);
func_1146(iVar0, iVar5);
func_1146(iVar0, iVar2);
func_1185(iVar1, 24, iParam6);
func_1182(iVar1, iParam4, 224876);
func_1146(iVar1, iVar4);
func_1146(iVar1, iVar5);
func_1146(iVar1, iVar2);
func_1185(iVar2, 25, iParam7);
func_1182(iVar2, iParam4, 224876);
func_1146(iVar2, iVar1);
func_1146(iVar2, iVar4);
func_1146(iVar2, iVar5);
func_1185(iVar3, 23, iParam8);
func_1182(iVar3, iParam4, 224876);
func_1146(iVar3, iVar1);
func_1146(iVar3, iVar4);
func_1146(iVar3, iVar5);
func_1146(iVar3, iVar2);
}


void func_1146(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Local_277[iParam0 /*21*/].f_19;
uVar1=iParam1;
Local_277[iParam0 /*21*/].f_1[iVar0 /*3*/]=uVar1;
Local_277[iParam0 /*21*/].f_19++;
}

int func_1147(){
if(func_1148(0)){
return 1;
}
return 0;
}

int func_1148(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if(!func_1149(iVar0, bParam0)){
return 0;
}
iVar0++;
}
return 1;
}

int func_1149(int iParam0, bool bParam1){
if(func_165(iParam0, 4) || func_165(iParam0, 3)){
return 1;
}
if(bParam1){
if(func_977(iParam0, iLocal_1292, 6) || func_977(iParam0, iLocal_1292, 9)){
return 1;
}}
return 0;
}


void func_1150(){
struct<6> Var0;
Var0={
func_1158() 
};
func_1151("EXEC_OT_GT7", &Var0, func_1157(), 0);
}


void func_1151(char* sParam0, char* sParam1, int iParam2, bool bParam3){
if(func_1152(sParam0, sParam1, bParam3, iParam2)){
Global_1574757=19;
Global_1574757.f_56=iParam2;
}}

int func_1152(char* sParam0, char* sParam1, bool bParam2, var uParam3){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(func_1156(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
func_1138();
Global_1574757=3;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=uParam3;
Global_1574757.f_56=uParam3;
func_1155();
func_1154(bParam2);
func_1153();
return 1;
}


void func_1153(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_1154(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_1155(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


bool func_1156(char* sParam0, char* sParam1){
if(!func_1143()){
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

int func_1157(){
return 18;
}


struct<6> func_1158(){
if(func_597()){
return func_1160(func_1161());
}
return func_1159(func_1062());
}


struct<6> func_1159(int iParam0){
struct<6> Var0;
StringCopy(&Var0, "WH_CONTRATP_", 24);
StringIntConCat(&Var0, iParam0, 24);
return Var0;
}


struct<6> func_1160(int iParam0){
struct<6> Var0;
switch (iParam0){
case 1:
StringCopy(&Var0, "BYCB_EGG", 24);
break;
case 2:
StringCopy(&Var0, "BYCB_MGUN", 24);
break;
case 3:
StringCopy(&Var0, "BYCB_DMND", 24);
break;
case 4:
StringCopy(&Var0, "BYCB_SASHDE", 24);
break;
case 5:
StringCopy(&Var0, "BYCB_FREEL", 24);
break;
case 6:
StringCopy(&Var0, "BYCB_WATCH", 24);
break;
default:
StringCopy(&Var0, "CONTRASPECIAL", 24);
break;
}
return Var0;
}

int func_1161(){
return Local_1334.f_1207.f_2.f_4;
}


void func_1162(){
func_1163();
}


void func_1163(){
struct<6> Var0;
Var0={
func_1158() 
};
func_1151("EXEC_OT_HTDEL", &Var0, func_1157(), 0);
}


void func_1164(){
struct<6> Var0;
Var0={
func_1158() 
};
func_1151("EXEC_OT_GT6", &Var0, 1, 0);
}


void func_1165(){
struct<6> Var0;
Var0={
func_1158() 
};
func_1151("EXEC_OT_GT5", &Var0, func_1157(), 0);
}


void func_1166(){
if(func_1076(0, iLocal_1292)){
func_1167("EXEC_OT_GT4A", 0);
}elseif(func_1144()){
func_1137();
}}


void func_1167(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_1168(sParam0)){
return;
}
func_1138();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_1155();
func_1154(bParam1);
func_1153();
}


bool func_1168(char* sParam0){
if(!func_1143()){
return 0;
}
if(Global_1574757==11){
return func_1169(sParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_1169(char* sParam0){
if(!func_1143()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_1170(){
if(func_22() > 6){
return 1;
}
return 0;
}

int func_1171(){
if(func_713(iLocal_1292, 48)){
return 1;
}
return 0;
}


void func_1172(){
if(func_769()){
func_1167("EXEC_OT_GT4", 0);
}else{
func_1167("EXEC_OT_GT4A", 0);
}}


void func_1173(){
if(!func_736(1, iLocal_1292)){
func_1179();
}elseif(func_964()){
func_1167("EXEC_OT_INT5", 0);
}else{
func_1167("EXEC_OT_INT4", 0);
}}


void func_1174(){
if(!func_736(1, iLocal_1292)){
func_1179();
}else{
func_1167("EXEC_OT_GT3", 0);
}}


void func_1175(){
func_1167(func_1176(), 0);
}


char* func_1176(){
switch (func_565()){
case 3:
return "EXEC_OT_GT2_1";
case 4:
return "EXEC_OT_GT2_2";
case 5:
return "EXEC_OT_GT2_3";
default:
}
return "";
}

int func_1177(){
if(func_22() >=6){
return 1;
}
return 0;
}

int func_1178(){
if(func_736(1, iLocal_1292)){
return 1;
}
return 0;
}


void func_1179(){
func_1167("EXEC_OT_INT2", 0);
}

int func_1180(){
if(func_903(0)){
return 1;
}
return 0;
}


void func_1181(){
func_1167("EXEC_OT_INT1", 0);
}


void func_1182(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
iVar0=Local_277[iParam0 /*21*/].f_19;
uVar1=iParam1;
Local_277[iParam0 /*21*/].f_1[iVar0 /*3*/]=uVar1;
Local_277[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1=iParam2;
Local_277[iParam0 /*21*/].f_19++;
}

int func_1183(){
if(func_582()==3){
return 1;
}elseif(func_582() > 0){
return 1;
}
return 0;
}


void func_1184(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
var uVar2;
iVar0=Local_277[iParam0 /*21*/].f_19;
uVar1=iParam1;
uVar2=iParam2;
Local_277[iParam0 /*21*/].f_1[iVar0 /*3*/]=uVar1;
Local_277[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2=uVar2;
Local_277[iParam0 /*21*/].f_19++;
}


void func_1185(int iParam0, int iParam1, int iParam2){
Local_277[iParam0 /*21*/]=iParam1;
Local_277[iParam0 /*21*/].f_20=iParam2;
iLocal_1300++;
}


void func_1186(){
func_1167(func_1187(), 0);
}


char* func_1187(){
switch (func_565()){
case 3:
return "EXEC_OT_GT1_1";
case 4:
return "EXEC_OT_GT1_2";
case 5:
return "EXEC_OT_GT1_3";
default:
}
return "";
}


void func_1188(){
func_1195(0, 4);
func_1194(0, 1);
func_1193(0, 9, 226452);
func_1195(1, 19);
func_1193(1, 2, 226957);
func_1193(1, 9, 226452);
func_1195(2, 19);
func_1193(2, 3, 226936);
func_1193(2, 9, 226452);
func_1195(3, 4);
func_1194(3, 4);
func_1195(4, 4);
func_1194(4, 5);
func_1193(4, 9, 226452);
func_1195(5, 19);
func_1193(5, 6, 226914);
func_1193(5, 9, 226452);
func_1195(6, 4);
func_1193(6, 7, 226892);
func_1193(6, 9, 226452);
func_1195(7, 22);
func_1194(7, 8);
func_1195(8, 24);
func_1194(8, 9);
func_1195(9, 48);
}

int func_1189(){
if(func_694(36)){
return 1;
}
return 0;
}

int func_1190(){
if(func_694(11)){
return 1;
}
return 0;
}

int func_1191(){
if(func_903(1)){
return 1;
}
return 0;
}

int func_1192(){
if(func_903(0)){
return 1;
}
return 0;
}


void func_1193(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
iVar0=Local_276[iParam0 /*20*/].f_19;
uVar1=iParam1;
Local_276[iParam0 /*20*/].f_1[iVar0 /*3*/]=uVar1;
Local_276[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1=iParam2;
Local_276[iParam0 /*20*/].f_19++;
}


void func_1194(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Local_276[iParam0 /*20*/].f_19;
uVar1=iParam1;
Local_276[iParam0 /*20*/].f_1[iVar0 /*3*/]=uVar1;
Local_276[iParam0 /*20*/].f_19++;
}


void func_1195(int iParam0, int iParam1){
Local_276[iParam0 /*20*/]=iParam1;
iLocal_1299++;
}


void func_1196(){
Local_274.f_13=248062;
Local_274.f_11=247682;
Local_274.f_11.f_1=246660;
Local_274.f_624=246355;
Local_274.f_104.f_3=246187;
Local_274.f_104.f_3.f_1=246090;
Local_274.f_104.f_3.f_3=246078;
Local_274.f_104.f_3.f_2=246066;
Local_274.f_10=245644;
Local_274.f_592=245630;
Local_274.f_592.f_28=245546;
Local_274.f_592.f_28.f_2=245498;
Local_274.f_592.f_28.f_1=245428;
Local_274.f_592.f_1=245230;
Local_274.f_592.f_7=245139;
Local_274.f_592.f_2=245003;
Local_274.f_592.f_8=244992;
Local_274.f_592.f_12=244807;
Local_274.f_592.f_13=244711;
Local_274.f_592.f_9=244696;
Local_274.f_592.f_10=244618;
Local_274.f_658.f_11=244608;
Local_274.f_658.f_10=244596;
Local_274.f_658.f_13=244435;
Local_274.f_658.f_12=244409;
Local_274.f_658.f_9=244397;
Local_274.f_658.f_2=244388;
Local_274.f_642=244343;
Local_274.f_642.f_1=244261;
Local_274.f_53.f_2.f_1=244187;
Local_274.f_53.f_2.f_2=244113;
Local_274.f_2=243269;
Local_274.f_0=242679;
Local_274.f_1=242634;
Local_274.f_484=242594;
Local_274.f_484.f_1=242409;
Local_274.f_484.f_56.f_3=242377;
Local_274.f_484.f_56.f_2=242328;
Local_274.f_484.f_56=242242;
Local_274.f_484.f_56.f_1=242194;
Local_274.f_484.f_30=242090;
Local_274.f_484.f_30.f_9=242064;
Local_274.f_484.f_30.f_13=242019;
Local_274.f_484.f_16=241932;
Local_274.f_484.f_2=241812;
Local_274.f_484.f_3=241756;
Local_274.f_484.f_4=241680;
Local_274.f_484.f_53=241635;
Local_274.f_484.f_21=241502;
Local_274.f_484.f_10=241479;
Local_274.f_484.f_9=241392;
Local_274.f_484.f_11=241358;
Local_274.f_484.f_7=241330;
Local_274.f_484.f_22=241244;
Local_274.f_484.f_18=241201;
Local_274.f_687.f_2=241164;
Local_274.f_687.f_1=241143;
Local_274.f_3.f_1=240180;
Local_274.f_3.f_2.f_1=240168;
Local_274.f_3=239850;
Local_274.f_112.f_6=239830;
Local_274.f_124=239731;
Local_274.f_124.f_5=239701;
Local_274.f_124.f_13=239657;
Local_274.f_124.f_4=239629;
Local_274.f_124.f_32=239582;
Local_274.f_124.f_31=239530;
Local_274.f_166.f_187=239450;
Local_274.f_166.f_192=238568;
Local_274.f_166.f_1=238464;
Local_274.f_166=238364;
Local_274.f_166.f_142=238255;
Local_274.f_15.f_6=238239;
Local_274.f_15.f_6.f_3=238230;
Local_274.f_15.f_6.f_4=238221;
Local_274.f_15.f_6.f_2=238212;
Local_274.f_15.f_27=238188;
Local_274.f_692=237966;
Local_274.f_692.f_18=237849;
Local_274.f_692.f_18.f_15=237840;
Local_274.f_692.f_5=237776;
Local_274.f_692.f_3=237750;
Local_274.f_692.f_16=237712;
Local_274.f_692.f_2=237531;
Local_274.f_692.f_8=237485;
Local_274.f_692.f_15=237442;
Local_274.f_692.f_1=237335;
Local_274.f_692.f_12=237220;
Local_274.f_692.f_13=237042;
Local_274.f_432.f_23=236949;
Local_274.f_432.f_41=236923;
Local_274.f_432.f_35=236700;
Local_274.f_432.f_39=236638;
Local_274.f_432.f_38=236594;
Local_274.f_745=236570;
Local_274.f_745.f_2=236542;
Local_274.f_62.f_3=236530;
Local_274.f_62.f_4=236518;
Local_274.f_62.f_1=236506;
Local_274.f_562.f_1=236361;
Local_274.f_562.f_7=236352;
Local_274.f_562.f_4=236053;
Local_274.f_651.f_5=236043;
Local_274.f_651.f_6=235988;
Local_274.f_651.f_4=235914;
Local_274.f_635=235800;
Local_274.f_377.f_43=235551;
Local_274.f_377.f_45=235332;
Local_274.f_377.f_49=235225;
Local_274.f_377.f_44=228540;
Local_274.f_377.f_31=228440;
}

int func_1197(int iParam0, var uParam1){
if(iParam0==func_745(func_1198())){
if(func_903(1) || func_736(1, iLocal_1292)){
return 1;
}}
return 0;
}

int func_1198(){
switch (Local_1334.f_1207.f_10){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
default:
}
return 3;
}

int func_1199(int iParam0, var uParam1){
if(iParam0==func_745(3)){
uParam1->f_66=joaat("youga");
StringCopy(&(uParam1->f_1), "44RUK973", 16);
uParam1->f_5=4;
uParam1->f_6=90;
uParam1->f_7=111;
uParam1->f_8=112;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=1;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[5]=1;
uParam1->f_9[10]=1;
uParam1->f_9[48]=2;
return 1;
}elseif(iParam0==func_745(4)){
uParam1->f_66=joaat("youga");
StringCopy(&(uParam1->f_1), "86DUO860", 16);
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=0;
uParam1->f_8=112;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=1;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[5]=1;
uParam1->f_9[10]=1;
uParam1->f_9[48]=8;
return 1;
}elseif(iParam0==func_745(5)){
uParam1->f_66=joaat("youga");
StringCopy(&(uParam1->f_1), "78LJI764", 16);
uParam1->f_5=111;
uParam1->f_6=27;
uParam1->f_7=0;
uParam1->f_8=112;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=1;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[5]=1;
uParam1->f_9[10]=1;
uParam1->f_9[48]=4;
return 1;
}elseif(iParam0==func_745(6)){
switch (func_565()){
case 0:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "86CVG072", 16);
uParam1->f_5=28;
uParam1->f_6=28;
uParam1->f_7=28;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=3;
uParam1->f_9[1]=11;
uParam1->f_9[2]=2;
uParam1->f_9[4]=2;
uParam1->f_9[5]=1;
uParam1->f_9[6]=4;
uParam1->f_9[7]=8;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=2;
uParam1->f_9[29]=2;
uParam1->f_9[30]=1;
uParam1->f_9[31]=6;
uParam1->f_9[32]=3;
uParam1->f_9[33]=12;
uParam1->f_9[39]=3;
uParam1->f_9[40]=3;
uParam1->f_9[41]=1;
uParam1->f_9[44]=1;
uParam1->f_9[48]=5;
break;
case 1:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "86CVG072", 16);
uParam1->f_5=28;
uParam1->f_6=28;
uParam1->f_7=28;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=3;
uParam1->f_9[1]=11;
uParam1->f_9[2]=2;
uParam1->f_9[4]=2;
uParam1->f_9[5]=1;
uParam1->f_9[6]=4;
uParam1->f_9[7]=8;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=2;
uParam1->f_9[29]=2;
uParam1->f_9[30]=1;
uParam1->f_9[31]=6;
uParam1->f_9[32]=3;
uParam1->f_9[33]=12;
uParam1->f_9[39]=3;
uParam1->f_9[40]=3;
uParam1->f_9[41]=1;
uParam1->f_9[44]=1;
uParam1->f_9[48]=5;
break;
case 2:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "84TFX949", 16);
*uParam1=2;
uParam1->f_5=138;
uParam1->f_6=138;
uParam1->f_7=88;
uParam1->f_8=88;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_69=7;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=10;
uParam1->f_9[1]=12;
uParam1->f_9[2]=5;
uParam1->f_9[3]=3;
uParam1->f_9[4]=5;
uParam1->f_9[5]=4;
uParam1->f_9[6]=4;
uParam1->f_9[7]=10;
uParam1->f_9[8]=2;
uParam1->f_9[10]=5;
uParam1->f_9[15]=4;
uParam1->f_9[23]=17;
uParam1->f_9[27]=1;
uParam1->f_9[29]=4;
uParam1->f_9[30]=5;
uParam1->f_9[31]=7;
uParam1->f_9[32]=6;
uParam1->f_9[33]=16;
uParam1->f_9[48]=3;
break;
}
return 1;
}elseif(iParam0==func_745(7)){
switch (func_565()){
case 0:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "06NZQ185", 16);
uParam1->f_5=38;
uParam1->f_6=38;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=2;
uParam1->f_9[1]=3;
uParam1->f_9[3]=1;
uParam1->f_9[4]=2;
uParam1->f_9[6]=1;
uParam1->f_9[7]=4;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=26;
uParam1->f_9[29]=1;
uParam1->f_9[31]=3;
uParam1->f_9[32]=5;
uParam1->f_9[33]=13;
uParam1->f_9[39]=2;
uParam1->f_9[41]=6;
uParam1->f_9[48]=6;
break;
case 1:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "65GRZ071", 16);
uParam1->f_5=27;
uParam1->f_6=27;
uParam1->f_7=27;
uParam1->f_8=2;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=3;
uParam1->f_9[3]=2;
uParam1->f_9[4]=4;
uParam1->f_9[6]=1;
uParam1->f_9[7]=3;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=7;
uParam1->f_9[29]=1;
uParam1->f_9[31]=3;
uParam1->f_9[32]=5;
uParam1->f_9[33]=13;
uParam1->f_9[39]=4;
uParam1->f_9[41]=1;
uParam1->f_9[48]=3;
break;
case 2:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "68KWK927", 16);
uParam1->f_5=64;
uParam1->f_6=112;
uParam1->f_7=70;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=2;
uParam1->f_75=21;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 28);
MISC::SET_BIT(&(uParam1->f_77), 29);
MISC::SET_BIT(&(uParam1->f_77), 30);
MISC::SET_BIT(&(uParam1->f_77), 31);
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=1;
uParam1->f_9[1]=4;
uParam1->f_9[3]=4;
uParam1->f_9[4]=4;
uParam1->f_9[6]=2;
uParam1->f_9[7]=8;
uParam1->f_9[8]=1;
uParam1->f_9[15]=3;
uParam1->f_9[22]=1;
uParam1->f_9[23]=36;
uParam1->f_9[29]=2;
uParam1->f_9[31]=3;
uParam1->f_9[32]=12;
uParam1->f_9[33]=6;
uParam1->f_9[48]=2;
break;
}
return 1;
}elseif(iParam0==func_745(8)){
switch (func_565()){
case 0:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "84TFX949", 16);
*uParam1=2;
uParam1->f_5=138;
uParam1->f_6=138;
uParam1->f_7=88;
uParam1->f_8=88;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_69=7;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=10;
uParam1->f_9[1]=12;
uParam1->f_9[2]=5;
uParam1->f_9[3]=3;
uParam1->f_9[4]=5;
uParam1->f_9[5]=4;
uParam1->f_9[6]=4;
uParam1->f_9[7]=10;
uParam1->f_9[8]=2;
uParam1->f_9[10]=5;
uParam1->f_9[15]=4;
uParam1->f_9[23]=17;
uParam1->f_9[27]=1;
uParam1->f_9[29]=4;
uParam1->f_9[30]=5;
uParam1->f_9[31]=7;
uParam1->f_9[32]=6;
uParam1->f_9[33]=16;
uParam1->f_9[48]=3;
break;
case 1:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "15HBW365", 16);
uParam1->f_5=92;
uParam1->f_6=92;
uParam1->f_7=92;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=11;
uParam1->f_9[1]=9;
uParam1->f_9[2]=6;
uParam1->f_9[3]=2;
uParam1->f_9[4]=4;
uParam1->f_9[5]=1;
uParam1->f_9[7]=1;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=49;
uParam1->f_9[29]=3;
uParam1->f_9[30]=5;
uParam1->f_9[31]=4;
uParam1->f_9[32]=5;
uParam1->f_9[33]=6;
uParam1->f_9[39]=1;
uParam1->f_9[40]=4;
uParam1->f_9[41]=6;
uParam1->f_9[44]=1;
uParam1->f_9[48]=4;
break;
case 2:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "86CVG072", 16);
uParam1->f_5=28;
uParam1->f_6=28;
uParam1->f_7=28;
uParam1->f_8=0;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=3;
uParam1->f_9[1]=11;
uParam1->f_9[2]=2;
uParam1->f_9[4]=2;
uParam1->f_9[5]=1;
uParam1->f_9[6]=4;
uParam1->f_9[7]=8;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=2;
uParam1->f_9[29]=2;
uParam1->f_9[30]=1;
uParam1->f_9[31]=6;
uParam1->f_9[32]=3;
uParam1->f_9[33]=12;
uParam1->f_9[39]=3;
uParam1->f_9[40]=3;
uParam1->f_9[41]=1;
uParam1->f_9[44]=1;
uParam1->f_9[48]=5;
break;
}
return 1;
}elseif(iParam0==func_745(9)){
switch (func_565()){
case 0:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "68KWK927", 16);
uParam1->f_5=64;
uParam1->f_6=112;
uParam1->f_7=70;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=2;
uParam1->f_75=21;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 28);
MISC::SET_BIT(&(uParam1->f_77), 29);
MISC::SET_BIT(&(uParam1->f_77), 30);
MISC::SET_BIT(&(uParam1->f_77), 31);
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=1;
uParam1->f_9[1]=4;
uParam1->f_9[3]=4;
uParam1->f_9[4]=4;
uParam1->f_9[6]=2;
uParam1->f_9[7]=8;
uParam1->f_9[8]=1;
uParam1->f_9[15]=3;
uParam1->f_9[22]=1;
uParam1->f_9[23]=36;
uParam1->f_9[29]=2;
uParam1->f_9[31]=3;
uParam1->f_9[32]=12;
uParam1->f_9[33]=6;
uParam1->f_9[48]=2;
break;
case 1:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "06NZQ185", 16);
uParam1->f_5=38;
uParam1->f_6=38;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=2;
uParam1->f_9[1]=3;
uParam1->f_9[3]=1;
uParam1->f_9[4]=2;
uParam1->f_9[6]=1;
uParam1->f_9[7]=4;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=26;
uParam1->f_9[29]=1;
uParam1->f_9[31]=3;
uParam1->f_9[32]=5;
uParam1->f_9[33]=13;
uParam1->f_9[39]=2;
uParam1->f_9[41]=6;
uParam1->f_9[48]=6;
break;
case 2:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "65GRZ071", 16);
uParam1->f_5=27;
uParam1->f_6=27;
uParam1->f_7=27;
uParam1->f_8=2;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=3;
uParam1->f_9[3]=2;
uParam1->f_9[4]=4;
uParam1->f_9[6]=1;
uParam1->f_9[7]=3;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=7;
uParam1->f_9[29]=1;
uParam1->f_9[31]=3;
uParam1->f_9[32]=5;
uParam1->f_9[33]=13;
uParam1->f_9[39]=4;
uParam1->f_9[41]=1;
uParam1->f_9[48]=3;
break;
}
return 1;
}elseif(iParam0==func_745(12)){
switch (func_565()){
case 0:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "15HBW365", 16);
uParam1->f_5=92;
uParam1->f_6=92;
uParam1->f_7=92;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=11;
uParam1->f_9[1]=9;
uParam1->f_9[2]=6;
uParam1->f_9[3]=2;
uParam1->f_9[4]=4;
uParam1->f_9[5]=1;
uParam1->f_9[7]=1;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=49;
uParam1->f_9[29]=3;
uParam1->f_9[30]=5;
uParam1->f_9[31]=4;
uParam1->f_9[32]=5;
uParam1->f_9[33]=6;
uParam1->f_9[39]=1;
uParam1->f_9[40]=4;
uParam1->f_9[41]=6;
uParam1->f_9[44]=1;
uParam1->f_9[48]=4;
break;
case 1:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "84TFX949", 16);
*uParam1=2;
uParam1->f_5=138;
uParam1->f_6=138;
uParam1->f_7=88;
uParam1->f_8=88;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_69=7;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=10;
uParam1->f_9[1]=12;
uParam1->f_9[2]=5;
uParam1->f_9[3]=3;
uParam1->f_9[4]=5;
uParam1->f_9[5]=4;
uParam1->f_9[6]=4;
uParam1->f_9[7]=10;
uParam1->f_9[8]=2;
uParam1->f_9[10]=5;
uParam1->f_9[15]=4;
uParam1->f_9[23]=17;
uParam1->f_9[27]=1;
uParam1->f_9[29]=4;
uParam1->f_9[30]=5;
uParam1->f_9[31]=7;
uParam1->f_9[32]=6;
uParam1->f_9[33]=16;
uParam1->f_9[48]=3;
break;
case 2:
uParam1->f_66=joaat("sultanrs");
StringCopy(&(uParam1->f_1), "15HBW365", 16);
uParam1->f_5=92;
uParam1->f_6=92;
uParam1->f_7=92;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=2;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=11;
uParam1->f_9[1]=9;
uParam1->f_9[2]=6;
uParam1->f_9[3]=2;
uParam1->f_9[4]=4;
uParam1->f_9[5]=1;
uParam1->f_9[7]=1;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=49;
uParam1->f_9[29]=3;
uParam1->f_9[30]=5;
uParam1->f_9[31]=4;
uParam1->f_9[32]=5;
uParam1->f_9[33]=6;
uParam1->f_9[39]=1;
uParam1->f_9[40]=4;
uParam1->f_9[41]=6;
uParam1->f_9[44]=1;
uParam1->f_9[48]=4;
break;
}
return 1;
}elseif(iParam0==func_745(13)){
switch (func_565()){
case 0:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "65GRZ071", 16);
uParam1->f_5=27;
uParam1->f_6=27;
uParam1->f_7=27;
uParam1->f_8=2;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=3;
uParam1->f_9[3]=2;
uParam1->f_9[4]=4;
uParam1->f_9[6]=1;
uParam1->f_9[7]=3;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=7;
uParam1->f_9[29]=1;
uParam1->f_9[31]=3;
uParam1->f_9[32]=5;
uParam1->f_9[33]=13;
uParam1->f_9[39]=4;
uParam1->f_9[41]=1;
uParam1->f_9[48]=3;
break;
case 1:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "68KWK927", 16);
uParam1->f_5=64;
uParam1->f_6=112;
uParam1->f_7=70;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=2;
uParam1->f_75=21;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 28);
MISC::SET_BIT(&(uParam1->f_77), 29);
MISC::SET_BIT(&(uParam1->f_77), 30);
MISC::SET_BIT(&(uParam1->f_77), 31);
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=1;
uParam1->f_9[1]=4;
uParam1->f_9[3]=4;
uParam1->f_9[4]=4;
uParam1->f_9[6]=2;
uParam1->f_9[7]=8;
uParam1->f_9[8]=1;
uParam1->f_9[15]=3;
uParam1->f_9[22]=1;
uParam1->f_9[23]=36;
uParam1->f_9[29]=2;
uParam1->f_9[31]=3;
uParam1->f_9[32]=12;
uParam1->f_9[33]=6;
uParam1->f_9[48]=2;
break;
case 2:
uParam1->f_66=joaat("banshee2");
StringCopy(&(uParam1->f_1), "06NZQ185", 16);
uParam1->f_5=38;
uParam1->f_6=38;
uParam1->f_7=0;
uParam1->f_8=156;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
MISC::SET_BIT(&(uParam1->f_77), true);
uParam1->f_9[0]=2;
uParam1->f_9[1]=3;
uParam1->f_9[3]=1;
uParam1->f_9[4]=2;
uParam1->f_9[6]=1;
uParam1->f_9[7]=4;
uParam1->f_9[8]=1;
uParam1->f_9[11]=3;
uParam1->f_9[12]=2;
uParam1->f_9[13]=2;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=26;
uParam1->f_9[29]=1;
uParam1->f_9[31]=3;
uParam1->f_9[32]=5;
uParam1->f_9[33]=13;
uParam1->f_9[39]=2;
uParam1->f_9[41]=6;
uParam1->f_9[48]=6;
break;
}
return 1;
}elseif(iParam0==func_745(15)){
uParam1->f_66=joaat("calico");
StringCopy(&(uParam1->f_1), "42XUR612", 16);
uParam1->f_5=38;
uParam1->f_6=0;
uParam1->f_7=0;
uParam1->f_8=111;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=7;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
uParam1->f_9[0]=9;
uParam1->f_9[1]=13;
uParam1->f_9[2]=7;
uParam1->f_9[3]=14;
uParam1->f_9[4]=9;
uParam1->f_9[5]=7;
uParam1->f_9[7]=21;
uParam1->f_9[10]=3;
uParam1->f_9[29]=1;
uParam1->f_9[31]=1;
uParam1->f_9[32]=2;
uParam1->f_9[39]=2;
uParam1->f_9[40]=4;
uParam1->f_9[41]=9;
uParam1->f_9[42]=1;
uParam1->f_9[43]=6;
uParam1->f_9[45]=2;
uParam1->f_9[48]=4;
return 1;
}elseif(iParam0==func_745(func_1201())){
uParam1->f_66=joaat("baller2");
StringCopy(&(uParam1->f_1), "41OML010", 16);
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
uParam1->f_8=111;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
return 1;
}elseif(iParam0==func_745(func_1200())){
uParam1->f_66=joaat("patriot");
StringCopy(&(uParam1->f_1), "08BGR520", 16);
uParam1->f_5=89;
uParam1->f_6=89;
uParam1->f_7=89;
uParam1->f_8=89;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_69=3;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_76=255;
MISC::SET_BIT(&(uParam1->f_77), 26);
return 1;
}elseif(Local_198.f_688.f_1[iParam0 /*15*/].f_3==joaat("kanjosj")){
uParam1->f_66=joaat("kanjosj");
*uParam1=3;
uParam1->f_5=111;
uParam1->f_6=61;
uParam1->f_7=0;
uParam1->f_8=135;
uParam1->f_97=1;
uParam1->f_99=132;
uParam1->f_98=0;
uParam1->f_65=1;
uParam1->f_69=12;
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
uParam1->f_74=255;
uParam1->f_75=5;
uParam1->f_76=190;
MISC::SET_BIT(&(uParam1->f_77), 28);
MISC::SET_BIT(&(uParam1->f_77), 29);
MISC::SET_BIT(&(uParam1->f_77), 30);
MISC::SET_BIT(&(uParam1->f_77), 31);
uParam1->f_9[0]=18;
uParam1->f_9[1]=5;
uParam1->f_9[2]=8;
uParam1->f_9[3]=9;
uParam1->f_9[4]=7;
uParam1->f_9[5]=3;
uParam1->f_9[6]=10;
uParam1->f_9[7]=7;
uParam1->f_9[8]=4;
uParam1->f_9[9]=1;
uParam1->f_9[10]=2;
uParam1->f_9[11]=2;
uParam1->f_9[13]=3;
uParam1->f_9[15]=2;
uParam1->f_9[22]=1;
uParam1->f_9[23]=54;
uParam1->f_9[27]=1;
uParam1->f_9[29]=5;
uParam1->f_9[31]=7;
uParam1->f_9[32]=13;
uParam1->f_9[33]=1;
uParam1->f_9[39]=1;
uParam1->f_9[40]=5;
uParam1->f_9[41]=1;
uParam1->f_9[44]=6;
uParam1->f_9[47]=6;
uParam1->f_9[48]=14;
return 1;
}
return 0;
}

int func_1200(){
switch (func_1198()){
case 3:
return 5;
case 4:
return 5;
default:
}
return 4;
}

int func_1201(){
switch (func_1198()){
case 3:
return 4;
case 4:
return 3;
default:
}
return 3;
}


void func_1202(int iParam0, int iParam1){
if(func_1203(&(Local_198.f_688.f_1[iParam0 /*15*/].f_10), 17)){
if((!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam1, 4) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam1, 4) < 0.8f) && func_800(Local_1334.f_723[iParam0 /*8*/])){
func_902(iParam1, 4, 0, 0, 5, 1065353216);
}}}


bool func_1203(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


void func_1204(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4){
func_1205(iParam0, iParam1);
}


void func_1205(int iParam0, int iParam1){
if(!func_1207(iParam0)){
return;
}
if(!func_800(Local_1334.f_723[iParam0 /*8*/])){
return;
}
NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, 1, 1);
if(iParam0==func_745(func_1198()) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[func_745(14) /*5*/])){
NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_1334.f_908[func_745(14) /*5*/]), 1, 1);
}
if(func_13(&(Local_114.f_2), 2000, 0) && !NETWORK::IS_ENTITY_IN_GHOST_COLLISION(iParam1)){
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(Local_1334.f_723[iParam0 /*8*/], 100, 1, 0);
func_1206();
}}


void func_1206(){
Local_114.f_1=-1;
func_30(&(Local_114.f_2));
}

int func_1207(int iParam0){
if(iParam0==Local_114.f_1){
return 1;
}
return 0;
}


void func_1208(int iParam0, int iParam1){
if(iParam0==func_745(func_1198())){
func_1209(iParam1, 0, -1292453789, 0, 0);
}}


void func_1209(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4){
bool bVar0;
bool bVar1;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3)){
bVar0=func_10();
func_1211(iParam1, &bVar0);
DECORATOR::DECOR_SET_INT(iParam0, "ContrabandOwner", bVar0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "ContrabandDeliveryType", bParam2);
}
func_1210(bParam2);
if(bParam2==-81613951){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ExportVehicle", 3)){
bVar1=iParam3;
bVar1=(bVar1 + iParam4);
DECORATOR::DECOR_SET_INT(iParam0, "ExportVehicle", bVar1);
}}}}


void func_1210(bool bParam0){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_463 !=bParam0){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_463=bParam0;
}}


void func_1211(int iParam0, bool bParam1){
bool bVar0;
if(iParam0 >=0 && iParam0 < 8){
bVar0=(24 + iParam0);
MISC::SET_BIT(bParam1, bVar0);
}}

int func_1212(int iParam0){
if(func_116(iParam0, 5)){
if(func_1213()){
return 0;
}
return 5000;
}
if(func_116(iParam0, 2)){
return 3000;
}
if(func_116(iParam0, 6)){
return 6500;
}
return 10000;
}


bool func_1213(){
int iVar0;
return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_1290, &iVar0, 0) && iVar0 !=joaat("weapon_unarmed")) && iVar0 !=joaat("object"));
}

int func_1214(int iParam0){
switch (iParam0){
case 0:
switch (func_1215()){
case 1:
if(func_13(&(Local_114.f_6), 2000, 0)){
return 1;
}
break;
}
break;
}
return 0;
}

int func_1215(){
return func_701();
}


char* func_1216(int iParam0){
switch (iParam0){
case 0:
if(func_720(bLocal_1288)){
return "ASR_TXT_YOUGAa";
}else{
return "ASR_TXT_YOUGAb";
}
break;
}
return "";
}

int func_1217(var uParam0){
return 184;
}

int func_1218(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
switch (iParam0){
case 0:
case 1:
case 2:
if(func_1220(func_745(func_1221()), iLocal_1292, 10) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[func_745(func_1221()) /*5*/])){
iVar0=NETWORK::NET_TO_ENT(Local_1334.f_908[func_745(func_1221()) /*5*/]);
Var1={
-ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) 
};
Var2={
func_1219(Local_1293 - ENTITY::GET_ENTITY_COORDS(iVar0, 0)) 
};
if(func_399(Var1, Var2) > 0f){
return 1;
}}
break;
}
return 0;
}


Vector3 func__1219(struct<3> Param0){
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


bool func_1220(int iParam0, int iParam1, int iParam2){
return func_4(&(Local_1347[iParam1 /*251*/].f_75[iParam0 /*2*/]), iParam2);
}

int func_1221(){
switch (Local_1334.f_1207.f_9){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
return 0;
}

int func_1222(var uParam0){
return 0;
}

int func_1223(int iParam0){
if(func_1226(iParam0) || func_1225(iParam0, iLocal_1292)){
return 0;
}
if(iParam0==func_1224()){
return 1;
}
return 0;
}

int func_1224(){
switch (Local_1334.f_1207.f_9){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
return 0;
}


bool func_1225(int iParam0, int iParam1){
return func_142(&(Local_1347[iParam1 /*251*/].f_230), iParam0);
}


bool func_1226(int iParam0){
return func_142(&(Local_1334.f_1097), iParam0);
}


var func__1227(){
return func_647();
}


var func__1228(){
return func_649();
}


var func__1229(){
return func_651();
}


float func_1230(){
if(func_162(iLocal_1292, 2)){
return 1f;
}
return 60f;
}

int func_1231(){
if(func_162(iLocal_1292, 2)){
return 1;
}
return 0;
}


Vector3 func__1232(int iParam0){
if(iParam0==func_745(14)){
return 0f, 0f, 90f;
}
return Local_198.f_1036.f_1[iParam0 /*12*/].f_8;
}


float func_1233(int iParam0){
if(iParam0==func_745(func_1221())){
if(func_162(iLocal_1292, 2)){
return Local_198.f_1719.f_1[func_1224() /*18*/].f_8;
}else{
return -1f;
}}
return 10f;
}


void func_1234(int iParam0, int iParam1, var uParam2){
func_1235(iParam0, iParam1);
}


void func_1235(int iParam0, int iParam1){
if(!func_1238(iParam0)){
return;
}
if(func_1237(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1320.178f, 152.4198f, -101.1915f, -1368.61f, 153.4037f, -90.98242f, 35f, 0, 1, 0)){
func_1236(iParam1, 0, joaat("ModRoom1"));
}}


void func_1236(int iParam0, int iParam1, int iParam2){
INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0, Local_1281[iParam1 /*3*/], iParam2);
}

int func_1237(int iParam0){
if(INTERIOR::IS_VALID_INTERIOR(Local_1281[iParam0 /*3*/]) && INTERIOR::IS_INTERIOR_READY(Local_1281[iParam0 /*3*/])){
return 1;
}
return 0;
}

int func_1238(int iParam0){
if(Local_198.f_1036.f_1[iParam0 /*12*/].f_11 !=-1){
if(Local_198.f_1036.f_1[iParam0 /*12*/].f_3==joaat("sm_prop_smug_cover_01a")){
return 1;
}}
return 0;
}

int func_1239(int iParam0){
if(iParam0==func_745(func_1221())){
return 1;
}
return 0;
}

int func_1240(int iParam0){
if(iParam0==func_745(0)){
if(Local_1334.f_1207.f_9 !=0){
return 0;
}}elseif(iParam0==func_745(1)){
if(Local_1334.f_1207.f_9 !=1){
return 0;
}}elseif(iParam0==func_745(2)){
if(Local_1334.f_1207.f_9 !=2){
return 0;
}}
return 1;
}

int func_1241(int iParam0, var uParam1){
switch (iParam0){
case 0:
if(func_1242()){
switch (func_565()){
case 0:
*uParam1=122.5f;
return 1;
case 1:
*uParam1=230.3124f;
return 1;
case 2:
*uParam1=180f;
return 1;
}
default:
}
break;
}
return 0;
}

int func_1242(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iLocal_1290, 0) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_723[func_745(func_1198()) /*8*/])){
iVar0=NETWORK::NET_TO_VEH(Local_1334.f_723[func_745(func_1198()) /*8*/]);
if(PED::IS_PED_SITTING_IN_VEHICLE(iLocal_1290, iVar0)){
return 1;
}}
return 0;
}


Vector3 func__1243(int iParam0){
switch (iParam0){
case 0:
if(func_1242()){
switch (func_565()){
case 0:
return -1399.007f, -638.7845f, 27.6734f;
case 1:
return 368.5146f, -1245.942f, 31.509f;
case 2:
return 922.6815f, -1519.436f, 30.0033f;
}
default:
}
break;
}
return 0f, 0f, 0f;
}


bool func_1244(int iParam0, struct<3> Param1){
switch (iParam0){
case 2:
if(func_162(iLocal_1292, 2) && func_1242()){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1294, -1, 0)==iLocal_1290){
if(PAD::IS_CONTROL_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 72)){
return 1;
}}
return 0;
}
break;
}
return ENTITY::IS_ENTITY_AT_COORD(iLocal_1290, Param1, 1f, 1f, 2f, 0, 1, 0);
}

int func_1245(int iParam0){
switch (iParam0){
case 2:
case 3:
Stack.Push(iParam0);
Call_Loc(Local_274.f_692.f_18);
return !StackVal;
default:
}
return 0;
}


void func_1246(int iParam0, var uParam1){
switch (iParam0){
case 0:
case 2:
func_710(uParam1, "Garage_Door_Open", "GTAO_Script_Doors_Faded_Screen_Sounds", 1);
break;
}}


void func_1247(int iParam0){
switch (iParam0){
case 0:
if(!func_1250()){
func_1249();
}
break;
case 2:
if(func_1242()){
func_1248(func_745(func_1198()));
}
break;
}}


void func_1248(int iParam0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_723[iParam0 /*8*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1334.f_723[iParam0 /*8*/])){
Local_114.f_1=iParam0;
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(Local_1334.f_723[iParam0 /*8*/], 2000, 1, 0);
}}


void func_1249(){
func_776(1);
}

int func_1250(){
if(func_694(1) || func_713(iLocal_1292, 1)){
return 1;
}
return 0;
}


char* func_1251(int iParam0){
switch (iParam0){
case 2:
case 3:
return "ASR_HT_EXTAUTO";
default:
}
return "";
}

int func_1252(int iParam0){
switch (iParam0){
case 2:
return 1;
default:
}
return 0;
}


var func__1253(int iParam0){
switch (iParam0){
case 1:
Stack.Push(0);
Call_Loc(Local_274.f_692.f_18);
return StackVal;
case 3:
Stack.Push(2);
Call_Loc(Local_274.f_692.f_18);
return StackVal;
default:
}
Stack.Push(iParam0);
Call_Loc(Local_274.f_692.f_18);
return StackVal;
}

int func_1254(var uParam0){
return 0;
}

int func_1255(int iParam0){
switch (iParam0){
case 0:
return 1;
case 2:
switch (func_1215()){
case 5:
if(func_162(iLocal_1292, 2) && !func_165(0, 23)){
return 1;
}
break;
case 6:
case 7:
case 8:
if(func_162(iLocal_1292, 2)){
return 1;
}
break;
}
break;
}
return 0;
}

int func_1256(int iParam0){
switch (iParam0){
case 0:
if(func_1257()){
return 1;
}
break;
case 1:
if(!func_1250() && func_1257()){
return 1;
}
break;
case 2:
if(func_162(iLocal_1292, 2)){
return 1;
}
break;
case 3:
if(!func_1250() && func_162(iLocal_1292, 2)){
return 1;
}
break;
}
return 0;
}

int func_1257(){
switch (func_1215()){
case 1:
case 2:
case 3:
case 4:
if(!func_162(iLocal_1292, 2)){
return 1;
}
break;
case 5:
if(!func_162(iLocal_1292, 2) && func_165(0, 23)){
return 1;
}
break;
}
return 0;
}

int func_1258(){
if(func_162(iLocal_1292, 2)){
return 1;
}
return 0;
}

int func_1259(){
return 1;
}


float func_1260(){
return -1f;
}


float func_1261(){
return -1f;
}


bool func_1262(){
return func_162(iLocal_1292, 2);
}


void func_1263(int iParam0){
func_764(iParam0, 173450);
func_764(iParam0, 238333);
func_764(iParam0, 173352);
func_764(iParam0, 173221);
func_764(iParam0, 238313);
}

int func_1264(var uParam0){
if(func_1250()){
return 1;
}
return 0;
}

int func_1265(int iParam0){
func_82(iParam0, 16);
if(func_83(iParam0, 0)){
return 1;
}
return 0;
}


void func_1266(int iParam0){
switch (iParam0){
case 0:
func_755(iParam0, 0, 8);
func_757(iParam0, 0, 1);
func_755(iParam0, 1, 7);
break;
case 1:
func_755(iParam0, 0, 21);
func_757(iParam0, 0, 1);
func_755(iParam0, 1, 7);
break;
case 2:
func_755(iParam0, 0, 7);
break;
}}

int func_1267(int iParam0){
if(iParam0==func_745(10) || iParam0==func_745(11)){
return 2;
}
if(func_1268(iParam0)){
return 1;
}
return 0;
}

int func_1268(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < Local_198.f_1775){
if(Local_198.f_1775.f_1[iVar0 /*82*/]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_1269(int iParam0, int iParam1, bool bParam2){
func_1270(iParam0, iParam1);
func_767(iParam0, iParam1, bParam2, 0, 1);
if(bParam2){
return;
}
if(func_1268(iParam0)){
WEAPON::SET_CURRENT_PED_WEAPON(iParam1, joaat("weapon_unarmed"), 1);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 54, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, 1);
}


void func_1270(int iParam0, int iParam1){
if(Local_198.f_103.f_1[iParam0 /*21*/].f_2==joaat("g_f_importexport_01")){
switch (iLocal_1311){
case 0:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 0, 0, 0);
iLocal_1311++;
break;
case 1:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 1, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 1, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 1, 0, 0);
iLocal_1311++;
break;
case 2:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 2, 0, 0);
iLocal_1311++;
break;
case 3:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 3, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 3, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 3, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 3, MISC::GET_RANDOM_INT_IN_RANGE(2, 4), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 3, 0, 0);
iLocal_1311++;
break;
case 4:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 4, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 4, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 4, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 4, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 4, 0, 0);
iLocal_1311=0;
break;
}}elseif(Local_198.f_103.f_1[iParam0 /*21*/].f_2==joaat("g_m_importexport_01")){
switch (iLocal_1310){
case 0:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_PROP_INDEX(iParam1, 0, 0, 0, false, 1);
iLocal_1310++;
break;
case 1:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 1, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 1, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_PROP_INDEX(iParam1, 1, 0, 0, false, 1);
iLocal_1310++;
break;
case 2:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
iLocal_1310++;
break;
case 3:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 3, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 3, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 3, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 3, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
iLocal_1310++;
break;
case 4:
PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 4, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 4, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 4, MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 0);
PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 4, 0, 0);
PED::SET_PED_PROP_INDEX(iParam1, 0, 1, 0, false, 1);
iLocal_1310=0;
break;
}}}

int func_1271(int iParam0){
if(iParam0==func_745(10) || iParam0==func_745(11)){
if(func_903(0) && func_736(0, iLocal_1292)){
return func_13(&(Local_1334.f_1207.f_14), 3000, 0);
}
return 0;
}
return 1;
}


void func_1272(int iParam0, bool bParam1){
struct<2> Var0;
Var0=-1;
Var0.f_1=-1;
switch (iParam0){
case 0:
if(bParam1){
Var0.f_0=3;
func_880(5, &Var0);
}
break;
}}


void func_1273(int iParam0){
struct<2> Var0;
Var0=-1;
Var0.f_1=-1;
switch (iParam0){
case 0:
Var0.f_0=2;
func_880(5, &Var0);
break;
}}

int func_1274(int iParam0){
switch (iParam0){
case 0:
return 478;
default:
}
return -1;
}


char* func_1275(int iParam0){
switch (iParam0){
case 0:
return func_1276();
default:
}
return "";
}


char* func_1276(){
return "BYCB_NM";
}

int func_1277(int iParam0){
switch (iParam0){
case 0:
return func_1157();
default:
}
return 9;
}

int func_1278(int iParam0){
switch (iParam0){
case 0:
switch (func_1215()){
case 1:
case 2:
case 3:
case 4:
return 1;
default:
}
break;
}
switch (func_969()){
case 22:
case 24:
case 25:
case 23:
return 1;
default:
}
return 0;
}

int func_1279(){
if(func_972()){
return 1;
}
return 0;
}


void func_1280(){
func_1285();
func_1281();
}


void func_1281(){
if(!func_1284()){
return;
}
if(func_1283()){
func_1282();
}
if(func_694(2)){
func_1282();
}}


void func_1282(){
func_925(1);
}

int func_1283(){
int iVar0;
iVar0=0;
while (iVar0 < Local_198.f_103.f_548){
if(func_77(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_1284(){
if(func_1250()){
return 0;
}
return 1;
}


void func_1285(){
bool bVar0;
if(!func_1289()){
return;
}
if(!func_1287()){
bVar0=func_10();
if(func_9(bVar0, 0, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0)){
func_1286(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0));
}}}


void func_1286(int iParam0){
Local_1334.f_1207.f_11=iParam0;
}

int func_1287(){
int iVar0;
iVar0=func_1288();
if(iVar0==func_587()){
return 0;
}
if(!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)){
return 0;
}
return 1;
}

int func_1288(){
return Local_1334.f_1207.f_11;
}

int func_1289(){
switch (func_1290()){
case 4:
return 1;
default:
}
return 0;
}

int func_1290(){
return func_22();
}


void func_1291(){
func_980();
}


void func_1292(){
func_1310();
func_1308();
func_1305();
func_1301();
func_1295();
func_1293();
}


void func_1293(){
if(func_162(iLocal_1292, 2)){
if(!func_973(7)){
FIRE::SET_FLAMMABILITY_MULTIPLIER(0.01f);
func_1063(7);
}}elseif(func_973(7)){
FIRE::SET_FLAMMABILITY_MULTIPLIER(1f);
func_1294(7);
}}


void func_1294(int iParam0){
if(func_125(&uLocal_1312, iParam0)){}}


void func_1295(){
if(!func_1300()){
return;
}
if(func_1296()){
func_1063(6);
}}

int func_1296(){
int iVar0;
if(!func_134(func_1299())){
return 0;
}
iVar0=0;
while (iVar0 < 1){
Local_114.f_8[iVar0]=OBJECT::CREATE_OBJECT_NO_OFFSET(func_1299(), func_1298(iVar0), 0, false, 1);
ENTITY::SET_ENTITY_ROTATION(Local_114.f_8[iVar0], func_1297(iVar0), 2, 1);
ENTITY::FREEZE_ENTITY_POSITION(Local_114.f_8[iVar0], true);
ENTITY::SET_ENTITY_VISIBLE(Local_114.f_8[iVar0], false, 0);
iVar0++;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_1299());
return 1;
}


Vector3 func__1297(int iParam0){
switch (iParam0){
case 0:
return 0f, 0f, 0f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__1298(int iParam0){
switch (iParam0){
case 0:
return -1361.58f, 169.59f, -100.925f;
default:
}
return 0f, 0f, 0f;
}

int func_1299(){
return joaat("sm_prop_smug_cont_01a");
}

int func_1300(){
if(!func_973(6)){
return 1;
}
return 0;
}


void func_1301(){
int iVar0;
char* sVar1;
var uVar2;
if(!func_1304()){
return;
}
iVar0=func_745(16);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iVar0 /*5*/])){
sVar1=func_1303(0);
uVar2=func_1302(0);
AUDIO::SET_STATIC_EMITTER_ENABLED(sVar1, 1);
AUDIO::LINK_STATIC_EMITTER_TO_ENTITY(sVar1, NETWORK::NET_TO_ENT(Local_1334.f_908[iVar0 /*5*/]));
AUDIO::SET_EMITTER_RADIO_STATION(sVar1, uVar2, 0);
func_1063(4);
}}


char* func_1302(int iParam0){
switch (iParam0){
case 0:
return "RADIO_21_DLC_XM17";
default:
}
return "";
}


char* func_1303(int iParam0){
switch (iParam0){
case 0:
return "SE_DLC_Fixer_Investigation_Way_In_Music_01";
default:
}
return "";
}

int func_1304(){
if(!func_973(4)){
return 1;
}
return 0;
}


void func_1305(){
struct<2> Var0;
if(!func_1307()){
return;
}
if(func_1306()){
Var0=-1;
Var0.f_1=-1;
Var0.f_0=0;
func_880(5, &Var0);
func_1063(3);
}}

int func_1306(){
if(func_1288()==iLocal_1292){
return 1;
}
return 0;
}

int func_1307(){
if(!func_973(3)){
return 1;
}
return 0;
}


void func_1308(){
if(!func_1309()){
return;
}
if(!bLocal_1285){
return;
}
if(!func_162(iLocal_1292, 2)){
return;
}
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_723[func_745(func_1198()) /*8*/])){
return;
}
if(PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(iLocal_1290) && PED::GET_VEHICLE_PED_IS_ENTERING(iLocal_1290)==NETWORK::NET_TO_VEH(Local_1334.f_723[func_745(func_1198()) /*8*/])){
func_776(0);
}}

int func_1309(){
switch (func_1215()){
case 1:
if(!func_694(0) && !func_713(iLocal_1292, 0)){
return 1;
}
break;
}
return 0;
}


void func_1310(){
if(!func_1311()){
return;
}
if(func_162(iLocal_1292, 2)){
if(!func_15(&(Local_114.f_4))){
func_14(&(Local_114.f_4), 0, 0);
}
if(func_13(&(Local_114.f_4), 10000, 0)){
func_776(2);
}}elseif(func_15(&(Local_114.f_4))){
func_30(&(Local_114.f_4));
}}

int func_1311(){
if(!func_694(2) && !func_713(iLocal_1292, 2)){
return 1;
}
return 0;
}

int func_1312(){
if(func_582() !=0){
return 0;
}
return 1;
}


Vector3 func__1313(int iParam0){
switch (iParam0){
case 0:
return Local_198.f_2407[0 /*42*/];
default:
}
return 0f, 0f, 0f;
}


void func_1314(int iParam0){
switch (iParam0){
case 1:
MISC::SET_BIT(&Global_1570028, false);
MISC::SET_BIT(&Global_1570028, 12);
break;
}}


void func_1315(int iParam0){
struct<2> Var0;
Var0=-1;
Var0.f_1=-1;
switch (iParam0){
case 0:
func_826(0, iLocal_1290, "", -1859646258, 186409565, 250, 1, -1, 0, 0, 0);
break;
case 1:
Var0.f_0=1;
func_880(5, &Var0);
break;
}}

int func_1316(int iParam0){
switch (iParam0){
case 1:
return 0;
default:
}
return 30000;
}


float func_1317(int iParam0){
switch (iParam0){
case 0:
return 0.1f;
default:
}
return 0.3f;
}


Vector3 func__1318(int iParam0){
struct<3> Var0;
switch (iParam0){
case 0:
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_4, Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_7, 0f, -0.05f, 0.5f) 
};
break;
}
return Var0;
}


var func__1319(int iParam0){
return Local_198.f_1941.f_1[iParam0 /*23*/].f_8.f_1;
}


void func_1320(int iParam0){
switch (iParam0){
case 0:
if(!func_973(2)){
Stack.Push(iLocal_1290);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_2);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_3);
Stack.Push(ENTITY::IS_ENTITY_PLAYING_ANIM(StackVal, StackVal, StackVal, 3));
Stack.Push(iLocal_1290);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_2);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_56.f_3);
if(StackVal && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(StackVal, StackVal, StackVal) > 0.1f){
AUDIO::PLAY_SOUND_FRONTEND(-1, "collect_keys", "dlc_vw_recover_luxury_car_sounds", 1);
func_1063(2);
}}
break;
}}


char* func_1321(int iParam0){
switch (iParam0){
case 0:
return "ASR_HT_INTKEYS";
case 1:
return "ASR_HT_INTVAN";
default:
}
return "";
}


Vector3 func__1322(int iParam0){
int iVar0;
switch (iParam0){
case 0:
iVar0=func_745(func_1221());
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iVar0 /*5*/])){
return -ENTITY::GET_ENTITY_FORWARD_VECTOR(NETWORK::NET_TO_ENT(Local_1334.f_908[iVar0 /*5*/]));
}
break;
}
return 0f, 0f, 0f;
}


Vector3 func__1323(int iParam0){
switch (iParam0){
case 0:
return Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_4;
default:
}
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_2);
return StackVal, StackVal, StackVal;
}


Vector3 func__1324(int iParam0){
switch (iParam0){
case 0:
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_4, Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_7, 0f, -0.5f, 0f);
case 1:
return Local_198.f_688.f_1[func_745(func_1198()) /*15*/].f_4;
default:
}
return Local_198.f_1941.f_1[iParam0 /*23*/].f_3;
}

int func_1325(int iParam0){
switch (iParam0){
case 0:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[func_745(func_1221()) /*5*/]) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1290, NETWORK::NET_TO_ENT(Local_1334.f_908[func_745(func_1221()) /*5*/]), 17)){
return 1;
}
break;
}
return 0;
}


char* func_1326(int iParam0){
switch (iParam0){
case 0:
return "ASR_BLIP_KEYS";
case 1:
return func_1276();
default:
}
return "";
}

int func_1327(int iParam0){
switch (iParam0){
case 0:
return 1;
default:
}
return 0;
}

int func_1328(int iParam0){
switch (iParam0){
case 0:
if(HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_PAUSEMAP_IN_INTERIOR_MODE()){
return 0;
}
break;
case 1:
return 0;
}
switch (func_969()){
case 19:
Call_Loc(Local_274.f_484);
Stack.Push(iParam0);
Call_Loc(Local_274.f_484.f_1);
if(StackVal && StackVal){
return 1;
}
break;
}
return 0;
}


var func__1329(int iParam0){
switch (iParam0){
case 0:
return Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_7;
default:
}
return Local_1242.f_22;
}


Vector3 func__1330(int iParam0){
switch (iParam0){
case 0:
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_4, Local_198.f_1036.f_1[func_745(func_1221()) /*12*/].f_7, 0.039f, -0.75f, -1.10885f);
default:
}
return 0f, 0f, 0f;
}


char* func_1331(int iParam0){
switch (iParam0){
case 0:
if(func_941(iLocal_1290)){
return "anim@scripted@player@freemode@tun_prep_ig3_grab_high@heeled@";
}
return "anim@scripted@player@freemode@tun_prep_ig3_grab_high@male@";
default:
}
return "";
}


char* func_1332(int iParam0){
switch (iParam0){
case 0:
return "tun_prep_ig3_grab_high";
default:
}
return "";
}

int func_1333(int iParam0){
if(func_903(iParam0) || func_736(iParam0, iLocal_1292)){
return 0;
}
switch (iParam0){
case 0:
switch (func_1215()){
case 1:
case 3:
if(func_162(iLocal_1292, 2)){
return 1;
}
break;
}
break;
case 1:
switch (func_1215()){
case 4:
if(func_162(iLocal_1292, 2) && func_1334()){
return 1;
}
break;
}
break;
}
return 0;
}

int func_1334(){
if(func_736(0, iLocal_1292)){
return 1;
}
if(Local_1334.f_1207.f_11==iLocal_1292){
return 1;
}
return 0;
}

int func_1335(){
switch (func_1215()){
case 1:
case 3:
case 4:
return 1;
default:
}
return 0;
}

int func_1336(){
func_1337();
return 1;
}


void func_1337(){
func_1338();
}


void func_1338(){
Local_1334.f_1207.f_11=func_587();
}

int func_1339(){
if(bLocal_1286){
if(func_1346()){
return 0;
}
func_1345();
func_1344();
}
func_1343();
func_1341();
func_1340();
return 1;
}


void func_1340(){
if(func_973(5)){
return;
}
Local_198.f_688.f_1[func_745(func_1201()) /*15*/].f_3=joaat("baller2");
func_1121(func_745(func_1201()), 0);
Local_198.f_688.f_1[func_745(func_1200()) /*15*/].f_3=joaat("patriot");
func_1121(func_745(func_1200()), 0);
func_1063(5);
}


void func_1341(){
if(Local_198.f_19 !=0){
return;
}
Local_198.f_19=1;
Local_198.f_19.f_5[0 /*13*/].f_10=func_745(func_1198());
Local_198.f_19.f_5[0 /*13*/].f_12=0;
Local_198.f_19.f_5[0 /*13*/].f_2=joaat("prop_security_case_01");
Local_198.f_19.f_5[0 /*13*/].f_3={
Local_198.f_688.f_1[func_745(func_1198()) /*15*/].f_4 
};
func_1342(0, 16);
}


void func_1342(int iParam0, int iParam1){
if(func_17(&(Local_198.f_19.f_5[iParam0 /*13*/]), iParam1)){}}


void func_1343(){
if(Local_198.f_1036.f_374[0 /*6*/] !=-1){
return;
}
Local_198.f_1036.f_374[0 /*6*/]=func_745(14);
Local_198.f_1036.f_374[0 /*6*/].f_1=2;
Local_198.f_1036.f_374[0 /*6*/].f_2=func_745(func_1198());
Local_198.f_1036.f_374[0 /*6*/].f_3={
0f, -1.33f, -0.45f 
};
}


void func_1344(){
if(Local_1334.f_1207.f_10 !=-1){
return;
}
Local_1334.f_1207.f_10=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}


void func_1345(){
if(Local_1334.f_1207.f_9 !=-1){
return;
}
Local_1334.f_1207.f_9=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

int func_1346(){
bool bVar0;
int iVar1;
bool bVar2;
bVar0=func_67();
if(func_287(bVar0)){
return 1;
}
iVar1=0;
while (iVar1 < 7){
bVar2=func_1347(bVar0, iVar1);
if(func_287(bVar2)){
return 1;
}
iVar1++;
}
return 0;
}

int func_1347(bool bParam0, int iParam1){
if(func_71(bParam0)){
if(iParam1 > -1 && iParam1 < 7){
return Global_1894573[bParam0 /*608*/].f_10.f_11[iParam1];
}}
return func_66();
}

int func_1348(){
func_1357();
func_1356();
func_1349();
return 1;
}


void func_1349(){
int iVar0;
func_1355(&(Local_114.f_10), -1, -1);
iVar0=0;
while (iVar0 < 4){
func_1350(iVar0);
iVar0++;
}}


void func_1350(int iParam0){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_1354(iParam0) 
};
Var1={
func_1353(iParam0) 
};
fVar2=func_1352(iParam0);
Local_114.f_10[iParam0]=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Var0, Var1, func_1351(fVar2), 0, 7);
}


float func_1351(float fParam0){
return (fParam0 * 0.01745329f);
}


float func_1352(int iParam0){
switch (iParam0){
case 0:
return 21f;
default:
}
return 0f;
}


Vector3 func__1353(int iParam0){
switch (iParam0){
case 0:
return 4.5f, 4.1f, 4.9f;
case 1:
return 3.1f, 2.6f, 4.9f;
case 2:
return 3.1f, 3.2f, 4.9f;
case 3:
return 2.2f, 3.3f, 4.9f;
default:
}
return 0f, 0f, 0f;
}


Vector3 func__1354(int iParam0){
switch (iParam0){
case 0:
return -1338.7f, 149.4f, -99.943f;
case 1:
return -1331.65f, 152.2f, -99.943f;
case 2:
return -1350.2f, 155.2f, -99.943f;
case 3:
return -1363.85f, 161.4f, -99.943f;
default:
}
return 0f, 0f, 0f;
}


void func_1355(var uParam0, int iParam1, int iParam2){
int iVar0;
if(iParam1==-1){
iParam1=*uParam0;
}
iVar0=0;
while (iVar0 < iParam1){
(*uParam0)[iVar0]=iParam2;
iVar0++;
}}


void func_1356(){
PED::SET_PED_CONFIG_FLAG(iLocal_1290, 448, true);
}


void func_1357(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
func_1359(iVar0);
iVar0++;
}
switch (func_565()){
case 0:
func_1358(165);
func_1358(166);
break;
case 2:
func_1358(167);
break;
}}


void func_1358(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_205[iVar0]), bVar1);
}


void func_1359(int iParam0){
struct<3> Var0;
var uVar1;
Var0={
func_1361(iParam0) 
};
uVar1=func_1360(iParam0);
ENTITY::CREATE_MODEL_HIDE(Var0, 5f, uVar1, 1);
}

int func_1360(int iParam0){
switch (iParam0){
case 0:
case 1:
return joaat("prop_box_wood06a");
case 2:
return joaat("v_serv_abox_1");
case 3:
return joaat("tr_prop_tr_planning_board_01a");
case 4:
return joaat("tr_prop_tr_mod_lframe_01a");
default:
}
return 0;
}


Vector3 func__1361(int iParam0){
switch (iParam0){
case 0:
return -1357.982f, 152.2244f, -100.1945f;
case 1:
return -1360.082f, 148.771f, -96.122f;
case 2:
return -1356.981f, 152.3537f, -100.1925f;
case 3:
return -1348.629f, 136.907f, -96.122f;
case 4:
return -1351.897f, 155.589f, -96.357f;
default:
}
return 0f, 0f, 0f;
}


char* func_1362(var uParam0){
switch (*uParam0){
case 0:
return "ASR_TIC_CKEYSR";
case 1:
return "ASR_TIC_UNLKVNR";
case 2:
return func_740(1);
case 3:
return func_739(1);
default:
}
return "";
}


char* func_1363(var uParam0){
switch (*uParam0){
case 0:
return "ASR_TIC_CKEYSL";
case 1:
return "ASR_TIC_UNLKVNL";
case 2:
return func_740(0);
case 3:
return func_739(0);
default:
}
return "";
}

int func_1364(int iParam0){
switch (iParam0){
case 0:
switch (func_1215()){
case 2:
return 1;
default:
}
break;
case 1:
switch (func_1215()){
case 4:
if(func_1306()){
return 1;
}
break;
}
break;
}
return 0;
}


char* func_1365(int iParam0){
switch (iParam0){
case 0:
return "ASR_HT_SERKEYS";
case 1:
return "ASR_HT_UNLKVAN";
default:
}
return "";
}

int func_1366(var uParam0){
return 0;
}


char* func_1367(var uParam0){
return "SM2WBAU";
}

int func_1368(int iParam0){
switch (iParam0){
case 0:
return 1;
default:
}
return 0;
}


char* func_1369(int iParam0){
switch (iParam0){
case 0:
if(func_720(bLocal_1288)){
switch (func_1370(3, 0)){
case 0:
return "SM2WB_CAO_1A";
case 1:
return "SM2WB_CAO_1B";
case 2:
return "SM2WB_CAO_1C";
default:
}}else{
switch (func_1370(3, 0)){
case 0:
return "SM2WB_CAO_2A";
case 1:
return "SM2WB_CAO_2B";
case 2:
return "SM2WB_CAO_2C";
}
default:
}
break;
}
return "";
}

int func_1370(int iParam0, int iParam1){
return ((Local_1334.f_1164 + iParam1) % iParam0);
}


char* func_1371(var uParam0, var uParam1){
return "SM2_WBOSS1";
}

int func_1372(var uParam0){
return 184;
}

int func_1373(int iParam0){
int iVar0;
switch (iParam0){
case 0:
case 1:
iVar0=func_1374();
if(iVar0 !=-1 && Local_198.f_2407[iVar0 /*42*/].f_5==iParam0){
return 1;
}
break;
}
return 0;
}

int func_1374(){
return Local_1279.f_0;
}


var func__1375(var uParam0){
Call_Loc(Local_274.f_592);
return StackVal;
}


bool func_1376(int iParam0){
switch (iParam0){
case 0:
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1243.f_2[iParam0 /*7*/].f_1) > 0.6f;
case 1:
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1243.f_2[iParam0 /*7*/].f_1) > 0.5f;
default:
}
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1243.f_2[iParam0 /*7*/].f_1) > 0.99f;
}


bool func_1377(int iParam0){
float fVar0;
float fVar1;
switch (iParam0){
case 0:
fVar0=(ENTITY::GET_ANIM_DURATION(Local_198.f_2127.f_1[iParam0 /*33*/].f_7, Local_198.f_2127.f_1[iParam0 /*33*/].f_25[0 /*7*/].f_4) * 1000f);
fVar1=((fVar0 * 0.6f) - IntToFloat(Local_198.f_2127.f_1[iParam0 /*33*/].f_13));
break;
case 1:
fVar0=(ENTITY::GET_ANIM_DURATION(Local_198.f_2127.f_1[iParam0 /*33*/].f_7, Local_198.f_2127.f_1[iParam0 /*33*/].f_9) * 1000f);
fVar1=((fVar0 * 0.5f) - IntToFloat(Local_198.f_2127.f_1[iParam0 /*33*/].f_13));
break;
}
return PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1243.f_2[iParam0 /*7*/].f_1) > (fVar1 / fVar0);
}


bool func_1378(var uParam0, var uParam1){
return bLocal_1288;
}


float func_1379(int iParam0){
switch (iParam0){
case 0:
switch (func_565()){
case 0:
return 32.4f;
case 1:
return -129.96f;
case 2:
return 90f;
default:
}
break;
case 1:
switch (func_565()){
case 0:
return -49.4f;
case 1:
return -39f;
case 2:
return -83.96f;
default:
}
break;
}
return 0f;
}

int func_1380(int iParam0){
var uVar0;
switch (iParam0){
case 0:
uVar0=Local_198.f_2127.f_1[iParam0 /*33*/].f_25[0 /*7*/].f_4;
break;
default:
uVar0=Local_198.f_2127.f_1[iParam0 /*33*/].f_9;
break;
}
return round((ENTITY::GET_ANIM_DURATION(Local_198.f_2127.f_1[iParam0 /*33*/].f_7, uVar0) * 1000f));
}


Vector3 func__1381(int iParam0){
switch (iParam0){
case 0:
switch (func_565()){
case 0:
return -1394.717f, -635.9774f, 27.673f;
case 1:
return 361.7466f, -1247.302f, 31.57f;
case 2:
return 922.616f, -1514.618f, 30.281f;
default:
}
break;
case 1:
switch (func_565()){
case 0:
return -1407.769f, -616.6322f, 40.785f;
case 1:
return 347.7513f, -1255.003f, 32.864f;
case 2:
return 909.917f, -1491.201f, 30.624f;
default:
}
break;
}
return 0f, 0f, 0f;
}


Vector3 func__1382(int iParam0, int iParam1){
switch (iParam0){
case 0:
Stack.Push(0f);
Stack.Push(0f);
Stack.Push(iParam0);
Call_Loc(Local_274.f_592.f_2);
return Vector(StackVal, StackVal, StackVal) + Vector(-128.165f, 0f, -43.7633f);
default:
}
return Local_198.f_2127.f_1[iParam0 /*33*/].f_15[iParam1 /*8*/].f_3;
}


float func_1383(int iParam0, int iParam1){
switch (iParam0){
case 0:
return 40f;
default:
}
return Local_198.f_2127.f_1[iParam0 /*33*/].f_15[iParam1 /*8*/].f_6;
}


Vector3 func__1384(int iParam0, int iParam1){
switch (iParam0){
case 0:
Stack.Push(iParam0);
Call_Loc(Local_274.f_592.f_1);
Stack.Push(iParam0);
Call_Loc(Local_274.f_592.f_2);
return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(StackVal, StackVal, StackVal, StackVal, -0.91f, 0.93f, 1.82f);
default:
}
return Local_198.f_2127.f_1[iParam0 /*33*/].f_15[iParam1 /*8*/];
}


bool func_1385(){
return func_701() > 0;
}


void func_1386(){
func_1394();
func_1393();
func_1392();
func_1390();
func_1388();
func_1387();
}


void func_1387(){
if(func_973(7)){
FIRE::SET_FLAMMABILITY_MULTIPLIER(1f);
func_1294(7);
}}


void func_1388(){
int iVar0;
iVar0=0;
while (iVar0 < 4){
func_1389(iVar0);
iVar0++;
}}


void func_1389(int iParam0){
if(Local_114.f_10[iParam0] !=-1){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Local_114.f_10[iParam0]);
Local_114.f_10[iParam0]=-1;
}}


void func_1390(){
if(func_973(6)){
func_1391();
func_1294(6);
}}


void func_1391(){
int iVar0;
iVar0=0;
while (iVar0 < 1){
if(ENTITY::DOES_ENTITY_EXIST(Local_114.f_8[iVar0])){
OBJECT::DELETE_OBJECT(&(Local_114.f_8[iVar0]));
}
iVar0++;
}}


void func_1392(){
PED::SET_PED_CONFIG_FLAG(iLocal_1290, 448, false);
}


void func_1393(){
if(func_973(4)){
AUDIO::SET_STATIC_EMITTER_ENABLED(func_1303(0), 0);
func_1294(4);
}}


void func_1394(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
func_1396(iVar0);
iVar0++;
}
switch (func_565()){
case 0:
func_1395(165);
func_1395(166);
break;
case 2:
func_1395(167);
break;
}}


void func_1395(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_205[iVar0]), bVar1);
}


void func_1396(int iParam0){
struct<3> Var0;
var uVar1;
Var0={
func_1361(iParam0) 
};
uVar1=func_1360(iParam0);
ENTITY::REMOVE_MODEL_HIDE(Var0, 5f, uVar1, 0);
}


char* func_1397(){
return "MPSUM2_MUSIC_STOP";
}


char* func_1398(){
return "MPSUM2_FAIL";
}


char* func_1399(int iParam0){
switch (iParam0){
case 0:
return "MPSUM2_EXEC_DELIVERING_START";
case 1:
return "MPSUM2_EXEC_MED_INTENSITY";
case 2:
return "MPSUM2_EXEC_GUNFIGHT";
case 3:
return "MPSUM2_EXEC_MED_INTENSITY";
case 4:
return "MPSUM2_EXEC_VEHICLE_ACTION";
case 5:
return "MPSUM2_EXEC_DELIVERING";
default:
}
return "";
}

int func_1400(int iParam0){
switch (iParam0){
case -1:
return 0;
case 0:
if(func_1215() >=1){
return 1;
}
break;
case 1:
if(func_1283()){
return 2;
}
break;
case 2:
if(func_162(iLocal_1292, 2)){
return 3;
}elseif(func_1290() >=6){
return 4;
}
break;
case 3:
if(func_1290() >=6){
return 4;
}
break;
case 4:
if(func_1401()){
return 5;
}
break;
}
return -1;
}


bool func_1401(){
return (func_50() && func_32());
}

int func_1402(){
int iVar0;
int iVar1;
if(func_1403(0)){
return 0;
}
iVar0=func_745(func_1198());
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_723[iVar0 /*8*/])){
iVar1=NETWORK::NET_TO_ENT(Local_1334.f_723[iVar0 /*8*/]);
switch (func_565()){
case 0:
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, -1442.654f, -620.0366f, 34.82609f, -1387.536f, -696.2987f, 21.98765f, 150f, 0, 1, 0)){
return 0;
}
break;
case 1:
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, 374.9527f, -1266.67f, 35.01389f, 333.0441f, -1232.618f, 28.82049f, 35f, 0, 1, 0)){
return 0;
}
break;
case 2:
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, 937.1695f, -1454.747f, 38.11275f, 936.6304f, -1605.249f, 29.13226f, 150.75f, 0, 1, 0)){
return 0;
}
break;
}}
return 1;
}

int func_1403(int iParam0){
if(!func_1404(iParam0) || func_165(iParam0, 23)){
return 1;
}
return 0;
}


bool func_1404(int iParam0){
return func_165(iParam0, 1);
}


void func_1405(){
func_1185(0, 4, 247665);
func_1184(0, 1, 1);
func_1185(1, 43, 247629);
func_1184(1, 2, 2);
func_1184(1, 4, 4);
func_1185(2, 5, 247588);
func_1184(2, 3, 3);
func_1185(3, 19, 247547);
func_1184(3, 4, 4);
func_1185(4, 19, 247099);
func_1184(4, 5, 5);
func_1145(5, 6, 7, 8, 9, 246984, 246921, 246886, 246820, 1);
func_1185(9, 48, 246801);
}


void func_1406(){
if(func_1144()){
func_1137();
}}


void func_1407(){
if(func_162(iLocal_1292, 2)){
func_1167("ASR_OT_EXTAUTO", 0);
}else{
func_1408();
}}


void func_1408(){
struct<6> Var0;
Var0={
func_1158() 
};
func_1151("EXEC_OT_REC", &Var0, func_1157(), 0);
}


void func_1409(){
if(func_162(iLocal_1292, 2)){
func_1167("ASR_OT_EXTAUTO", 0);
}else{
func_1163();
}}


void func_1410(){
if(func_162(iLocal_1292, 2)){
func_1167("ASR_OT_EXTAUTO", 0);
}else{
func_1411();
}}


void func_1411(){
struct<6> Var0;
Var0={
func_1158() 
};
func_1151("EXEC_OT_TAKE", &Var0, 1, 0);
}


void func_1412(){
if(!func_162(iLocal_1292, 2) && func_165(0, 23)){
func_1167("ASR_OT_ENTAUTO", 0);
}elseif(func_162(iLocal_1292, 2) && !func_165(0, 23)){
func_1167("ASR_OT_EXTAUTO", 0);
}else{
func_1413();
}}


void func_1413(){
struct<6> Var0;
Var0={
func_1158() 
};
func_1151("EXEC_OT_STEAL", &Var0, func_1157(), 0);
}


void func_1414(){
if(!func_162(iLocal_1292, 2)){
func_1167("ASR_OT_ENTAUTO", 0);
}elseif(!func_1306()){
if(func_1287()){
func_1415("ASR_OT_WUNLKVAN", NETWORK::NETWORK_GET_PLAYER_INDEX(func_1288()), func_1418(bLocal_1288), 0);
}}else{
func_1413();
}}


void func_1415(char* sParam0, bool bParam1, int iParam2, bool bParam3){
if(func_1416(sParam0, PLAYER::GET_PLAYER_NAME(bParam1), bParam3, iParam2)){
Global_1574757=6;
Global_1574757.f_56=iParam2;
Global_1574757.f_54=bParam1;
}}

int func_1416(char* sParam0, char* sParam1, bool bParam2, var uParam3){
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
if(func_1417(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
uVar0=Global_1574757.f_54;
func_1138();
Global_1574757=9;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=uParam3;
Global_1574757.f_56=uParam3;
Global_1574757.f_54=uVar0;
func_1155();
func_1154(bParam2);
func_1153();
return 1;
}


bool func_1417(char* sParam0, char* sParam1){
if(!func_1143()){
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

int func_1418(bool bParam0){
int iVar0;
iVar0=func_679(bParam0);
if(iVar0 !=-1){
return func_677(iVar0);
}
return 1;
}


void func_1419(){
if(!func_162(iLocal_1292, 2)){
func_1167("ASR_OT_ENTAUTO", 0);
}else{
func_1167("ASR_OT_SERKEYS", 0);
}}


void func_1420(){
if(!func_162(iLocal_1292, 2)){
func_1167("ASR_OT_ENTAUTO", 0);
}else{
func_1167("ASR_OT_SERKEYS", 0);
}}


void func_1421(){
if(!func_162(iLocal_1292, 2)){
func_1167("ASR_OT_ENTAUTO", 0);
}else{
func_1413();
}}


void func_1422(){
func_1167("ASR_OT_GOTOAUTO", 0);
}


void func_1423(){
func_1195(0, 4);
func_1194(0, 1);
func_1195(1, 43);
func_1193(1, 2, 248008);
func_1193(1, 3, 247973);
func_1195(2, 5);
func_1194(2, 3);
func_1195(3, 19);
func_1426(3, 247906);
func_1193(3, 4, 247852);
func_1195(4, 19);
func_1193(4, 5, 247817);
func_1195(5, 22);
func_1194(5, 6);
func_1195(6, 24);
func_1194(6, 7);
func_1195(7, 48);
}

int func_1424(){
if(func_903(1) || func_736(1, iLocal_1292)){
return 1;
}
return 0;
}

int func_1425(){
if(func_903(0) || func_736(0, iLocal_1292)){
return 1;
}
return 0;
}


void func_1426(int iParam0, int iParam1){
Local_276[iParam0 /*20*/].f_18=iParam1;
}


void func_1427(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar1=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(func_736(0, iVar1) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)){
func_1286(iVar1);
}else{
iVar0++;
}}}

int func_1428(){
if(func_903(0) || func_736(0, iLocal_1292)){
return 1;
}
return 0;
}

int func_1429(){
if(func_694(0) || func_713(iLocal_1292, 0)){
if(func_13(&(Local_1334.f_1207.f_12), 2000, 0)){
return 1;
}}
return 0;
}


void func_1430(){
Local_198.f_2127=2;
Local_198.f_2127.f_1[0 /*33*/].f_24=1;
Local_198.f_2127.f_1[0 /*33*/].f_7="anim@apt_trans@garage";
Local_198.f_2127.f_1[0 /*33*/].f_25[0 /*7*/].f_4="gar_open_1_left";
func_1114(0, 3);
func_1114(0, 5);
Local_198.f_2127.f_1[1 /*33*/].f_24=1;
Local_198.f_2127.f_1[1 /*33*/].f_7="anim@door_trans@hinge_l@";
Local_198.f_2127.f_1[1 /*33*/].f_9="walk_cam_left";
Local_198.f_2127.f_1[1 /*33*/].f_25[0 /*7*/].f_4="walk_player1";
func_1114(1, 3);
func_1114(1, 5);
Local_198.f_1941=2;
Local_198.f_1941.f_1[0 /*23*/].f_2=2;
Local_198.f_1941.f_1[0 /*23*/].f_8=811;
Local_198.f_1941.f_1[0 /*23*/].f_8.f_1=1;
func_1118(0, 5);
func_1118(0, 13);
func_1118(0, 14);
Local_198.f_1941.f_1[1 /*23*/].f_6=7f;
Local_198.f_2407[0 /*42*/].f_5=0;
func_1432(0, 0);
Local_198.f_2407[1 /*42*/].f_5=1;
func_1432(1, 0);
func_1431(2, 0);
func_1431(3, 0);
}


void func_1431(int iParam0, int iParam1){
if(func_17(&(Local_198.f_2407[iParam0 /*42*/].f_40), iParam1)){}}


void func_1432(int iParam0, int iParam1){
if(func_125(&(Local_198.f_2407[iParam0 /*42*/].f_40), iParam1)){}}


void func_1433(){
}

int func_1434(var uParam0, var uParam1){
if(Local_1334.f_1207 !=-1){
return 1;
}
Local_1334.f_1207=uParam0;
Local_1334.f_1207.f_1=uParam1;
Local_1334.f_1207.f_2={
func_1435() 
};
if(func_597()){
Local_1334.f_1207.f_2.f_4=func_1040(func_1062());
}
switch (func_566()){
case 0:
case 1:
Local_1334.f_1207.f_2.f_5=1;
break;
}
if(func_72(1)){
Local_1334.f_1207.f_2.f_6=func_997(func_98(bLocal_1288), func_999());
}
return 1;
}


struct<4> func_1435(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_183;
}

int func_1436(){
return func_1437();
}

int func_1437(){
return Global_2793046.f_5225.f_345;
}

int func_1438(){
return func_1439();
}

int func_1439(){
return Global_2793046.f_5225.f_344;
}


bool func_1440(int iParam0){
return func_4(&uLocal_1301, iParam0);
}


void func_1441(){
if(Local_274.f_3.f_2.f_1 !=0){
Call_Loc(Local_274.f_3.f_2.f_1);
}
if(func_2451()){
return;
}
if(func_2450()){
return;
}
if(!func_1772(1)){
return;
}
if(!func_1771()){
return;
}
if(func_1440(46)){
return;
}
if(!func_2739()){
return;
}
func_1582();
func_1576();
func_1569();
func_1565();
func_1458();
func_1445();
func_1442();
}


void func_1442(){
if(!func_1440(30)){
if(Local_274.f_101 !=0){
Call_Loc(Local_274.f_101);
func_1443(StackVal);
}
func_155(30);
}}


void func_1443(int iParam0){
if(iParam0==-1 || iParam0==91){
return;
}
func_1444(iParam0);
}


void func_1444(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2793046.f_5225.f_35[iVar0]), bVar1);
}


void func_1445(){
int iVar0;
int iVar1;
bool bVar2;
bool bVar3;
if(func_162(iLocal_1292, 0)){
return;
}
if(Local_274.f_62.f_10 !=0){
Call_Loc(Local_274.f_62.f_10);
if(!StackVal){
return;
}}
bVar2=(func_1440(11) || func_1440(74));
if(Local_274.f_62.f_11 !=0){
Call_Loc(Local_274.f_62.f_11);
bVar3=StackVal;
}
if(bVar2 && !bVar3){
if(Local_274.f_62 !=0){
Stack.Push(iVar0);
Call_Loc(Local_274.f_62);
iVar0=(StackVal + StackVal);
}
if(Local_274.f_62.f_1 !=0){
Stack.Push(iVar1);
Call_Loc(Local_274.f_62.f_1);
iVar1=(StackVal + StackVal);
}}elseif(bVar3){}
func_1453(bVar2);
func_1451(&iVar0, &iVar1);
if(Local_274.f_62.f_5 !=0){
Stack.Push(IntToFloat(iVar0));
Stack.Push(0);
Call_Loc(Local_274.f_62.f_5);
iVar0=round((StackVal * StackVal));
Stack.Push(IntToFloat(iVar1));
Stack.Push(1);
Call_Loc(Local_274.f_62.f_5);
iVar1=round((StackVal * StackVal));
}
if(iVar0 > 0 || (iVar0==0 && func_1450())){
func_1449(iVar0);
if(Local_198.f_1528){
Global_2696875=iVar0;
func_18(&Global_2694992, 0, 0);
}}
if(iVar1 > 0){
if(Local_198.f_1528.f_1){
func_875();
}
Stack.Push(0);
Stack.Push(iLocal_1290);
Stack.Push("");
Stack.Push(-1636175450);
Call_Loc(Local_274.f_62.f_9);
func_826(StackVal, StackVal, StackVal, StackVal, StackVal, iVar1, 1, -1, 0, 0, 0);
}
Local_1227.f_5=(Local_1227.f_5 + iVar0);
Local_1227.f_6=(Local_1227.f_6 + iVar1);
func_1448();
func_1447();
func_1446(0);
}


void func_1446(int iParam0){
if(func_17(&(Local_1347[iLocal_1291 /*251*/].f_1), iParam0)){}}


void func_1447(){
int iVar0;
iVar0=func_276(PLAYER::PLAYER_ID());
switch (iVar0){
case 294:
Global_1947733.f_9=Local_1227.f_5;
Global_1947733.f_10=Local_1227.f_6;
break;
}}


void func_1448(){
int iVar0;
iVar0=func_276(PLAYER::PLAYER_ID());
switch (iVar0){
case 293:
case 291:
Global_1947751.f_13=Local_1227.f_5;
Global_1947751.f_14=Local_1227.f_6;
break;
}}


void func_1449(int iParam0){
var uVar0;
var uVar1;
if(func_332()){
func_815(-1027218631, iParam0, &uVar0, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iParam0, "FM Event Completion", &uVar1);
}}

int func_1450(){
return 0;
}


void func_1451(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!func_1452(7)){
return;
}
if(Local_274.f_62.f_2 !=0){
Call_Loc(Local_274.f_62.f_2);
iVar0=StackVal;
}
if(Local_274.f_62.f_3 !=0){
Call_Loc(Local_274.f_62.f_3);
iVar1=StackVal;
}
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2793046.f_5225.f_269, NETWORK::GET_NETWORK_TIME()));
if(Local_274.f_62.f_4 !=0){
Stack.Push(iVar2);
Call_Loc(Local_274.f_62.f_4);
if(StackVal > StackVal){
Call_Loc(Local_274.f_62.f_4);
iVar2=StackVal;
}}
iVar3=floor((to_float(iVar2) / (1000f * 60f)));
if(iVar3 < 1){
iVar3=1;
}
iVar0=(iVar3 * iVar0);
iVar1=(iVar3 * iVar1);
if(func_277(0) && Global_262145.f_24467 > 0f){
iVar0=ceil((IntToFloat(iVar0) * Global_262145.f_24467));
}
*iParam0=(*iParam0 + iVar0);
*iParam1=(*iParam1 + iVar1);
}


bool func_1452(int iParam0){
return MISC::IS_BIT_SET(Global_2793046.f_5225.f_47, iParam0);
}


void func_1453(bool bParam0){
Stack.Push(Local_274.f_62.f_8 !=0);
Call_Loc(Local_274.f_62.f_8);
if(StackVal && StackVal){
if(bParam0){
if(Global_262145.f_24468){
func_1457();
}elseif(func_1456(PLAYER::PLAYER_ID()) > 0){
func_1455();
}else{
func_1457();
}}else{
func_1454();
}}}


void func_1454(){
if(func_70()){
Global_2684801.f_3076.f_134=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_427=Global_2684801.f_3076.f_134;
}}


void func_1455(){
if(func_70()){
if(Global_2684801.f_3076.f_134 > 0){
Global_2684801.f_3076.f_134=(Global_2684801.f_3076.f_134 - 1);
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_427=Global_2684801.f_3076.f_134;
}}}

int func_1456(bool bParam0){
return Global_1894573[bParam0 /*608*/].f_10.f_28;
}


void func_1457(){
if(func_70()){
if(Global_2684801.f_3076.f_134 < 10){
Global_2684801.f_3076.f_134++;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_427=Global_2684801.f_3076.f_134;
}}}


void func_1458(){
if(!func_1440(8)){
if(func_1563()){
if(func_1490(0, 1, 1) && func_1485()){
func_1459();
func_155(8);
}}else{
func_155(8);
}}}


void func_1459(){
if(func_1440(11)){
func_1463(100, func_1484(), func_1483(), func_1482(), -1, -1, -1082130432, 0, 1, 2, 0);
}else{
func_1463(89, func_1462(), func_1461(), func_1460(), -1, -1, -1082130432, 0, 1, 2, 0);
}}


char* func_1460(){
return "EXEC_BM_C_OVER";
}


char* func_1461(){
return "EXEC_BM_C_S_F";
}


char* func_1462(){
return "";
}

int func_1463(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10){
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
func_1481(iParam0, &Var0, iParam5, sParam2, sParam3);
StringCopy(&(Var0.f_57), sParam1, 16);
StringCopy(&(Var0.f_61), sParam7, 16);
Var0.f_6=iParam4;
Var0.f_7=iParam6;
Var0.f_71=iParam8;
Var0.f_72=iParam9;
if(iParam10 !=0){
func_1479(&(Var0.f_69), iParam10);
}
return func_1464(&Var0);
}

int func_1464(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672505.f_2836){
return 0;
}}
func_1478(uParam0, uParam0->f_17);
func_1475(uParam0);
if(func_94()){
func_1475(uParam0);
}
if(func_1474(uParam0->f_1)){
func_1467();
if(Global_2672505.f_2514[0 /*80*/].f_2==0){
Global_2672505.f_2514[0 /*80*/]={
*uParam0 
};
if(func_1466(uParam0->f_69, 8192)){
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
func_1467();
}
return 1;
}else{
if(uParam0->f_1==1){
func_1479(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_1466(uParam0->f_69, 128)){
if(func_1465(Global_2672505.f_2514[iVar0 /*80*/].f_1)){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_1479(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_1465(int iParam0){
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


bool func_1466(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_1467(){
bool bVar0;
if(Global_2672505.f_2837){
return;
}
if(!Global_78827){
Global_78827=1;
bVar0=true;
}
func_1468();
if(bVar0){
Global_78827=0;
}}


void func_1468(){
Global_2672505.f_2838=0;
Global_2672505.f_2838.f_582=0;
func_1472(&(Global_2672505.f_2838.f_1));
Global_2672505.f_2838.f_1.f_1=0;
func_1469(&(Global_2672505.f_2838.f_1), 1);
}


void func_1469(var uParam0, int iParam1){
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
if(CAM::IS_SCREEN_FADED_OUT() && !func_1471(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_1470(0);
}


void func_1470(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}

int func_1471(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_1472(var uParam0){
func_1473(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_1473(var uParam0){
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

int func_1474(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_1475(var uParam0){
if(func_1477(uParam0->f_1)){
uParam0->f_72=func_1476();
}}

int func_1476(){
return 21;
}

int func_1477(int iParam0){
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


void func_1478(var uParam0, bool bParam1){
if(func_1477(uParam0->f_1)){
uParam0->f_73=1;
}
if(bParam1==func_66() || !func_9(bParam1, 0, 1)){
return;
}
if(func_1465(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_662(bParam1, -2, 0, 0, 0);
}}}


void func_1479(var uParam0, int iParam1){
func_1480(uParam0, iParam1);
}


void func_1480(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_1481(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_66();
uParam1->f_18=func_66();
uParam1->f_19=func_66();
uParam1->f_20=func_66();
uParam1->f_1=uParam0;
uParam1->f_2=1;
StringCopy(&(uParam1->f_21), sParam4, 16);
StringCopy(&(uParam1->f_8), sParam3, 32);
uParam1->f_16=1;
uParam1->f_3=uParam2;
uParam1->f_71=1;
uParam1->f_74=1;
uParam1->f_75=1;
uParam1->f_76=0;
uParam1->f_77=0;
uParam1->f_73=0;
StringCopy(&(uParam1->f_25), "", 64);
StringCopy(&(uParam1->f_41), "", 64);
}


char* func_1482(){
return "EXEC_BM_C_PASS";
}


char* func_1483(){
return "EXEC_BM_C_S_P";
}


char* func_1484(){
return "";
}


bool func_1485(){
return (func_1487() || func_1486());
}

int func_1486(){
return 0;
}


bool func_1487(){
return (func_162(iLocal_1292, 3) || func_1488(bLocal_1288));
}


bool func_1488(bool bParam0){
return func_1489(bParam0);
}


bool func_1489(bool bParam0){
return func_302(bParam0, 20);
}


bool func_1490(int iParam0, int iParam1, int iParam2){
return ((!func_1555() && !func_1554()) && func_1491((iParam0 && func_1553()), func_1552(), func_1551(), 0));
}

int func_1491(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
if(func_1550(iVar0, 14)){
return 0;
}
if(func_1549(iVar0, 21)){
return 0;
}
if(func_1549(iVar0, 25)){
return 0;
}
if(bParam2){
if(NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()){
return 0;
}}
if(!func_1548(iVar0)){
return 0;
}
if(bParam0){
if(NETWORK::NETWORK_IS_IN_MP_CUTSCENE()){
return 0;
}}
if(func_1547(iVar0)){
return 0;
}
if(func_1546()){
return 0;
}
if(func_1545()){
return 0;
}
if(func_1544()){
return 0;
}
if(func_1543()){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
if(func_384(iVar0)){
return 0;
}
if(!func_1541()){
return 0;
}
if(func_1549(iVar0, 0) || func_1549(iVar0, 3)){
return 0;
}
if((func_1549(iVar0, 12) || func_1549(iVar0, 14)) || func_1549(iVar0, 13)){
return 0;
}
if(func_1538(iVar0, 0, -1)){
if(!func_1503()){
return 0;
}}
if(bParam1){
if(func_259()){
return 0;
}}
if(Global_1935176){
return 0;
}
if(func_1502(iVar0)){
return 0;
}
if(func_1501()){
return 0;
}
if(func_1500(iVar0)){
return 0;
}
if((func_436(iVar0) && func_433(iVar0)==123) && !bParam3){
return 0;
}
if(func_1499()){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853910[iVar0 /*862*/].f_267.f_31, 4)){
if(!func_1498()){
return 0;
}}
if(func_1497(iVar0)){
return 0;
}
if(func_1496(iVar0)){
return 0;
}
if(!func_1489(iVar0)){
if(func_300(iVar0)){
return 0;
}}
if(func_1494()){
return 0;
}
if(func_1493(iVar0) && !func_1492(iVar0)){
return 0;
}
return 1;
}

int func_1492(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==23;
}}}
return 0;
}

int func_1493(int iParam0){
if(iParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
}
return 0;
}


bool func_1494(){
return func_1495()==1;
}

int func_1495(){
return Global_1977557;
}

int func_1496(bool bParam0){
var uVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(bParam0==PLAYER::PLAYER_ID()){
return Global_2764907;
}else{
uVar0=PLAYER::GET_PLAYER_PED(bParam0);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
return 0;
}else{
return 1;
}}else{
return 0;
}}
return 0;
}

int func_1497(int iParam0){
if(Global_2657589[iParam0 /*466*/].f_272.f_4 !=0 || Global_2657589[iParam0 /*466*/].f_272.f_5){
return 1;
}
return 0;
}

int func_1498(){
int iVar0;
iVar0=func_276(PLAYER::PLAYER_ID());
if(func_449(Global_1853556.f_19, -1)){
if(iVar0==293){
return 1;
}}
return 0;
}


bool func_1499(){
return Global_1950108.f_4667 !=-1;
}

int func_1500(bool bParam0){
if(MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_267.f_31, 14)){
return 1;
}
if(MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_267.f_31, 11)){
return 1;
}
return 0;
}

int func_1501(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}

int func_1502(bool bParam0){
if(!func_9(bParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_1503(){
int iVar0;
iVar0=func_276(PLAYER::PLAYER_ID());
if(func_1533(PLAYER::PLAYER_ID())){
if(((((iVar0==167 || iVar0==168) || iVar0==178) || iVar0==188) || iVar0==294) || iVar0==295){
return 1;
}}
if(func_1532(PLAYER::PLAYER_ID())){
if(((func_1531(iVar0) || func_1530(iVar0)) || iVar0==293) || iVar0==292){
return 1;
}}
if(func_1529(PLAYER::PLAYER_ID())){
if(func_1530(iVar0)){
return 1;
}}
if(func_1528(PLAYER::PLAYER_ID())){
if(func_1527(iVar0)){
return 1;
}}
if(func_1526(PLAYER::PLAYER_ID())){
if(func_1525(iVar0)){
return 1;
}}
if(func_1524(PLAYER::PLAYER_ID())){
if(func_870(iVar0)){
return 1;
}}
if(func_1523(PLAYER::PLAYER_ID())){
if(func_1522(iVar0)){
return 1;
}}
if(func_437(PLAYER::PLAYER_ID(), 0)){
if(func_1521(iVar0)){
if(func_1519(PLAYER::PLAYER_ID())){
return 1;
}}}
if(func_1518(PLAYER::PLAYER_ID())){
if(func_1517(iVar0)){
return 1;
}
if(func_1516(iVar0)){
return 1;
}
if(func_1515()){
return 1;
}}
if(func_1514(PLAYER::PLAYER_ID())){
if(func_1513()){
return 1;
}}
if(func_1512(PLAYER::PLAYER_ID())){
if(func_1516(iVar0)){
return 1;
}}
if(func_287(PLAYER::PLAYER_ID())){
if(func_1511(iVar0)){
return 1;
}}
if(func_1492(PLAYER::PLAYER_ID())){
if(func_1510(iVar0)){
return 1;
}}
if(func_1509(PLAYER::PLAYER_ID())){
if(func_1508(iVar0) || func_1507(iVar0)){
return 1;
}}
if(func_1506(PLAYER::PLAYER_ID())){
if(func_1505(iVar0) || func_1504(iVar0)){
return 1;
}}
return 0;
}

int func_1504(int iParam0){
switch (iParam0){
case 304:
return 1;
default:
}
return 0;
}

int func_1505(int iParam0){
switch (iParam0){
case 305:
return 1;
default:
}
return 0;
}

int func_1506(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_66()){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==25;
}}}
return 0;
}

int func_1507(int iParam0){
switch (iParam0){
case 263:
return 1;
default:
}
return 0;
}

int func_1508(int iParam0){
switch (iParam0){
case 264:
return 1;
default:
}
return 0;
}

int func_1509(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==24;
}}}
return 0;
}

int func_1510(int iParam0){
switch (iParam0){
case 276:
return 1;
default:
}
return 0;
}

int func_1511(int iParam0){
switch (iParam0){
case 271:
return 1;
default:
}
return 0;
}

int func_1512(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_66()){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==20;
}}}
return 0;
}


bool func_1513(){
return Global_2793046.f_6881;
}

int func_1514(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==16;
}}}
return 0;
}


bool func_1515(){
return Global_2793046.f_6880;
}

int func_1516(int iParam0){
switch (iParam0){
case 256:
return 1;
default:
}
return 0;
}

int func_1517(int iParam0){
switch (iParam0){
case 158:
return 1;
default:
}
return 0;
}

int func_1518(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==14;
}}}
return 0;
}

int func_1519(int iParam0){
if(func_1520(iParam0) !=func_66()){
return func_1520(iParam0)==func_98(iParam0);
}
return 0;
}

int func_1520(int iParam0){
return Global_1894573[iParam0 /*608*/].f_10.f_35;
}

int func_1521(int iParam0){
switch (iParam0){
case 241:
case 248:
case 242:
case 244:
case 240:
case 239:
return 1;
default:
}
return 0;
}

int func_1522(int iParam0){
switch (iParam0){
case 237:
case 238:
case 249:
case 250:
return 1;
default:
}
return 0;
}

int func_1523(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==11;
}}}
return 0;
}

int func_1524(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==9;
}}}
return 0;
}

int func_1525(int iParam0){
switch (iParam0){
case 229:
case 230:
return 1;
default:
}
return 0;
}

int func_1526(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==7;
}}}
return 0;
}

int func_1527(int iParam0){
switch (iParam0){
case 225:
case 226:
case 227:
return 1;
default:
}
return 0;
}

int func_1528(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==4;
}}}
return 0;
}

int func_1529(int iParam0){
int iVar0;
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
iVar0=func_288(Global_2657589[iParam0 /*466*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_1530(int iParam0){
switch (iParam0){
case 190:
case 191:
case 192:
return 1;
default:
}
return 0;
}

int func_1531(int iParam0){
switch (iParam0){
case 180:
case 183:
case 185:
case 186:
case 182:
case 195:
case 197:
case 198:
case 207:
case 208:
case 209:
return 1;
default:
}
return 0;
}

int func_1532(int iParam0){
if(func_449(Global_1853910[iParam0 /*862*/].f_267.f_33, -1)){
return 1;
}
return 0;
}

int func_1533(int iParam0){
if(((func_728(Global_1853910[iParam0 /*862*/].f_267.f_33) || func_1537(iParam0)) || func_1536(iParam0)) || func_1534(iParam0)){
return 1;
}
return 0;
}

int func_1534(bool bParam0){
if(func_1535(Global_1853910[bParam0 /*862*/].f_267.f_33, 0, 0)){
return 1;
}
return 0;
}

int func_1535(int iParam0, bool bParam1, bool bParam2){
if(bParam2){
return func_724(PLAYER::PLAYER_ID(), 0);
}
if(bParam1){
if(func_724(PLAYER::PLAYER_ID(), 0)){
return 0;
}
switch (iParam0){
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 1;
break;
}}
switch (iParam0){
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 1;
break;
}
return 0;
}

int func_1536(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==1;
}}}
return 0;
}

int func_1537(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==0;
}}}
return 0;
}

int func_1538(bool bParam0, bool bParam1, int iParam2){
if(Global_1853910[bParam0 /*862*/].f_267.f_33 > 0){
if(bParam1){
if(MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_267.f_31, 0)){
return 1;
}}else{
return 1;
}}
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
if(iParam2==-1 || func_288(Global_2657589[bParam0 /*466*/].f_321.f_7) !=iParam2){
if(bParam1){
return func_1539(bParam0)==bParam0;
}
return 1;
}}
return 0;
}

int func_1539(int iParam0){
int iVar0;
if(iParam0==func_66()){
return iParam0;
}
if(func_1540(iParam0) !=-1){
iVar0=func_288(func_1540(iParam0));
if(((iVar0==2 || iVar0==1) || iVar0==0) || iVar0==25){
if(func_73(iParam0, 0)){
return func_98(iParam0);
}
return iParam0;
}elseif(iVar0==3){
return func_66();
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}
return func_66();
}

int func_1540(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}elseif(((Global_1575060 || Global_2635559.f_2680) && iParam0==PLAYER::PLAYER_ID()) && func_9(iParam0, 1, 0)){
return Global_2657589[iParam0 /*466*/].f_321.f_7;
}}
return -1;
}

int func_1541(){
if(func_1542()==0){
return 1;
}
return 0;
}

int func_1542(){
return Global_1574632.f_18;
}


bool func_1543(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


bool func_1544(){
return Global_1575060;
}


bool func_1545(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==5;
}


bool func_1546(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 0);
}

int func_1547(bool bParam0){
if(func_383(bParam0, 1, 0)){
if(Global_1853910[bParam0 /*862*/] !=6){
return 1;
}}
return 0;
}


bool func_1548(bool bParam0){
return MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_139, 22);
}


bool func_1549(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}


bool func_1550(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_5, iParam1);
}


bool func_1551(){
if(Local_274.f_53.f_6 !=0){
Call_Loc(Local_274.f_53.f_6);
return StackVal;
}
if(func_1515()){
return 0;
}
return !func_1440(3);
}

int func_1552(){
if(Local_274.f_53.f_7 !=0){
Call_Loc(Local_274.f_53.f_7);
return StackVal;
}
return 1;
}


bool func_1553(){
return !func_2450();
}

int func_1554(){
return 0;
}

int func_1555(){
if((func_302(PLAYER::PLAYER_ID(), 21) || func_302(PLAYER::PLAYER_ID(), 22)) || func_1561()){
return 1;
}
if(func_1557()){
func_1556(22);
return 1;
}
return 0;
}


void func_1556(bool bParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}

int func_1557(){
if(func_275(PLAYER::PLAYER_ID(), 0)){
if(((func_1560() && !func_1559()) || func_1549(PLAYER::PLAYER_ID(), 21)) || func_1549(PLAYER::PLAYER_ID(), 25)){
return 1;
}else{
func_1558(27);
}}
return 0;
}


void func_1558(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}


bool func_1559(){
return Global_1574582.f_1;
}


bool func_1560(){
return Global_1574582;
}


bool func_1561(){
return func_1562(424, -1);
}

int func_1562(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_256(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_1563(){
if(func_582()==2 && func_1564(Local_1298.f_0) !=3){
return 0;
}
if(func_1440(11)){
if(func_35(24) || func_35(23)){
return 0;
}}
return 1;
}

int func_1564(int iParam0){
switch (iParam0){
case 153:
case 154:
case 155:
case 162:
case 160:
case 163:
case 167:
case 168:
case 169:
case 171:
case 172:
case 178:
case 190:
case 191:
case 192:
case 189:
case 193:
case 194:
case 199:
case 205:
case 210:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
case 262:
case 263:
case 264:
case 271:
case 277:
case 291:
case 292:
case 293:
case 294:
case 295:
case 296:
case 297:
case 298:
case 299:
case 300:
case 301:
case 304:
case 305:
case 306:
case 307:
case 308:
case 309:
return 0;
case 276:
case 267:
return 3;
case 152:
case 159:
case 142:
case 164:
case 157:
case 166:
case 170:
case 173:
case 180:
case 183:
case 185:
case 182:
case 186:
case 197:
case 200:
case 201:
case 198:
case 195:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 241:
case 242:
case 244:
case 248:
return 1;
case 148:
case 179:
return 2;
default:
}
return -1;
}


void func_1565(){
int iVar0;
if(func_162(iLocal_1292, 25)){
return;
}
if(func_1567()){
return;
}
iVar0=0;
while (iVar0 < func_516()){
if(Local_1334.f_1253.f_1[iVar0 /*5*/].f_1 !=-1){
func_1566(Local_1334.f_1253.f_1[iVar0 /*5*/]);
}
iVar0++;
}
func_1446(25);
}


void func_1566(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 20){
if(Global_1956139.f_5610[iVar0 /*2*/].f_1==-1){
Global_1956139.f_5610[iVar0 /*2*/]={
Param0 
};
MISC::SET_BIT(&Global_1956139, true);
return;
}
iVar0++;
}
if(!MISC::IS_BIT_SET(Global_1956139, 1)){
MISC::SET_BIT(&Global_1956139, true);
}}


bool func_1567(){
return func_1568(PLAYER::PLAYER_ID());
}

int func_1568(int iParam0){
if(iParam0 !=func_66()){
if(func_530(Global_1894573[iParam0 /*608*/].f_556.f_12) || MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_556, 4)){
return 1;
}}
return 0;
}


void func_1569(){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 < Local_198.f_103){
if(func_83(iVar1, 19)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_72[iVar1 /*25*/])){
iVar0=NETWORK::NET_TO_PED(Local_1334.f_72[iVar1 /*25*/]);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
func_1570(iVar1, iVar0);
}}}
iVar1++;
}}


void func_1570(int iParam0, int iParam1){
struct<3> Var0;
if(!func_1575(iParam1, -251125078, 1) && func_800(Local_1334.f_72[iParam0 /*25*/])){
func_1574(iParam0, iParam1);
Var0={
func_1573(iParam0) 
};
TASK::TASK_SMART_FLEE_COORD(iParam1, Var0, func_1572(iParam0), func_1571(iParam0), 0, 0);
}}

int func_1571(int iParam0){
if(Local_274.f_166.f_2.f_75.f_2 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_2.f_75.f_2);
return StackVal;
}
return -1;
}


float func_1572(int iParam0){
if(Local_274.f_166.f_2.f_75.f_1 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_2.f_75.f_1);
return StackVal;
}
return 10000f;
}


Vector3 func__1573(int iParam0){
if(Local_274.f_166.f_2.f_75 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_166.f_2.f_75);
return StackVal, StackVal, StackVal;
}
return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_1334.f_72[iParam0 /*25*/]), 0);
}


void func_1574(int iParam0, int iParam1){
if(Local_274.f_166.f_2.f_75.f_3 !=0){
Stack.Push(iParam0);
Stack.Push(iParam1);
Call_Loc(Local_274.f_166.f_2.f_75.f_3);
return;
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, 0);
}

int func_1575(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
if(iVar0==1 || iVar0==0){
return 1;
}elseif(!bParam2){
if(iVar0==2 || iVar0==3){
return 1;
}}
return 0;
}


void func_1576(){
char* sVar0;
if(func_1440(11)){
sVar0=func_1580();
}else{
sVar0=func_1578();
}
if(iLocal_1278 !=-1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar0)){
AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
}}
func_1577(0);
}


void func_1577(bool bParam0){
if(bParam0){
if(!func_1440(34)){
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
func_155(34);
}}elseif(func_1440(34)){
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
func_489(34);
}}


var func__1578(){
if(Local_274.f_104.f_3.f_3 !=0){
Call_Loc(Local_274.f_104.f_3.f_3);
return StackVal;
}
return func_1579();
}


char* func_1579(){
return "";
}


var func__1580(){
if(Local_274.f_104.f_3.f_2 !=0){
Call_Loc(Local_274.f_104.f_3.f_2);
return StackVal;
}
return func_1581();
}


char* func_1581(){
return "";
}


void func_1582(){
bool bVar0;
bool bVar1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
iVar5=-1;
iVar4=0;
while (iVar4 < Local_198.f_19){
func_1770(iVar4);
bVar0=NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_2[iVar4]);
if(bVar0){
iVar3=NETWORK::NET_TO_ENT(Local_1334.f_2[iVar4]);
bVar1=ENTITY::IS_ENTITY_DEAD(iVar3, 0);
if(Local_274.f_124.f_34 !=0){
Stack.Push(iVar4);
Stack.Push(iVar3);
Stack.Push(bVar1);
Call_Loc(Local_274.f_124.f_34);
}
if(!bVar1){
func_1765(iVar4, iVar3);
func_1764(iVar4, iVar3);
func_1747(iVar4, iVar3, &bVar2, &iVar5);
func_1742(iVar4, iVar3);
func_1730(iVar4, iVar3, bVar2);
func_1725(iVar4, iVar3);
}
func_1724(iVar4);
func_1711(iVar4, Local_1230.f_11);
func_1643(iVar4);
}else{
Local_1174[iVar4 /*7*/].f_1=99999f;
Local_1174[iVar4 /*7*/].f_2=99999f;
Local_1174[iVar4 /*7*/].f_3=99999f;
}
func_1628(iVar4, bVar0);
iVar4++;
}
if(func_1488(bLocal_1288)){
if(bVar2){
func_1625(1);
}else{
func_1620(0, 0);
func_1625(0);
}}
func_1609();
func_1584();
iLocal_1321++;
if(iLocal_1321 >=func_40()){
iLocal_1321=0;
func_1583();
}}


void func_1583(){
if(func_13(&(Local_1174.f_47), 5000, 0) && Local_1174.f_49){
func_30(&(Local_1174.f_47));
Local_1174.f_49=0;
}}


void func_1584(){
struct<3> Var0;
bool bVar1;
int iVar2;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_2[iLocal_1321])){
iVar2=NETWORK::NET_TO_ENT(Local_1334.f_2[iLocal_1321]);
bVar1=ENTITY::IS_ENTITY_DEAD(iVar2, 0);
Var0={
ENTITY::GET_ENTITY_COORDS(iVar2, 0) 
};
if(!bVar1){
func_1607(iLocal_1321, Var0);
if(func_13(&(Local_1174.f_47), 5000, 0)){
if(iLocal_1321==0){
Local_1174.f_49=1;
}
func_1585(iLocal_1321, iVar2, Var0);
}}}}


void func_1585(int iParam0, int iParam1, struct<3> Param2){
int iVar0;
struct<3> Var1;
int iVar2;
int iVar3;
var uVar4;
struct<3> Var5;
float fVar6;
iVar0=func_1605(Param2, 6, -1, 0, 1, -1);
Var1={
func_1592(iVar0, 0) 
};
iVar2=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, func_1588(iVar0));
iVar3=INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
if(iVar2 !=0 && iVar2==iVar3){
if(ENTITY::IS_ENTITY_ATTACHED(iParam1)){
}elseif(!func_800(Local_1334.f_2[iParam0])){
}elseif(func_1587(iVar0, &Var1, &uVar4)){
Var1={
Var1.f_0, Var1.f_1, (Var1.f_2 + 5f) 
};
ENTITY::SET_ENTITY_COORDS(iParam1, Var1, 1, 0, 0, 1);
if(ENTITY::IS_ENTITY_AN_OBJECT(iParam1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
}
ENTITY::SET_ENTITY_HEADING(iParam1, uVar4);
INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam1);
}}
if(iVar3 !=0 && func_1586(bLocal_1288)){
if(ENTITY::IS_ENTITY_ATTACHED(iParam1)){
}elseif(!func_800(Local_1334.f_2[iParam0])){
}else{
if(vdist2(Param2, -64.7017f, -1092.087f, 25.5856f) < vdist2(Param2, -38.848f, -1110.146f, 25.443f)){
Var5={
-64.7017f, -1092.087f, 25.5856f 
};
fVar6=239.817f;
}else{
Var5={
-38.848f, -1110.146f, 25.443f 
};
fVar6=221.162f;
}
ENTITY::SET_ENTITY_COORDS(iParam1, Var5, 1, 0, 0, 1);
if(ENTITY::IS_ENTITY_AN_OBJECT(iParam1)){
OBJECT::PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
}
ENTITY::SET_ENTITY_HEADING(iParam1, fVar6);
INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam1);
}}}

int func_1586(bool bParam0){
if(bParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_321.f_5, 25);
}
return 0;
}


bool func_1587(int iParam0, var uParam1, var uParam2){
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
switch (iParam0){
case 0:
*uParam1={
-829.842f, -191.7454f, 36.4386f 
};
*uParam2=29.5061f;
break;
case 1:
*uParam1={
129.8484f, -1716.528f, 28.0702f 
};
*uParam2=50.3483f;
break;
case 2:
*uParam1={
-1296.913f, -1120.999f, 5.3951f 
};
*uParam2=0.9933f;
break;
case 3:
*uParam1={
1938.028f, 3718.736f, 31.3154f 
};
*uParam2=118.2305f;
break;
case 4:
*uParam1={
1197.866f, -469.3809f, 65.0885f 
};
*uParam2=346.4477f;
break;
case 5:
*uParam1={
-32.2161f, -135.8212f, 56.0532f 
};
*uParam2=186.0052f;
break;
case 6:
*uParam1={
-287.7696f, 6238.081f, 30.2902f 
};
*uParam2=316.1349f;
break;
case 7:
*uParam1={
99.2876f, -1395.16f, 28.2759f 
};
*uParam2=320.2739f;
break;
case 8:
*uParam1={
1679.445f, 4819.056f, 41.0035f 
};
*uParam2=4.6192f;
break;
case 9:
*uParam1={
411.3063f, -809.1863f, 28.1554f 
};
*uParam2=1.8972f;
break;
case 10:
*uParam1={
-1088.054f, 2699.167f, 19.2748f 
};
*uParam2=129.7382f;
break;
case 11:
*uParam1={
1194.163f, 2695.644f, 36.9225f 
};
*uParam2=1.1454f;
break;
case 12:
*uParam1={
-821.2829f, -1088.027f, 10.0499f 
};
*uParam2=120.5883f;
break;
case 13:
*uParam1={
-3.3416f, 6521.303f, 30.2961f 
};
*uParam2=316.4451f;
break;
case 14:
*uParam1={
-1208.417f, -785.9635f, 16.0139f 
};
*uParam2=36.3181f;
break;
case 15:
*uParam1={
623.1845f, 2739.191f, 40.9588f 
};
*uParam2=3.5411f;
break;
case 16:
*uParam1={
130.9555f, -198.2084f, 53.41f 
};
*uParam2=251.3506f;
break;
case 17:
*uParam1={
-3164.065f, 1067.317f, 19.6778f 
};
*uParam2=101.2229f;
break;
case 18:
*uParam1={
-713.2797f, -174.2767f, 35.8962f 
};
*uParam2=29.8138f;
break;
case 19:
*uParam1={
-147.0616f, -306.4322f, 37.7912f 
};
*uParam2=160.4526f;
break;
case 20:
*uParam1={
-1461.355f, -230.6092f, 48.3064f 
};
*uParam2=318.7851f;
break;
case 21:
*uParam1={
-1347.739f, -1278.573f, 3.8952f 
};
*uParam2=17.9365f;
break;
case 22:
*uParam1={
325.6833f, 164.3263f, 102.4425f 
};
*uParam2=68.6407f;
break;
case 23:
*uParam1={
1858.774f, 3742.393f, 32.0779f 
};
*uParam2=301.2329f;
break;
case 24:
*uParam1={
-286.3272f, 6202.802f, 30.3323f 
};
*uParam2=225.1334f;
break;
case 25:
*uParam1={
-1161.596f, -1417.7f, 3.712f 
};
*uParam2=246.9161f;
break;
case 26:
*uParam1={
1308.952f, -1660.611f, 50.2362f 
};
*uParam2=163.5456f;
break;
case 27:
*uParam1={
-3161.585f, 1074.214f, 19.6847f 
};
*uParam2=98.6092f;
break;
case 28:
*uParam1={
28.423f, -1110.814f, 28.2848f 
};
*uParam2=85.2495f;
break;
case 29:
*uParam1={
1704.966f, 3749.709f, 33.0188f 
};
*uParam2=45.6778f;
break;
case 30:
*uParam1={
223.949f, -38.7894f, 68.6483f 
};
*uParam2=159.4265f;
break;
case 31:
*uParam1={
837.7854f, -1017.963f, 26.3045f 
};
*uParam2=181.0445f;
break;
case 32:
*uParam1={
-313.1914f, 6093.351f, 30.4625f 
};
*uParam2=315.8405f;
break;
case 33:
*uParam1={
-663.4631f, -952.8069f, 20.3143f 
};
*uParam2=92.6796f;
break;
case 34:
*uParam1={
-1323.06f, -392.8577f, 35.4596f 
};
*uParam2=210.7398f;
break;
case 35:
*uParam1={
-1106.102f, 2684.35f, 18.0953f 
};
*uParam2=127.0383f;
break;
case 36:
*uParam1={
-3157.932f, 1081.309f, 19.6953f 
};
*uParam2=100.2942f;
break;
case 37:
*uParam1={
2562.882f, 312.8641f, 107.4612f 
};
*uParam2=179.205f;
break;
case 38:
*uParam1={
822.48f, -2142.875f, 27.8496f 
};
*uParam2=355.0598f;
break;
case 39:
*uParam1={
-1137.053f, -1993.916f, 12.1677f 
};
*uParam2=43.1213f;
break;
case 40:
*uParam1={
717.8107f, -1084.081f, 21.3094f 
};
*uParam2=93.2649f;
break;
case 41:
*uParam1={
-387.6789f, -128.2568f, 37.6796f 
};
*uParam2=119.1085f;
break;
case 42:
*uParam1={
117.8835f, 6599.415f, 31.0134f 
};
*uParam2=90.7225f;
break;
case 43:
*uParam1={
1201.709f, 2664.813f, 36.8102f 
};
*uParam2=133.9002f;
break;
case 44:
*uParam1={
-200.1521f, -1297.502f, 30.296f 
};
*uParam2=269.0687f;
break;
case 45:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 47:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 48:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 49:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 52:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 50:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 51:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 54:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 55:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 56:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 57:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
return !func_266(*uParam1, 0f, 0f, 0f, 0);
}


char* func_1588(int iParam0){
switch (iParam0){
case -1:
return "";
break;
case 0:
return "v_hairdresser";
break;
case 1:
return "v_barbers";
break;
case 2:
return "v_barbers";
break;
case 3:
return "v_barbers";
break;
case 4:
return "v_barbers";
break;
case 5:
return "v_barbers";
break;
case 6:
return "v_barbers";
break;
case 7:
return "v_clotheslo";
break;
case 8:
return "v_clotheslo";
break;
case 9:
return "v_clotheslo";
break;
case 10:
return "v_clotheslo";
break;
case 11:
return "v_clotheslo";
break;
case 12:
return "v_clotheslo";
break;
case 13:
return "v_clotheslo";
break;
case 14:
return "v_clothesmid";
break;
case 15:
return "v_clothesmid";
break;
case 16:
return "v_clothesmid";
break;
case 17:
return "v_clothesmid";
break;
case 18:
return "v_clotheshi";
break;
case 19:
return "v_clotheshi";
break;
case 20:
return "v_clotheshi";
break;
case 21:
return "";
break;
case 22:
return "v_tattoo";
break;
case 23:
return "v_tattoo2";
break;
case 24:
return "v_tattoo2";
break;
case 25:
return "v_tattoo";
break;
case 26:
return "v_tattoo";
break;
case 27:
return "v_tattoo";
break;
case 28:
return "v_gun";
break;
case 29:
return "v_gun2";
break;
case 30:
return "v_gun2";
break;
case 31:
return "v_gun2";
break;
case 32:
return "v_gun2";
break;
case 33:
return "v_gun2";
break;
case 34:
return "v_gun2";
break;
case 35:
return "v_gun2";
break;
case 36:
return "v_gun2";
break;
case 37:
return "v_gun2";
break;
case 38:
return "v_gun";
break;
case 39:
return "v_carmod";
break;
case 40:
return "v_lockup";
break;
case 41:
return "v_carmod";
break;
case 42:
return "v_carmod3";
break;
case 43:
return "v_carmod3";
break;
case 44:
return "lr_supermod_int";
break;
case 45:
return func_1589(Global_102825);
break;
case 46:
return "gr_grdlc_int_01";
break;
case 47:
return "xm_x17dlc_int_01";
break;
case 48:
return "ba_dlc_int_03_ba";
break;
case 49:
return "xs_x18_int_mod";
break;
case 52:
return "ch_dlc_plan";
break;
case 50:
return "vw_dlc_casino_apart";
break;
case 51:
return "vw_dlc_casino_main";
break;
case 53:
return "h4_int_sub_h4";
break;
case 54:
return "tr_tuner_car_meet";
break;
case 55:
return "tr_tuner_car_meet";
break;
case 56:
return "sf_dlc_office_sec";
break;
case 57:
return "sf_dlc_studio_sec";
break;
case 58:
return "";
break;
case 59:
return "xm3_dlc_int_03_xm3";
break;
}
return "";
}


char* func_1589(int iParam0){
switch (iParam0){
case 1:
return "imp_impexp_intwaremed";
break;
case 2:
return "imp_impexp_intwaremed";
break;
case 3:
return "imp_impexp_intwaremed";
break;
case 6:
case 7:
case 8:
case 9:
return "imp_imptexp_mod_int_01";
break;
case 4:
return "Bkr_Biker_DLC_INT_01";
break;
case 5:
return "Bkr_Biker_DLC_INT_02";
break;
case 10:
return "gr_grdlc_int_01";
break;
case 11:
return "gr_grdlc_int_02";
break;
case 12:
return "sm_smugdlc_int_01";
break;
case 13:
return "xm_x17dlc_int_01";
break;
case 14:
return "xm_x17dlc_int_02";
break;
case 15:
return "ba_dlc_int_01_ba";
break;
case 16:
return "ba_dlc_int_03_ba";
break;
case 17:
if(func_1590()==0){
return "xs_x18_int_mod";
}else{
return "xs_x18_int_mod2";
}
break;
case 18:
return "tr_tuner_car_meet";
break;
case 19:
return "tr_tuner_mod_garage";
break;
case 20:
return "sf_dlc_garage_sec";
break;
case 21:
return "xm3_dlc_int_03_xm3";
break;
default:
return "";
break;
}
return "";
}

int func_1590(){
return func_1591(PLAYER::PLAYER_ID());
}


var func__1591(bool bParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657589[bParam0 /*466*/].f_321.f_3, 28, 31);
}


Vector3 func__1592(int iParam0, bool bParam1){
switch (iParam0){
case -1:
return 0f, 0f, 0f;
break;
case 0:
return -821.9946f, -187.1776f, 36.5689f;
break;
case 1:
return 133.5702f, -1710.918f, 28.2916f;
break;
case 2:
return -1287.082f, -1116.558f, 5.9901f;
break;
case 3:
return 1933.119f, 3726.079f, 31.8444f;
break;
case 4:
return 1208.333f, -470.917f, 65.208f;
break;
case 5:
return -30.7448f, -148.4921f, 56.0765f;
break;
case 6:
return -280.8165f, 6231.771f, 30.6955f;
break;
case 7:
return 80.665f, -1391.669f, 28.3761f;
break;
case 8:
return 1687.881f, 4820.55f, 41.0096f;
break;
case 9:
return 419.531f, -807.5787f, 28.4896f;
break;
case 10:
return -1094.049f, 2704.171f, 18.0873f;
break;
case 11:
return 1197.972f, 2704.22f, 37.1572f;
break;
case 12:
return -818.6218f, -1077.533f, 10.3282f;
break;
case 13:
return -0.2361f, 6516.045f, 30.8684f;
break;
case 14:
return -1199.809f, -776.6886f, 16.3237f;
break;
case 15:
return 618.1857f, 2752.567f, 41.0881f;
break;
case 16:
return 126.6853f, -212.5027f, 53.5578f;
break;
case 17:
return -3168.966f, 1055.287f, 19.8632f;
break;
case 18:
return -715.3598f, -155.7742f, 36.4105f;
break;
case 19:
return -158.2199f, -304.9663f, 38.735f;
break;
case 20:
return -1455.005f, -233.1862f, 48.7936f;
break;
case 21:
return -1335.973f, -1278.555f, 3.8598f;
break;
case 22:
return 321.6098f, 179.4165f, 102.5865f;
break;
case 23:
return 1861.685f, 3750.08f, 32.0318f;
break;
case 24:
return -290.1603f, 6199.095f, 30.4871f;
break;
case 25:
return -1153.948f, -1425.019f, 3.9544f;
break;
case 26:
return 1322.455f, -1651.125f, 51.1885f;
break;
case 27:
return -3169.42f, 1074.727f, 19.8343f;
break;
case 28:
return 17.6804f, -1114.288f, 28.797f;
break;
case 29:
return 1697.979f, 3753.2f, 33.7053f;
break;
case 30:
return 245.2711f, -45.8126f, 68.941f;
break;
case 31:
return 844.1248f, -1025.571f, 27.1948f;
break;
case 32:
return -325.8904f, 6077.026f, 30.4548f;
break;
case 33:
return -664.2178f, -943.3646f, 20.8292f;
break;
case 34:
return -1313.948f, -390.9637f, 35.592f;
break;
case 35:
return -1111.238f, 2688.463f, 17.6131f;
break;
case 36:
return -3165.231f, 1082.855f, 19.8438f;
break;
case 37:
return 2569.612f, 302.576f, 107.7349f;
break;
case 38:
return 811.8699f, -2149.102f, 28.6363f;
break;
case 39:
return -1147.314f, -1992.434f, 12.1803f;
break;
case 40:
return 724.524f, -1089.081f, 21.1692f;
break;
case 41:
return -354.5272f, -135.4011f, 38.185f;
break;
case 42:
return 113.2615f, 6624.28f, 30.7871f;
break;
case 43:
return 1174.707f, 2644.45f, 36.7552f;
break;
case 44:
if(bParam1){
return -211.5f, -1324.2f, 30.296f;
}else{
return -205.6654f, -1311.113f, 30.296f;
}
break;
case 45:
return func_1604(Global_102825);
break;
case 46:
if(Global_1853747 !=func_66()){
if(func_1603(Global_1853747)){
return func_1596(2, 2);
}elseif(func_1595(Global_1853747)){
return func_1596(45, 3);
}else{
return 1000000f, 1000000f, 1000000f;
}}else{
return 1000000f, 1000000f, 1000000f;
}
break;
case 47:
return 510.1f, 4749.5f, -69f;
break;
case 48:
return -1422.197f, -3015.803f, -79.1603f;
break;
case 49:
return 203.0799f, 5200.189f, -89.6f;
break;
case 52:
return 2714.547f, -354.2701f, -55.1867f;
break;
case 50:
return Global_1970473;
break;
case 51:
return 1100f, 220f, -50f;
break;
case 53:
return 1560f, 400f, -50f;
break;
case 54:
return -2159.901f, 1075.213f, -25.36174f;
break;
case 55:
return -2194.123f, 1103.805f, -24.2451f;
break;
case 56:
switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7){
case 155:
return 379.4285f, -53.6067f, 111.7088f;
break;
case 156:
return -1029.166f, -426.3766f, 72.2069f;
break;
case 157:
return -581.9924f, -721.3945f, 121.3509f;
break;
case 158:
return -1013.718f, -768.3539f, 69.4942f;
break;
}
return 1000000f, 1000000f, 1000000f;
break;
case 57:
return -1010f, -70f, -100f;
break;
case 58:
return func_1593();
break;
case 59:
return 560f, -405f, -69.6591f;
break;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__1593(){
if(!func_102(Global_1956117)){
return Global_1956117;
}
switch (func_1594()){
case 0:
return -29.532f, 6435.136f, 31.162f;
case 1:
return 1705.214f, 4819.167f, 41.75f;
case 2:
return 1795.522f, 3899.753f, 33.869f;
case 3:
return 1335.536f, 2758.746f, 51.099f;
case 4:
return 795.583f, 1210.78f, 338.962f;
case 5:
return -3192.67f, 1077.205f, 20.594f;
case 6:
return -789.719f, 5400.921f, 33.915f;
case 7:
return -24.384f, 3048.167f, 40.703f;
case 8:
return 2666.786f, 1469.324f, 24.237f;
case 9:
return -1454.966f, 2667.503f, 3.2f;
case 10:
return 2340.418f, 3054.188f, 47.888f;
case 11:
return 1509.183f, -2146.795f, 76.853f;
case 12:
return 1137.404f, -1358.654f, 34.322f;
case 13:
return -57.208f, -2658.793f, 5.737f;
case 14:
return 1905.017f, 565.222f, 175.558f;
case 15:
return 974.484f, -1718.798f, 30.296f;
case 16:
return 779.077f, -3266.297f, 5.719f;
case 17:
return -587.728f, -1637.208f, 19.611f;
case 18:
return 733.99f, -736.803f, 26.165f;
case 19:
return -1694.632f, -454.082f, 40.712f;
case 20:
return -1330.726f, -1163.948f, 4.313f;
case 21:
return -496.618f, 40.231f, 52.316f;
case 22:
return 275.527f, 66.509f, 94.108f;
case 23:
return 260.928f, -763.35f, 30.559f;
case 24:
return -478.025f, -741.45f, 30.299f;
case 25:
return 894.94f, 3603.911f, 32.56f;
case 26:
return -2166.511f, 4289.503f, 48.733f;
case 27:
return 1465.633f, 6553.67f, 13.771f;
case 28:
return 1101.032f, -335.172f, 66.944f;
case 29:
return 149.683f, -1655.674f, 29.028f;
default:
}
return 0f, 0f, 0f;
}

int func_1594(){
return Global_2652258.f_2650;
}

int func_1595(int iParam0){
if(iParam0 !=func_66()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}


Vector3 func__1596(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
Var1={
1000000f, 1000000f, 1000000f 
};
if(Global_1853747 !=func_66()){
if(iParam1==3){
if(func_1597(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(iParam1==2){
if(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4)){
if(func_1597(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5)){
if(func_1597(iParam0, 2, &Var0, 0, 0)){
Var1={
Var0 
};
}}}}
return Var1;
}

int func_1597(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<4> Var0;
struct<3> Var1;
struct<4> Var2;
struct<3> Var3;
if(!func_1602(iParam3, &Var0)){
return 0;
}
if(!func_1602(iParam1, &Var1)){
return 0;
}
if(!bParam4){
Var2={
func_1600(iParam0) 
};
}else{
Var2={
func_1599(iParam0) 
};
}
Var3={
Var2 - Var0 
};
Var3={
func_1598(Var3, -Var0.f_3.f_2) 
};
Var3={
func_1598(Var3, Var1.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) 
};
uParam2->f_3={
Var2.f_3 
};
return 1;
}


Vector3 func__1598(struct<3> Param0, float fParam1){
struct<3> Var0;
float fVar1;
float fVar2;
fVar1=sin(fParam1);
fVar2=cos(fParam1);
Var0.f_0=((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
Var0.f_1=((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
Var0.f_2=Param0.f_2;
return Var0;
}


struct<6> func_1599(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 1:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 2:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 3:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 4:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 5:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 6:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 7:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 8:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
}
return Var0;
}


struct<6> func_1600(int iParam0){
return func_1601(iParam0);
}


struct<6> func_1601(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1105.22f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 1:
Var0={
1104.105f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 19:
Var0={
1105.22f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 20:
Var0={
1104.105f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 2:
Var0={
1102f, -3011.925f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
1103f, -3010f, -38.125f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
1103.213f, -3013.483f, -39.03f 
};
Var0.f_3={
0f, 0f, 31.32f 
};
break;
case 5:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1101.408f, -3012.32f, -38.45339f 
};
break;
case 6:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1103.037f, -3012.318f, -39.99874f 
};
break;
case 7:
Var0={
1105.645f, -3012.04f, -39.542f 
};
Var0.f_3={
0f, 0f, -86.04f 
};
break;
case 8:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1104.063f, -3012.368f, -39.99875f 
};
break;
case 9:
Var0={
1105.665f, -3012.334f, -38.50835f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 10:
Var0={
1102.504f, -3012.35f, -39.341f 
};
Var0.f_3={
0f, 0f, -96.48f 
};
break;
case 11:
Var0={
1102.928f, -3012.693f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 12:
Var0={
1102.942f, -3011.315f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 61:
Var0={
1101.994f, -3012.878f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 62:
Var0={
1103.152f, -3013.032f, -38.24946f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 13:
Var0={
1102.465f, -3009.515f, -39.341f 
};
Var0.f_3={
0f, 0f, -12.96f 
};
break;
case 14:
Var0={
1102.917f, -3009.525f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 15:
Var0={
1102.922f, -3010.887f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 63:
Var0={
1101.682f, -3009.227f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
1102.453f, -3008.51f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 16:
Var0={
1104.684f, -3009.561f, -39.341f 
};
Var0.f_3={
0f, 0f, 169.56f 
};
break;
case 17:
Var0={
1104.34f, -3008.698f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 18:
Var0={
1104.344f, -3009.618f, -37.98172f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 65:
Var0={
1105.459f, -3009.793f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 66:
Var0={
1104.783f, -3010.433f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 44:
Var0={
1104.025f, -3007.316f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 21:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 22:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 23:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 24:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 25:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 26:
Var0={
1102.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 27:
Var0={
1102.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 28:
Var0={
1105.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 29:
Var0={
1105.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 30:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 31:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 32:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 33:
Var0={
1102.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 34:
Var0={
1102.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 35:
Var0={
1105.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 36:
Var0={
1105.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 37:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 38:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 39:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
case 40:
Var0={
1102.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 41:
Var0={
1102.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 42:
Var0={
1105.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 43:
Var0={
1105.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 45:
Var0={
1101f, -3011.9f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 46:
Var0={
1102f, -3010f, -38.115f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 47:
Var0={
1105.174f, -3004.16f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 48:
Var0={
1105.175f, -3005.818f, -37.91948f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 49:
Var0={
1106.6f, -3000.847f, -39.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 50:
Var0={
1106.601f, -3002.171f, -37.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 51:
Var0={
1101.95f, -3011.9f, -39.2f 
};
Var0.f_3={
0f, 0f, 49.5f 
};
break;
case 52:
Var0={
1101.95f, -3010f, -39.2f 
};
Var0.f_3={
0f, 0f, 130.32f 
};
break;
case 53:
Var0={
1105.16f, -3009.06f, -39.2f 
};
Var0.f_3={
0f, 0f, -44.64f 
};
break;
case 54:
Var0={
1102.476f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 55:
Var0={
1099f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 56:
Var0={
1103.593f, -3008.27f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 57:
Var0={
1103.565f, -3014f, -39.988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 58:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 59:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 60:
Var0={
1103.55f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 67:
Var0={
1103.55f, -3013.762f, -40f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 68:
Var0={
1103.55f, -3006.186f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 71:
case 69:
case 70:
case 73:
case 72:
case 74:
Var0={
1103.6f, -3013.933f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
}
return Var0;
}

int func_1602(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1={
1103.562f, -3014f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 1:
*uParam1={
1103.562f, -3006f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 2:
*uParam1={
1103.562f, -2998f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
default:
}
return 0;
}

int func_1603(int iParam0){
if(iParam0 !=func_66()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 5)){
return 1;
}}
return 0;
}


Vector3 func__1604(int iParam0){
switch (iParam0){
case 1:
return 1060f, -2990f, -35f;
break;
case 2:
return 1060f, -2990f, -35f;
break;
case 3:
return 974.9542f, -3000.091f, -35f;
break;
case 6:
return -1586.36f, -566.6f, 106.17f;
break;
case 7:
return -1389.87f, -465.17f, 82.68f;
break;
case 8:
return -145.81f, -590.2f, 171.13f;
break;
case 9:
return -62.49f, -823.55f, 288.74f;
break;
case 4:
return 1102.515f, -3158.888f, -38.5186f;
break;
case 5:
return 1005.861f, -3156.162f, -39.907f;
break;
case 10:
return 1103.562f, -3000f, -40f;
break;
case 11:
return 938.3077f, -3196.112f, -100f;
break;
case 12:
return -1266.802f, -3014.836f, -49.4895f;
break;
case 13:
return 520.0001f, 4750f, -70f;
break;
case 14:
return 345.0041f, 4842.001f, -59.9997f;
break;
case 15:
return -1604.664f, -3012.583f, -79.9999f;
break;
case 16:
return -1421.015f, -3012.587f, -80f;
break;
case 17:
if(func_1590()==0){
return 205f, 5180f, -90f;
}else{
return 170f, 5190f, 10f;
}
break;
case 18:
return -2000f, 1250f, 50f;
break;
case 19:
return -1350f, 160f, -100f;
break;
case 20:
return -1070f, -70f, -100f;
break;
case 21:
return 570f, -415f, -70f;
break;
default:
return 0f, 0f, -200f;
break;
}
return 0f, 0f, -200f;
}

int func_1605(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=-1;
iVar0=0;
while (iVar0 <=59){
if(iParam1==6 || iParam1==func_164(iVar0)){
if(!bParam3 || func_1606(iVar0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_1592(iVar0, 0), 1);
if(((fVar1 < fVar2 && (fVar1 <=IntToFloat(iParam2) || iParam2==-1)) && (iParam4 || iVar0 !=21)) && iVar0 !=iParam5){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}

int func_1606(int iParam0){
return func_254(iParam0, 0, 0);
}


void func_1607(int iParam0, struct<3> Param1){
Local_1174[iParam0 /*7*/].f_1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_1293, func_1608(iParam0));
Local_1174[iParam0 /*7*/].f_2=MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, func_213(), func_1608(iParam0));
Local_1174[iParam0 /*7*/].f_3=MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_198.f_19.f_5[iParam0 /*13*/].f_3, func_1608(iParam0));
}

int func_1608(int iParam0){
if(Local_274.f_124.f_29 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_29);
}
return 1;
}


void func_1609(){
if(func_1618(bLocal_1288, 1) && func_1617()){
if(func_1613()){
if(!func_1440(35)){
func_1611(func_1612(), -1);
func_155(35);
}}}elseif(func_1440(35)){
if(func_1610(func_1612())){
HUD::CLEAR_HELP(1);
}
func_489(35);
}}

int func_1610(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_1611(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


char* func_1612(){
return "BHH_HELD";
}

int func_1613(){
if(((((((((!func_1616() && !func_1615()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && bLocal_1285) && !func_1614()) && func_1440(9)) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN()){
return 1;
}
return 0;
}


bool func_1614(){
return Global_2672505.f_2514[0 /*80*/].f_1 !=0;
}


bool func_1615(){
return Global_75693;
}


bool func_1616(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_1617(){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_2[iVar0])){
if(iLocal_1322[iVar0] !=iLocal_1292){
if(!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_1334.f_2[iVar0]))){
if(Local_1174[iVar0 /*7*/].f_1 < 2f){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_1618(bool bParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if(func_1619(bParam0, iVar0, bParam1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_1619(int iParam0, int iParam1, bool bParam2){
if(Local_1174[iParam1 /*7*/].f_4==iParam0){
if(bParam2){
if(func_165(iParam1, 4) || func_977(iParam1, iLocal_1292, 6)){
return 0;
}}
return 1;
}
return 0;
}


void func_1620(bool bParam0, int iParam1){
if(!func_230()){
return;
}
if(bParam0){
if(func_165(iParam1, 32)){
func_1622(1);
}
func_1621(Local_198.f_19.f_5[iParam1 /*13*/].f_2);
}else{
func_1622(0);
func_1621(0);
}}


void func_1621(int iParam0){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_179 !=iParam0){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_179=iParam0;
}}


void func_1622(bool bParam0){
if(bParam0){
func_1624(14);
}else{
func_1623(14);
}}


void func_1623(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_6), bParam0);
}


void func_1624(bool bParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_6), bParam0);
}


void func_1625(bool bParam0){
if(bParam0){
func_1627(8);
func_1626(1);
}else{
func_1627(-1);
func_1626(0);
}}


void func_1626(bool bParam0){
if(bParam0){
func_1624(13);
}else{
func_1623(13);
}}


void func_1627(int iParam0){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
if(Global_1914091[iVar0 /*297*/].f_264 !=iParam0){
Global_1914091[iVar0 /*297*/].f_264=iParam0;
}}


void func_1628(int iParam0, bool bParam1){
if(!func_1642(iParam0)){
return;
}
if(bParam1 && func_800(Local_1334.f_2[iParam0])){
func_79(&(Local_1334.f_2[iParam0]));
}
func_1630(iParam0);
func_1629(iParam0);
}


void func_1629(int iParam0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_2.f_60[iParam0]) && func_800(Local_1334.f_2.f_60[iParam0])){
func_79(&(Local_1334.f_2.f_60[iParam0]));
func_146(&(Local_1334.f_2.f_60[iParam0]));
}}

int func_1630(int iParam0){
var uVar0;
if(!func_165(iParam0, 4) || !func_1641(iParam0)){
return 1;
}
if(!func_1633(iParam0)){
return 0;
}
uVar0=func_1632(iParam0);
if(!func_35(33) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_1632(iParam0)))){
ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_1632(iParam0)), 1, 1);
}
if(func_35(11)){
if(func_502()==2 && !func_1631(func_501(iParam0))){
return 0;
}
if(!NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_ENT(func_1632(iParam0)))){
NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_1632(iParam0)), 1, 1);
}
if(!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_1632(iParam0)))){
func_79(&uVar0);
}}elseif(func_35(12)){
func_146(&uVar0);
}elseif(!func_35(32)){
if(func_502()==2 && !func_1631(func_501(iParam0))){
return 0;
}
func_79(&uVar0);
}elseif(func_582() !=0){
func_146(&uVar0);
}
return 0;
}

int func_1631(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 18){
if(Local_198.f_1036.f_374[iVar0 /*6*/].f_1==2 && Local_198.f_1036.f_374[iVar0 /*6*/].f_2==iParam0){
iVar1=Local_198.f_1036.f_374[iVar0 /*6*/];
if(iVar1 !=-1 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_908[iVar1 /*5*/])){
if(func_133(Local_1334.f_908[iVar1 /*5*/])){
func_79(&(Local_1334.f_908[iVar1 /*5*/]));
}
return 0;
}}
iVar0++;
}
return 1;
}


var func__1632(int iParam0){
var uVar0;
int iVar1;
if(!func_559(iParam0)){
return uVar0;
}
iVar1=func_501(iParam0);
switch (func_502()){
case 2:
return Local_1334.f_723[iVar1 /*8*/];
case 1:
return Local_1334.f_72[iVar1 /*25*/];
default:
}
return uVar0;
}

int func_1633(int iParam0){
if(func_35(12)){
return 1;
}
switch (func_502()){
case 2:
if(func_35(38) && func_800(func_1632(iParam0))){
if(func_1639(NETWORK::NET_TO_VEH(func_1632(iParam0)), 1093140480, 1, 1056964608, 0, 1, 0)){
if(!func_1637(NETWORK::NET_TO_VEH(func_1632(iParam0)), &(Local_1174.f_50), 1, 1)){
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(func_1632(iParam0)), true);
return 0;
}}else{
return 0;
}}
if(func_1636(func_220()) && func_1634(func_1635(iParam0), 0, 1)){
return 0;
}
break;
}
if(!func_800(func_1632(iParam0))){
return 0;
}
return 1;
}

int func_1634(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=0;
while (iVar0 < iVar1){
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0)){
iVar2=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), 0);
if(bParam1){
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if(PED::IS_PED_A_PLAYER(iVar2)){
if(!bParam2 && func_97(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID())){
}else{
return 1;
}
}}}elseif(!PED::IS_PED_INJURED(iVar2)){
if(PED::IS_PED_A_PLAYER(iVar2)){
if(!bParam2 && func_97(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID())){
}
else{
return 1;
}}}}
iVar0++;
}}
return 0;
}

int func_1635(int iParam0){
var uVar0;
var uVar1;
uVar1=func_1632(iParam0);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar1)){
return NETWORK::NET_TO_VEH(iVar1);
}
return uVar0;
}

int func_1636(int iParam0){
switch (iParam0){
case 757:
case 763:
case 771:
case 772:
case 789:
case 790:
case 791:
case 845:
case 846:
case 847:
case 848:
case 849:
case 850:
case 851:
case 852:
case 853:
case 854:
case 855:
case 856:
case 857:
case 858:
case 859:
case 860:
case 861:
case 862:
case 863:
case 864:
case 865:
case 866:
case 867:
case 868:
case 869:
case 870:
case 871:
case 872:
case 873:
case 874:
case 875:
case 876:
case 877:
case 878:
case 879:
case 880:
case 881:
case 884:
case 885:
case 886:
case 887:
case 888:
case 889:
case 890:
case 891:
case 892:
case 893:
case 894:
case 895:
case 896:
case 897:
case 898:
case 899:
case 900:
case 901:
case 902:
case 903:
case 904:
case 907:
case 908:
case 909:
case 910:
case 911:
case 912:
case 913:
case 914:
case 915:
case 916:
case 917:
case 918:
case 919:
case 920:
case 921:
case 922:
case 923:
case 924:
case 925:
case 926:
case 927:
case 928:
case 929:
return 0;
break;
}
return 1;
}

int func_1637(int iParam0, var uParam1, bool bParam2, bool bParam3){
bool bVar0;
bool bVar1;
if(!func_503(iParam0, 1, 1, 0, 0, 0, 1, 0, 1)){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam1)) > 1000){
bVar0=false;
while (bVar0 < 32){
bVar1=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(func_9(bVar1, 0, 1)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), iParam0, 0)){
func_1638(func_63(bVar1), 0, 0f, 0, 0, 0, -1);
}}
bVar0++;
}
*uParam1=NETWORK::GET_NETWORK_TIME();
}}elseif(!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
if(!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
}}else{
if(bParam3){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
}
ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
if(bParam2){
ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
}
return 1;
}
return 0;
}


void func_1638(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6){
struct<9> Var0;
Var0.f_0=-1603050746;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_7=iParam6;
Var0.f_4=iParam1;
Var0.f_5=iParam4;
Var0.f_2=fParam2;
Var0.f_3=iParam3;
Var0.f_6=iParam5;
Var0.f_8=MISC::GET_FRAME_COUNT();
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 9, iParam0);
}}

int func_1639(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_1640(iParam0);
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


void func_1640(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}

int func_1641(int iParam0){
if(!func_559(iParam0)){
return 0;
}
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_1632(iParam0))){
return 0;
}
if((func_165(iParam0, 35) || func_165(iParam0, 36)) || func_165(iParam0, 37)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_1632(iParam0)), 0)){
return 0;
}
return 1;
}

int func_1642(int iParam0){
if((((func_165(iParam0, 19) || (func_165(iParam0, 3) && func_13(&(Local_1334.f_2.f_7[iParam0 /*2*/]), 6000, 0))) || func_165(iParam0, 4)) || func_165(iParam0, 25)) || func_165(iParam0, 33)){
return (func_165(iParam0, 4) || func_165(iParam0, 3));
}
return 0;
}


void func_1643(int iParam0){
if(func_1706(iParam0)){
func_1645(iParam0);
}else{
func_1644(iParam0);
}}


void func_1644(int iParam0){
if(HUD::DOES_BLIP_EXIST(Local_1174[iParam0 /*7*/])){
HUD::REMOVE_BLIP(&(Local_1174[iParam0 /*7*/]));
}}


void func_1645(int iParam0){
if(!HUD::DOES_BLIP_EXIST(Local_1174[iParam0 /*7*/])){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_2[iParam0])){
Local_1174[iParam0 /*7*/]=HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]));
if(func_1703(func_1704(iParam0))){
HUD::SET_BLIP_SPRITE(Local_1174[iParam0 /*7*/], func_1704(iParam0));
}
HUD::SET_BLIP_SCALE(Local_1174[iParam0 /*7*/], func_1701(iParam0));
HUD::SET_BLIP_COLOUR(Local_1174[iParam0 /*7*/], func_1700(iParam0, 0));
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1174[iParam0 /*7*/], func_1699(iParam0));
HUD::SET_BLIP_PRIORITY(Local_1174[iParam0 /*7*/], 12);
if(func_1698(iParam0)){
HUD::SHOW_HEIGHT_ON_BLIP(Local_1174[iParam0 /*7*/], 1);
}
if(!func_977(iParam0, iLocal_1292, 46)){
func_1697(&(Local_1174[iParam0 /*7*/]), 1);
func_1696(iParam0, 46);
}}}else{
HUD::SET_BLIP_COLOUR(Local_1174[iParam0 /*7*/], func_1700(iParam0, 0));
if(HUD::GET_BLIP_SPRITE(Local_1174[iParam0 /*7*/]) !=func_1704(iParam0) && func_1703(func_1704(iParam0))){
HUD::SET_BLIP_SPRITE(Local_1174[iParam0 /*7*/], func_1704(iParam0));
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1174[iParam0 /*7*/], func_1699(iParam0));
}
if(HUD::GET_BLIP_COLOUR(Local_1174[iParam0 /*7*/]) !=func_1700(iParam0, 0)){
HUD::SET_BLIP_COLOUR(Local_1174[iParam0 /*7*/], func_1700(iParam0, 0));
}
if(func_576(iParam0, 17)){
func_1647(Local_1174[iParam0 /*7*/], 100, 5000f, 1137180672);
}
if(func_501(iParam0) > -1 && func_502()==2){
if(func_1646(iParam0)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1334.f_723[func_501(iParam0) /*8*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_1334.f_723[func_501(iParam0) /*8*/]), 0)){
HUD::SET_BLIP_ROTATION(Local_1174[iParam0 /*7*/], round(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_ENT(Local_1334.f_723[func_501(iParam0) /*8*/]))));
}}}
Stack.Push(Local_274.f_124.f_11 !=0);
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_11);
if(StackVal && StackVal){
if(!HUD::IS_BLIP_FLASHING(Local_1174[iParam0 /*7*/])){
func_1697(&(Local_1174[iParam0 /*7*/]), 0);
}}}}

int func_1646(int iParam0){
if(Local_274.f_124.f_18 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_18);
return StackVal;
}
return 0;
}


void func_1647(var uParam0, int iParam1, float fParam2, float fParam3){
HUD::SET_BLIP_ALPHA(uParam0, func_1648(uParam0, iParam1, fParam2, fParam3));
}

int func_1648(var uParam0, int iParam1, float fParam2, float fParam3){
float fVar0;
if(!func_1695(Global_2672505) && !func_673()){
fVar0=func_1650(uParam0, fParam3, fParam2);
if(iParam1==0){
iParam1=func_1649();
}
return (round((to_float((255 - iParam1)) * fVar0)) + iParam1);
}
return 255;
}

int func_1649(){
if(func_466(Global_2672505, 1)){
return 50;
}
return 0;
}


float func_1650(var uParam0, float fParam1, float fParam2){
int iVar0;
float fVar1;
struct<3> Var2;
struct<3> Var3;
iVar0=Global_2672505;
Var2={
func_1694(uParam0) 
};
Var2.f_2=0f;
if(Global_1581962 || func_1690()){
if(func_1689(iVar0)){
Var3={
func_1653(iVar0) 
};
}elseif(func_1652(iVar0)){
Var3={
func_1651(iVar0) 
};
}}else{
Var3={
ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), 0) 
};
}
Var3.f_2=0f;
fVar1=vmag(Var3 - Var2);
if(fVar1 < fParam1){
fVar1=fParam1;
}
if(fVar1 > fParam2){
fVar1=fParam2;
}
fVar1=((fVar1 - fParam1) / (fParam2 - fParam1));
fVar1=(fVar1 - 1f);
fVar1=(fVar1 * -1f);
return fVar1;
}


Vector3 func__1651(bool bParam0){
int iVar0;
if(func_1652(iParam0)){
iVar0=PLAYER::GET_PLAYER_PED(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
}}
return 0f, 0f, 0f;
}

int func_1652(bool bParam0){
int iVar0;
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
iVar0=PLAYER::GET_PLAYER_PED(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0)){
return 1;
}}}}
return 0;
}


Vector3 func__1653(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
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
int iVar13;
int iVar14;
int iVar15;
int iVar16;
if(bParam0==func_66()){}
if(func_431(bParam0)){
iVar0=func_1688(bParam0);
if(iVar0 !=func_66()){
if(!func_1687(iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_254[iVar0 /*3*/][1])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_254[iVar0 /*3*/][1], 0);
}else{
return Global_2657589[func_1688(bParam0) /*466*/].f_321.f_12;
}}else{
iVar1=func_1684(iVar0);
if(!iVar1==-1){
return Global_1950108.f_542[iVar1 /*3*/];
}}}}elseif(func_1506(bParam0)){
iVar2=func_1683(bParam0);
if(iVar2 !=func_66()){
if(!func_1682(iVar2)){
if(ENTITY::DOES_ENTITY_EXIST(Global_1968145[iVar2])){
return ENTITY::GET_ENTITY_COORDS(Global_1968145[iVar2], 0);
}else{
return Global_2657589[func_1688(bParam0) /*466*/].f_321.f_12;
}}else{
iVar3=160;
if(!iVar3==-1){
return Global_1950108.f_542[iVar3 /*3*/];
}}}}elseif(func_429(bParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2793046.f_308)){
return ENTITY::GET_ENTITY_COORDS(Global_2793046.f_308, 0);
}}elseif(func_1528(bParam0) && !func_1681(bParam0)){
iVar4=Global_2657589[bParam0 /*466*/].f_321.f_10;
if(iVar4 !=func_66()){
iVar5=func_1684(iVar4);
if(!iVar5==-1){
return Global_1950108.f_542[iVar5 /*3*/];
}}}elseif(func_1524(bParam0) && !func_1680(bParam0)){
if(func_1689(bParam0) && func_1679()){
return Global_1950108.f_542[Global_2657589[bParam0 /*466*/].f_321.f_7 /*3*/];
}
iVar6=Global_2657589[bParam0 /*466*/].f_321.f_10;
if(iVar6 !=func_66()){
if(func_1678(iVar6)){
iVar7=func_1675(iVar6);
if(iVar7 !=-1){
return Global_1950108.f_542[iVar7 /*3*/];
}}}}elseif(func_432(bParam0)){
iVar8=func_1674(bParam0);
if(iVar8 !=func_66()){
if(!func_1673(iVar8)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_351[iVar8])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_351[iVar8], 0);
}else{
return Global_2657589[func_1674(bParam0) /*466*/].f_321.f_20;
}}else{
iVar9=func_1675(iVar8);
if(!iVar9==-1){
return Global_1950108.f_542[iVar9 /*3*/];
}}}}elseif(func_430(bParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2793046.f_310)){
return ENTITY::GET_ENTITY_COORDS(Global_2793046.f_310, 0);
}}elseif(func_1523(bParam0) && !func_1672(bParam0)){
iVar10=Global_2657589[bParam0 /*466*/].f_321.f_10;
if(iVar10 !=func_66()){
if(func_1671(iVar10)){
iVar11=func_1668(iVar10);
if(iVar11 !=-1){
return func_1667(iVar11);
}}}}elseif(func_1666(bParam0) && !func_1665(bParam0)){
iVar12=Global_2657589[bParam0 /*466*/].f_321.f_10;
if(iVar12 !=func_66()){
if(func_1664(iVar12)){
iVar13=func_1661(iVar12);
if(iVar13 !=-1){
return Global_1950108.f_542[iVar13 /*3*/];
}}}}elseif(func_437(bParam0, 0)){
iVar14=func_1660(bParam0);
if(iVar14 !=func_66()){
if(!func_1659(iVar14)){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_384[iVar14])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_384[iVar14], 0);
}else{
return Global_1894573[func_1660(bParam0) /*608*/].f_590;
}}else{
iVar15=func_1661(iVar14);
if(!iVar15==-1){
return Global_1950108.f_542[iVar15 /*3*/];
}}}}elseif(func_1658(bParam0)){
return -366.7f, -1909.6f, 20f;
}elseif(func_1657(bParam0)){
iVar16=func_1539(bParam0);
if(iVar16 !=func_66()){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_417[iVar16])){
return ENTITY::GET_ENTITY_COORDS(Global_2672505.f_417[iVar16], 0);
}else{
return Global_1914091[iVar16 /*297*/].f_51;
}}else{
return 0f, 0f, 0f;
}}
if(func_1523(bParam0)){
return func_1667(Global_2657589[bParam0 /*466*/].f_321.f_7);
}
if(func_1654(bParam0)){
return 965.8165f, 42.25042f, 122.1267f;
}
return Global_1950108.f_542[Global_2657589[bParam0 /*466*/].f_321.f_7 /*3*/];
}

int func_1654(int iParam0){
if(((func_1518(iParam0) || func_1514(iParam0)) || func_1656(iParam0)) || func_1655(iParam0)){
return 1;
}
return 0;
}

int func_1655(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==19;
}}}
return 0;
}

int func_1656(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==15;
}}}
return 0;
}

int func_1657(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==20;
}}elseif(((Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_1575060) && iParam0==PLAYER::PLAYER_ID()) && func_9(iParam0, 1, 0)){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==20;
}}
return 0;
}

int func_1658(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}

int func_1659(int iParam0){
if(iParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_3, 4);
}
return 0;
}

int func_1660(int iParam0){
if(iParam0==func_66()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_1661(int iParam0){
int iVar0;
if(iParam0 !=func_66()){
iVar0=func_1663(iParam0);
if(iVar0 !=0){
return func_1662(iVar0);
}}
return -1;
}

int func_1662(int iParam0){
switch (iParam0){
case 1:
return 102;
case 2:
return 103;
case 3:
return 104;
case 4:
return 105;
case 5:
return 106;
case 6:
return 107;
case 7:
return 108;
case 8:
return 109;
case 9:
return 110;
case 10:
return 111;
default:
}
return -1;
}

int func_1663(int iParam0){
if(iParam0 !=func_66()){
return Global_1853910[iParam0 /*862*/].f_267.f_310;
}
return 0;
}

int func_1664(int iParam0){
if(iParam0 !=func_66()){
if(Global_1853910[iParam0 /*862*/].f_267.f_310 !=0){
return 1;
}}
return 0;
}

int func_1665(int iParam0){
if(iParam0 !=func_66()){
if(func_1666(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_1666(int iParam0){
if(iParam0 !=func_66()){
if(func_9(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_288(Global_2657589[iParam0 /*466*/].f_321.f_7)==11;
}}}
return 0;
}


Vector3 func__1667(int iParam0){
switch (iParam0){
case 102:
return 750.5f, -1322.3f, 26.2802f;
case 103:
return 331.9f, -974.9f, 30f;
case 104:
return -146f, -1270f, 28.3088f;
case 105:
return -17.7f, 225.7f, 106.7566f;
case 106:
return 894.4f, -2106.4f, 29.4768f;
case 107:
return -668f, -2431.5f, 12.9444f;
case 108:
return 213.4f, -3166.6f, 4.7903f;
case 109:
return 366.6f, 237.6f, 104.9f;
case 110:
return -1275.3f, -666.8f, 25.6332f;
case 111:
return -1188.8f, -1156.9f, 4.6582f;
default:
}
return Global_1950108.f_542[iParam0 /*3*/];
}

int func_1668(int iParam0){
int iVar0;
if(iParam0 !=func_66()){
iVar0=func_1670(iParam0);
if(iVar0 !=0){
return func_1669(iVar0);
}}
return -1;
}

int func_1669(int iParam0){
switch (iParam0){
case 1:
return 102;
case 2:
return 103;
case 3:
return 104;
case 4:
return 105;
case 5:
return 106;
case 6:
return 107;
case 7:
return 108;
case 8:
return 109;
case 9:
return 110;
case 10:
return 111;
default:
}
return -1;
}

int func_1670(bool bParam0){
if(bParam0 !=func_66()){
return Global_1853910[bParam0 /*862*/].f_267.f_353;
}
return 0;
}

int func_1671(int iParam0){
if(iParam0 !=func_66()){
return Global_1853910[iParam0 /*862*/].f_267.f_353 !=0;
}
return 0;
}

int func_1672(int iParam0){
if(iParam0 !=func_66()){
if(func_1523(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_1673(int iParam0){
if(iParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_2, 6);
}
return 0;
}

int func_1674(int iParam0){
if(iParam0==func_66()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_1675(int iParam0){
int iVar0;
if(iParam0==func_66()){
return -1;
}
iVar0=func_1677(iParam0);
if(!iVar0==0){
return func_1676(iVar0);
}
return -1;
}

int func_1676(int iParam0){
switch (iParam0){
case 1:
return 89;
break;
case 2:
return 90;
break;
case 3:
return 91;
break;
case 4:
return 92;
break;
case 5:
return 93;
break;
case 6:
return 94;
break;
case 7:
return 95;
break;
case 8:
return 96;
break;
case 9:
return 97;
break;
}
return -1;
}

int func_1677(int iParam0){
if(iParam0==func_66()){
return 0;
}
return Global_1853910[iParam0 /*862*/].f_267.f_300;
}

int func_1678(int iParam0){
if(iParam0 !=func_66()){
return Global_1853910[iParam0 /*862*/].f_267.f_300 !=0;
}
return 0;
}

int func_1679(){
if(MISC::IS_BIT_SET(Global_1950108.f_2, 13) || Global_1950108.f_3347){
return 1;
}
return 0;
}

int func_1680(int iParam0){
if(iParam0==func_66()){
return 0;
}
if(func_1524(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_1681(int iParam0){
if(iParam0==func_66()){
return 0;
}
if(func_1528(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}
return 0;
}

int func_1682(int iParam0){
if(iParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
}
return 0;
}

int func_1683(int iParam0){
if(iParam0==func_66()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_1684(int iParam0){
int iVar0;
if(iParam0==func_66()){
return -1;
}
iVar0=func_1686(iParam0);
if(!iVar0==0){
return func_1685(iVar0);
}
return -1;
}

int func_1685(int iParam0){
switch (iParam0){
case 1:
return 22;
break;
case 2:
return 23;
break;
case 3:
return 24;
break;
case 4:
return 25;
break;
case 5:
return 26;
break;
case 6:
return 27;
break;
case 7:
return 28;
break;
case 8:
return 29;
break;
case 9:
return 30;
break;
case 10:
return 31;
break;
case 11:
return 32;
break;
case 12:
return 33;
break;
case 13:
return 34;
break;
case 14:
return 35;
break;
case 15:
return 36;
break;
case 16:
return 37;
break;
case 17:
return 38;
break;
case 18:
return 39;
break;
case 19:
return 40;
break;
case 20:
return 41;
break;
case 32:
return 159;
break;
case 21:
return 70;
break;
case 22:
return 71;
break;
case 23:
return 72;
break;
case 24:
return 73;
break;
case 25:
return 74;
break;
case 26:
return 75;
break;
case 27:
return 76;
break;
case 28:
return 77;
break;
case 29:
return 78;
break;
case 30:
return 79;
break;
case 31:
return 80;
break;
}
return -1;
}

int func_1686(bool bParam0){
if(bParam0==func_66()){
return 0;
}
return Global_1853910[bParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_1687(int iParam0){
if(iParam0 !=func_66()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321, 6);
}
return 0;
}

int func_1688(int iParam0){
if(iParam0==func_66()){
return iParam0;
}
return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_1689(bool bParam0){
if(bParam0 !=func_66()){
if(func_9(bParam0, 1, 1)){
return Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1;
}elseif((Global_1575060 && bParam0==PLAYER::PLAYER_ID()) && func_9(bParam0, 1, 0)){
return Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1;
}}
return 0;
}

int func_1690(){
if((func_1693() || func_1692()) || func_1691(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_1691(bool bParam0){
if(bParam0==func_66()){
return 0;
}
return MISC::IS_BIT_SET(Global_1890444[bParam0 /*129*/].f_29, 20);
}


var func__1692(){
return MISC::IS_BIT_SET(Global_1962976, 1);
}


bool func_1693(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


Vector3 func__1694(var uParam0){
int iVar0;
switch (HUD::GET_BLIP_INFO_ID_TYPE(uParam0)){
case 1:
case 2:
case 3:
iVar0=HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(uParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
return ENTITY::GET_ENTITY_COORDS(iVar0, 0);
}
break;
}
return HUD::GET_BLIP_COORDS(uParam0);
}

int func_1695(bool bParam0){
if((MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_73.f_2, 9) && !(MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_73.f_2, 6) && MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_73.f_2, 7))) || ((MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_73.f_2, 6) && !MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_73.f_2, 7)) && !MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_73.f_2, 9))){
return 1;
}
return 0;
}


void func_1696(int iParam0, int iParam1){
if(func_17(&(Local_1347[iLocal_1291 /*251*/].f_3[iParam0 /*3*/]), iParam1)){}}


void func_1697(var uParam0, bool bParam1){
HUD::SET_BLIP_FLASHES(*uParam0, 1);
HUD::SET_BLIP_FLASH_INTERVAL(*uParam0, 250);
HUD::SET_BLIP_FLASH_TIMER(*uParam0, 7000);
if(bParam1){
HUD::FLASH_MINIMAP_DISPLAY();
}}


bool func_1698(int iParam0){
if(Local_274.f_124.f_14 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_14);
return StackVal;
}
return Local_198.f_19.f_1.f_3;
}


var func__1699(int iParam0){
if(Local_274.f_124.f_13 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_13);
return StackVal;
}
return func_888();
}

int func_1700(int iParam0, bool bParam1){
if(Local_274.f_124.f_5 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_5);
return func_1073(StackVal);
}
if(!bParam1){
if(func_977(iParam0, iLocal_1292, 12)){
return 1;
}}elseif(func_969()==23 && func_977(iParam0, iLocal_1292, 12)){
return 1;
}
if(!bParam1 && Local_1174[iParam0 /*7*/].f_4 !=func_66()){
return func_1073(func_1418(Local_1174[iParam0 /*7*/].f_4));
}
if(func_558(iParam0)){
if(!func_35(7)){
return 57;
}}
return 2;
}


var func__1701(int iParam0){
if(Local_274.f_124.f_6 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_6);
return StackVal;
}
return func_1702();
}


var func__1702(){
return Local_198.f_19.f_1.f_2;
}

int func_1703(int iParam0){
switch (iParam0){
case -1:
case 32:
return 0;
default:
}
return 1;
}

int func_1704(int iParam0){
if(Local_274.f_124.f_4 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_4);
return StackVal;
}
if(Local_198.f_19.f_1 !=-1){
return Local_198.f_19.f_1;
}
return func_1705();
}

int func_1705(){
return 478;
}

int func_1706(int iParam0){
if(!bLocal_1297){
return 0;
}
if(func_1149(iParam0, 1)){
return 0;
}
if(Local_1174[iParam0 /*7*/].f_4 !=func_66() && func_502() !=1){
return 0;
}
if(func_576(iParam0, 10) && !func_165(iParam0, 7)){
return 0;
}
if(func_977(iParam0, iLocal_1292, 14)){
return 0;
}
if((func_576(iParam0, 16) && func_165(iParam0, 23)) && !func_162(iLocal_1292, 2)){
return 0;
}
if(func_165(iParam0, 23) && func_1695(bLocal_1288)){
return 0;
}
if(func_165(iParam0, 29) && func_165(iParam0, 40)){
return 0;
}
if(func_1707()){
return 0;
}
Stack.Push(iParam0);
Call_Loc(Local_274.f_124);
return StackVal;
}

int func_1707(){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1288) < 1 && PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_1288) < 1){
return 0;
}
if(func_1710()){
return 1;
}
if(func_1709()){
if(func_1708(bLocal_1288, 0, 1, 0) || func_1618(bLocal_1288, 1)){
return 1;
}}
return 0;
}

int func_1708(bool bParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
while (iVar0 < func_40()){
if((((iParam1 || !func_165(iVar0, 4)) && (iParam2 || !func_977(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 1))) && (iParam3 || !func_977(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 12))) && func_977(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0), 14)){
return 1;
}
iVar0++;
}
return 0;
}

int func_1709(){
if(Local_274.f_74.f_11 !=0){
Call_Loc(Local_274.f_74.f_11);
return StackVal;
}
return 1;
}

int func_1710(){
if(Local_274.f_74.f_10 !=0){
Call_Loc(Local_274.f_74.f_10);
return StackVal;
}
return 0;
}


void func_1711(int iParam0, int iParam1){
if(Local_1174[iParam0 /*7*/].f_4==bLocal_1288 && !func_1149(iParam0, 1)){
if(iParam1 !=5){
if(!func_1722(func_234(iParam0))){
func_1720(func_234(iParam0));
if(Local_274.f_124.f_32 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_32);
}}}}elseif(iParam1 !=0){
if((!Global_1956139.f_5602 && !func_1719(bLocal_1288)) && !func_1567()){
if(func_1722(func_234(iParam0))){
func_1712(func_234(iParam0));
}}}}


void func_1712(int iParam0){
if(!func_1716(iParam0)){
return;
}
func_1713(Local_1334.f_1253.f_1[iParam0 /*5*/]);
}


void func_1713(struct<2> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 5){
if(func_530(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556.f_1[iVar0 /*2*/]) && func_528(Param0, Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556.f_1[iVar0 /*2*/])){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556.f_1[iVar0 /*2*/].f_1=-1;
}else{
iVar0++;
}}
if(func_1715(PLAYER::PLAYER_ID()) <=0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556), false);
func_1714();
}}


void func_1714(){
Global_1956139.f_5758.f_3=0;
Global_1956139.f_5758=-1;
Global_1956139.f_5758.f_2=-1000;
}

int func_1715(bool bParam0){
int iVar0;
int iVar1;
if(bParam0 !=func_66()){
iVar0=0;
while (iVar0 < 5){
if(func_530(Global_1894573[bParam0 /*608*/].f_556.f_1[iVar0 /*2*/])){
iVar1++;
}
iVar0++;
}}
return iVar1;
}

int func_1716(int iParam0){
if((iParam0==-1 || func_1718(iParam0)==-1) || func_1717(iParam0)==-1){
return 0;
}
return func_530(Local_1334.f_1253.f_1[iParam0 /*5*/]);
}

int func_1717(int iParam0){
return Local_1334.f_1253.f_1[iParam0 /*5*/].f_3;
}

int func_1718(int iParam0){
return Local_1334.f_1253.f_1[iParam0 /*5*/].f_2;
}

int func_1719(bool bParam0){
int iVar0;
if(bParam0 !=func_66() && (func_9(bParam0, 1, 1) || Global_2635559.f_2680)){
iVar0=MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_321, 1);
return iVar0;
}
return 0;
}


void func_1720(int iParam0){
if(!func_1716(iParam0)){
return;
}
func_1721(Local_1334.f_1253.f_1[iParam0 /*5*/]);
}


void func_1721(struct<2> Param0){
int iVar0;
if(!func_530(Param0)){
return;
}
iVar0=0;
while (iVar0 < 5){
if(!func_530(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556.f_1[iVar0 /*2*/])){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556.f_1[iVar0 /*2*/]={
Param0 
};
}else{
iVar0++;
}}
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556), false);
func_526(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

int func_1722(int iParam0){
if(!func_1716(iParam0)){
return 0;
}
return func_1723(Local_1334.f_1253.f_1[iParam0 /*5*/]);
}

int func_1723(struct<2> Param0){
int iVar0;
if(!func_530(Param0)){
return 0;
}
iVar0=0;
while (iVar0 < 5){
if(func_530(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556.f_1[iVar0 /*2*/]) && func_528(Param0, Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_556.f_1[iVar0 /*2*/])){
return 1;
}
iVar0++;
}
return 0;
}


void func_1724(int iParam0){
if(iLocal_1322[iParam0] !=func_587()){
if(uLocal_1323[iParam0] !=iLocal_1322[iParam0]){
uLocal_1323[iParam0]=iLocal_1322[iParam0];
}}}


void func_1725(int iParam0, int iParam1){
bool bVar0;
struct<3> Var1;
if(!func_576(iParam0, 15)){
return;
}
bVar0=false;
if(Local_1174[iParam0 /*7*/].f_1 < func_1729(iParam0)){
bVar0=true;
if(func_1728(iParam0) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_1290, iParam1, 287)){
bVar0=false;
}
if(func_1727(iParam0) !=-1f){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
if(MISC::ABSF((Var1.f_2 - Local_1293.f_2)) > func_1727(iParam0)){
bVar0=false;
}}}
if(bVar0){
if(Local_274.f_124.f_35 !=0){
if(!func_977(iParam0, iLocal_1292, 35)){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_35);
}}
func_1696(iParam0, 35);
func_1696(iParam0, 0);
}else{
func_1726(iParam0, 0);
}}


void func_1726(int iParam0, int iParam1){
if(func_125(&(Local_1347[iLocal_1291 /*251*/].f_3[iParam0 /*3*/]), iParam1)){}}


float func_1727(int iParam0){
if(Local_274.f_124.f_26 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_26);
return StackVal;
}
return -1f;
}

int func_1728(int iParam0){
if(Local_274.f_124.f_25 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_25);
return StackVal;
}
return 0;
}


float func_1729(int iParam0){
if(Local_274.f_124.f_24 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_24);
return StackVal;
}
if(func_558(iParam0)){
return 50f;
}
return 15f;
}


void func_1730(int iParam0, int iParam1, bool bParam2){
if(!func_230()){
return;
}
if(!func_165(iParam0, 32) && !func_977(iParam0, iLocal_1292, 24)){
if(func_1739(iParam0)){
if(func_800(Local_1334.f_2[iParam0])){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam1, 0);
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1334.f_2[iParam0], 1);
OBJECT::ALLOW_PICKUP_BY_NONE_PARTICIPANT(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1);
func_1737(Local_1298.f_0, 0, 0);
func_1696(iParam0, 24);
}}}else{
func_1731(iParam1, &(Local_1174[iParam0 /*7*/].f_5), func_1736(iParam0), iParam0);
}
if(bParam2){
func_1620(bParam2, iParam0);
}}


void func_1731(int iParam0, var uParam1, bool bParam2, int iParam3){
if(PLAYER::PLAYER_ID()==func_10()){
if((ENTITY::DOES_ENTITY_EXIST(iParam0) && !bParam2) && !func_1735()){
if(func_13(uParam1, 1000, 0)){
func_1734(ENTITY::GET_ENTITY_COORDS(iParam0, 1), iParam3);
func_30(uParam1);
}}else{
func_1732(iParam3);
}}}


void func_1732(int iParam0){
if(!func_266(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_151[iParam0 /*3*/], func_1733(), 0)){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_151[iParam0 /*3*/]={
func_1733() 
};
}
if(!func_266(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_126[iParam0 /*3*/], func_1733(), 0)){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_126[iParam0 /*3*/]={
func_1733() 
};
}}


Vector3 func__1733(){
struct<3> Var0;
return Var0;
}


void func_1734(struct<3> Param0, int iParam1){
if(!func_266(Param0, Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_151[iParam1 /*3*/], 0)){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_126[iParam1 /*3*/]={
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_151[iParam1 /*3*/] 
};
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_151[iParam1 /*3*/]={
Param0 
};
}}

int func_1735(){
int iVar0;
if(MISC::IS_BIT_SET(Global_2793046.f_4660, 2)){
if(func_73(PLAYER::PLAYER_ID(), 1)){
iVar0=func_98(PLAYER::PLAYER_ID());
if(iVar0 !=func_66()){
if(Global_2657589[iVar0 /*466*/].f_210){
return 1;
}}}}
return 0;
}

int func_1736(int iParam0){
if((func_165(iParam0, 3) || func_165(iParam0, 4)) || Local_1174[iParam0 /*7*/].f_4 !=func_66()){
return 1;
}
return 0;
}


void func_1737(int iParam0, bool bParam1, bool bParam2){
struct<14> Var0;
int iVar1;
Var0.f_2=-607688663;
Var0.f_10=PLAYER::PLAYER_ID();
Var0.f_11=func_67();
Var0.f_4=iParam0;
if(bParam1){
iVar1=func_63(PLAYER::PLAYER_ID());
}elseif(bParam2){
iVar1=func_65(1);
}else{
iVar1=func_251(1, 1);
}
func_1738(Var0, iVar1);
}


void func_1738(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=2041805809;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_1739(int iParam0){
if(!func_1404(iParam0)){
return 0;
}
if((Local_198.f_19.f_5[iParam0 /*13*/].f_12 !=-1 && func_130(Local_198.f_1641.f_1[Local_198.f_19.f_5[iParam0 /*13*/].f_12 /*2*/])) && func_165(iParam0, 23)){
return 0;
}
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_39);
if(!StackVal){
return 0;
}
if(func_13(&(Local_1334.f_2.f_68), func_1740(), 0)){
return 1;
}
return 0;
}

int func_1740(){
if(Local_274.f_124.f_39.f_1 !=0){
Call_Loc(Local_274.f_124.f_39.f_1);
return StackVal;
}
return func_1741();
}

int func_1741(){
return 20000;
}


void func_1742(int iParam0, int iParam1){
if(func_165(iParam0, 29) || !func_1746(iParam0)){
return;
}
func_1743(iParam1, iParam0);
}


void func_1743(int iParam0, int iParam1){
float fVar0;
float fVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
if(ENTITY::IS_ENTITY_VISIBLE(iParam0)){
fVar0=func_1745(iParam1);
if(ENTITY::IS_ENTITY_IN_WATER(iParam0)){
fVar1=0.5f;
fVar0=1f;
}
HUD::GET_HUD_COLOUR(18, &uVar2, &uVar3, &uVar4, &uVar5);
func_1744(iParam0, uVar2, uVar3, uVar4, fVar0, fVar1, 0, 1, 0, 0);
}}


void func_1744(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, int iParam7, int iParam8, float fParam9){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
float fVar4;
var uVar5;
int iVar6;
int iVar7;
int iVar8;
float fVar9;
float fVar10;
float fVar11;
if(ENTITY::IS_ENTITY_A_PED(iParam0)){
iVar7=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
if(!PED::IS_PED_INJURED(iVar7)){
if(PED::IS_PED_IN_ANY_VEHICLE(iVar7, 0)){
iVar8=PED::GET_VEHICLE_PED_IS_IN(iVar7, 0);
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar8))){
iParam0=iVar8;
}}}}
fVar4=0.5f;
iVar6=ENTITY::GET_ENTITY_MODEL(iParam0);
Var3={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
uVar5=ENTITY::GET_ENTITY_HEADING(iParam0);
MISC::GET_MODEL_DIMENSIONS(iVar6, &Var0, &Var1);
fVar9=((Var1.f_2 - Var0.f_2) / 2f);
fVar10=(Var1.f_2 - fVar9);
if(fVar4 <=(fVar10 + 0.1f)){
fVar4=((fVar10 + fParam4) - 0.1f);
}
switch (iVar6){
case joaat("seven70"):
case joaat("raptor"):
case joaat("issi3"):
case joaat("comet3"):
case joaat("specter2"):
case joaat("hermes"):
case joaat("dominator3"):
case joaat("jugular"):
case joaat("remus"):
case joaat("tailgater2"):
case joaat("mesa3"):
fVar4=(fVar4 + 0.25f);
break;
case joaat("insurgent2"):
fVar4=(fVar4 + 0.75f);
break;
}
fVar4=(fVar4 + fParam5);
fVar11=0f;
if(bParam6){
Var2={
Var3 - Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar4), 0f, 0f) 
};
fVar11=180f;
}else{
Var2={
Var3 + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar4), 0f, 0f) 
};
}
if(iVar6==joaat("imp_prop_impexp_boxpile_02")){
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, uVar5, -1.45f, 0.5f, 0f) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar4), 0f, 0f) 
};
}elseif(iVar6==joaat("tr_prop_tr_break_dev_01a")){
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar5, 0f, -0.3f, (Var1.f_2 + 0.17f)) 
};
}
if(fParam9 !=0f){
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar5, 0f, fParam9, Var1.f_2) 
};
}
GRAPHICS::DRAW_MARKER(2, Var2, 0f, 0f, 0f, 180f, fVar11, iParam8, fParam4, fParam4, fParam4, uParam1, uParam2, uParam3, 100, 1, iParam7, 2, 0, 0, 0, 0);
}


float func_1745(var uParam0){
if(Local_274.f_124.f_20 !=0){
Stack.Push(uParam0);
Call_Loc(Local_274.f_124.f_20);
return StackVal;
}
return 0.3f;
}

int func_1746(int iParam0){
return 0;
}


void func_1747(int iParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(func_576(iParam0, 9) || Local_274.f_124.f_38 !=0){
Stack.Push(iParam0);
Call_Loc(Local_274.f_124.f_38);
if(StackVal){
if(!func_165(iParam0, 31)){
if(func_800(Local_1334.f_2[iParam0])){
func_571(iParam0, 0, 0);
func_1696(iParam0, 22);
}}}else{
return;
}}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
iVar0=ENTITY::GET_ENTITY_ATTACHED_TO(iParam1);
if(iVar0 !=-1){
if(ENTITY::IS_ENTITY_A_PED(iVar0)){
iVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
if(PED::IS_PED_A_PLAYER(iVar1)){
iVar2=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
if(iVar2==bLocal_1288){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1334.f_2[iParam0])){
OBJECT::HIDE_PORTABLE_PICKUP_WHEN_DETACHED(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 0);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), true);
ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_1334.f_2[iParam0]), false);
func_1696(iParam0, 1);
if(!func_165(iParam0, 1)){
func_1696(iParam0, 18);
}
*uParam2=1;
func_1754();
*iParam3=iParam0;
}}elseif(!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2)){
func_1696(iParam0, 12);
}}elseif(!PED::IS_PED_INJURED(iVar1)){
if(PED::IS_PED_IN_GROUP(iVar1)){
if(PED::IS_PED_GROUP_MEMBER(iVar1, uLocal_1226)){
func_1696(iParam0, 1);
if(!func_165(iParam0, 1)){
func_1696(iParam0, 18);
}
*uParam2=1;
func_1754();
*iParam3=iParam0;
}}}
if(PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0)){
if(PED::GET_VEHICLE_PED_IS_IN(iVar1, 0)==iLocal_1294){
func_1696(iParam0, 14);
}}}elseif(ENTITY::IS_ENTITY_A_VEHICLE(iVar0)){
iVar3=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0) && !func_1753()){
iVar4=func_501(iParam0);
if(!func_1752(Local_198.f_688.f_1[iVar4 /*15*/].f_3) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0)){
if(!func_1752(iLocal_1295)){
func_1696(iParam0, 21);
if(PED::IS_PED_IN_ANY_VEHICLE(iLocal_1290, 0)){
if(PED::GET_VEHICLE_PED_IS_IN(iLocal_1290, 0)==iVar3){
if(func_112(iLocal_1290, 0)==-1){
func_1696(iParam0, 1);
if(!func_165(iParam0, 1)){
func_1696(iParam0, 18);
func_1754();
}
*uParam2=1;
func_1754();
*iParam3=iParam0;
}
func_1696(iParam0, 14);
}else{
func_1751(iVar3, iParam0, uParam2, iParam3);
}}
}}}elseif(func_582()==0){
func_1748(iParam0);
}}}}}


void func_1748(int iParam0){
struct<3> Var0;
struct<3> Var1;
int iVar2;
var uVar3;
float fVar4;
if(func_800(Local_1334.f_2[iParam0])){
ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1, 1);
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1, 0);
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), true, 0);
func_1750(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]));
func_1696(iParam0, 45);
Var0={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), 1) 
};
Var1={
OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1067030938, 1069547520) 
};
if(Var1.f_0==Var0.f_0 && Var1.f_1==Var0.f_1){
iVar2=func_501(iParam0);
if(iVar2 !=-1){
uVar3=Local_1334.f_723[iVar2 /*8*/];
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar3)){
Var1={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar3), 0) 
};
}}}
fVar4=func_1749(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0])));
Var1.f_2=(Var1.f_2 + (fVar4 * 0.5f));
ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1334.f_2[iParam0]), Var1, 1, 0, 0, 1);
}}


float func_1749(int iParam0){
struct<3> Var0;
struct<3> Var1;
func_353(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
return MISC::ABSF((Var0.f_2 - Var1.f_2));
}


void func_1750(int iParam0){
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam0, 1);
PHYSICS::ACTIVATE_PHYSICS(iParam0);
OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(iParam0, 1);
}


void func_1751(int iParam0, int iParam1, var uParam2, var uParam3){
if(((ENTITY::DOES_ENTITY_EXIST(iLocal_1294) && func_112(iLocal_1290, 0)==-1) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_1294)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
if(VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_1294)){
func_1696(iParam1, 1);
if(!func_165(iParam1, 1)){
func_1696(iParam1, 18);
}
*uParam2=1;
func_1754();
*uParam3=iParam1;
}}}

int func_1752(int iParam0){
switch (iParam0){
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("armytanker"):
case joaat("armytrailer"):
case joaat("armytrailer2"):
case joaat("tanker"):
case joaat("tanker2"):
case joaat("trailers"):
case joaat("trailers2"):
case joaat("trailers3"):
case joaat("tr2"):
return 1;
default:
}
return 0;
}

int func_1753(){
return 0;
}


void func_1754(){
if(!bLocal_1296){
return;
}
if(!func_1488(bLocal_1288)){
func_1755(0);
}}


void func_1755(int iParam0){
if(!func_1489(PLAYER::PLAYER_ID())){
if(iParam0 || func_1759(PLAYER::PLAYER_ID()) !=0){
func_1556(20);
func_1015(func_1757());
if(func_1756(PLAYER::PLAYER_ID())){
if(!MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 8)){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 8);
}}}}}

int func_1756(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}

int func_1757(){
int iVar0;
iVar0=func_276(PLAYER::PLAYER_ID());
if(func_1564(iVar0)==0 || func_1564(iVar0)==3){
return -1;
}
if(func_1758(iVar0)){
return 65;
}
if(func_1531(iVar0)){
return 66;
}
if(func_1521(iVar0)){
return 63;
}
return 64;
}

int func_1758(int iParam0){
switch (iParam0){
case 179:
case 201:
case 200:
case 148:
return 1;
default:
}
return 0;
}

int func_1759(bool bParam0){
int iVar0;
bool bVar1;
bool bVar2;
var uVar3;
bool bVar4;
iVar0=2;
bVar1=((func_1756(bParam0) && !func_1763(bParam0)) && !MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 8));
bVar2=func_1489(bParam0);
uVar3=func_1560();
bVar4=func_1555();
if((bVar1 && (func_1762(bParam0) || func_1761(bParam0))) || bVar4){
iVar0=0;
}elseif(uVar3 || ((!bVar2 && !func_301(bParam0)) && !func_1760(bParam0))){
iVar0=2;
}else{
iVar0=3;
}
if(Global_2793046.f_5225.f_220 !=iVar0){
Global_2793046.f_5225.f_220=iVar0;
}
return iVar0;
}


bool func_1760(int iParam0){
return func_302(iParam0, 19);
}

int func_1761(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}

int func_1762(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}


bool func_1763(int iParam0){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 2);
}


void func_1764(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if((!func_576(iParam0, 7) || func_165(iParam0, 39)) || func_977(iParam0, iLocal_1292, 32)){
return;
}
iVar0=func_66();
if(Local_274.f_124.f_37 !=0){
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar2=PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
Stack.Push(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2));
Stack.Push(iParam0);
Stack.Push(iVar2);
Call_Loc(Local_274.f_124.f_37);
if(StackVal && StackVal){
iVar0=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
}else{
iVar1++;
}}}
if(func_9(iVar0, 1, 1)){
if(iVar0==bLocal_1288 && func_133(Local_1334.f_2[iParam0])){
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam1)){
OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), iLocal_1290);
}
ENTITY::SET_ENTITY_VISIBLE(iParam1, true, 0);
func_1696(iParam0, 32);
}}elseif(func_800(Local_1334.f_2[iParam0])){
ENTITY::SET_ENTITY_VISIBLE(iParam1, true, 0);
func_1696(iParam0, 32);
}}


void func_1765(int iParam0, int iParam1){
var uVar0;
int iVar1;
if((!func_559(iParam0) || func_165(iParam0, 39)) || func_977(iParam0, iLocal_1292, 36)){
return;
}
uVar0=func_1769(iParam0);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0)){
iVar1=NETWORK::NET_TO_ENT(iVar0);
if(!ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(func_800(Local_1334.f_2[iParam0]) && func_133(iVar0)){
if(func_1767(iParam1, iVar1, func_1768(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)), 0f, 0f, 90f, 0, 0)){
func_1766(iVar1);
func_1696(iParam0, 36);
}}}}}


void func_1766(int iParam0){
var uVar0;
switch (func_502()){
case 2:
uVar0=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
VEHICLE::SET_DISABLE_SUPERDUMMY(uVar0, 1);
break;
}}

int func_1767(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, int iParam4, int iParam5){
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0, iParam1)){
switch (func_502()){
case 2:
ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "chassis_dummy"), Param2, Param3, iParam4, 0, iParam5, 0, 2, 1, 0);
break;
case 1:
OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
break;
}}else{
return 1;
}
return 0;
}


Vector3 func__1768(int iParam0, int iParam1){
switch (func_502()){
case 2:
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
case joaat("faggio"):
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("manchez"):
case joaat("manchez2"):
case joaat("manchez3"):
return 0f, -0.65f, 0.5f;
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
default:
}
return 0f, 0f, 0f;
}


var func__1769(int iParam0){
var uVar0;
switch (func_502()){
case 2:
return Local_1334.f_723[func_501(iParam0) /*8*/];
case 1:
return Local_1334.f_72[func_501(iParam0) /*25*/];
default:
}
return uVar0;
}


void func_1770(int iParam0){
func_1726(iParam0, 1);
func_1726(iParam0, 21);
func_1726(iParam0, 14);
}

int func_1771(){
int iVar0;
iVar0=0;
while (iVar0 < Local_198.f_19){
if(!func_1630(iVar0)){
return 0;
}
iVar0++;
}
return 1;
}

int func_1772(bool bParam0){
if(func_1440(36) || func_2436(bParam0)){
func_155(36);
func_2435(3);
if(func_1071(250)){
Stack.Push(38);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(0);
Stack.Push(1);
Stack.Push(0);
Call_Loc(Local_274.f_687.f_1);
if(func_1774(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0)){
CAM::DO_SCREEN_FADE_IN(800);
func_489(36);
func_1773(3);
return 1;
}}}else{
return 1;
}
return 0;
}


void func_1773(int iParam0){
if(func_125(&(Global_2672505.f_184), iParam0)){}}

int func_1774(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17){
float fVar0;
bool bVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
func_2434();
if(func_181(PLAYER::PLAYER_ID(), 1, 0)){
if(((bParam4 && func_9(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_232==1){
}elseif(func_2433()==28){
}else{
return 0;
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, 1);
if(!Global_2635559.f_702==iParam0){
if(bParam15 && Global_2635559.f_702==37){
}elseif(!Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_703) < func_468(0)){
return 0;
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==0){
Global_2635559.f_702=iParam0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=2;
if(bParam2){
if(!func_2432()){
bParam2=false;
}}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=2;
Global_2635559.f_2478=0;
Global_2635559.f_2479=0;
Global_2635559.f_2477=0;
Global_2635559.f_2878=0;
}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==2){
if(bParam2 || bParam7){
bVar3=true;
}
if(Global_2635559.f_702==11){
Global_2635559.f_706={
Global_2644549 
};
Global_2635559.f_709=Global_2644549.f_5;
Global_2635559.f_2898=Global_2644549.f_26;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=3;
}elseif(func_2203(&(Global_2635559.f_706), &(Global_2635559.f_709), Global_2635559.f_702, bVar3, iParam3, uParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17)){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=3;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==3){
if(bParam11){
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
func_2198(&iVar2);
}else{
iVar2=func_2197();
func_2196(&iVar2);
}
if(func_2432()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))==Global_2635559.f_45.f_67){
iVar4=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(iVar4==Global_2635559.f_45.f_173){
func_2194();
}
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}
}}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=4;
}else{
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2)){
func_2176(iVar2);
func_2175(1);
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
}
else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
}}}else{
func_2175(1);
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==4){
if(func_2172()){
if(Global_2635559.f_45.f_65){
if(func_2025(Global_2635559.f_706, Global_2635559.f_706.f_1, func_2168(Global_2635559.f_45.f_67), Global_2635559.f_709, 0)){
Global_2635559.f_704=NETWORK::GET_NETWORK_TIME();
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=5;
}}elseif(func_2024(Global_2635559.f_45.f_67) || Global_2635559.f_45.f_67==0){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==5){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, 1);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
if(Global_2635559.f_45.f_176){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_237=1;
}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_237=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_704) > 5000){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=4;
}elseif(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle"))==7){
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2635559.f_45.f_173, 0)){
func_1829(PLAYER::PLAYER_PED_ID(), Global_2635559.f_45.f_173, -1, 0);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=4;
}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==6){
Global_2635559.f_703=NETWORK::GET_NETWORK_TIME();
if(Global_2635559.f_712){
Global_2635559.f_705=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_712=0;
}
if(bParam7){
bVar1=true;
}else{
bVar1=bParam2;
}
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_705)) >=350){
bVar5=true;
}else{
bVar5=false;
}
if(Global_1836597){
func_1823(Global_2635559.f_706);
}
if(bParam7 && !Global_2672505.f_1024){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if((ENTITY::IS_ENTITY_DEAD(iVar2, 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)) || func_506(iVar2)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}}}}
if(bVar5){
if(func_1815(Global_2635559.f_706, Global_2635559.f_709, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_2635559.f_2898)){
if(bParam15){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=7;
return 0;
}else{
func_1811();
}}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==7){
if((Global_2635559.f_702==8 && Global_2635559.f_714.f_507) && Global_2635559.f_2878){
func_1811();
}elseif(func_1805(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) || func_1804()){
if(Global_2635559.f_702==8 && !Global_2635559.f_2878){
Global_2635559.f_2878=1;
}else{
Global_2635559.f_702=37;
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=2;
Global_2635559.f_2478=0;
Global_2635559.f_2479=0;
Global_2635559.f_2477=0;
}else{
func_1811();
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==10){
if(vdist(Global_2644549, Global_2635559.f_706) > 0.1f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2))){
MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2635559.f_706, Global_2635559.f_706.f_1, Global_2635559.f_706.f_2, &fVar0, 0, 0);
if(fVar0==0f || (Global_2635559.f_706.f_2 - fVar0) > 1.5f){
if(vdist(Global_2644549, Global_2635559.f_706) > 15f){
Global_2635559.f_706={
Global_2644549 
};
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2)){
ENTITY::SET_ENTITY_COORDS(iVar2, Global_2635559.f_706, Global_2635559.f_706.f_1, (fVar0 + func_1749(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}else{
Global_2635559.f_706.f_2=(Global_2635559.f_706.f_2 + 1f);
}
}
else{
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2)){
ENTITY::SET_ENTITY_COORDS(iVar2, Global_2635559.f_706, Global_2635559.f_706.f_1, (fVar0 + func_1749(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==11){
if(!bParam14){
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2635559.f_45.f_173)){
ENTITY::SET_ENTITY_VISIBLE(Global_2635559.f_45.f_173, true, 0);
}}
if(bParam2 || bParam7){
if(iParam9 > 0){
func_1796(iParam9, 0, 0);
}}
func_1794(func_93(PLAYER::PLAYER_ID()), 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_173)){
func_2194();
}
if(!(func_2024(Global_2635559.f_45.f_67) || Global_2635559.f_45.f_67==0) && !Global_2635559.f_490.f_5){
func_1793(0, 0);
}
func_1792(0, 0);
if(bParam10){
func_1791();
}
func_1790();
func_1776();
if(bParam13){
func_470();
}
func_1775();
return 1;
}}elseif(!Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==0){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
func_2196(&(Global_2635559.f_45.f_173));
func_1775();
}
Global_2635559.f_703=NETWORK::GET_NETWORK_TIME();
return 0;
}


void func_1775(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}


void func_1776(){
int iVar0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_272.f_20=-1;
Global_2635559.f_2875=-1f;
iVar0=0;
while (iVar0 < 42){
func_1778(iVar0);
iVar0++;
}
if(func_1777(PLAYER::PLAYER_ID(), 0)){
Global_2802791.f_89=1;
Global_2802791.f_90=NETWORK::GET_NETWORK_TIME();
}}

int func_1777(bool bParam0, bool bParam1){
if(func_9(bParam0, 0, 1)){
if(!bParam1){
if(!Global_2657589[bParam0 /*466*/].f_272.f_14==-1){
return 1;
}}elseif(!Global_2657589[bParam0 /*466*/].f_272.f_16==-1){
return 1;
}}
return 0;
}


void func_1778(int iParam0){
bool bVar0;
float fVar1;
int iVar2;
bVar0=PLAYER::PLAYER_ID();
if(Global_2657589[bVar0 /*466*/].f_272.f_14 !=-1){
if(func_1789(Global_2657589[bVar0 /*466*/].f_272.f_14)){
if(!func_1785(PLAYER::PLAYER_ID(), Global_2657589[bVar0 /*466*/].f_272.f_14, 0, 0)){
Global_2657589[bVar0 /*466*/].f_272.f_14=-1;
}}else{
Global_2657589[bVar0 /*466*/].f_272.f_14=-1;
}}
if(Global_2657589[bVar0 /*466*/].f_272.f_16 !=-1){
if(func_1789(Global_2657589[bVar0 /*466*/].f_272.f_16)){
if(!func_1785(PLAYER::PLAYER_ID(), Global_2657589[bVar0 /*466*/].f_272.f_16, 0, 1)){
Global_2657589[bVar0 /*466*/].f_272.f_16=-1;
}}else{
Global_2657589[bVar0 /*466*/].f_272.f_16=-1;
}}
if(Global_2657589[bVar0 /*466*/].f_272.f_15 !=-1){
if(!func_1785(PLAYER::PLAYER_ID(), Global_2657589[bVar0 /*466*/].f_272.f_15, 0, 0)){
Global_2657589[bVar0 /*466*/].f_272.f_15=-1;
}}
if(func_1789(iParam0)){
if(func_1785(PLAYER::PLAYER_ID(), iParam0, 0, 0)){
if(!Global_2657589[bVar0 /*466*/].f_272.f_14==iParam0){
Global_2657589[bVar0 /*466*/].f_272.f_14=iParam0;
}}
if(func_1785(PLAYER::PLAYER_ID(), iParam0, 0, 1)){
if(!Global_2657589[bVar0 /*466*/].f_272.f_16==iParam0){
Global_2657589[bVar0 /*466*/].f_272.f_16=iParam0;
}}
iVar2=floor((to_float(iParam0) / 32f));
if(func_1780(PLAYER::PLAYER_ID(), iParam0, 1120403456)){
MISC::SET_BIT(&(Global_2657589[bVar0 /*466*/].f_272.f_17[iVar2]), (iParam0 - iVar2 * 32));
}else{
MISC::CLEAR_BIT(&(Global_2657589[bVar0 /*466*/].f_272.f_17[iVar2]), (iParam0 - iVar2 * 32));
}
fVar1=vdist(func_1779(iParam0), func_93(PLAYER::PLAYER_ID()));
if(iParam0==Global_2657589[bVar0 /*466*/].f_272.f_20){
Global_2635559.f_2875=fVar1;
}elseif(fVar1 < Global_2635559.f_2875 || Global_2635559.f_2875 <=0f){
Global_2635559.f_2875=fVar1;
Global_2657589[bVar0 /*466*/].f_272.f_20=iParam0;
}}elseif(iParam0==Global_2657589[bVar0 /*466*/].f_272.f_20){
Global_2657589[bVar0 /*466*/].f_272.f_20=-1;
Global_2635559.f_2875=-1f;
}
if(func_1785(PLAYER::PLAYER_ID(), iParam0, 0, 0)){
if(!Global_2657589[bVar0 /*466*/].f_272.f_15==iParam0){
Global_2657589[bVar0 /*466*/].f_272.f_15=iParam0;
}}}


Vector3 func__1779(int iParam0){
return Global_4280768[iParam0 /*45*/].f_4;
}

int func_1780(bool bParam0, int iParam1, float fParam2){
if(func_1784()){
return 1;
}
if(func_1783(iParam1)){
if(ENTITY::DOES_ENTITY_EXIST(func_1782())){
if(func_1781(ENTITY::GET_ENTITY_COORDS(func_1782(), 1), iParam1, fParam2) && Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97==8){
return 1;
}}
return func_1781(func_93(bParam0), iParam1, fParam2);
}
return 0;
}

int func_1781(struct<3> Param0, int iParam1, float fParam2){
if(func_1783(iParam1)){
if(vdist2(Param0, func_1779(iParam1)) < (fParam2 * fParam2)){
return 1;
}}
return 0;
}

int func_1782(){
if(PLAYER::PLAYER_ID() !=-1){
return Global_1962996.f_20;
}
return -1;
}

int func_1783(int iParam0){
if(iParam0 > -1 && iParam0 < 42){
return 1;
}
return 0;
}

int func_1784(){
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_473(0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_174409[0 /*24*/].f_17, 0)){
return 1;
}
return 0;
}

int func_1785(bool bParam0, int iParam1, float fParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
if(func_1783(iParam1)){
if(!bParam3){
return func_1786(func_93(bParam0), iParam1, fParam2);
}elseif(func_1786(func_93(bParam0), iParam1, fParam2)){
return 1;
}elseif(func_1786(func_93(bParam0), iParam1, 15f)){
if(func_9(bParam0, 1, 1)){
iVar0=PLAYER::GET_PLAYER_PED(bParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
iVar1=PED::GET_VEHICLE_PED_IS_USING(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Yacht")){
iVar2=DECORATOR::DECOR_GET_INT(iVar1, "PYV_Yacht");
if(iVar2==iParam1){
return 1;
}}
}}}}}}
return 0;
}

int func_1786(struct<3> Param0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(func_1783(iParam1)){
func_1787(iParam1, &Var0, &Var1, &fVar2, fParam2);
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1);
}
return 0;
}


void func_1787(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4){
struct<3> Var0;
float fVar1;
struct<3> Var2;
Var0={
func_1779(iParam0) 
};
fVar1=func_1788(iParam0);
Var2={
0f, 1f, 0f 
};
func_358(&Var2, 0f, 0f, fVar1);
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


var func__1788(int iParam0){
return Global_4280768[iParam0 /*45*/].f_7;
}

int func_1789(int iParam0){
if(func_1783(iParam0)){
return Global_2802791.f_2[iParam0];
}
return 0;
}


void func_1790(){
Global_1889711=-1;
Global_1889712=-1;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_464=-1;
Global_1889717=0;
}


void func_1791(){
Global_2635559.f_5=1;
}


void func_1792(float fParam0, int iParam1){
struct<3> Var0;
if(!func_1544() || iParam1){
if(CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()){
Var0={
func_93(PLAYER::PLAYER_ID()) 
};
if(Var0.f_2 > -80f){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
}}}}}


void func_1793(int iParam0, bool bParam1){
struct<3> Var0;
float fVar1;
float fVar2;
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
Var0.f_2=(Var0.f_2 + (0.3f * IntToFloat(Global_2635559.f_710)));
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, 0, 0)){
fVar2=(Var0.f_2 - (fVar1 + 1f));
if((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0==1){
if(!bParam1){
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
}}
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, 0, 1, 0, 1);
Global_2635559.f_710=0;
}}elseif(Global_2635559.f_710 < 3){
Global_2635559.f_710++;
func_1793(0, 0);
}else{
Global_2635559.f_710=0;
}}}


void func_1794(struct<3> Param0, bool bParam1, int iParam2){
int iVar0;
float fVar1;
bool bVar2;
int iVar3;
var uVar4;
var uVar5;
var uVar6;
var uVar7;
bVar2=true;
if(Global_2764640 && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
bVar2=false;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
fVar1=func_1795(ENTITY::GET_ENTITY_MODEL(iVar0));
fVar1=(fVar1 * 0.5f);
fVar1=(fVar1 + 6f);
if(bVar2){
MISC::CLEAR_AREA(Param0, fVar1, 1, 0, 0, bParam1);
}
MISC::CLEAR_AREA_OF_VEHICLES(Param0, fVar1, 1, 0, 1, 1, bParam1, 0, iParam2);
FIRE::STOP_FIRE_IN_RANGE(Param0, 6f);
}else{
uVar7=SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Param0.f_0, Param0.f_1, (Param0.f_2 - 2f), Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 19, 0, 7);
SHAPETEST::GET_SHAPE_TEST_RESULT(uVar7, &iVar3, &uVar4, &uVar5, &uVar6);
MISC::CLEAR_AREA(Param0, 0.7f, 1, 0, 0, bParam1);
if(!iVar3==0){
MISC::CLEAR_AREA_OF_VEHICLES(Param0, 6f, 1, 0, 1, 1, bParam1, 0, 0);
if(bVar2){
if(bParam1){
MISC::CLEAR_AREA_OF_OBJECTS(Param0, 6f, 17);
}else{
MISC::CLEAR_AREA_OF_OBJECTS(Param0, 6f, 16);
}}}
FIRE::STOP_FIRE_IN_RANGE(Param0, 2.5f);
}}


float func_1795(int iParam0){
struct<2> Var0;
struct<2> Var1;
func_353(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
return MISC::ABSF((Var0.f_1 - Var1.f_1));
}


void func_1796(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_1803()){
iVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_1801(iVar1, &iVar0)){
func_1797(iVar1, iParam0, iParam1);
if(iVar0 && !bParam2){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
}}}}


void func_1797(int iParam0, int iParam1, int iParam2){
var uVar0;
uVar0=NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam0);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uVar0)){
if(Global_1836590 && VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("rhino"))){
iParam1=1;
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, 1, 1, func_1800());
return;
}elseif(func_1799()){
func_1798(iParam0, 0);
return;
}
if(iParam2 > iParam1){
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, iParam2, 1, func_1800());
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam2);
}}else{
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(iVar0, iParam1, 1, func_1800());
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam1);
}}}}

int func_1798(int iParam0, int iParam1){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(bVar1, 1);
if(iParam1 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
NETWORK::SET_REMOTE_PLAYER_AS_GHOST(bVar1, 1);
}}
iVar0++;
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
NETWORK::SET_NETWORK_VEHICLE_AS_GHOST(iParam0, 1);
return 1;
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
}
return 0;
}


bool func_1799(){
return Global_1836609;
}

int func_1800(){
if(func_258() !=0){
return 0;
}
if(!func_474(PLAYER::PLAYER_ID())){
return 0;
}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==-1){
return 0;
}
return 1;
}

int func_1801(int iParam0, int iParam1){
if(func_1802(iParam0, iParam1)){
return 1;
}
return 0;
}

int func_1802(int iParam0, var uParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0)){
if(!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0))){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
*uParam1=1;
}}}
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
return 1;
}}}
return 0;
}

int func_1803(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}}}
return 0;
}

int func_1804(){
int iVar0;
bool bVar1;
float fVar2;
struct<3> Var3;
Var3={
func_93(PLAYER::PLAYER_ID()) 
};
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_9(bVar1, 1, 1)){
if(PED::IS_PED_ON_FOOT(PLAYER::GET_PLAYER_PED(bVar1))){
if(!bVar1==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
fVar2=vmag(func_93(bVar1) - Var3);
if(fVar2 < 0.2f){
return 1;
}}}}}
iVar0++;
}
return 0;
}

int func_1805(struct<3> Param0){
int iVar0;
struct<3> Var1;
float fVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
struct<3> Var7;
float fVar8;
iVar0=VEHICLE::GET_ALL_VEHICLES(&Global_1578029);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar5=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar5, 0)){
iVar6=ENTITY::GET_ENTITY_MODEL(iVar5);
Var7={
ENTITY::GET_ENTITY_COORDS(iVar5, 1) 
};
fVar8=ENTITY::GET_ENTITY_HEADING(iVar5);
}}
iVar4=0;
while (iVar4 < iVar0){
if(ENTITY::DOES_ENTITY_EXIST(Global_1578029[iVar4])){
if(!ENTITY::IS_ENTITY_DEAD(Global_1578029[iVar4], 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1578029[iVar4], 0)){
}elseif(func_1810(Global_1578029[iVar4])){
}elseif(!func_1806(Global_1578029[iVar4])){
Var1={
ENTITY::GET_ENTITY_COORDS(Global_1578029[iVar4], 0) 
};
fVar2=ENTITY::GET_ENTITY_HEADING(Global_1578029[iVar4]);
iVar3=ENTITY::GET_ENTITY_MODEL(Global_1578029[iVar4]);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_360(Var1, fVar2, iVar3, Var7, fVar8, iVar6, 0)){
return 1;
}}elseif(func_351(Param0, Var1, fVar2, iVar3, 1036831949)){
return 1;
}}}
iVar4++;
}
return 0;
}

int func_1806(int iParam0){
int iVar0;
bool bVar1;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
if(func_9(bVar1, 0, 0)){
if(func_1807(bVar1)){
return 1;
}}}}}
return 0;
}

int func_1807(bool bParam0){
if(func_1809()){
if(func_1808(NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam0), &(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_359.f_4))){
return 1;
}}
return 0;
}

int func_1808(int iParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam1){
if(iParam0==(*uParam1)[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}

int func_1809(){
if(Global_2635559.f_2879 > -1){
return 1;
}
return 0;
}

int func_1810(int iParam0){
int iVar0;
int iVar1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1)){
if(iVar1==iParam0){
return 1;
}}}}
return 0;
}


void func_1811(){
if(!Global_2635559.f_712){
Global_2635559.f_712=1;
}
func_2175(0);
if(Global_2635559.f_2673){
func_1812();
Global_2635559.f_2673=0;
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}


void func_1812(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
bool bVar3;
float fVar4;
float fVar5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
struct<3> Var12;
struct<3> Var13;
struct<3> Var14;
struct<3> Var15;
struct<3> Var16;
struct<3> Var17;
var uVar18;
var uVar19;
var uVar20;
var uVar21;
var uVar22;
var uVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
var uVar30;
var uVar31;
var uVar32;
int iVar33;
int iVar34;
int iVar35;
int iVar36;
int iVar37;
int iVar38;
int iVar39;
int iVar40;
int iVar41;
struct<3> Var42;
float fVar43;
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
if((!Global_2635559.f_45.f_52 && !Global_2635559.f_45.f_53) && !Global_2635559.f_2674){
if(PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var1, &Var2, 1, 1077936128, 0)){
Var2.f_2=(Var2.f_2 + 1f);
bVar3=true;
if(!vdist(Var1, Var2) < 50f || Global_2635559.f_45.f_52){
bVar3=false;
}}}elseif(Global_2635559.f_2674){
Global_2635559.f_2674=0;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
fVar4=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
}
fVar5=3f;
Var6={
ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) 
};
Var6={
Var6 / FtoV(vmag(Var6)) 
};
Var6={
Var6 * Vector(fVar5, fVar5, fVar5) 
};
Var7={
Var6 
};
func_358(&Var7, 0f, 0f, -45f);
Var8={
Var6 
};
func_358(&Var8, 0f, 0f, -90f);
Var9={
Var6 
};
func_358(&Var9, 0f, 0f, 45f);
Var10={
Var6 
};
func_358(&Var10, 0f, 0f, 90f);
if(bVar3){
Var11={
Var2 - Var1 
};
Var12={
func_413(Var11, 0f, 0f, 1f) 
};
Var12={
Var12 / FtoV(vmag(Var12)) 
};
Var12={
Var12 * Vector(0.2f, 0.2f, 0.2f) 
};
}
Var13={
Var1 + Var6 
};
Var14={
Var1 + Var7 
};
Var15={
Var1 + Var8 
};
Var16={
Var1 + Var9 
};
Var17={
Var1 + Var10 
};
uVar18=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var13, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar19=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var14, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar20=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var15, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar21=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var16, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar22=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var17, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
if(bVar3){
uVar23=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var2, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
}
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar18, &iVar24, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar19, &iVar25, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar20, &iVar26, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar21, &iVar27, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar22, &iVar28, &uVar30, &uVar31, &uVar32);
if(bVar3){
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar23, &iVar29, &uVar30, &uVar31, &uVar32);
}
if(iVar33==0){
}
iVar34=(iVar34 + iVar24);
iVar35=(iVar35 + iVar25);
iVar36=(iVar36 + iVar26);
iVar37=(iVar37 + iVar27);
iVar38=(iVar38 + iVar28);
if(bVar3){
iVar39=(iVar39 + iVar29);
}
iVar40=99;
iVar41=-1;
if(iVar34 < iVar40){
iVar40=iVar34;
iVar41=0;
}
if(iVar35 < iVar40){
iVar40=iVar35;
iVar41=1;
}
if(iVar37 < iVar40){
iVar40=iVar37;
iVar41=2;
}
if(iVar36 < iVar40){
iVar40=iVar36;
iVar41=3;
}
if(iVar38 < iVar40){
iVar40=iVar38;
iVar41=4;
}
if(bVar3){
if(iVar39 < iVar40){
iVar40=iVar39;
iVar41=5;
}}
if(bVar3 && iVar39==0){
fVar4=MISC::GET_HEADING_FROM_VECTOR_2D(Var11.f_0, Var11.f_1);
func_1814(fVar4);
return;
}elseif(iVar34==0){
return;
}elseif(Global_2635559.f_45.f_52){
Var42={
Global_2635559.f_45.f_49 - Var1 
};
fVar43=func_399(Var42, Var15);
if(fVar43 <=0f){
if(iVar35==0){
fVar4=(fVar4 + -45f);
func_1814(fVar4);
return;
}elseif(iVar36==0){
fVar4=(fVar4 + -90f);
func_1814(fVar4);
return;
}elseif(iVar37==0){
fVar4=(fVar4 + 45f);
func_1814(fVar4);
return;
}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1814(fVar4);
return;
}else{
func_1813(iVar41, fVar4, Var11);
}}elseif(iVar37==0){
fVar4=(fVar4 + 45f);
func_1814(fVar4);
return;
}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1814(fVar4);
return;
}elseif(iVar35==0){
fVar4=(fVar4 + -45f);
func_1814(fVar4);
return;
}elseif(iVar36==0){
fVar4=(fVar4 + -90f);
func_1814(fVar4);
return;
}else{
func_1813(iVar41, fVar4, Var11);
}}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(iVar0==0){
if(iVar36==0){
fVar4=(fVar4 + -90f);
func_1814(fVar4);
return;
}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1814(fVar4);
return;
}else{
func_1813(iVar41, fVar4, Var11);
}}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1814(fVar4);
return;
}elseif(iVar36==0){
fVar4=(fVar4 + -90f);
func_1814(fVar4);
return;
}else{
func_1813(iVar41, fVar4, Var11);
}}}}


void func_1813(int iParam0, float fParam1, struct<2> Param2, var uParam3){
switch (iParam0){
case 0:
return;
break;
case 1:
fParam1=(fParam1 + -45f);
func_1814(fParam1);
return;
break;
case 2:
fParam1=(fParam1 + 45f);
func_1814(fParam1);
return;
break;
case 3:
fParam1=(fParam1 + -90f);
func_1814(fParam1);
return;
break;
case 4:
fParam1=(fParam1 + 90f);
func_1814(fParam1);
return;
break;
case 5:
fParam1=MISC::GET_HEADING_FROM_VECTOR_2D(Param2.f_0, Param2.f_1);
func_1814(fParam1);
return;
break;
}}


void func_1814(float fParam0){
if(!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam0);
}
func_1792(0f, 1);
}

int func_1815(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10){
int iVar0;
struct<3> Var1;
float fVar2;
Global_23131.f_6=1;
if(Global_2672505.f_1024 && Global_2672505.f_1032){
func_1820(0, bParam7);
return 1;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam7){
if(Global_2672505.f_1024){
func_1820(0, bParam7);
}
return 0;
}
if((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam7) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
return 0;
}
if(!func_473(0)){
if(func_181(PLAYER::PLAYER_ID(), 1, 0) && !(func_1819() || func_1818())){
if(((bParam7 && func_9(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_232==1){
}elseif(func_2433()==28){
}else{
return 0;
}}}
if(fParam1 < 0f){
fParam1=(fParam1 + 360f);
}
if(fParam1 >=360f){
fParam1=(fParam1 + -360f);
}
if(!Global_2672505.f_1024 && !bParam9){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
if((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f){
fVar2=(fParam1 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
if(fVar2 > 180f){
fVar2=(fVar2 + -360f);
}
if(fVar2 < -180f){
fVar2=(fVar2 + 360f);
}
if(MISC::ABSF(fVar2) < 1f){
Global_2672505.f_1024=0;
Global_2672505.f_1025=0;
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
return 1;
}}}
if(((!Param0.f_0==Global_2672505.f_1026 || !Param0.f_1==Global_2672505.f_1026.f_1) || !Param0.f_2==Global_2672505.f_1026.f_2) || !fParam1==Global_2672505.f_1029){
if(Global_2672505.f_1024==1){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2672505.f_1030) < func_468(0)){
return 0;
}
PLAYER::STOP_PLAYER_TELEPORT();
Global_2672505.f_1025=1;
}else{
Global_2672505.f_1025=0;
}
Global_2672505.f_1026={
Param0 
};
Global_2672505.f_1029=fParam1;
Global_2672505.f_1024=0;
}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("kosatka")){
bParam2=false;
}}}
if(!Global_2672505.f_1024 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(bParam2){
bParam3=false;
}
bParam5=bParam5;
if(bParam5){
}
if(bParam3){
}
if(bParam6){
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!MISC::IS_BIT_SET(Global_100733.f_1407[44], 16)){
func_1817(0);
}
if(!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635559.f_502))){
Global_2635559.f_502=0;
}}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0)){
Global_2672505.f_1031=0;
}}}
if(Global_2672505.f_1031 > -1){
Global_2672505.f_1030=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1024=1;
}else{
if(bParam7){
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Param0, 0, 1, 1, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
if(fParam10 !=0f){
ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
}
}
else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
}}else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
}}else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
}
func_1820(bParam4, bParam7);
return 1;
}else{
STREAMING::CLEAR_FOCUS();
PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam1, bParam2, iParam8, 0);
}
Global_2672505.f_1030=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1024=1;
}}
if(Global_2672505.f_1024){
Global_23131.f_6=1;
Global_2672505.f_1030=NETWORK::GET_NETWORK_TIME();
if(Global_2672505.f_1031 > -1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
}
if(func_1816(&(Global_2672505.f_1031), Param0, fParam1, iVar0)){
func_1820(bParam4, bParam7);
return 1;
}}else{
if(bParam7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2672505.f_1026) < 2f){
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
func_1820(bParam4, bParam7);
return 1;
}}
if(!PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(fParam10 !=0f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
Global_2672505.f_1032=1;
return 0;
}}
func_1820(bParam4, bParam7);
return 1;
}}}
return 0;
}

int func_1816(var uParam0, struct<3> Param1, float fParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_1033) && !ENTITY::IS_ENTITY_DEAD(Global_2672505.f_1033, 0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672505.f_1033);
}
switch (*uParam0){
case 0:
Global_2672505.f_1033=iParam3;
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672505.f_1033);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2672505.f_1033)){
if(!ENTITY::IS_ENTITY_DEAD(Global_2672505.f_1033, 0)){
ENTITY::SET_ENTITY_HEADING(Global_2672505.f_1033, fParam2);
ENTITY::SET_ENTITY_COORDS(Global_2672505.f_1033, Param1, 0, 1, 1, 1);
return 1;
}}
break;
}
return 0;
}


void func_1817(int iParam0){
int iVar0;
iVar0=Global_2635559.f_2691;
if((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635559.f_2689==0) && iParam0==0){
iVar0=255;
}
if(!iVar0==Global_2635559.f_2688){
if(!AUDIO::IS_RADIO_RETUNING()){
Global_2635559.f_2688=iVar0;
}}}


bool func_1818(){
return ((MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1969892, 12)) && Global_1969891==8);
}


bool func_1819(){
return (MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1969892, 0));
}


void func_1820(bool bParam0, bool bParam1){
if(!bParam0){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
}
if(!bParam1){
STREAMING::CLEAR_FOCUS();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
func_1822();
if(!MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 14) && !func_1784()){
func_1821();
}}


void func_1821(){
Global_2802791.f_92=1;
}


void func_1822(){
struct<3> Var0;
Global_2672505.f_1024=0;
Global_2672505.f_1025=0;
Global_2672505.f_1026={
9999.9f, 9999.9f, 9999.9f 
};
Global_2672505.f_1031=-1;
Global_2672505.f_1032=0;
Global_2635559.f_2692={
Var0 
};
}


void func_1823(struct<3> Param0){
Global_2635559.f_45.f_302=1;
Global_2635559.f_45.f_299={
Param0 
};
Global_2635559.f_45.f_318=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME_ACCURATE(), -9999);
func_1824(1);
}


void func_1824(bool bParam0){
float fVar0;
if(Global_1836597 || Global_2635559.f_45.f_303){
if(Global_2635559.f_45.f_302){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_1836601){
fVar0=100f;
}else{
fVar0=36f;
}
if((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && ((vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_2635559.f_45.f_299) < fVar0 || func_1828(PLAYER::PLAYER_ID())) || func_181(PLAYER::PLAYER_ID(), 0, 0))){
if((func_1827() || func_1826()) || func_1825()){
if(PAD::IS_CONTROL_PRESSED(0, 351)){
Global_2635559.f_45.f_318=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_1796(1000, 0, 1);
}
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2635559.f_45.f_318, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 2000){
func_1796(2500, 0, bParam0);
Global_2635559.f_45.f_318=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
Global_2635559.f_45.f_318=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_1796(1000, 0, bParam0);
}}else{
Global_2635559.f_45.f_299={
0f, 0f, 0f 
};
Global_2635559.f_45.f_302=0;
}}}
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_174)){
func_2196(&(Global_2635559.f_45.f_174));
}}}

int func_1825(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("thruster")){
return 1;
}}}
return 0;
}

int func_1826(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("ruiner2")){
return 1;
}}}
return 0;
}

int func_1827(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("blazer5")){
return 1;
}}}
return 0;
}

int func_1828(bool bParam0){
if(Global_2657589[bParam0 /*466*/].f_217 !=0){
return 1;
}
return 0;
}


void func_1829(int iParam0, int iParam1, int iParam2, bool bParam3){
bool bVar0;
struct<3> Var1;
struct<3> Var2;
bVar0=false;
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)){
bVar0=true;
}
if(!func_2023(iParam0, iParam1, bVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
Var2={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
if(!vdist(Var1, Var2) < 5f || !iParam2==-1){
Var2.f_2=(Var2.f_2 + -4f);
Var2.f_0=(Var2.f_0 + -4f);
Var2.f_1=(Var2.f_1 + -4f);
ENTITY::SET_ENTITY_COORDS(iParam0, Var2, 0, 0, 0, 1);
}
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
ENTITY::SET_ENTITY_COLLISION(iParam0, true, 0);
ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_RESET_FLAG(iParam0, 150, 1);
PED::SET_PED_RESET_FLAG(iParam0, 151, 1);
if(bParam3){
PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
}else{
TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
}
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
PED::SET_PED_RESET_FLAG(iParam0, 150, 1);
if(Global_1836597){
if(func_2020(ENTITY::GET_ENTITY_MODEL(iParam1))){
func_1830(0);
}}}}


void func_1830(bool bParam0){
struct<14> Var0;
int iVar1;
if(!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
if(Global_4718592.f_166335==0){
if((Global_2635559.f_2699==-99 || Global_2635559.f_2699==0) || !func_2019(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2635559.f_2699, -1)){
if(!bParam0){
iVar1=func_255(589, -1, 0);
}}else{
iVar1=Global_2635559.f_2699;
}
Var0={
func_1976(func_2018(), 14, iVar1, -1) 
};
func_1975(PLAYER::PLAYER_PED_ID(), 14, iVar1);
func_1831(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
func_1831(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
}else{
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
}}}

int func_1831(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
var uVar12;
var uVar13;
var uVar14;
var uVar15;
var uVar16;
int iVar17;
var uVar18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
int iVar32;
int iVar33;
int iVar34;
int iVar35;
int iVar36;
int iVar37;
int iVar38;
int iVar39;
int iVar40;
int iVar41;
int iVar42;
int iVar43;
int iVar44;
int iVar45;
int iVar46;
int iVar47;
int iVar48;
int iVar49;
int iVar50;
int iVar51;
int iVar52;
int iVar53;
int iVar54;
var uVar55;
int iVar56;
int iVar57;
int iVar58;
int iVar59;
int iVar60;
int iVar61;
int iVar62;
int iVar63;
int iVar64;
int iVar65;
int iVar66;
var uVar67;
int iVar68;
int iVar69;
int iVar70;
int iVar71;
int iVar72;
int iVar73;
int iVar74;
int iVar75;
int iVar76;
int iVar77;
int iVar78;
var uVar79;
int iVar80;
int iVar81;
int iVar82;
int iVar83;
int iVar84;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((Global_1574992 !=4 && Global_1574992 !=5) && Global_1574992 !=7){
return 0;
}}
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
if(iParam0==PLAYER::PLAYER_PED_ID() && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_232==2){
if(!bParam12){
return 0;
}}
if(iParam10==-1){
iParam10=Global_78338;
}
Global_78339++;
iVar5=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar6=-99;
iVar7=-99;
iVar8=-99;
iVar9=-99;
iVar10=-1;
iVar11=-1;
if(iParam5==0){
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
if(!func_1974(iParam3)){
Global_78339=(Global_78339 - 1);
return 0;
}
if(iParam1==11 && Global_78339 > 1){
}elseif(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 4)){
func_1969(iVar5, iParam1, iParam2, 1);
}}
if(iParam1==12){
uVar12=Global_2883588;
uVar13=Global_2883589;
PED::CLEAR_ALL_PED_PROPS(iParam0, 1);
uVar14=15;
if(iParam5==1){
uVar14={
Global_78384 
};
}else{
uVar14={
func_1965(iVar5, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar14[iVar0] !=-99){
if(iVar0==10 && uVar14.f_16){
Global_78341[1 /*14*/]={
func_1976(iVar5, 10, 0, -1) 
};
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_945(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_945(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_945(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1969(iVar5, 10, 0, 1);
}}else{
Global_78341[1 /*14*/]={
func_1976(iVar5, iVar0, uVar14[iVar0], -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) || iVar0==13){
if(iVar0==13){
uVar15=9;
if(iParam5==1){
uVar15={
Global_78401 
};
}else{
uVar15={
func_1962(iVar5, uVar14[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_1976(iVar5, 14, uVar15[iVar1], -1) 
};
func_1961(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1969(iVar5, iVar0, uVar14[iVar0], 1);
}
iVar1++;
}
}
elseif(iVar0 !=14 && iVar0 !=12){
if(iVar0 !=1){
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_945(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_945(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_945(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}}else{
func_1831(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1969(iVar5, iVar0, uVar14[iVar0], 1);
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78341[1 /*14*/]={
func_1976(iVar5, iVar0, func_1957(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
uVar16={
func_1965(iVar5, 0) 
};
func_1831(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
iVar0++;
}
PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
Global_2883588=uVar12;
Global_2883589=uVar13;
if(iParam5==0){
iVar17=func_1956();
if(iVar17 !=-1){
func_1954(iVar17, 0, iParam10);
}
func_1950(iParam0, 11, uVar14[11], iParam6, 0);
}}elseif(iParam1==13){
uVar18={
func_1962(iVar5, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_1976(iVar5, 14, uVar18[iVar1], -1) 
};
func_1961(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1969(iVar5, 14, uVar18[iVar1], 1);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_1948(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_1831(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}
iVar1++;
}}elseif(iParam1==14){
func_1961(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1969(iVar5, iParam1, iParam2, 1);
}
if(Global_78341[1 /*14*/].f_12==0){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_hair"), 1)){
}elseif(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("hair_shrink"))){
func_1831(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
}}
if(Global_78341[1 /*14*/].f_12==0){
func_1942(iParam0);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_1948(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_1831(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
iVar3=func_1948(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_1831(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}else{
if((iParam1==4 || iParam1==11) || iParam1==8){
iVar19=func_945(iParam1);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) !=Global_78341[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) !=Global_78341[1 /*14*/].f_4){
iVar20=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
iVar21=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
if(((iParam1==11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, 307252627, 0)) || (iParam1==8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1==4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, -2095729091, 0))){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
}
if((iParam1==11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, 307252627, 0)) || (iParam1==4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, -2095729091, 0))){
if(iVar5==joaat("mp_m_freemode_01")){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
}elseif(iVar5==joaat("mp_f_freemode_01")){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
}}}}
if(iParam1==11){
if(iParam5==0){
iVar22=-1;
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11)){
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 0);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 1);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 2);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 3);
}
iVar23=func_947(iParam0, 11);
iVar24=func_947(iParam0, 8);
iVar25=func_947(iParam0, 4);
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
if(iVar5==joaat("mp_m_freemode_01")){
iVar22=func_943(iVar5, iParam2, 11, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar22=func_943(iVar5, iParam2, 11, 4);
}
if((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_robe"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("morph_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("gorka_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("cat_suit"), 0)){
}else{
iVar8=func_947(iParam0, 8);
}}
iVar26=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("gloves"), 0)){
iVar27=func_1941(iVar5, iVar24, iVar23, iVar25);
if(iVar27==-99){
iVar27=func_1948(iParam0, iVar5, 11, iVar23, 3, 0);
}
switch (iVar26){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar27=11;
iVar22=func_943(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("dress"), 0)){
iVar27=-99;
}
break;
}
if(iVar27 !=-99){
iVar28=0;
while (iVar28 < 18){
if(func_1940(iVar5, iVar27, iVar28)==iVar26){
iVar10=iVar28;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar28++;
}}}
iVar22=-1;
if((iVar5==joaat("mp_f_freemode_01") && iParam2 >=256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_943(iVar5, iParam2, 11, 4), joaat("vest"), 0)){
iVar23=func_947(iParam0, 11);
if(iVar23 >=256){
iVar22=func_943(iVar5, iVar23, 11, 4);
}
if(iVar23 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0)){
iVar29=func_1938(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar29 !=-99){
func_1831(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(func_1937(iVar5, iParam2, -1)){
if(iVar5==joaat("mp_m_freemode_01")){
if(iVar23 >=237){
iVar22=func_943(iVar5, iVar23, 11, 3);
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(iVar23 >=256){
iVar22=func_943(iVar5, iVar23, 11, 4);
}}
iVar8=-99;
if(!func_1937(iVar5, iVar23, -1)){
if((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0))){
}
elseif((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("apart_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_9"), 0))){
}
else{
iVar30=func_1936(iParam0, iParam2);
iVar31=func_1938(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar31 !=-99){
func_1831(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
iVar8=-99;
}elseif(iVar30 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
func_1831(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
}else{
if(iVar5==joaat("mp_m_freemode_01")){
iVar32=func_1934(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1976(iVar5, 11, iVar32, -1) 
};
iVar31=func_1938(iVar5, iVar32, iParam2, Global_78341[1 /*14*/].f_4);
iVar33=func_943(iVar5, iParam2, 11, 3);
if((iVar31==-99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("biker_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("open_short"), 0)){
iVar31=240;
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -1099375697, 0)){
iVar31=80;
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_943(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0)){
iVar31=120;
}
else{
iVar31=48;
}}
func_1831(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
}
}}else{
Global_78341[1 /*14*/]={
func_1976(iVar5, 11, iVar23, -1) 
};
iVar34=Global_78341[1 /*14*/].f_3;
Global_78341[1 /*14*/]={
func_1976(iVar5, 11, iParam2, -1) 
};
iVar35=Global_78341[1 /*14*/].f_3;
if(iVar34 !=iVar35){
iVar37=func_1936(iParam0, iParam2);
Global_78341[1 /*14*/]={
func_1976(iVar5, 8, iVar24, -1) 
};
iVar36=Global_78341[1 /*14*/].f_4;
iVar38=func_1933(iVar5, iVar24, iVar36);
if(iVar37 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
iVar39=iVar37;
}elseif(iVar38==-99){
iVar39=iVar24;
if(iVar5==joaat("mp_m_freemode_01")){
iVar40=func_943(iVar5, iParam2, 11, 3);
if(((iParam2 >=96 && iParam2 <=107) || func_942(iVar40)==6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("biker_vest"), 0)){
iVar38=func_1934(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1976(iVar5, 11, iVar38, -1) 
};
iVar39=func_1938(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
if(iVar5==joaat("mp_f_freemode_01") && ((iVar24==32 || iVar24==33) || iVar24==119)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_943(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0)){
iVar38=func_1934(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1976(iVar5, 11, iVar38, -1) 
};
iVar39=func_1938(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
iVar41=-1;
if(iVar5==joaat("mp_m_freemode_01")){
iVar41=func_943(iVar5, iVar24, 8, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar41=func_943(iVar5, iVar24, 8, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("overcoat_accs"), 0)){
iVar38=func_1934(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1976(iVar5, 11, iVar38, -1) 
};
iVar39=func_1938(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}else{
iVar39=func_1938(iVar5, iVar38, iParam2, iVar36);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_943(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0)){
if(!func_1932(iVar5, func_947(iParam0, 4), iVar38)){
iVar39=240;
}
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_943(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0)){
if(!func_1932(iVar5, func_947(iParam0, 4), iVar38)){
iVar39=48;
}
}}}
if(iVar39 !=-99){
func_1831(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_m_freemode_01")){
iVar38=func_1934(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1976(iVar5, 11, iVar38, -1) 
};
iVar39=func_1938(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
if(iVar39==-99){
iVar39=240;
}
func_1831(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_f_freemode_01")){
func_1831(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
}}}
func_1929(iVar5, iParam2);
if(!bParam13){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
}}
func_1950(iParam0, iParam1, iParam2, iParam6, 0);
if(iParam5==0){
iVar6=func_1941(iVar5, func_1957(iParam0, 8, -1), iParam2, func_1957(iParam0, 4, -1));
}}elseif(iParam1==2){
if(iParam5==0){
if(iParam8==-1){
iParam8=func_255(2153, iParam10, 0);
}
if(iParam9==-1){
iParam9=func_255(2160, iParam10, 0);
}
PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
}
if(iParam7==0){
if(iParam2 !=-99){
iVar42=-99;
if(iVar5==joaat("mp_m_freemode_01")){
iVar42=func_1927(iParam2);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar42=func_1925(iParam2);
}
if(iVar42 !=-99 && iParam2 !=iVar42){
iParam2=iVar42;
}}
func_1884(iParam0, iParam2, iParam10, bParam11);
}}elseif(iParam1==8){
iVar43=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("gloves"), 0)){
iVar44=func_947(iParam0, 11);
iVar45=func_947(iParam0, 4);
iVar46=func_1941(iVar5, iParam2, iVar44, iVar45);
if(iVar46==-99){
iVar46=func_1948(iParam0, iVar5, 11, iVar44, 3, 0);
}
switch (iVar43){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar46=11;
iVar47=func_943(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("dress"), 0)){
iVar46=-99;
}
break;
}
if(iVar46 !=-99){
iVar48=0;
while (iVar48 < 18){
if(func_1940(iVar5, iVar46, iVar48)==iVar43){
iVar10=iVar48;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar48++;
}}}
func_1950(iParam0, iParam1, iParam2, iParam6, 0);
iVar49=func_947(iParam0, 11);
if(func_1937(iVar5, iVar49, -1)){
iVar50=func_1933(iVar5, iParam2, Global_78341[1 /*14*/].f_4);
func_1929(iVar5, iVar50);
}
if(iParam5==0){
iVar6=func_1941(iVar5, iParam2, func_947(iParam0, 11), func_947(iParam0, 4));
}}elseif(iParam1==9){
if(iParam2 >=1 && iParam2 <=41){
iVar51=func_947(iParam0, 7);
if(!func_1881(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99)){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_945(7), 0, 0, 0);
}}}elseif(iParam1==1){
if(((iVar5==joaat("mp_m_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5==joaat("mp_f_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0))){
iVar52=func_255(2100, iParam10, 0);
iVar53=func_255(2101, iParam10, 0);
iVar54=func_255(2102, iParam10, 0);
uVar55=func_1880(135, iParam10);
if(iVar5==joaat("mp_m_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, uVar55, 0f, false);
}elseif(iVar5==joaat("mp_f_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
}
iVar56=0;
while (iVar56 < 20){
PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
iVar56++;
}}else{
func_1865(iParam0, iParam10);
}}elseif(iParam1==4){
iVar57=func_947(iParam0, 11);
iVar58=func_947(iParam0, 8);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_943(iVar5, iVar57, 11, 3), joaat("low2_open_check"), 0)){
if(!func_1932(iVar5, iParam2, func_1933(iVar5, iVar58, 0))){
func_1831(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_943(iVar5, iVar57, 11, 4), joaat("low2_open_check"), 0)){
if(!func_1932(iVar5, iParam2, func_1933(iVar5, iVar58, 0))){
func_1831(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1976(iVar5, iParam1, iParam2, -1) 
};
}}}
if(iParam5==0){
iVar6=func_1941(iVar5, func_947(iParam0, 8), func_947(iParam0, 11), iParam2);
}
iVar59=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("gloves"), 0)){
iVar60=func_1941(iVar5, iVar58, iVar57, iParam2);
if(iVar60==-99){
iVar60=func_1948(iParam0, iVar5, 11, iVar57, 3, 0);
}
switch (iVar59){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar60=11;
iVar61=func_943(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("dress"), 0)){
iVar60=-99;
}
break;
}
if(iVar60 !=-99){
iVar62=0;
while (iVar62 < 18){
if(func_1940(iVar5, iVar60, iVar62)==iVar59){
iVar10=iVar62;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar62++;
}}}}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_945(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_945(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_945(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_1948(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_1831(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1==10);
if(iVar2==3){
switch (Global_2883588){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar10=-1;
break;
}
}
elseif(iVar2==8){
if(iVar6 !=-99){
iVar6=func_1941(iVar5, iVar3, func_947(iParam0, 11), func_947(iParam0, 4));
}
}}
iVar2++;
}
iVar3=func_1948(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_1831(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if((iParam1==11 || iParam1==8) || iParam1==4){
if(func_1864(iParam0)){
iVar63=func_1862(iParam0, iVar5, iParam1, iParam2);
if(iVar63 > 0){
iVar63=(iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
if(!func_1856(iParam0, 9, iVar63)){
func_1831(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}else{
func_1831(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
func_1831(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==11 || iParam1==8){
iVar64=func_255(2042, -1, 0);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) !=0){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_1850(iParam0, iVar64), func_1849(iParam0, iVar64), func_1848(iParam0, iVar64));
}
if(iParam0==PLAYER::PLAYER_PED_ID()){
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_1850(PLAYER::PLAYER_PED_ID(), iVar64), func_1849(PLAYER::PLAYER_PED_ID(), iVar64), 0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_1848(PLAYER::PLAYER_PED_ID(), iVar64));
func_1846(PLAYER::PLAYER_ID(), iVar64);
}}
if(iParam1==7){
if((iVar5==joaat("mp_m_freemode_01") && iParam2 >=92) || (iVar5==joaat("mp_f_freemode_01") && iParam2 >=55)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("big_chain"), 0)){
func_1831(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iVar5==joaat("mp_f_freemode_01") && (iParam1==11 || iParam1==4)){
if(iParam1==11){
iVar65=func_1957(iParam0, 4, -1);
iVar66=iParam2;
}else{
iVar65=iParam2;
iVar66=func_1957(iParam0, 11, -1);
}
if(func_1845(iVar5, 11, iVar66, -1)){
if(!func_1844(iVar5, 4, iVar65, -1)){
if(func_1843(iVar5, 4, iVar65, &uVar67)){
func_1831(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}elseif(func_1844(iVar5, 4, iVar65, -1)){
if(func_1842(iVar5, 4, iVar65, &uVar67)){
func_1831(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==4 || iParam1==6){
iVar68=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
iVar69=PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
iVar70=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
iVar71=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
iVar72=PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
iVar73=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
iVar74=func_947(iParam0, 4);
iVar75=func_947(iParam0, 6);
if(func_1841(iVar5, iVar70)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_1840(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_1838(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_1831(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_1838(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_1831(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_1837(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_1838(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_1831(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_1838(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_1831(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}
if(func_1841(iVar5, iVar73)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_1837(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_1838(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_1831(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_1838(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_1831(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_1840(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_1838(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_1831(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_1838(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_1831(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}}
if(iParam1==11 || iParam1==1){
func_1942(iParam0);
iVar81=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
iVar82=PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
iVar83=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("force_prop"), 0)){
iVar3=func_1948(iParam0, iVar5, iParam1, iParam2, 14, 0);
if(iVar3 !=-99){
func_1831(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar3=func_1948(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_1831(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}}
if(iParam1 !=2){
if(func_1832(iParam0, &uVar4)){
func_1831(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if(iVar6 !=-99 && !bParam13){
func_1831(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar8 !=-99){
func_1831(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar7 !=-99){
func_1831(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar10 !=-1){
iVar84=func_1940(iVar5, func_1957(iParam0, 3, -1), iVar10);
if(iVar84 !=-1){
if(iVar5==joaat("mp_m_freemode_01")){
iVar9=func_1838(iVar5, iVar84, 3, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar9=func_1838(iVar5, iVar84, 3, 4);
}
if(iVar9 !=-99){
iVar9=(iVar9 + iVar11);
func_1831(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
Global_78339=(Global_78339 - 1);
return 1;
}

int func_1832(int iParam0, var uParam1){
int iVar0;
int iVar1;
*uParam1=func_1957(PLAYER::PLAYER_PED_ID(), 2, -1);
if(func_255(754, Global_78338, 0) !=-99 && func_1834()){
if(func_1833()==4){
return 1;
}
if(func_255(754, Global_78338, 0)==0 && func_255(755, Global_78338, 0)==0){
if(func_1562(161, Global_78338)){
if(func_255(2053, Global_78338, 0)==0){
return 0;
}}elseif(func_255(753, Global_78338, 0)==0){
return 0;
}}
iVar0=func_255(754, Global_78338, 0);
iVar1=func_255(755, Global_78338, 0);
if(!func_1856(iParam0, iVar1, iVar0)){
if(func_1562(161, Global_78338)){
*uParam1=func_255(2053, Global_78338, 0);
}else{
*uParam1=func_255(753, Global_78338, 0);
}
func_852(754, -99, Global_78338, 1, 0);
func_852(755, 2, Global_78338, 1, 0);
return 1;
}}
return 0;
}

int func_1833(){
return Global_1574992;
}

int func_1834(){
if(func_1836() && func_1835(0)){
return 1;
}
return 0;
}


var func__1835(int iParam0){
return Global_1574538[iParam0];
}


var func__1836(){
return func_1835(func_91() + 1);
}

int func_1837(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_943(iParam0, iParam1, 6, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0)){
return 1;
}
return 0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("cowboy_boots"), 0)){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gorka_suit"), 0)){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("pilot_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("cowboy_boots"), 0)){
return 1;
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1 >=256){
iVar0=func_943(iParam0, iParam1, 6, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0)){
return 1;
}
return 0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if(((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("pilot_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_8"), 0)){
return 1;
}}
break;
}
return 0;
return 0;
}

int func_1838(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_1839(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_946(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_945(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_944(iParam0, func_945(iParam2)) + iVar4);
}}
return -99;
}

int func_1839(int iParam0){
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

int func_1840(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
iVar1=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_943(iParam0, iParam1, 4, 3);
iVar1=func_942(iVar0);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
iVar2=1;
if((((((((((((((((((((((((iParam1 >=32 && iParam1 <=47) || (iParam1 >=64 && iParam1 <=79)) || (iParam1 >=96 && iParam1 <=111)) || (iParam1 >=176 && iParam1 <=191)) || (iParam1 >=192 && iParam1 <=207)) || (iParam1 >=224 && iParam1 <=239)) || (iParam1 >=240 && iParam1 <=255)) || iVar1==2) || iVar1==4) || iVar1==6) || iVar1==11) || iVar1==12) || iVar1==14) || iVar1==15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("skinny"), 0)) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1854729816, 0)){
iVar2=0;
}
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("battle_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("battle_draw_2"), 0)){
if((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
iVar2=1;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0)){
iVar2=0;
}else{
iVar2=1;
}}
return iVar2;
}
break;
case joaat("mp_f_freemode_01"):
if(iParam1 >=256){
iVar0=func_943(iParam0, iParam1, 4, 4);
iVar1=func_942(iVar0);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0)){
return 0;
}}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("biker_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_1"), 0)){
return 1;
}
return 0;
}
if(((((((((((((((((((((((((((iParam1 >=16 && iParam1 <=31) || (iParam1 >=48 && iParam1 <=63)) || (iParam1 >=96 && iParam1 <=111)) || iVar1==1) || iVar1==3) || iVar1==6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("dungarees"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("h3_draw_5"), 0)){
return 1;
}}
break;
}
return 0;
}

int func_1841(int iParam0, int iParam1){
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("has_alt_version"), 0)){
return 1;
}
break;
case joaat("mp_f_freemode_01"):
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("has_alt_version"), 0)){
return 1;
}
break;
}
return 0;
}

int func_1842(int iParam0, int iParam1, int iParam2, var uParam3){
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
iVar0=func_943(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_1838(iParam0, iVar3, iParam1, 4);
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

int func_1843(int iParam0, int iParam1, int iParam2, var uParam3){
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
iVar0=func_943(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_1838(iParam0, iVar3, iParam1, 4);
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

int func_1844(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_943(iParam0, iParam2, 4, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress_legs"), 0)){
return 1;
}}
break;
}
break;
}
return 0;
}

int func_1845(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_943(iParam0, iParam2, 11, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress"), 0);
}
break;
}
break;
}
return 0;
}


void func_1846(bool bParam0, int iParam1){
int iVar0;
iVar0=func_1847(iParam1);
if(iVar0 !=joaat("p_parachute_s")){
PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(bParam0, iVar0);
}else{
PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(bParam0);
}}

int func_1847(int iParam0){
if(iParam0 > 66){
return joaat("reh_p_para_bag_reh_s_01a");
}elseif(iParam0 > 63){
return joaat("p_para_bag_tr_s_01a");
}elseif(iParam0 > 61){
return joaat("vw_p_para_bag_vine_s");
}elseif(iParam0 > 51){
return joaat("lts_p_para_bag_pilot2_s");
}elseif(iParam0 > 46){
return joaat("p_para_bag_xmas_s");
}elseif(iParam0 > 26){
return joaat("lts_p_para_bag_lts_s");
}elseif(iParam0 > 0){
return joaat("lts_p_para_bag_pilot2_s");
}
return joaat("p_parachute_s");
}

int func_1848(int iParam0, int iParam1){
return 0;
}

int func_1849(int iParam0, int iParam1){
switch (iParam1){
case 0:
return 0;
break;
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
return 9;
break;
case 11:
return 10;
break;
case 12:
return 11;
break;
case 13:
return 12;
break;
case 14:
return 13;
break;
case 15:
return 14;
break;
case 16:
return 15;
break;
case 17:
return 16;
break;
case 18:
return 17;
break;
case 19:
return 18;
break;
case 20:
return 19;
break;
case 21:
return 20;
break;
case 22:
return 21;
break;
case 23:
return 22;
break;
case 24:
return 23;
break;
case 25:
return 24;
break;
case 26:
return 25;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 2;
break;
case 30:
return 3;
break;
case 31:
return 4;
break;
case 32:
return 5;
break;
case 33:
return 6;
break;
case 34:
return 7;
break;
case 35:
return 8;
break;
case 36:
return 9;
break;
case 37:
return 10;
break;
case 38:
return 11;
break;
case 39:
return 12;
break;
case 40:
return 13;
break;
case 41:
return 14;
break;
case 42:
return 15;
break;
case 43:
return 16;
break;
case 44:
return 17;
break;
case 45:
return 18;
break;
case 46:
return 19;
break;
case 47:
return 0;
break;
case 48:
return 1;
break;
case 49:
return 2;
break;
case 50:
return 3;
break;
case 51:
return 4;
break;
case 52:
return 0;
break;
case 53:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 2;
break;
case 56:
return 3;
break;
case 57:
return 4;
break;
case 58:
return 5;
break;
case 59:
return 6;
break;
case 60:
return 7;
break;
case 61:
return 8;
break;
case 62:
return 0;
break;
case 63:
return 1;
break;
case 64:
return 0;
break;
case 65:
return 1;
break;
case 66:
return 2;
break;
case 67:
return 0;
break;
}
return 0;
}


var func__1850(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
bVar3=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=false;
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
iVar5=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
iVar6=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
if(((((((bVar3 !=Global_78530 || iParam1 !=Global_78531) || iVar4 !=Global_78532) || iVar5 !=Global_78533) || iVar6 !=Global_78534) || iVar0 !=Global_78535) || iVar1 !=Global_78536) || iVar2 !=Global_78537){
Global_78530=bVar3;
Global_78531=iParam1;
Global_78532=iVar4;
Global_78533=iVar5;
Global_78534=iVar6;
Global_78535=iVar0;
Global_78536=iVar1;
Global_78537=iVar2;
Global_78538=func_1851(iParam0, iParam1);
}
return Global_78538;
}

int func_1851(int iParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0){
bVar1=true;
}
iVar2=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar3=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("over_jacket"), 8)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_1855(iParam0, iParam1, 1);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)){
return func_1855(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_1855(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_1855(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_1855(iParam0, iParam1, 10);
}}else{
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8)){
return func_1855(iParam0, iParam1, 6);
}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_1855(iParam0, iParam1, 7);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_1855(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_1855(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_1855(iParam0, iParam1, 10);
}}
return func_1855(iParam0, iParam1, 9);
}
if(func_1854(iParam0)){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}
if(iVar0 > 15){
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0)){
return func_1855(iParam0, iParam1, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0)){
return func_1855(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0)){
return func_1855(iParam0, iParam1, 2);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0)){
return func_1855(iParam0, iParam1, 3);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0)){
return func_1855(iParam0, iParam1, 4);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0)){
return func_1855(iParam0, iParam1, 5);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0)){
return func_1855(iParam0, iParam1, 6);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0)){
return func_1855(iParam0, iParam1, 7);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0)){
return func_1855(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0)){
return func_1855(iParam0, iParam1, 9);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0)){
return func_1855(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hipster_dress"), 0)){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0)){
return func_1855(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if(bVar1){
return func_1855(iParam0, iParam1, 5);
}else{
return func_1855(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return func_1855(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hooded_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
return func_1855(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return func_1855(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
return func_1855(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
return func_1855(iParam0, iParam1, 10);
}elseif(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
iVar5=func_1853(iVar4, 0);
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar5){
case 0:
return func_1855(iParam0, iParam1, 1);
break;
case 2:
return func_1855(iParam0, iParam1, 8);
break;
default:
iVar0=func_942(iVar4);
break;
}}else{
switch (iVar5){
case 2:
return func_1855(iParam0, iParam1, 6);
break;
default:
iVar0=func_942(iVar4);
break;
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
return func_1855(iParam0, iParam1, 2);
}else{
return func_1855(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_gear"), 0)){
iVar6=func_1852(iVar4, 0);
switch (iVar6){
case 4:
return func_1855(iParam0, iParam1, 7);
break;
case 5:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1855(iParam0, iParam1, 7);
}
break;
case 6:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1855(iParam0, iParam1, 7);
}
break;
case 7:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1855(iParam0, iParam1, 7);
}
break;
case 11:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1855(iParam0, iParam1, 7);
}
break;
case 12:
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 9);
}else{
return func_1855(iParam0, iParam1, 7);
}
break;
case 13:
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 9);
}else{
return func_1855(iParam0, iParam1, 9);
}
break;
case 14:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1855(iParam0, iParam1, 9);
}
break;
default:
iVar0=func_942(iVar4);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 2);
}}elseif(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 2);
}elseif(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 1);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 1);
}elseif(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 2);
}else{
return func_1855(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 2);
}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 1);
}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 8);
}else{
return func_1855(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 2);
}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_3"), 0)){
return func_1855(iParam0, iParam1, 10);
}else{
return func_1855(iParam0, iParam1, 2);
}}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 1);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_sweat"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_sweat"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 5);
}}elseif(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 8);
}elseif(bVar1){
return func_1855(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 2);
}elseif(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_1855(iParam0, iParam1, 9);
}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 6);
}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1855(iParam0, iParam1, 7);
}else{
return func_1855(iParam0, iParam1, 1);
}}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 2);
}else{
return func_1855(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1855(iParam0, iParam1, 2);
}else{
return func_1855(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_7"), 0)){
if(iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_1855(iParam0, iParam1, 9);
