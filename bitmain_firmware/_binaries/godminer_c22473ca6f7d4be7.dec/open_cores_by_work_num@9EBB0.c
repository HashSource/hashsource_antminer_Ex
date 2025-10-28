int __fastcall open_cores_by_work_num(int a1)
{
  int v2; // r3
  _DWORD *v3; // r8
  int v4; // r1
  int v5; // r4
  int v6; // r10
  int v7; // r1
  _DWORD *v8; // r9
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r4
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v18; // [sp+14h] [bp-1028h]
  _DWORD v19[8]; // [sp+18h] [bp-1024h] BYREF
  char v20[4100]; // [sp+38h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -22412;
  HIWORD(v2) = (unsigned int)&unk_139BA4 >> 16;
  LOWORD(v3) = -14512;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v20, 0x1000u, 0, v2, "open_cores_by_work_num");
  V_UNLOCK();
  LOWORD(v4) = -25512;
  HIWORD(v4) = (unsigned int)"one" >> 16;
  LOWORD(v5) = -25512;
  zlog(*v3, v4, 154, "open_cores_by_work_num", 22, 11613, 20, v20);
  LOWORD(v6) = -21912;
  sub_5C100(a1, 21, 0);
  LOWORD(v7) = -21980;
  HIWORD(v7) = (unsigned int)"D] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1" >> 16;
  str2hex((int)v19, v7, 64);
  v8 = calloc(1u, 0x59u);
  v9 = v19[1];
  v10 = v19[2];
  v11 = v19[3];
  HIWORD(v5) = (unsigned int)"one" >> 16;
  v18 = v5;
  v12 = 1;
  v8[4] = v19[0];
  v8[5] = v9;
  v8[6] = v10;
  v8[7] = v11;
  v13 = v19[5];
  v14 = v19[6];
  v15 = v19[7];
  v8[8] = v19[4];
  v8[9] = v13;
  v8[10] = v14;
  v8[11] = v15;
  *((_QWORD *)v8 + 1) = 1193046;
  do
  {
    V_LOCK();
    HIWORD(v6) = (unsigned int)"err is 1" >> 16;
    logfmt_raw(v20, 0x1000u, 0, v6, "open_cores_by_work_num", v12);
    V_UNLOCK();
    zlog(*v3, v18, 154, "open_cores_by_work_num", 22, 11623, 20, v20);
    v16 = v12++;
    sub_5C100(a1, 21, v16);
    push_work_base(a1, (int)v8);
    usleep((__useconds_t)&stru_18694.st_info);
  }
  while ( v12 != 65 );
  return 0;
}
