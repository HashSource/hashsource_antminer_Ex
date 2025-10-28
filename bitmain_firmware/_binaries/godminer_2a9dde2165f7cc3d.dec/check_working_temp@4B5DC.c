void __fastcall __noreturn check_working_temp(unsigned int a1)
{
  unsigned int v1; // r4

  v1 = a1;
  while ( 1 )
  {
    get_current_voltage(a1);
    (*(void (__fastcall **)(unsigned int))(v1 + 56))(v1);
    a1 = sleep(0x12Cu);
  }
}
