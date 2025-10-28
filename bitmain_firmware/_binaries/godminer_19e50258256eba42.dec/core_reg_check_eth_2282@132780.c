int __fastcall core_reg_check_eth_2282(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  unsigned int v6; // r0
  int v7; // r5
  int v8; // r6
  int v9; // r7
  unsigned int v10; // r0
  unsigned int v11; // r0
  int v12; // r5
  int v13; // r6
  int v14; // r7
  unsigned int v15; // r0
  unsigned int v16; // r0
  int v17; // r5
  int v18; // r6
  int v19; // r7
  unsigned int v20; // r0
  unsigned int v21; // r0
  int v22; // r5
  int v23; // r6
  int v24; // r7
  unsigned int v25; // r0
  unsigned int v26; // r0
  _BYTE v30[20]; // [sp+40h] [bp-1194h] BYREF
  _DWORD v31[7]; // [sp+1040h] [bp-194h] BYREF
  int v32; // [sp+105Ch] [bp-178h]
  _DWORD v33[7]; // [sp+1060h] [bp-174h] BYREF
  int v34; // [sp+107Ch] [bp-158h]
  _DWORD v35[7]; // [sp+1080h] [bp-154h] BYREF
  int v36; // [sp+109Ch] [bp-138h]
  _DWORD v37[7]; // [sp+10A0h] [bp-134h] BYREF
  int v38; // [sp+10BCh] [bp-118h]
  _DWORD v39[7]; // [sp+10C0h] [bp-114h] BYREF
  int v40; // [sp+10DCh] [bp-F8h]
  _DWORD v41[7]; // [sp+10E0h] [bp-F4h] BYREF
  int v42; // [sp+10FCh] [bp-D8h]
  _DWORD v43[7]; // [sp+1100h] [bp-D4h] BYREF
  int v44; // [sp+111Ch] [bp-B8h]
  _DWORD v45[7]; // [sp+1120h] [bp-B4h] BYREF
  int v46; // [sp+113Ch] [bp-98h]
  _DWORD v47[7]; // [sp+1140h] [bp-94h] BYREF
  int v48; // [sp+115Ch] [bp-78h]
  _DWORD v49[7]; // [sp+1160h] [bp-74h] BYREF
  int v50; // [sp+117Ch] [bp-58h]
  _DWORD v51[7]; // [sp+1180h] [bp-54h] BYREF
  int v52; // [sp+119Ch] [bp-38h]
  int ii; // [sp+11A0h] [bp-34h]
  int n; // [sp+11A4h] [bp-30h]
  int m; // [sp+11A8h] [bp-2Ch]
  void *ptr; // [sp+11ACh] [bp-28h]
  int i; // [sp+11B0h] [bp-24h]
  int j; // [sp+11B4h] [bp-20h]
  int v59; // [sp+11B8h] [bp-1Ch]
  int k; // [sp+11BCh] [bp-18h]

  V_LOCK();
  sub_FBD60((int)v31, *(int *)(a1 + 272));
  logfmt_raw(
    v30,
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
    "%s start",
    "core_reg_check_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "core_reg_check_eth_2282",
    23,
    7806,
    60,
    v30);
  j = 0;
  v59 = 0;
  ptr = malloc(0x48u);
  if ( !a2 )
  {
    while ( *((unsigned __int16 *)&unk_4C9110 + 10 * j) != 0xFFFF )
    {
      v59 = sub_1075C0(a1, 0, *((_WORD *)&unk_4C9110 + 10 * j), ptr);
      if ( v59 == 6 )
      {
        for ( i = 0; i < v59; ++i )
        {
          if ( (unsigned __int8)HIBYTE(*((_WORD *)ptr + 6 * i + 3)) == *((unsigned __int16 *)&unk_4C9110 + 10 * j) )
          {
            V_LOCK();
            sub_FBD60((int)v35, *(int *)(a1 + 272));
            v2 = *((unsigned __int8 *)ptr + 12 * i + 4);
            v3 = *((unsigned __int8 *)ptr + 12 * i + 8);
            v4 = *((unsigned __int16 *)ptr + 6 * i + 3);
            v5 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
            logfmt_raw(
              v30,
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
              "asic %02x, core %02x, reg %02x state %08x",
              v2,
              v3,
              v4,
              v5);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "core_reg_check_eth_2282",
              23,
              7823,
              40,
              v30);
            v6 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
            if ( v6 == *((_DWORD *)&unk_4C9110 + 5 * j + 1) )
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * i + 4),
                *((unsigned __int8 *)ptr + 12 * i + 8),
                *((unsigned __int16 *)ptr + 6 * i + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7826,
                40,
                v30);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * i + 4),
                *((unsigned __int8 *)ptr + 12 * i + 8),
                *((unsigned __int16 *)ptr + 6 * i + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7830,
                40,
                v30);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v33, *(int *)(a1 + 272));
        logfmt_raw(
          v30,
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
          *((unsigned __int16 *)&unk_4C9110 + 10 * j),
          v59);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "core_reg_check_eth_2282",
          23,
          7818,
          100,
          v30);
      }
      usleep(0x2710u);
      ++j;
    }
  }
  if ( a2 == 1 )
  {
    for ( j = 0; *((unsigned __int16 *)&unk_4C9110 + 10 * j) != 0xFFFF; ++j )
    {
      sub_106D34(a1, *((_WORD *)&unk_4C9110 + 10 * j), *((_DWORD *)&unk_4C9110 + 5 * j + 2));
      usleep(0x2710u);
      v59 = sub_1075C0(a1, 0, *((_WORD *)&unk_4C9110 + 10 * j), ptr);
      if ( v59 == 6 )
      {
        for ( k = 0; k < v59; ++k )
        {
          if ( (unsigned __int8)HIBYTE(*((_WORD *)ptr + 6 * k + 3)) == *((unsigned __int16 *)&unk_4C9110 + 10 * j) )
          {
            V_LOCK();
            sub_FBD60((int)v39, *(int *)(a1 + 272));
            v7 = *((unsigned __int8 *)ptr + 12 * k + 4);
            v8 = *((unsigned __int8 *)ptr + 12 * k + 8);
            v9 = *((unsigned __int16 *)ptr + 6 * k + 3);
            v10 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
            logfmt_raw(
              v30,
              0x1000u,
              0,
              v40,
              v39[0],
              v39[1],
              v39[2],
              v39[3],
              v39[4],
              v39[5],
              v39[6],
              v40,
              "asic %02x, core %02x, reg %02x state %08x",
              v7,
              v8,
              v9,
              v10);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "core_reg_check_eth_2282",
              23,
              7856,
              20,
              v30);
            v11 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
            if ( v11 == *((_DWORD *)&unk_4C9110 + 5 * j + 2) )
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * k + 4),
                *((unsigned __int8 *)ptr + 12 * k + 8),
                *((unsigned __int16 *)ptr + 6 * k + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7859,
                40,
                v30);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * k + 4),
                *((unsigned __int8 *)ptr + 12 * k + 8),
                *((unsigned __int16 *)ptr + 6 * k + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7863,
                40,
                v30);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v37, *(int *)(a1 + 272));
        logfmt_raw(
          v30,
          0x1000u,
          0,
          v38,
          v37[0],
          v37[1],
          v37[2],
          v37[3],
          v37[4],
          v37[5],
          v37[6],
          v38,
          "get core reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4C9110 + 10 * j),
          v59);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "core_reg_check_eth_2282",
          23,
          7851,
          100,
          v30);
      }
      usleep(0x2710u);
      sub_106BA8(a1, 68, 29);
      usleep(0x2710u);
      v59 = sub_1075C0(a1, 0, *((_WORD *)&unk_4C9110 + 10 * j), ptr);
      if ( v59 == 6 )
      {
        for ( m = 0; m < v59; ++m )
        {
          if ( (unsigned __int8)HIBYTE(*((_WORD *)ptr + 6 * m + 3)) == *((unsigned __int16 *)&unk_4C9110 + 10 * j) )
          {
            V_LOCK();
            sub_FBD60((int)v43, *(int *)(a1 + 272));
            v12 = *((unsigned __int8 *)ptr + 12 * m + 4);
            v13 = *((unsigned __int8 *)ptr + 12 * m + 8);
            v14 = *((unsigned __int16 *)ptr + 6 * m + 3);
            v15 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
            logfmt_raw(
              v30,
              0x1000u,
              0,
              v44,
              v43[0],
              v43[1],
              v43[2],
              v43[3],
              v43[4],
              v43[5],
              v43[6],
              v44,
              "asic %02x, core %02x, reg %02x state %08x",
              v12,
              v13,
              v14,
              v15);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "core_reg_check_eth_2282",
              23,
              7879,
              40,
              v30);
            v16 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
            if ( v16 == *((_DWORD *)&unk_4C9110 + 5 * j + 1) )
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * m + 4),
                *((unsigned __int8 *)ptr + 12 * m + 8),
                *((unsigned __int16 *)ptr + 6 * m + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7882,
                40,
                v30);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * m + 4),
                *((unsigned __int8 *)ptr + 12 * m + 8),
                *((unsigned __int16 *)ptr + 6 * m + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7886,
                40,
                v30);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v41, *(int *)(a1 + 272));
        logfmt_raw(
          v30,
          0x1000u,
          0,
          v42,
          v41[0],
          v41[1],
          v41[2],
          v41[3],
          v41[4],
          v41[5],
          v41[6],
          v42,
          "get core reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4C9110 + 10 * j),
          v59);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "core_reg_check_eth_2282",
          23,
          7874,
          100,
          v30);
      }
      usleep(0x2710u);
    }
  }
  if ( a2 == 2 )
  {
    for ( j = 0; *((unsigned __int16 *)&unk_4C9110 + 10 * j) != 0xFFFF; ++j )
    {
      sub_106D34(a1, *((_WORD *)&unk_4C9110 + 10 * j), *((_DWORD *)&unk_4C9110 + 5 * j + 3));
      usleep(0x2710u);
      v59 = sub_1075C0(a1, 0, *((_WORD *)&unk_4C9110 + 10 * j), ptr);
      if ( v59 == 6 )
      {
        for ( n = 0; n < v59; ++n )
        {
          if ( (unsigned __int8)HIBYTE(*((_WORD *)ptr + 6 * n + 3)) == *((unsigned __int16 *)&unk_4C9110 + 10 * j) )
          {
            V_LOCK();
            sub_FBD60((int)v47, *(int *)(a1 + 272));
            v17 = *((unsigned __int8 *)ptr + 12 * n + 4);
            v18 = *((unsigned __int8 *)ptr + 12 * n + 8);
            v19 = *((unsigned __int16 *)ptr + 6 * n + 3);
            v20 = sub_FC76C(*((_DWORD *)ptr + 3 * n));
            logfmt_raw(
              v30,
              0x1000u,
              0,
              v48,
              v47[0],
              v47[1],
              v47[2],
              v47[3],
              v47[4],
              v47[5],
              v47[6],
              v48,
              "asic %02x, core %02x, reg %02x state %08x",
              v17,
              v18,
              v19,
              v20);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "core_reg_check_eth_2282",
              23,
              7911,
              40,
              v30);
            v21 = sub_FC76C(*((_DWORD *)ptr + 3 * n));
            if ( v21 == *((_DWORD *)&unk_4C9110 + 5 * j + 3) )
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * n + 4),
                *((unsigned __int8 *)ptr + 12 * n + 8),
                *((unsigned __int16 *)ptr + 6 * n + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7914,
                40,
                v30);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * n + 4),
                *((unsigned __int8 *)ptr + 12 * n + 8),
                *((unsigned __int16 *)ptr + 6 * n + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7918,
                40,
                v30);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v45, *(int *)(a1 + 272));
        logfmt_raw(
          v30,
          0x1000u,
          0,
          v46,
          v45[0],
          v45[1],
          v45[2],
          v45[3],
          v45[4],
          v45[5],
          v45[6],
          v46,
          "get core reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4C9110 + 10 * j),
          v59);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "core_reg_check_eth_2282",
          23,
          7906,
          100,
          v30);
      }
      usleep(0x2710u);
      sub_106BA8(a1, 68, 29);
      usleep(0x2710u);
      v59 = sub_1075C0(a1, 0, *((_WORD *)&unk_4C9110 + 10 * j), ptr);
      if ( v59 == 6 )
      {
        for ( ii = 0; ii < v59; ++ii )
        {
          if ( (unsigned __int8)HIBYTE(*((_WORD *)ptr + 6 * ii + 3)) == *((unsigned __int16 *)&unk_4C9110 + 10 * j) )
          {
            V_LOCK();
            sub_FBD60((int)v51, *(int *)(a1 + 272));
            v22 = *((unsigned __int8 *)ptr + 12 * ii + 4);
            v23 = *((unsigned __int8 *)ptr + 12 * ii + 8);
            v24 = *((unsigned __int16 *)ptr + 6 * ii + 3);
            v25 = sub_FC76C(*((_DWORD *)ptr + 3 * ii));
            logfmt_raw(
              v30,
              0x1000u,
              0,
              v52,
              v51[0],
              v51[1],
              v51[2],
              v51[3],
              v51[4],
              v51[5],
              v51[6],
              v52,
              "asic %02x, core %02x, reg %02x state %08x",
              v22,
              v23,
              v24,
              v25);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "core_reg_check_eth_2282",
              23,
              7934,
              40,
              v30);
            v26 = sub_FC76C(*((_DWORD *)ptr + 3 * ii));
            if ( v26 == *((_DWORD *)&unk_4C9110 + 5 * j + 1) )
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x PASS!!!",
                *((unsigned __int8 *)ptr + 12 * ii + 4),
                *((unsigned __int8 *)ptr + 12 * ii + 8),
                *((unsigned __int16 *)ptr + 6 * ii + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7937,
                40,
                v30);
            }
            else
            {
              V_LOCK();
              logfmt_raw(
                v30,
                0x1000u,
                0,
                "asic %02x, core %02x, reg %02x FAILD!!!",
                *((unsigned __int8 *)ptr + 12 * ii + 4),
                *((unsigned __int8 *)ptr + 12 * ii + 8),
                *((unsigned __int16 *)ptr + 6 * ii + 3));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "core_reg_check_eth_2282",
                23,
                7941,
                40,
                v30);
            }
          }
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v49, *(int *)(a1 + 272));
        logfmt_raw(
          v30,
          0x1000u,
          0,
          v50,
          v49[0],
          v49[1],
          v49[2],
          v49[3],
          v49[4],
          v49[5],
          v49[6],
          v50,
          "get core reg addr %02x failed, resp_num: %d",
          *((unsigned __int16 *)&unk_4C9110 + 10 * j),
          v59);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "core_reg_check_eth_2282",
          23,
          7929,
          100,
          v30);
      }
      usleep(0x2710u);
    }
  }
  if ( ptr )
    free(ptr);
  return 0;
}
