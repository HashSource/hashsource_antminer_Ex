void *__fastcall tsv_test_eth_2282(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  unsigned int v4; // r0
  int v5; // r5
  int v6; // r6
  unsigned int v7; // r0
  int v8; // r5
  int v9; // r6
  unsigned int v10; // r0
  int v11; // r6
  int v12; // r5
  unsigned int v13; // r0
  void *v14; // r3
  _BYTE v18[36]; // [sp+38h] [bp-1164h] BYREF
  _DWORD v19[7]; // [sp+1038h] [bp-164h] BYREF
  int v20; // [sp+1054h] [bp-148h]
  _DWORD v21[7]; // [sp+1058h] [bp-144h] BYREF
  int v22; // [sp+1074h] [bp-128h]
  _DWORD v23[7]; // [sp+1078h] [bp-124h] BYREF
  int v24; // [sp+1094h] [bp-108h]
  _DWORD v25[7]; // [sp+1098h] [bp-104h] BYREF
  int v26; // [sp+10B4h] [bp-E8h]
  _DWORD v27[7]; // [sp+10B8h] [bp-E4h] BYREF
  int v28; // [sp+10D4h] [bp-C8h]
  _DWORD v29[7]; // [sp+10D8h] [bp-C4h] BYREF
  int v30; // [sp+10F4h] [bp-A8h]
  _DWORD v31[7]; // [sp+10F8h] [bp-A4h] BYREF
  int v32; // [sp+1114h] [bp-88h]
  _DWORD v33[7]; // [sp+1118h] [bp-84h] BYREF
  int v34; // [sp+1134h] [bp-68h]
  _DWORD v35[7]; // [sp+1138h] [bp-64h] BYREF
  int v36; // [sp+1154h] [bp-48h]
  int v37; // [sp+1158h] [bp-44h]
  signed int m; // [sp+115Ch] [bp-40h]
  int k; // [sp+1160h] [bp-3Ch]
  signed int j; // [sp+1164h] [bp-38h]
  int n; // [sp+1168h] [bp-34h]
  signed int ii; // [sp+116Ch] [bp-30h]
  int jj; // [sp+1170h] [bp-2Ch]
  signed int kk; // [sp+1174h] [bp-28h]
  void *ptr; // [sp+1178h] [bp-24h]
  signed int v46; // [sp+117Ch] [bp-20h]
  int v47; // [sp+1180h] [bp-1Ch]
  int i; // [sp+1184h] [bp-18h]

  V_LOCK();
  sub_FBD60((int)v19, *(int *)(a1 + 272));
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v20,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v19[6],
    v20,
    "%s start",
    "tsv_test_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "tsv_test_eth_2282",
    17,
    8130,
    60,
    v18);
  ptr = malloc(0x1440u);
  v46 = 0;
  sub_106BA8(a1, 28, 202383104);
  usleep(0x2710u);
  sub_106BA8(a1, 12, 1075052817);
  usleep(0x2710u);
  v47 = 0;
  if ( !a2 )
  {
    for ( i = 0; i <= 342; ++i )
    {
      v37 = (2 * i) & 0x3FE | 0x640000;
      sub_106BA8(a1, 191, v37);
      usleep(0xAu);
      v37 = (2 * i) & 0x3FE | 0x640001;
      sub_106BA8(a1, 191, v37);
      usleep(0xAu);
      v46 = sub_1062CC(a1, 191, ptr);
      if ( v46 == 6 )
      {
        for ( j = 0; j < v46; ++j )
        {
          if ( *((_WORD *)ptr + 6 * j + 3) == 191 )
          {
            V_LOCK();
            sub_FBD60((int)v23, *(int *)(a1 + 272));
            v2 = *((unsigned __int8 *)ptr + 12 * j + 4);
            v3 = *((unsigned __int16 *)ptr + 6 * j + 3);
            v4 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
            logfmt_raw(
              v18,
              0x1000u,
              0,
              v24,
              v23[0],
              v23[1],
              v23[2],
              v23[3],
              v23[4],
              v23[5],
              v23[6],
              v24,
              "asic %02x, reg %02x state %08x",
              v2,
              v3,
              v4);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "tsv_test_eth_2282",
              17,
              8157,
              40,
              v18);
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v21, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
          0x1000u,
          0,
          v22,
          v21[0],
          v21[1],
          v21[2],
          v21[3],
          v21[4],
          v21[5],
          v21[6],
          v22,
          "get top reg addr %02x failed, resp_num: %d",
          191,
          v46);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "tsv_test_eth_2282",
          17,
          8152,
          100,
          v18);
      }
    }
    for ( k = 0; k <= 52; ++k )
    {
      v37 = (2 * (_BYTE)k) & 0x7E | 0x640000;
      sub_106BA8(a1, 192, v37);
      usleep(0xAu);
      v37 = (2 * (_BYTE)k) & 0x7E | 0x640001;
      sub_106BA8(a1, 192, v37);
      usleep(0xAu);
      v46 = sub_1062CC(a1, 192, ptr);
      if ( v46 == 6 )
      {
        for ( m = 0; m < v46; ++m )
        {
          if ( *((_WORD *)ptr + 6 * m + 3) == 192 )
          {
            V_LOCK();
            sub_FBD60((int)v27, *(int *)(a1 + 272));
            v5 = *((unsigned __int8 *)ptr + 12 * m + 4);
            v6 = *((unsigned __int16 *)ptr + 6 * m + 3);
            v7 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
            logfmt_raw(
              v18,
              0x1000u,
              0,
              v28,
              v27[0],
              v27[1],
              v27[2],
              v27[3],
              v27[4],
              v27[5],
              v27[6],
              v28,
              "asic %02x, reg %02x state %08x",
              v5,
              v6,
              v7);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "tsv_test_eth_2282",
              17,
              8179,
              40,
              v18);
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v25, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
          0x1000u,
          0,
          v26,
          v25[0],
          v25[1],
          v25[2],
          v25[3],
          v25[4],
          v25[5],
          v25[6],
          v26,
          "get top reg addr %02x failed, resp_num: %d",
          192,
          v46);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "tsv_test_eth_2282",
          17,
          8174,
          100,
          v18);
      }
    }
    for ( n = 0; n <= 7; ++n )
    {
      v37 = (2 * (_BYTE)n) & 0x1E | 0x640000;
      sub_106BA8(a1, 193, v37);
      usleep(0xAu);
      v37 = (2 * (_BYTE)n) & 0x1E | 0x640001;
      sub_106BA8(a1, 193, v37);
      usleep(0xAu);
      v46 = sub_1062CC(a1, 193, ptr);
      if ( v46 == 6 )
      {
        for ( ii = 0; ii < v46; ++ii )
        {
          if ( *((_WORD *)ptr + 6 * ii + 3) == 193 )
          {
            V_LOCK();
            sub_FBD60((int)v31, *(int *)(a1 + 272));
            v8 = *((unsigned __int8 *)ptr + 12 * ii + 4);
            v9 = *((unsigned __int16 *)ptr + 6 * ii + 3);
            v10 = sub_FC76C(*((_DWORD *)ptr + 3 * ii));
            logfmt_raw(
              v18,
              0x1000u,
              0,
              v32,
              v31[0],
              v31[1],
              v31[2],
              v31[3],
              v31[4],
              v31[5],
              v31[6],
              v32,
              "asic %02x, reg %02x state %08x",
              v8,
              v9,
              v10);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "tsv_test_eth_2282",
              17,
              8200,
              40,
              v18);
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v29, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
          0x1000u,
          0,
          v30,
          v29[0],
          v29[1],
          v29[2],
          v29[3],
          v29[4],
          v29[5],
          v29[6],
          v30,
          "get top reg addr %02x failed, resp_num: %d",
          193,
          v46);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "tsv_test_eth_2282",
          17,
          8195,
          100,
          v18);
      }
    }
  }
  if ( a2 == 1 )
  {
    for ( jj = 0; jj <= 537; ++jj )
    {
      v37 = (jj << 12) & 0xFFF000 | 0x64;
      sub_106D34(a1, 47, v37);
      usleep(0xAu);
      v37 = (jj << 12) & 0xFFF000 | 0x464;
      sub_106D34(a1, 47, v37);
      usleep(0xAu);
      v46 = sub_1075C0(a1, 255, 48, ptr);
      if ( v46 == 432 )
      {
        for ( kk = 0; kk < v46; ++kk )
        {
          if ( (unsigned __int8)HIBYTE(*((_WORD *)ptr + 6 * kk + 3)) == 48 )
          {
            V_LOCK();
            sub_FBD60((int)v35, *(int *)(a1 + 272));
            v11 = *((unsigned __int8 *)ptr + 12 * kk + 4);
            v12 = (unsigned __int8)HIBYTE(*((_WORD *)ptr + 6 * kk + 3));
            v13 = sub_FC76C(*((_DWORD *)ptr + 3 * kk));
            logfmt_raw(
              v18,
              0x1000u,
              0,
              v36,
              v35[0],
              v35[1],
              v35[2],
              v35[3],
              v35[4],
              v35[5],
              v35[6],
              v36,
              "asic %02x, reg %02x state %08x",
              v11,
              v12,
              v13);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "tsv_test_eth_2282",
              17,
              8225,
              40,
              v18);
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v33, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
          0x1000u,
          0,
          v34,
          v33[0],
          v33[1],
          v33[2],
          v33[3],
          v33[4],
          v33[5],
          v33[6],
          v34,
          "get core reg addr %02x failed, resp_num: %d",
          48,
          v46);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "tsv_test_eth_2282",
          17,
          8220,
          100,
          v18);
      }
    }
  }
  v14 = ptr;
  if ( ptr )
    free(ptr);
  return v14;
}
