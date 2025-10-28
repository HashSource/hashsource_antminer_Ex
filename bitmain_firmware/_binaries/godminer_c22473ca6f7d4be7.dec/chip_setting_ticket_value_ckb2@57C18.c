int __fastcall chip_setting_ticket_value_ckb2(int a1, int a2)
{
  int v2; // r5
  _DWORD *v5; // r8
  int v6; // r7
  int v7; // r3
  int v8; // r2
  int v9; // r11
  int v10; // r3
  int v12; // [sp+0h] [bp-1024h]
  int v13; // [sp+Ch] [bp-1018h]
  _DWORD v14[3]; // [sp+10h] [bp-1014h] BYREF
  char v15; // [sp+1Ch] [bp-1008h]
  char v16; // [sp+1Dh] [bp-1007h]
  char v17; // [sp+1Eh] [bp-1006h]
  char v18[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v2) = 28356;
  HIWORD(v2) = (unsigned int)"d nonce %08x hw target (%016llx > %016llx) not reach pool\n" >> 16;
  LOWORD(v5) = -14512;
  LOWORD(v6) = 28500;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v6) = (unsigned int)"hip_type %04x/%04x chip %d reg %d addr %02x" >> 16;
  V_LOCK();
  LOWORD(v7) = 28684;
  v12 = v2 + 52;
  HIWORD(v7) = (unsigned int)"nonce %llx" >> 16;
  v2 += 84;
  logfmt_raw(v18, 0x1000u, 0, v7, v12, 3, a2, v13, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(*v5, v6, 161, v2, 30, 103, 60, v18);
  v8 = *(_DWORD *)(a1 + 200);
  v15 = -1;
  v16 = v8;
  v14[0] = (unsigned __int8)a2;
  v14[2] = 196609;
  v17 = 1;
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v14);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 244) = (unsigned __int8)a2;
  V_LOCK();
  LOWORD(v10) = 28716;
  HIWORD(v10) = (unsigned int)"ket " >> 16;
  logfmt_raw(v18, 0x1000u, 0, v10, a2);
  V_UNLOCK();
  zlog(*v5, v6, 161, v2, 30, 117, 60, v18);
  return v9;
}
