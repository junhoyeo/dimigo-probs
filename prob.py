# 3차 과제 중 안한 것
prob = [1084, 1085, 1088, 1087, 1088, 1089, 1092, 1098, 1094, 1095, 1098, 1097, 1098, 1099, 1100, 1101, 1102, 1108, 1104, 1105, 1108, 1107, 1108, 1109, 1110, 1111, 1112, 1118, 1114, 1115]
mine = [int(i) for i in '1000 1001 1002 1003 1004 1005 1006 1008 1010 1011 1012 1013 1014 1015 1016 1017 1018 1019 1020 1021 1022 1023 1024 1025 1026 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 1038 1039 1040 1041 1042 1043 1046 1047 1048 1049 1050 1051 1052 1053 1054 1055 1056 1057 1058 1059 1060 1061 1062 1063 1064 1065 1066 1067 1068 1069 1070 1071 1072 1073 1074 1075 1076 1077 1078 1079 1080 1081 1082 1083 1084 1085 1091 1093 1094 1095 1096 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1116 1117 1118 1119 1120 1121 1122 1123 1124 1125 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1140 1141 1142 1143 1144 1145 1152 1154 1160 1161 1163 1164 1166 1171 1173 1175 1176 1178 1179 1180 1182 1183 1184 1185 1187 1188 1189 1190 1192 1193 1195 1196 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1210 1211 1212 1215 1216 1231 1232 1233 1234 1235 1237 1238 1242 1243 1249 1254 1255 1257 1260 1261 1262 1263'.split(' ')]
undo = list(set(prob) - set(mine)) # [1088, 1089, 1092, 1111, 1112, 1114, 1115, 1087]

for i in undo:
    print('http://codegen.dimigo.hs.kr/problem.php?id=' + str(i))
