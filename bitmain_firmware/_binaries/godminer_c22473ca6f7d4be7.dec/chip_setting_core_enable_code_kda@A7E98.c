int __fastcall chip_setting_core_enable_code_kda(int a1, int a2)
{
  int v2; // r5
  _DWORD *v5; // r8
  int v6; // r7
  int v7; // r3
  int v8; // r2
  int (__fastcall *v9)(int, _DWORD *); // r3
  int v10; // r10
  int v11; // r3
  int v13; // [sp+0h] [bp-1024h]
  int v14; // [sp+Ch] [bp-1018h]
  _DWORD v15[3]; // [sp+10h] [bp-1014h] BYREF
  char v16; // [sp+1Ch] [bp-1008h]
  char v17; // [sp+1Dh] [bp-1007h]
  char v18; // [sp+1Eh] [bp-1006h]
  char v19[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v2) = -16196;
  HIWORD(v2) = (unsigned int)&unk_13B3EC >> 16;
  LOWORD(v5) = -14512;
  LOWORD(v6) = -15924;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v6) = (unsigned int)&unk_13B4FC >> 16;
  V_LOCK();
  LOWORD(v7) = -15684;
  v13 = v2 + 200;
  HIWORD(v7) = (unsigned int)&unk_13B5EC >> 16;
  v2 += 236;
  logfmt_raw(v19, 0x1000u, 0, v7, v13, 2, a2, v14, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(*v5, v6, 159, v2, 33, 164, 60, v19);
  v8 = *(_DWORD *)(a1 + 200);
  v16 = -1;
  v15[2] = 131073;
  v17 = v8;
  v18 = 1;
  v9 = *(int (__fastcall **)(int, _DWORD *))(a1 + 160);
  v15[0] = a2;
  v10 = v9(a1, v15);
  usleep(0x3E8u);
  V_LOCK();
  LOWORD(v11) = -15644;
  HIWORD(v11) = (unsigned int)"enkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_grin32/backend_grin32.c" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v11, a2);
  V_UNLOCK();
  zlog(*v5, v6, 159, v2, 33, 177, 60, v19);
  return v10;
}
