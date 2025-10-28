int __fastcall sub_20493C(int a1, char a2)
{
  int result; // r0
  char v5[12]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v6[12]; // [sp+818h] [bp-100Ch] BYREF
  int v7; // [sp+1818h] [bp-Ch]
  int i; // [sp+181Ch] [bp-8h]

  result = sub_2048D8(a1);
  v7 = result;
  if ( result == 259 )
  {
    snprintf(v5, 0x800u, "gpio port %d is not a supported key", a1);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
             176,
             "gpio_key_callback",
             17,
             134,
             80,
             v6);
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( dword_C25EC4[i] )
        result = dword_C25EC4[i](v7, a2 != 0);
    }
  }
  return result;
}
