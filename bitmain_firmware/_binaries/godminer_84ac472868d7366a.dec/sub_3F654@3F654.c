int __fastcall sub_3F654(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r1
  int v7; // lr
  int v8; // r12
  int v9; // r1
  int v10; // lr
  int v11; // r12
  int v12; // r1
  int v13; // r12
  int v14; // r1
  int v15; // r2
  int v16; // r12
  int v17; // r1
  int v18; // r2

  result = strncasecmp((const char *)(a3 + 66), (const char *)(a2 + 1064), 0x20u);
  if ( result )
    return sub_3F5D4(result);
  v6 = *(_DWORD *)(a3 + 30);
  *(_DWORD *)(a2 + 1136) = *(_DWORD *)(a3 + 26);
  *(_DWORD *)(a2 + 1140) = v6;
  v7 = *(_DWORD *)(a3 + 102);
  v8 = *(_DWORD *)(a3 + 106);
  v9 = *(_DWORD *)(a3 + 110);
  *(_DWORD *)(a2 + 1200) = *(_DWORD *)(a3 + 98);
  *(_DWORD *)(a2 + 1204) = v7;
  *(_DWORD *)(a2 + 1208) = v8;
  *(_DWORD *)(a2 + 1212) = v9;
  v10 = *(_DWORD *)(a3 + 118);
  v11 = *(_DWORD *)(a3 + 122);
  v12 = *(_DWORD *)(a3 + 126);
  *(_DWORD *)(a2 + 1216) = *(_DWORD *)(a3 + 114);
  *(_DWORD *)(a2 + 1220) = v10;
  *(_DWORD *)(a2 + 1224) = v11;
  *(_DWORD *)(a2 + 1228) = v12;
  v13 = *(_DWORD *)(a3 + 38);
  v14 = *(_DWORD *)(a3 + 42);
  v15 = *(_DWORD *)(a3 + 46);
  *(_DWORD *)(a2 + 1168) = *(_DWORD *)(a3 + 34);
  *(_DWORD *)(a2 + 1172) = v13;
  *(_DWORD *)(a2 + 1176) = v14;
  *(_DWORD *)(a2 + 1180) = v15;
  v16 = *(_DWORD *)(a3 + 54);
  v17 = *(_DWORD *)(a3 + 58);
  v18 = *(_DWORD *)(a3 + 62);
  *(_DWORD *)(a2 + 1184) = *(_DWORD *)(a3 + 50);
  *(_DWORD *)(a2 + 1188) = v16;
  *(_DWORD *)(a2 + 1192) = v17;
  *(_DWORD *)(a2 + 1196) = v18;
  return result;
}
