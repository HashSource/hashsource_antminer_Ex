int __fastcall read_dag_rvn(int a1)
{
  int v2; // r4
  int v3; // r0
  int i; // r4
  unsigned __int8 v5; // r1
  int v6; // r8
  int v7; // r9
  int v8; // r2
  _DWORD *v9; // r4
  int *v10; // r12
  int *v11; // r5
  int v12; // r0
  int v13; // r1
  int *v14; // lr
  int v15; // r2
  int v16; // r3
  char *v18; // r11
  char *v19; // r4
  int v20; // t1
  char *v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // [sp+4h] [bp-1160h]
  int v25; // [sp+10h] [bp-1154h]
  int v26; // [sp+14h] [bp-1150h]
  char *v27; // [sp+18h] [bp-114Ch]
  int v28; // [sp+1Ch] [bp-1148h]
  const char *v29; // [sp+20h] [bp-1144h]
  const char *v30; // [sp+24h] [bp-1140h]
  int v31; // [sp+2Ch] [bp-1138h]
  int v32; // [sp+30h] [bp-1134h]
  int v33; // [sp+34h] [bp-1130h]
  int j; // [sp+38h] [bp-112Ch]
  int k; // [sp+3Ch] [bp-1128h]
  int *v36; // [sp+40h] [bp-1124h]
  int v37; // [sp+5Ch] [bp-1108h] BYREF
  _DWORD v38[6]; // [sp+60h] [bp-1104h] BYREF
  _DWORD v39[8]; // [sp+78h] [bp-10ECh] BYREF
  char v40; // [sp+9Bh] [bp-10C9h] BYREF
  int v41; // [sp+9Ch] [bp-10C8h] BYREF
  char v42; // [sp+DBh] [bp-1089h] BYREF
  char s[132]; // [sp+DCh] [bp-1088h] BYREF
  _DWORD v44[2]; // [sp+160h] [bp-1004h] BYREF
  int v45; // [sp+168h] [bp-FFCh]
  int v46; // [sp+16Ch] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)v39, "chain");
  v29 = "%s...";
  v30 = "read_dag_rvn";
  v2 = 0;
  v25 = v39[4];
  v26 = v39[5];
  v27 = (char *)v39[6];
  v28 = v39[7];
  v3 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "read_dag_rvn",
    12,
    376,
    60,
    v44);
  do
  {
    sub_878DC(a1, v2, 179, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 8 );
  for ( i = 0; i != 8; ++i )
  {
    v5 = i;
    sub_878DC(a1, v5, 28, 3);
  }
  v6 = a1;
  memset(s, 0, 0x81u);
  v33 = 0;
  v38[0] = 0;
  v38[1] = 1;
  v38[2] = 4096;
  v38[3] = 4096;
  v38[4] = 16382;
  v38[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v36 = v38;
        do
        {
          v7 = 0;
          v8 = *v36++;
          v32 = v8;
          v31 = (v33 << 22) | (32 * j) | (4 * k) | (v8 << 8);
          do
          {
            v45 = 0;
            v37 = 0;
            v44[1] = v31;
            v44[0] = 0;
            v46 = 0;
            BYTE1(v45) = v7;
            v9 = malloc(0x4Cu);
            *v9 = 0;
            v9[1] = 0;
            v9[2] = 0;
            (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD, int, int, char *, int, const char *, const char *))(v6 + 252))(
              v6,
              v44,
              1,
              v9,
              &v37,
              v24,
              2000,
              0,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            v10 = (_DWORD *)((char *)v9 + 10);
            v11 = &v41;
            do
            {
              v12 = *v10;
              v10 += 4;
              v13 = *(v10 - 3);
              v14 = v11;
              v15 = *(v10 - 2);
              v11 += 4;
              v16 = *(v10 - 1);
              *v14 = v12;
              v14[1] = v13;
              v14[2] = v15;
              v14[3] = v16;
            }
            while ( v10 != (_DWORD *)((char *)v9 + 74) );
            free(v9);
            if ( v37 )
            {
              v18 = &v40;
              v19 = s;
              do
              {
                v20 = (unsigned __int8)*++v18;
                v21 = v19;
                v19 += 2;
                v22 = sprintf(v21, "%02x", v20);
              }
              while ( &v42 != v18 );
              V_LOCK(v22);
              v27 = s;
              v26 = v32;
              v25 = k;
              v23 = logfmt_raw((int)v44, 0x1000u);
              V_UNLOCK(v23);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                170,
                "read_dag_rvn",
                12,
                413,
                60,
                v44);
            }
            ++v7;
          }
          while ( v7 != 8 );
        }
        while ( v39 != v36 );
      }
    }
    ++v33;
  }
  while ( v33 != 12 );
  sub_87604(v6, 28, 2);
  return 0;
}
