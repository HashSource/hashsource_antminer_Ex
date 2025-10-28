int __fastcall set_voltage(int a1, int a2)
{
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char v7[4112]; // [sp+10h] [bp-1010h] BYREF

  if ( !a2 )
    return -1;
  V_LOCK();
  LOWORD(v3) = 18336;
  HIWORD(v3) = (unsigned int)"\"TIMESTAMP\"},\"nonce\":{\"data\":%u,\"type\":\"NONCE\"},\"extra_nonce\":{\"data\":%lld,\"type\":\"EXTRA_NONCE\"}}" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, "set_voltage", a1);
  V_UNLOCK();
  LOWORD(v4) = -14512;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = 18180;
  HIWORD(v5) = (unsigned int)"capabilities_vbk" >> 16;
  zlog(*v4, v5, 143, "set_voltage", 11, 274, 60, v7);
  return sub_4ACC8(a1);
}
