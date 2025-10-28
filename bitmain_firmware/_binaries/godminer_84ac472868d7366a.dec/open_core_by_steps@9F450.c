int __fastcall open_core_by_steps(int a1)
{
  int v2; // r0
  _DWORD *v3; // r8
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  __int64 v6; // kr10_8
  __int64 v7; // kr18_8
  __int64 v8; // kr20_8
  __int64 v9; // kr28_8
  __int64 v10; // kr30_8
  __int64 v11; // kr38_8
  __int64 v12; // kr40_8
  __int64 v13; // kr48_8
  __int64 v14; // kr50_8
  __int64 v15; // kr58_8
  __int64 v16; // kr60_8
  __int64 v17; // kr68_8
  __int64 v18; // kr70_8
  __int64 v19; // kr78_8
  __int64 v20; // kr80_8
  __int64 v21; // kr88_8
  __int64 v22; // kr90_8
  __int64 v23; // kr98_8
  __int64 v24; // krA0_8
  __int64 v25; // krA8_8
  __int64 v26; // krB0_8
  __int64 v27; // krB8_8
  __int64 v28; // krC0_8
  __int64 v29; // krC8_8
  int v30; // lr
  __int64 v31; // krD8_8
  __int64 v32; // krE0_8
  int v34; // [sp+28h] [bp-1024h] BYREF
  _BYTE v35[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v34, "chain");
  v2 = logfmt_raw((int)v35, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_core_by_steps",
    18,
    11707,
    60,
    v35);
  v3 = calloc(1u, 0x59u);
  memset(v3 + 4, 0, 0x20u);
  sub_5C248(a1, 201, 0);
  sub_5C2F4(a1, 0, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v4 = qword_163780;
  v5 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v4 + 1;
  v3[1] = HIDWORD(v4);
  *((_QWORD *)v3 + 1) = v5;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v4, 1) + HIDWORD(v4);
  qword_163788 = v5 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v6 = qword_163780;
  v7 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v6 + 1;
  v3[1] = HIDWORD(v6);
  *((_QWORD *)v3 + 1) = v7;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v6, 1) + HIDWORD(v6);
  qword_163788 = v7 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v8 = qword_163780;
  v9 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v8 + 1;
  v3[1] = HIDWORD(v8);
  *((_QWORD *)v3 + 1) = v9;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v8, 1) + HIDWORD(v8);
  qword_163788 = v9 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 3u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v10 = qword_163780;
  v11 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v10 + 1;
  v3[1] = HIDWORD(v10);
  *((_QWORD *)v3 + 1) = v11;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v10, 1) + HIDWORD(v10);
  qword_163788 = v11 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 5u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 2u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v12 = qword_163780;
  v13 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v12 + 1;
  v3[1] = HIDWORD(v12);
  *((_QWORD *)v3 + 1) = v13;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v12, 1) + HIDWORD(v12);
  qword_163788 = v13 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 6u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 1u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v14 = qword_163780;
  v15 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v14 + 1;
  v3[1] = HIDWORD(v14);
  *((_QWORD *)v3 + 1) = v15;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v14, 1) + HIDWORD(v14);
  qword_163788 = v15 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 7u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 0, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v16 = qword_163780;
  v17 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v16 + 1;
  v3[1] = HIDWORD(v16);
  *((_QWORD *)v3 + 1) = v17;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v16, 1) + HIDWORD(v16);
  qword_163788 = v17 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v18 = qword_163780;
  v19 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v18 + 1;
  v3[1] = HIDWORD(v18);
  *((_QWORD *)v3 + 1) = v19;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v18, 1) + HIDWORD(v18);
  qword_163788 = v19 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v20 = qword_163780;
  v21 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v20 + 1;
  v3[1] = HIDWORD(v20);
  *((_QWORD *)v3 + 1) = v21;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v20, 1) + HIDWORD(v20);
  qword_163788 = v21 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v22 = qword_163780;
  v23 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v22 + 1;
  v3[1] = HIDWORD(v22);
  *((_QWORD *)v3 + 1) = v23;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v22, 1) + HIDWORD(v22);
  qword_163788 = v23 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v24 = qword_163780;
  v25 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v24 + 1;
  v3[1] = HIDWORD(v24);
  *((_QWORD *)v3 + 1) = v25;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v24, 1) + HIDWORD(v24);
  qword_163788 = v25 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v26 = qword_163780;
  v27 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v26 + 1;
  v3[1] = HIDWORD(v26);
  *((_QWORD *)v3 + 1) = v27;
  HIDWORD(qword_163780) = __CFADD__((_DWORD)v26, 1) + HIDWORD(v26);
  qword_163788 = v27 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 9u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v28 = qword_163780;
  v29 = qword_163788;
  *v3 = qword_163780;
  LODWORD(qword_163780) = v28 + 1;
  v3[1] = HIDWORD(v28);
  v3[3] = HIDWORD(v29);
  HIDWORD(qword_163780) = (unsigned __int64)(v28 + 1) >> 32;
  v3[2] = v29;
  qword_163788 = v29 + 1;
  push_work_base(a1, v3);
  sub_5C2F4(a1, 0, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 2, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 4, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 6, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 1, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 3, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 5, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C2F4(a1, 7, 8u, 201, 1);
  usleep((__useconds_t)&stru_18698.st_size);
  v30 = HIDWORD(qword_163780);
  v31 = qword_163788;
  v32 = qword_163780 + 1;
  *v3 = qword_163780;
  v3[1] = v30;
  *((_QWORD *)v3 + 1) = v31;
  qword_163780 = v32;
  qword_163788 = v31 + 1;
  push_work_base(a1, v3);
  return 0;
}
