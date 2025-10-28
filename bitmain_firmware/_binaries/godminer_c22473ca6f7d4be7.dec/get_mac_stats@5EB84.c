int __fastcall get_mac_stats(int a1)
{
  int v1; // r2
  _DWORD *v2; // r10
  char *v4; // r4
  int v5; // r7
  unsigned int *v6; // r4
  int v7; // r0
  unsigned int v8; // r5
  unsigned int *v10; // [sp+3Ch] [bp-1048h]
  int v11; // [sp+40h] [bp-1044h]
  char *s; // [sp+44h] [bp-1040h]
  _DWORD *j; // [sp+48h] [bp-103Ch]
  char i; // [sp+4Ch] [bp-1038h]
  unsigned int *ptr; // [sp+54h] [bp-1030h]
  int v16; // [sp+5Ch] [bp-1028h] BYREF
  _DWORD v17[7]; // [sp+60h] [bp-1024h] BYREF
  int v18; // [sp+7Ch] [bp-1008h]
  char v19[4100]; // [sp+80h] [bp-1004h] BYREF

  LOWORD(v1) = -25120;
  LOWORD(v2) = -14512;
  HIWORD(v1) = (unsigned int)"ane" >> 16;
  LOWORD(v4) = -7948;
  v16 = -1734895979;
  v11 = v1;
  ptr = (unsigned int *)malloc(0x600u);
  HIWORD(v4) = (unsigned int)&loc_12D594 >> 16;
  s = v4;
  for ( i = 0; i != 8; ++i )
  {
    v5 = 149;
    for ( j = (int *)((char *)&v16 + 1); ; j = (_DWORD *)((char *)j + 1) )
    {
      v6 = ptr;
      v7 = sub_5C5E4(a1, i, 255, v5, ptr);
      if ( v7 > 0 )
      {
        v10 = &ptr[3 * v7];
        do
        {
          v8 = *v6;
          V_LOCK();
          v6 += 3;
          V_INT((int)v17, s, *(int *)(a1 + 140));
          logfmt_raw(
            v19,
            0x1000u,
            0,
            v18,
            v17[0],
            v17[1],
            v17[2],
            v17[3],
            v17[4],
            v17[5],
            v17[6],
            v18,
            v11,
            *((unsigned __int8 *)v6 - 8),
            *((unsigned __int8 *)v6 - 4),
            v5,
            bswap32(v8));
          V_UNLOCK();
          HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
          zlog(
            *v2,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "get_mac_stats",
            13,
            368,
            60,
            v19);
        }
        while ( v6 != v10 );
      }
      if ( v17 == j )
        break;
      v5 = *(unsigned __int8 *)j;
    }
  }
  free(ptr);
  return 0;
}
