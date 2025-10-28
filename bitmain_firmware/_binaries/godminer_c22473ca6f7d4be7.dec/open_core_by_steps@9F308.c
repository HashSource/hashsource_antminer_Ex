int __fastcall open_core_by_steps(int a1)
{
  int v2; // r8
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r1
  _DWORD *v7; // r8
  __int64 v8; // kr00_8
  __int64 v9; // kr08_8
  __int64 v10; // kr18_8
  __int64 v11; // kr20_8
  __int64 v12; // kr30_8
  __int64 v13; // kr38_8
  __int64 v14; // kr48_8
  __int64 v15; // kr50_8
  __int64 v16; // kr60_8
  __int64 v17; // kr68_8
  __int64 v18; // kr78_8
  __int64 v19; // kr80_8
  __int64 v20; // kr90_8
  __int64 v21; // kr98_8
  __int64 v22; // krA8_8
  __int64 v23; // krB0_8
  __int64 v24; // krC0_8
  __int64 v25; // krC8_8
  __int64 v26; // krD8_8
  __int64 v27; // krE0_8
  __int64 v28; // krF0_8
  __int64 v29; // krF8_8
  __int64 v30; // kr108_8
  __int64 v31; // kr110_8
  __int64 v32; // kr120_8
  __int64 v33; // kr128_8
  __int64 v34; // kr138_8
  __int64 v35; // kr140_8
  _DWORD v37[7]; // [sp+28h] [bp-1024h] BYREF
  int v38; // [sp+44h] [bp-1008h]
  char v39[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v2) = -24664;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v2) = (unsigned int)"_lane" >> 16;
  V_INT((int)v37, v3, *(int *)(a1 + 140));
  LOWORD(v4) = -22412;
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v39, 0x1000u, 0, v38, v37[0], v37[1], v37[2], v37[3], v37[4], v37[5], v37[6], v38, v4, v2 - 2152);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v5, v6, 154, v2 - 2132, 18, 11707, 60, v39);
  v7 = calloc(1u, 0x59u);
  memset(v7 + 4, 0, 0x20u);
  sub_5C100(a1, 201, 0);
  sub_5C1AC(a1, 0, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v8 = qword_163780;
  v9 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v8 + 1;
  v7[1] = HIDWORD(v8);
  *((_QWORD *)v7 + 1) = v9;
  HIDWORD(qword_163780) = (unsigned __int64)(v8 + 1) >> 32;
  qword_163788 = v9 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v10 = qword_163780;
  v11 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v10 + 1;
  v7[1] = HIDWORD(v10);
  *((_QWORD *)v7 + 1) = v11;
  HIDWORD(qword_163780) = (unsigned __int64)(v10 + 1) >> 32;
  qword_163788 = v11 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v12 = qword_163780;
  v13 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v12 + 1;
  v7[1] = HIDWORD(v12);
  *((_QWORD *)v7 + 1) = v13;
  HIDWORD(qword_163780) = (unsigned __int64)(v12 + 1) >> 32;
  qword_163788 = v13 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 3u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = qword_163780;
  v15 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v14 + 1;
  v7[1] = HIDWORD(v14);
  *((_QWORD *)v7 + 1) = v15;
  HIDWORD(qword_163780) = (unsigned __int64)(v14 + 1) >> 32;
  qword_163788 = v15 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 5u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 2u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v16 = qword_163780;
  v17 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v16 + 1;
  v7[1] = HIDWORD(v16);
  *((_QWORD *)v7 + 1) = v17;
  HIDWORD(qword_163780) = (unsigned __int64)(v16 + 1) >> 32;
  qword_163788 = v17 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 6u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 1u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v18 = qword_163780;
  v19 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v18 + 1;
  v7[1] = HIDWORD(v18);
  *((_QWORD *)v7 + 1) = v19;
  HIDWORD(qword_163780) = (unsigned __int64)(v18 + 1) >> 32;
  qword_163788 = v19 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 7u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 0, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v20 = qword_163780;
  v21 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v20 + 1;
  v7[1] = HIDWORD(v20);
  *((_QWORD *)v7 + 1) = v21;
  HIDWORD(qword_163780) = (unsigned __int64)(v20 + 1) >> 32;
  qword_163788 = v21 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v22 = qword_163780;
  v23 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v22 + 1;
  v7[1] = HIDWORD(v22);
  *((_QWORD *)v7 + 1) = v23;
  HIDWORD(qword_163780) = (unsigned __int64)(v22 + 1) >> 32;
  qword_163788 = v23 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v24 = qword_163780;
  v25 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v24 + 1;
  v7[1] = HIDWORD(v24);
  *((_QWORD *)v7 + 1) = v25;
  HIDWORD(qword_163780) = (unsigned __int64)(v24 + 1) >> 32;
  qword_163788 = v25 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v26 = qword_163780;
  v27 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v26 + 1;
  v7[1] = HIDWORD(v26);
  *((_QWORD *)v7 + 1) = v27;
  HIDWORD(qword_163780) = (unsigned __int64)(v26 + 1) >> 32;
  qword_163788 = v27 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 0xBu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v28 = qword_163780;
  v29 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v28 + 1;
  v7[1] = HIDWORD(v28);
  *((_QWORD *)v7 + 1) = v29;
  HIDWORD(qword_163780) = (unsigned __int64)(v28 + 1) >> 32;
  qword_163788 = v29 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 0xDu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 0xAu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v30 = qword_163780;
  v31 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v30 + 1;
  v7[1] = HIDWORD(v30);
  *((_QWORD *)v7 + 1) = v31;
  HIDWORD(qword_163780) = (unsigned __int64)(v30 + 1) >> 32;
  qword_163788 = v31 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 0xEu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 9u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v32 = qword_163780;
  v33 = qword_163788;
  *v7 = qword_163780;
  LODWORD(qword_163780) = v32 + 1;
  v7[1] = HIDWORD(v32);
  v7[3] = HIDWORD(v33);
  HIDWORD(qword_163780) = (unsigned __int64)(v32 + 1) >> 32;
  v7[2] = v33;
  qword_163788 = v33 + 1;
  push_work_base(a1, (int)v7);
  sub_5C1AC(a1, 0, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 2, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 4, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 6, 0xFu, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 1, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 3, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 5, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_5C1AC(a1, 7, 8u, 201, 1);
  usleep((__useconds_t)&stru_18694.st_info);
  v34 = qword_163780;
  v35 = qword_163788;
  *(_QWORD *)v7 = qword_163780;
  *((_QWORD *)v7 + 1) = v35;
  qword_163780 = v34 + 1;
  qword_163788 = v35 + 1;
  push_work_base(a1, (int)v7);
  return 0;
}
