int __fastcall set_ticket_mask_dash(int a1, int a2)
{
  int v2; // r7
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  int result; // r0
  int v9; // [sp+Ch] [bp-1018h]
  _DWORD v10[3]; // [sp+10h] [bp-1014h] BYREF
  int v11; // [sp+1Ch] [bp-1008h]
  char v12[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v2) = 28728;
  HIWORD(v2) = (unsigned int)"ChipSetting_ticket_mask_CKB" >> 16;
  V_LOCK();
  LOWORD(v5) = 30664;
  HIWORD(v5) = (unsigned int)" %d voltage %d rate%d.%d" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v5, v2 + 476, 20, a2, v9, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v6) = -14512;
  HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v7) = 30144;
  HIWORD(v7) = (unsigned int)&sensors_ckb >> 16;
  zlog(*v6, v7, 156, v2 + 500, 20, 282, 20, v12);
  LOWORD(v11) = 2815;
  v10[0] = a2;
  v10[2] = 1310721;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v10);
  *(_DWORD *)(a1 + 244) = a2;
  return result;
}
