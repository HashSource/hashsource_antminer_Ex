int __fastcall stratum_prepare_upstream_work_grin29(int a1, int a2, char *a3)
{
  int v3; // r10
  int v7; // r4
  int v8; // t1
  size_t v9; // r0
  int v10; // r0
  const char *v11; // r2
  char *v12; // r6
  const char *v13; // r2
  size_t v14; // r0
  int v15; // r0
  int *v16; // r3
  int v17; // r2
  int v18; // r0
  void *v19; // r0
  int v21; // [sp+Ch] [bp-240h]
  __int64 v22; // [sp+18h] [bp-234h]
  char src[32]; // [sp+28h] [bp-224h] BYREF
  char s[516]; // [sp+48h] [bp-204h] BYREF

  v3 = *(_DWORD *)(a1 + 1164);
  v22 = *(_QWORD *)(a1 + 1136);
  memset(s, 0, 0x200u);
  v7 = v3 - 4;
  do
  {
    v8 = *(_DWORD *)(v7 + 4);
    v7 += 4;
    snprintf(src, 0x20u, "%d,", v8);
    v9 = strlen(s);
    v10 = stpcpy(&s[v9], src);
  }
  while ( v7 != v3 + 160 );
  LOWORD(v11) = -7616;
  HIWORD(v11) = (unsigned int)"d_time" >> 16;
  v12 = (char *)v10;
  snprintf(src, 0x20u, v11, *(_DWORD *)(v3 + 164));
  strcpy(v12, src);
  LOWORD(v13) = 11200;
  HIWORD(v13) = (unsigned int)"\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}" >> 16;
  snprintf(a3, 0x400u, v13, a2 + 1844, *(_DWORD *)(a1 + 1144), *(_DWORD *)(a1 + 1148), *(_DWORD *)(a1 + 1152), v21, v22);
  v14 = strlen(a3);
  v15 = stpcpy(&a3[v14], s);
  LOWORD(v16) = 11316;
  v17 = v15;
  HIWORD(v16) = (unsigned int)"parse_extranonce_ckb" >> 16;
  v18 = *v16;
  LOWORD(v16) = *((_WORD *)v16 + 2);
  *(_DWORD *)v17 = v18;
  *(_WORD *)(v17 + 4) = (_WORD)v16;
  v19 = *(void **)(a1 + 1164);
  if ( v19 )
    free(v19);
  return 0;
}
