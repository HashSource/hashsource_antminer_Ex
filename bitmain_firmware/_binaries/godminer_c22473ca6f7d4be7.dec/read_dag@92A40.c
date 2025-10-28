int __fastcall read_dag(int a1)
{
  _DWORD *v2; // r7
  char *v3; // r1
  int v4; // r4
  int v5; // r4
  int v6; // r1
  unsigned int i; // r4
  unsigned __int8 v8; // r1
  int v9; // r3
  int v10; // r0
  int v11; // r8
  int v12; // r9
  int v13; // r2
  _DWORD *v14; // r4
  int *v15; // r12
  int *v16; // r5
  int v17; // r0
  int v18; // r1
  int *v19; // lr
  int v20; // r2
  int v21; // r3
  const char *v23; // r7
  char *v24; // r11
  char *v25; // r4
  int v26; // t1
  char *v27; // r0
  int v28; // r3
  int v29; // [sp+4h] [bp-1160h]
  int v30; // [sp+20h] [bp-1144h]
  int v31; // [sp+2Ch] [bp-1138h]
  int v32; // [sp+30h] [bp-1134h]
  int v33; // [sp+34h] [bp-1130h]
  int j; // [sp+38h] [bp-112Ch]
  int k; // [sp+3Ch] [bp-1128h]
  int *v36; // [sp+40h] [bp-1124h]
  _DWORD *v37; // [sp+44h] [bp-1120h]
  int v38; // [sp+5Ch] [bp-1108h] BYREF
  _DWORD v39[6]; // [sp+60h] [bp-1104h] BYREF
  _DWORD v40[7]; // [sp+78h] [bp-10ECh] BYREF
  int v41; // [sp+94h] [bp-10D0h]
  char v42; // [sp+9Bh] [bp-10C9h] BYREF
  int v43; // [sp+9Ch] [bp-10C8h] BYREF
  char v44; // [sp+DBh] [bp-1089h] BYREF
  char s[132]; // [sp+DCh] [bp-1088h] BYREF
  _DWORD v46[2]; // [sp+160h] [bp-1004h] BYREF
  int v47; // [sp+168h] [bp-FFCh]
  int v48; // [sp+16Ch] [bp-FF8h]

  LOWORD(v2) = -14512;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v40, v3, *(int *)(a1 + 140));
  LOWORD(v4) = -22412;
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  v30 = v4;
  v5 = 0;
  v37 = v2;
  logfmt_raw((char *)v46, 0x1000u, 0, v41, v40[0], v40[1], v40[2], v40[3], v40[4], v40[5], v40[6], v41, v30, "read_dag");
  V_UNLOCK();
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v2, v6, 154, "read_dag", 8, 8302, 60, v46);
  do
  {
    sub_5C158(a1, v5, 19, v5);
    ++v5;
    usleep(0x2710u);
  }
  while ( v5 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v8 = i;
    v9 = 3;
    if ( i > 7 )
      v8 = i;
    v10 = a1;
    if ( i > 7 )
    {
      v9 = 0;
      v10 = a1;
    }
    sub_5C158(v10, v8, 12, v9);
  }
  v11 = a1;
  memset(s, 0, 0x81u);
  v33 = 0;
  v39[0] = 0;
  v39[1] = 1;
  v39[2] = 4096;
  v39[3] = 4096;
  v39[4] = 16382;
  v39[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v36 = v39;
        do
        {
          v12 = 0;
          v13 = *v36++;
          v32 = v13;
          v31 = (v33 << 22) | (32 * j) | (4 * k) | (v13 << 8);
          do
          {
            v47 = 0;
            v38 = 0;
            v46[1] = v31;
            v46[0] = 0;
            v48 = 0;
            BYTE1(v47) = v12;
            v14 = malloc(0x4Cu);
            *v14 = 0;
            v14[1] = 0;
            v14[2] = 0;
            (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(v11 + 180))(
              v11,
              v46,
              1,
              v14,
              &v38,
              v29,
              2000,
              0);
            v15 = (_DWORD *)((char *)v14 + 10);
            v16 = &v43;
            do
            {
              v17 = *v15;
              v15 += 4;
              v18 = *(v15 - 3);
              v19 = v16;
              v20 = *(v15 - 2);
              v16 += 4;
              v21 = *(v15 - 1);
              *v19 = v17;
              v19[1] = v18;
              v19[2] = v20;
              v19[3] = v21;
            }
            while ( v15 != (_DWORD *)((char *)v14 + 74) );
            free(v14);
            if ( v38 )
            {
              LOWORD(v23) = -24656;
              v24 = &v42;
              v25 = s;
              do
              {
                v26 = (unsigned __int8)*++v24;
                v27 = v25;
                HIWORD(v23) = (unsigned int)"div4_seq_one_lane" >> 16;
                v25 += 2;
                sprintf(v27, v23, v26);
              }
              while ( &v44 != v24 );
              V_LOCK();
              LOWORD(v28) = -24056;
              HIWORD(v28) = (unsigned int)"setup_mac" >> 16;
              logfmt_raw((char *)v46, 0x1000u, 0, v28, v31, v12, v33, j, k, v32, s);
              V_UNLOCK();
              zlog(
                *v37,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "read_dag",
                8,
                8334,
                60,
                v46);
            }
            ++v12;
          }
          while ( v12 != 8 );
        }
        while ( v40 != v36 );
      }
    }
    ++v33;
  }
  while ( v33 != 12 );
  sub_5C100(v11, 12, 2);
  return 0;
}
