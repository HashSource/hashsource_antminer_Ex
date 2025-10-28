int __fastcall heartbeat_on_device(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r3
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char v13[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v5) = 21028;
  V_LOCK();
  HIWORD(v5) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/backend/chip_reg_io_interface.c" >> 16;
  LOWORD(v6) = 21048;
  HIWORD(v6) = (unsigned int)"d/godminer-origin_master/backend/chip_reg_io_interface.c" >> 16;
  logfmt_raw(v13, 0x1000u, 0, v6, v5, *(_DWORD *)(a1 + 136));
  V_UNLOCK();
  LOWORD(v7) = -14512;
  HIWORD(v7) = (unsigned int)&unk_16C65C >> 16;
  LOWORD(v8) = 21068;
  HIWORD(v8) = (unsigned int)"ster/backend/chip_reg_io_interface.c" >> 16;
  v9 = zlog(*v7, v8, 187, v5, 19, 55, 20, v13);
  v10 = dev_ctrl(v9);
  if ( !(*(int (__fastcall **)(_DWORD))(v10 + 72))(*(_DWORD *)(a1 + 136)) )
  {
    v11 = dev_ctrl(0);
    if ( !(*(int (__fastcall **)(_DWORD))(v11 + 72))(*(_DWORD *)(a1 + 136)) )
      *(_DWORD *)(a3 + 64) |= 1u;
  }
  update_recorded_heartbeat_interval(*(_DWORD *)(a1 + 136));
  return a3 + 64;
}
