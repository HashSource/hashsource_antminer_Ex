int __fastcall sub_5DF0C(int a1, _BYTE *a2, int a3)
{
  unsigned __int16 v3; // r7
  int v5; // r9
  char *v6; // r8
  _BYTE *v7; // r12
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _BYTE *v13; // r3
  int v14; // r0
  int v15; // r0
  char *v16; // r4
  char *v17; // r5
  int v18; // r0
  int v22; // [sp+2Ch] [bp-1018h]
  _BYTE v23[16]; // [sp+30h] [bp-1014h] BYREF
  _BYTE v24[4100]; // [sp+40h] [bp-1004h] BYREF

  v5 = 0;
  sub_5C968(a1, (unsigned __int8)a2, 145, a3);
  v6 = (char *)malloc(0x600u);
  if ( a2 == (_BYTE *)255 )
  {
    v8 = (int)&unk_139948;
    v22 = 14;
    v7 = v23;
  }
  else
  {
    v8 = 1;
    v22 = 1;
  }
  if ( a2 == (_BYTE *)255 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *(_DWORD *)(v8 + 4);
    v11 = *(_DWORD *)(v8 + 8);
    v12 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)v7 = v9;
    *((_DWORD *)v7 + 1) = v10;
    *((_DWORD *)v7 + 2) = v11;
    *((_WORD *)v7 + 6) = v12;
  }
  do
  {
    v13 = a2;
    if ( a2 == (_BYTE *)255 )
      v13 = v23;
    else
      v3 = (unsigned __int16)a2;
    if ( a2 == (_BYTE *)255 )
      v3 = (unsigned __int8)v13[v5];
    v14 = sub_5CBD4(a1, v3, 145, v6);
    if ( v14 > 0 )
    {
      v15 = 3 * v14;
      v16 = v6;
      v17 = &v6[4 * v15];
      do
      {
        while ( (*(_DWORD *)v16 & 0x20) == 0 )
        {
          v16 += 12;
          if ( v17 == v16 )
            goto LABEL_16;
        }
        V_LOCK(v15);
        v16 += 12;
        v18 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v18);
        v15 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "serdes_apb_read",
                15,
                818,
                100,
                v24);
      }
      while ( v17 != v16 );
    }
LABEL_16:
    sub_5CBD4(a1, v3, 146, v6);
    ++v5;
  }
  while ( v5 != v22 );
  free(v6);
  return 0;
}
