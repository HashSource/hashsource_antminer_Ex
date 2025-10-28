int __fastcall serdes_wait_status_rvn(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0
  char *v8; // r4
  int v9; // r0
  int v10; // r8
  char *v11; // r6
  int v12; // r0
  int v13; // r2
  int v15; // r0
  char *ptr; // [sp+3Ch] [bp-1060h]
  int v17; // [sp+44h] [bp-1058h]
  int v18; // [sp+4Ch] [bp-1050h]
  int v19; // [sp+50h] [bp-104Ch]
  char v20[32]; // [sp+58h] [bp-1044h] BYREF
  char v21[32]; // [sp+78h] [bp-1024h] BYREF
  _BYTE v22[4100]; // [sp+98h] [bp-1004h] BYREF

  v19 = (unsigned __int16)a3;
  v18 = a4 | 0x310000;
  ptr = (char *)malloc(0x300u);
  LOBYTE(v17) = 5;
  while ( 1 )
  {
    sub_8E400(a1, a3, 78, v18);
    v7 = sub_8E454(a1, v19, 79, ptr);
    if ( !v7 )
      break;
    if ( v7 <= 0 )
      goto LABEL_13;
    v8 = ptr;
    v9 = 3 * v7;
    v10 = 0;
    v11 = &ptr[4 * v9];
    do
    {
      while ( a3 == 255 )
      {
        if ( *(_DWORD *)v8 != a5 )
        {
          V_LOCK(v9);
          ++v10;
          V_INT((int)v20, "chain");
          v12 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v12);
          v13 = 119;
          goto LABEL_10;
        }
LABEL_6:
        v8 += 12;
        if ( v11 == v8 )
          goto LABEL_11;
      }
      if ( (unsigned __int8)v8[8] != a3 || *(_DWORD *)v8 == a5 )
        goto LABEL_6;
      V_LOCK(v9);
      ++v10;
      V_INT((int)v21, "chain");
      v15 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v15);
      v13 = 125;
LABEL_10:
      v8 += 12;
      v9 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
             173,
             "serdes_wait_status_rvn",
             22,
             v13,
             60,
             v22);
    }
    while ( v11 != v8 );
LABEL_11:
    if ( v10 )
    {
      usleep(0xF4240u);
      v17 = (unsigned __int8)(v17 - 1);
      if ( v17 )
        continue;
    }
LABEL_13:
    free(ptr);
    return 0;
  }
  free(ptr);
  return 22;
}
