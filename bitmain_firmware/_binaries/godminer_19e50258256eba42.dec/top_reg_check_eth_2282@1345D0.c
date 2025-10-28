int __fastcall top_reg_check_eth_2282(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  unsigned int v4; // r0
  unsigned int v5; // r0
  int v6; // r5
  int v7; // r6
  unsigned int v8; // r0
  unsigned int v9; // r0
  int v10; // r5
  int v11; // r6
  unsigned int v12; // r0
  unsigned int v13; // r0
  int v14; // r5
  int v15; // r6
  unsigned int v16; // r0
  unsigned int v17; // r0
  int v18; // r5
  int v19; // r6
  unsigned int v20; // r0
  unsigned int v21; // r0
  _BYTE v25[20]; // [sp+38h] [bp-1194h] BYREF
  _DWORD v26[7]; // [sp+1038h] [bp-194h] BYREF
  int v27; // [sp+1054h] [bp-178h]
  _DWORD v28[7]; // [sp+1058h] [bp-174h] BYREF
  int v29; // [sp+1074h] [bp-158h]
  _DWORD v30[7]; // [sp+1078h] [bp-154h] BYREF
  int v31; // [sp+1094h] [bp-138h]
  _DWORD v32[7]; // [sp+1098h] [bp-134h] BYREF
  int v33; // [sp+10B4h] [bp-118h]
  _DWORD v34[7]; // [sp+10B8h] [bp-114h] BYREF
  int v35; // [sp+10D4h] [bp-F8h]
  _DWORD v36[7]; // [sp+10D8h] [bp-F4h] BYREF
  int v37; // [sp+10F4h] [bp-D8h]
  _DWORD v38[7]; // [sp+10F8h] [bp-D4h] BYREF
  int v39; // [sp+1114h] [bp-B8h]
  _DWORD v40[7]; // [sp+1118h] [bp-B4h] BYREF
  int v41; // [sp+1134h] [bp-98h]
  _DWORD v42[7]; // [sp+1138h] [bp-94h] BYREF
  int v43; // [sp+1154h] [bp-78h]
  _DWORD v44[7]; // [sp+1158h] [bp-74h] BYREF
  int v45; // [sp+1174h] [bp-58h]
  _DWORD v46[7]; // [sp+1178h] [bp-54h] BYREF
  int v47; // [sp+1194h] [bp-38h]
  signed int m; // [sp+1198h] [bp-34h]
  signed int k; // [sp+119Ch] [bp-30h]
  signed int n; // [sp+11A0h] [bp-2Ch]
  void *ptr; // [sp+11A4h] [bp-28h]
  signed int i; // [sp+11A8h] [bp-24h]
  int v53; // [sp+11ACh] [bp-20h]
  signed int v54; // [sp+11B0h] [bp-1Ch]
  signed int j; // [sp+11B4h] [bp-18h]

  V_LOCK();
  sub_FBD60((int)v26, *(int *)(a1 + 272));
  logfmt_raw(
    v25,
    0x1000u,
    0,
    v27,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v27,
    "%s start",
    "top_reg_check_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "top_reg_check_eth_2282",
    22,
    7958,
    60,
    v25);
  ptr = malloc(0x48u);
  v54 = 0;
  v53 = 0;
  if ( !a2 )
  {
    while ( *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) != 0xFFFF )
    {
      v54 = sub_1062CC(a1, *((unsigned __int16 *)&unk_4CA1CC + 10 * v53), ptr);
      if ( v54 == 6 )
      {
        for ( i = 0; i < v54; ++i )
        {
          if ( *((unsigned __int16 *)ptr + 6 * i + 3) == *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) )
          {
            V_LOCK();
            sub_FBD60((int)v30, *(int *)(a1 + 272));
            v2 = *((unsigned __int8 *)ptr + 12 * i + 4);
            v3 = *((unsigned __int16 *)ptr + 6 * i + 3);
            v4 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
            logfmt_raw(
              v25,
              0x1000u,
              0,
              v31,
              v30[0],
              v30[1],
              v30[2],
              v30[3],
              v30[4],
              v30[5],
              v30[6],
              v31,
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
              "top_reg_check_eth_2282",
              22,
              7975,
              40,
              v25);
            v5 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
            if ( v5 == *((_DWORD *)&unk_4CA1CC + 5 * v53 + 1) )
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * i + 4),
                *((unsigned __int16 *)ptr + 6 * i + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                7978,
                40,
                v25);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * i + 4),
                *((unsigned __int16 *)ptr + 6 * i + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                7982,
                40,
                v25);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v28, *(int *)(a1 + 272));
        logfmt_raw(
          v25,
          0x1000u,
          0,
          v29,
          v28[0],
          v28[1],
          v28[2],
          v28[3],
          v28[4],
          v28[5],
          v28[6],
          v29,
          "get top reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4CA1CC + 10 * v53),
          v54);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "top_reg_check_eth_2282",
          22,
          7970,
          100,
          v25);
      }
      ++v53;
    }
  }
  if ( a2 == 1 )
  {
    while ( *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) != 0xFFFF )
    {
      sub_106BA8(a1, *((_WORD *)&unk_4CA1CC + 10 * v53), *((_DWORD *)&unk_4CA1CC + 5 * v53 + 2));
      usleep(0x2710u);
      v54 = sub_1062CC(a1, *((unsigned __int16 *)&unk_4CA1CC + 10 * v53), ptr);
      if ( v54 == 6 )
      {
        for ( j = 0; j < v54; ++j )
        {
          if ( *((unsigned __int16 *)ptr + 6 * j + 3) == *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) )
          {
            V_LOCK();
            sub_FBD60((int)v34, *(int *)(a1 + 272));
            v6 = *((unsigned __int8 *)ptr + 12 * j + 4);
            v7 = *((unsigned __int16 *)ptr + 6 * j + 3);
            v8 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
            logfmt_raw(
              v25,
              0x1000u,
              0,
              v35,
              v34[0],
              v34[1],
              v34[2],
              v34[3],
              v34[4],
              v34[5],
              v34[6],
              v35,
              "asic %02x, reg %02x state %08x",
              v6,
              v7,
              v8);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "top_reg_check_eth_2282",
              22,
              8034,
              40,
              v25);
            v9 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
            if ( v9 == *((_DWORD *)&unk_4CA1CC + 5 * v53 + 2) )
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * j + 4),
                *((unsigned __int16 *)ptr + 6 * j + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8037,
                40,
                v25);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * j + 4),
                *((unsigned __int16 *)ptr + 6 * j + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8041,
                40,
                v25);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v32, *(int *)(a1 + 272));
        logfmt_raw(
          v25,
          0x1000u,
          0,
          v33,
          v32[0],
          v32[1],
          v32[2],
          v32[3],
          v32[4],
          v32[5],
          v32[6],
          v33,
          "get top reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4CA1CC + 10 * v53),
          v54);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "top_reg_check_eth_2282",
          22,
          8029,
          100,
          v25);
      }
      sub_106BA8(a1, 68, 30);
      sleep(1u);
      v54 = sub_1062CC(a1, *((unsigned __int16 *)&unk_4CA1CC + 10 * v53), ptr);
      if ( v54 == 6 )
      {
        for ( k = 0; k < v54; ++k )
        {
          if ( *((unsigned __int16 *)ptr + 6 * k + 3) == *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) )
          {
            V_LOCK();
            sub_FBD60((int)v38, *(int *)(a1 + 272));
            v10 = *((unsigned __int8 *)ptr + 12 * k + 4);
            v11 = *((unsigned __int16 *)ptr + 6 * k + 3);
            v12 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
            logfmt_raw(
              v25,
              0x1000u,
              0,
              v39,
              v38[0],
              v38[1],
              v38[2],
              v38[3],
              v38[4],
              v38[5],
              v38[6],
              v39,
              "asic %02x, reg %02x state %08x",
              v10,
              v11,
              v12);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "top_reg_check_eth_2282",
              22,
              8056,
              40,
              v25);
            v13 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
            if ( v13 == *((_DWORD *)&unk_4CA1CC + 5 * v53 + 1) )
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * k + 4),
                *((unsigned __int16 *)ptr + 6 * k + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8059,
                40,
                v25);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * k + 4),
                *((unsigned __int16 *)ptr + 6 * k + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8063,
                40,
                v25);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v36, *(int *)(a1 + 272));
        logfmt_raw(
          v25,
          0x1000u,
          0,
          v37,
          v36[0],
          v36[1],
          v36[2],
          v36[3],
          v36[4],
          v36[5],
          v36[6],
          v37,
          "get top reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4CA1CC + 10 * v53),
          v54);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "top_reg_check_eth_2282",
          22,
          8051,
          100,
          v25);
      }
      ++v53;
    }
  }
  if ( a2 == 2 )
  {
    while ( *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) != 0xFFFF )
    {
      sub_106BA8(a1, *((_WORD *)&unk_4CA1CC + 10 * v53), *((_DWORD *)&unk_4CA1CC + 5 * v53 + 3));
      usleep(0x2710u);
      v54 = sub_1062CC(a1, *((unsigned __int16 *)&unk_4CA1CC + 10 * v53), ptr);
      if ( v54 == 6 )
      {
        for ( m = 0; m < v54; ++m )
        {
          if ( *((unsigned __int16 *)ptr + 6 * m + 3) == *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) )
          {
            V_LOCK();
            sub_FBD60((int)v42, *(int *)(a1 + 272));
            v14 = *((unsigned __int8 *)ptr + 12 * m + 4);
            v15 = *((unsigned __int16 *)ptr + 6 * m + 3);
            v16 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
            logfmt_raw(
              v25,
              0x1000u,
              0,
              v43,
              v42[0],
              v42[1],
              v42[2],
              v42[3],
              v42[4],
              v42[5],
              v42[6],
              v43,
              "asic %02x, reg %02x state %08x",
              v14,
              v15,
              v16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "top_reg_check_eth_2282",
              22,
              8084,
              40,
              v25);
            v17 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
            if ( v17 == *((_DWORD *)&unk_4CA1CC + 5 * v53 + 3) )
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * m + 4),
                *((unsigned __int16 *)ptr + 6 * m + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8087,
                40,
                v25);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * m + 4),
                *((unsigned __int16 *)ptr + 6 * m + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8091,
                40,
                v25);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v40, *(int *)(a1 + 272));
        logfmt_raw(
          v25,
          0x1000u,
          0,
          v41,
          v40[0],
          v40[1],
          v40[2],
          v40[3],
          v40[4],
          v40[5],
          v40[6],
          v41,
          "get top reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4CA1CC + 10 * v53),
          v54);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "top_reg_check_eth_2282",
          22,
          8079,
          100,
          v25);
      }
      sub_106BA8(a1, 68, 30);
      sleep(1u);
      v54 = sub_1062CC(a1, *((unsigned __int16 *)&unk_4CA1CC + 10 * v53), ptr);
      if ( v54 == 6 )
      {
        for ( n = 0; n < v54; ++n )
        {
          if ( *((unsigned __int16 *)ptr + 6 * n + 3) == *((unsigned __int16 *)&unk_4CA1CC + 10 * v53) )
          {
            V_LOCK();
            sub_FBD60((int)v46, *(int *)(a1 + 272));
            v18 = *((unsigned __int8 *)ptr + 12 * n + 4);
            v19 = *((unsigned __int16 *)ptr + 6 * n + 3);
            v20 = sub_FC76C(*((_DWORD *)ptr + 3 * n));
            logfmt_raw(
              v25,
              0x1000u,
              0,
              v47,
              v46[0],
              v46[1],
              v46[2],
              v46[3],
              v46[4],
              v46[5],
              v46[6],
              v47,
              "asic %02x, reg %02x state %08x",
              v18,
              v19,
              v20);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "top_reg_check_eth_2282",
              22,
              8106,
              40,
              v25);
            v21 = sub_FC76C(*((_DWORD *)ptr + 3 * n));
            if ( v21 == *((_DWORD *)&unk_4CA1CC + 5 * v53 + 1) )
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * n + 4),
                *((unsigned __int16 *)ptr + 6 * n + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8109,
                40,
                v25);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "asic %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * n + 4),
                *((unsigned __int16 *)ptr + 6 * n + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "top_reg_check_eth_2282",
                22,
                8113,
                40,
                v25);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v44, *(int *)(a1 + 272));
        logfmt_raw(
          v25,
          0x1000u,
          0,
          v45,
          v44[0],
          v44[1],
          v44[2],
          v44[3],
          v44[4],
          v44[5],
          v44[6],
          v45,
          "get top reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4CA1CC + 10 * v53),
          v54);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "top_reg_check_eth_2282",
          22,
          8101,
          100,
          v25);
      }
      ++v53;
    }
    usleep((__useconds_t)&stru_186A0);
  }
  if ( ptr )
    free(ptr);
  return 0;
}
