unsigned int sub_ACB0C()
{
  unsigned int result; // r0
  int v1; // [sp+4h] [bp-10h] BYREF
  _DWORD *all_created_runtime; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v1 = 0;
  all_created_runtime = get_all_created_runtime(&v1);
  for ( i = 0; i < v1; ++i )
  {
    (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 24))(all_created_runtime[i]);
    (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 32))(all_created_runtime[i]);
  }
  if ( v1 )
    fan_pwm_set(0x14u);
  green_led_on();
  result = red_led_on();
  while ( pools_active != 1 )
    result = sleep(1u);
  return result;
}
