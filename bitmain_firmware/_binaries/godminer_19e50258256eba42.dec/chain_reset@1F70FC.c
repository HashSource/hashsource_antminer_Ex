int __fastcall chain_reset(int a1)
{
  char v2; // [sp+4h] [bp-8h]

  v2 = a1;
  chain_reset_low(a1);
  usleep((__useconds_t)&stru_186A0);
  return chain_reset_high(v2);
}
