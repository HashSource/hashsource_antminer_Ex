int __fastcall set_core_enable_base(int a1, int *a2, __useconds_t a3)
{
  int v3; // r3
  int v4; // r3
  _BYTE v9[16]; // [sp+24h] [bp-1010h] BYREF
  int v10; // [sp+1024h] [bp-10h]
  int v11; // [sp+1028h] [bp-Ch]
  int i; // [sp+102Ch] [bp-8h]

  v11 = *a2;
  for ( i = 0; ; ++i )
  {
    v4 = i;
    if ( i >= *((unsigned __int8 *)a2 + 13) )
      break;
    if ( (i & 0x1F) == 0 )
    {
      *a2 = -1;
      if ( v11 )
        *a2 = 0;
      *((_WORD *)a2 + 5) += 4 * (i / 32);
    }
    *((_BYTE *)a2 + 12) = i;
    if ( v11 )
    {
      LOBYTE(v3) = i & 0x1F;
      if ( i <= 0 )
        v3 = -(-i & 0x1F);
      *a2 |= 1 << v3;
    }
    else
    {
      *a2 *= 2;
    }
    v10 = (*(int (__fastcall **)(int, int *))(a1 + 304))(a1, a2);
    if ( v10 < 0 )
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "%s failed, reg:%02x, core_id:%d",
        "set_core_enable_base",
        *((unsigned __int16 *)a2 + 5),
        i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "set_core_enable_base",
        20,
        1461,
        100,
        v9);
      return -1;
    }
    usleep(a3);
  }
  return v4;
}
