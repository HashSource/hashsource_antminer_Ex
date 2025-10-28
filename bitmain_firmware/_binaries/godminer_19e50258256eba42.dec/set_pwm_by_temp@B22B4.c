int set_pwm_by_temp()
{
  __int64 v0; // r0
  __int64 v2; // [sp+10h] [bp-2Ch]
  unsigned int v3; // [sp+1Ch] [bp-20h]
  unsigned int v4; // [sp+1Ch] [bp-20h]
  unsigned int v5; // [sp+1Ch] [bp-20h]

  if ( byte_5AD644 != 1 )
  {
    clock_gettime(1, (struct timespec *)&dword_5AD648);
    *(_QWORD *)&dword_5AD658 = 0;
    byte_5AD644 = 1;
    goto LABEL_8;
  }
  clock_gettime(1, (struct timespec *)&dword_5AD650);
  v0 = 1000LL * (dword_5AD650 - dword_5AD648);
  v2 = v0 + (dword_5AD654 - dword_5AD64C) / 1000000;
  if ( *(__int64 *)&dword_5AD658 < 20
    && (LODWORD(v0) = v0 + (dword_5AD654 - dword_5AD64C) / 1000000, v2 >= dword_59B1D4)
    || *(__int64 *)&dword_5AD658 >= 20 && (LODWORD(v0) = v2, v2 >= dword_59B1D8) )
  {
    clock_gettime(1, (struct timespec *)&dword_5AD648);
    ++*(_QWORD *)&dword_5AD658;
LABEL_8:
    if ( g_fan_control_info == 1 )
    {
      v4 = sub_B1D10();
      LODWORD(v0) = fan_pwm_set(v4);
    }
    else if ( g_fan_control_info )
    {
      if ( g_fan_control_info == 2 )
      {
        v5 = sub_B1FA8(*(_QWORD *)&dword_5AD658 < 21LL);
        LODWORD(v0) = fan_pwm_set(v5);
      }
      else
      {
        LODWORD(v0) = fan_pwm_set(0x64u);
      }
    }
    else
    {
      v3 = sub_B1B18();
      LODWORD(v0) = fan_pwm_set(v3);
    }
  }
  return v0;
}
