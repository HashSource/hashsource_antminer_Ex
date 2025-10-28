int __fastcall serdes_apb_read_back_1_chip(int a1, char a2, int a3, int a4, int a5)
{
  unsigned int v6; // r6
  int v7; // r10
  char *v8; // r7
  int v9; // r3
  int v10; // r0
  int v11; // r0
  char *v12; // r4
  char *v13; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r2
  char *v17; // r3
  char v18; // lr
  char v19; // r12
  unsigned int v20; // t1
  unsigned int v24; // [sp+30h] [bp-100Ch]
  _BYTE var1004[4104]; // [sp+38h] [bp-1004h] BYREF

  LOWORD(v6) = 0;
  sub_5C218(a1, a3, 145, a4);
  v7 = 0;
  v8 = (char *)malloc(0x600u);
  if ( a3 == 255 )
    v9 = 16;
  else
    v9 = 1;
  v24 = v9;
  do
  {
    if ( a3 != 255 )
      LOWORD(v6) = a3;
    v10 = sub_5C6A4(a1, a2, (unsigned __int16)v6, 145, v8);
    if ( v10 > 0 )
    {
      v11 = 3 * v10;
      v12 = v8;
      v13 = &v8[4 * v11];
      do
      {
        while ( (*(_DWORD *)v12 & 0x20) == 0 )
        {
          v12 += 12;
          if ( v13 == v12 )
            goto LABEL_12;
        }
        V_LOCK(v11);
        v12 += 12;
        v14 = logfmt_raw((int)var1004, 0x1000u);
        V_UNLOCK(v14);
        v11 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "serdes_apb_read_back_1_chip",
                27,
                895,
                20,
                var1004);
      }
      while ( v13 != v12 );
    }
LABEL_12:
    v15 = sub_5C6A4(a1, a2, (unsigned __int16)v6, 146, v8);
    if ( v15 > 0 )
    {
      v16 = a5 + 8 * v7;
      v17 = v8;
      do
      {
        v18 = v17[4];
        v16 += 8;
        v19 = v17[8];
        v20 = *(_DWORD *)v17;
        v17 += 12;
        *(_BYTE *)(v16 - 8) = v18;
        *(_BYTE *)(v16 - 7) = v19;
        *(_DWORD *)(v16 - 4) = bswap32(v20);
      }
      while ( v17 != &v8[12 * v15] );
      v7 += v15;
    }
    v6 = (unsigned __int8)(v6 + 1);
  }
  while ( v24 > v6 );
  free(v8);
  return v7;
}
