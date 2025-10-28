int __fastcall set_voltage_by_steps(int a1, int a2)
{
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r5
  int v7; // r4
  int v8; // r6
  char v10[4120]; // [sp+10h] [bp-1018h] BYREF

  if ( a2 )
  {
    V_LOCK();
    LOWORD(v3) = 18336;
    HIWORD(v3) = (unsigned int)"\"TIMESTAMP\"},\"nonce\":{\"data\":%u,\"type\":\"NONCE\"},\"extra_nonce\":{\"data\":%lld,\"type\":\"EXTRA_NONCE\"}}" >> 16;
    logfmt_raw(v10, 0x1000u, 0, v3, "set_voltage_by_steps", a1);
    V_UNLOCK();
    LOWORD(v4) = -14512;
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v5) = 18180;
    HIWORD(v5) = (unsigned int)"capabilities_vbk" >> 16;
    zlog(*v4, v5, 143, "set_voltage_by_steps", 20, 284, 60, v10);
    if ( byte_16633C )
      v6 = dword_166358;
    else
      v6 = -1;
    v7 = a1 - v6;
    if ( a1 == v6 )
      return 0;
    if ( a1 - v6 < 0 )
    {
      v8 = -10;
      if ( (int)abs32(v7) <= 10 )
      {
LABEL_11:
        if ( a1 != v6 )
          sub_4ACC8(a1);
        return 0;
      }
    }
    else
    {
      v8 = 10;
      if ( (int)abs32(v7) <= 10 )
        goto LABEL_11;
    }
    do
    {
      v6 += v8;
      v7 -= v8;
      sub_4ACC8(v6);
    }
    while ( (int)abs32(v7) > 10 );
    goto LABEL_11;
  }
  return -1;
}
