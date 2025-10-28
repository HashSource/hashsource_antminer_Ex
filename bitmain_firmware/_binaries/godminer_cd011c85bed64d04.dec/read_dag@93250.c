int __fastcall read_dag(int a1)
{
  int v2; // r4
  int v3; // r0
  unsigned int i; // r4
  unsigned __int8 v5; // r1
  int v6; // r3
  int v7; // r0
  int v8; // r8
  int v9; // r9
  int v10; // r2
  _DWORD *v11; // r4
  int *v12; // r12
  int *v13; // r5
  int v14; // r0
  int v15; // r1
  int *v16; // lr
  int v17; // r2
  int v18; // r3
  char *v20; // r11
  char *v21; // r4
  int v22; // t1
  char *v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // [sp+4h] [bp-1160h]
  int v27; // [sp+10h] [bp-1154h]
  int v28; // [sp+14h] [bp-1150h]
  char *v29; // [sp+18h] [bp-114Ch]
  int v30; // [sp+1Ch] [bp-1148h]
  char *v31; // [sp+20h] [bp-1144h]
  const char *v32; // [sp+24h] [bp-1140h]
  int v33; // [sp+2Ch] [bp-1138h]
  int v34; // [sp+30h] [bp-1134h]
  int v35; // [sp+34h] [bp-1130h]
  int j; // [sp+38h] [bp-112Ch]
  int k; // [sp+3Ch] [bp-1128h]
  int *v38; // [sp+40h] [bp-1124h]
  int v39; // [sp+5Ch] [bp-1108h] BYREF
  _DWORD v40[6]; // [sp+60h] [bp-1104h] BYREF
  _DWORD v41[8]; // [sp+78h] [bp-10ECh] BYREF
  char v42; // [sp+9Bh] [bp-10C9h] BYREF
  int v43; // [sp+9Ch] [bp-10C8h] BYREF
  char v44; // [sp+DBh] [bp-1089h] BYREF
  char s[132]; // [sp+DCh] [bp-1088h] BYREF
  _DWORD v46[2]; // [sp+160h] [bp-1004h] BYREF
  int v47; // [sp+168h] [bp-FFCh]
  int v48; // [sp+16Ch] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)v41, "chain");
  v31 = "%s...";
  v32 = "read_dag";
  v2 = 0;
  v27 = v41[4];
  v28 = v41[5];
  v29 = (char *)v41[6];
  v30 = v41[7];
  v3 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_dag",
    8,
    8302,
    60,
    v46);
  do
  {
    sub_5C968(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v5 = i;
    v6 = 3;
    if ( i > 7 )
      v5 = i;
    v7 = a1;
    if ( i > 7 )
    {
      v6 = 0;
      v7 = a1;
    }
    sub_5C968(v7, v5, 12, v6);
  }
  v8 = a1;
  memset(s, 0, 0x81u);
  v35 = 0;
  v40[0] = 0;
  v40[1] = 1;
  v40[2] = 4096;
  v40[3] = 4096;
  v40[4] = 16382;
  v40[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v38 = v40;
        do
        {
          v9 = 0;
          v10 = *v38++;
          v34 = v10;
          v33 = (v35 << 22) | (32 * j) | (4 * k) | (v10 << 8);
          do
          {
            v47 = 0;
            v39 = 0;
            v46[1] = v33;
            v46[0] = 0;
            v48 = 0;
            BYTE1(v47) = v9;
            v11 = malloc(0x4Cu);
            *v11 = 0;
            v11[1] = 0;
            v11[2] = 0;
            (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD, int, int, char *, int, char *, const char *))(v8 + 188))(
              v8,
              v46,
              1,
              v11,
              &v39,
              v26,
              2000,
              0,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
            v12 = (_DWORD *)((char *)v11 + 10);
            v13 = &v43;
            do
            {
              v14 = *v12;
              v12 += 4;
              v15 = *(v12 - 3);
              v16 = v13;
              v17 = *(v12 - 2);
              v13 += 4;
              v18 = *(v12 - 1);
              *v16 = v14;
              v16[1] = v15;
              v16[2] = v17;
              v16[3] = v18;
            }
            while ( v12 != (_DWORD *)((char *)v11 + 74) );
            free(v11);
            if ( v39 )
            {
              v20 = &v42;
              v21 = s;
              do
              {
                v22 = (unsigned __int8)*++v20;
                v23 = v21;
                v21 += 2;
                v24 = sprintf(v23, "%02x", v22);
              }
              while ( &v44 != v20 );
              V_LOCK(v24);
              v29 = s;
              v28 = v34;
              v27 = k;
              v25 = logfmt_raw((int)v46, 0x1000u);
              V_UNLOCK(v25);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "read_dag",
                8,
                8334,
                60,
                v46);
            }
            ++v9;
          }
          while ( v9 != 8 );
        }
        while ( v41 != v38 );
      }
    }
    ++v35;
  }
  while ( v35 != 12 );
  sub_5C910(v8, 12, 2);
  return 0;
}
