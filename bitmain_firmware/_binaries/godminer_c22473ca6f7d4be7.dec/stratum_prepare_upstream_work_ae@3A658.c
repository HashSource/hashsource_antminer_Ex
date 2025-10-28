int __fastcall stratum_prepare_upstream_work_ae(_DWORD *a1, int a2, char *a3)
{
  const char *v6; // r6
  int v7; // r4
  int v8; // r3
  size_t v9; // r0
  char *v10; // r7
  int v11; // r3
  const char *v12; // r2
  int v13; // r12
  size_t v14; // r0
  int v15; // r0
  int *v16; // r3
  int v17; // r2
  int v18; // r0
  int v20; // [sp+4h] [bp-24Ch]
  char src[32]; // [sp+10h] [bp-240h] BYREF
  char v22[32]; // [sp+30h] [bp-220h] BYREF
  char s[512]; // [sp+50h] [bp-200h] BYREF

  LOWORD(v6) = 7104;
  bin2hex((int)v22, a1[290], a1[289]);
  v7 = 0;
  memset(s, 0, sizeof(s));
  do
  {
    HIWORD(v6) = (unsigned int)"orkspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c" >> 16;
    v8 = *(_DWORD *)(a1[291] + v7);
    v7 += 4;
    snprintf(src, 0x20u, v6, v8);
    v9 = strlen(s);
    v10 = (char *)stpcpy(&s[v9], src);
  }
  while ( v7 != 164 );
  snprintf(src, 0x20u, "\"%08x\"", *(_DWORD *)(a1[291] + 164));
  strcpy(v10, src);
  v11 = *(_DWORD *)(a2 + 2080);
  LOWORD(v12) = 7120;
  HIWORD(v12) = (unsigned int)"r_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c" >> 16;
  v13 = *(_DWORD *)(a2 + 12);
  v20 = a1[288];
  *(_DWORD *)(a2 + 2080) = v11 + 1;
  snprintf(a3, 0x400u, v12, v11, v13, v20, v22);
  v14 = strlen(a3);
  v15 = stpcpy(&a3[v14], s);
  LOWORD(v16) = 7184;
  v17 = v15;
  HIWORD(v16) = (unsigned int)"rigin_master/util.c" >> 16;
  v18 = *v16;
  LOWORD(v16) = *((_WORD *)v16 + 2);
  *(_DWORD *)v17 = v18;
  *(_WORD *)(v17 + 4) = (_WORD)v16;
  return 0;
}
