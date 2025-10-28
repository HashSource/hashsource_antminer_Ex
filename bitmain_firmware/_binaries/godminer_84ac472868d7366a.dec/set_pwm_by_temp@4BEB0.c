int set_pwm_by_temp()
{
  float v0; // s10
  double v1; // d7
  int v2; // r3
  bool v3; // cf
  __int64 v4; // r6
  int v5; // r0
  float v6; // s13
  int v7; // r8
  float v8; // s15
  float v9; // s14
  float v10; // s16
  float v11; // s14
  signed int v12; // r0
  __int64 v13; // r6
  __int64 v14; // r2
  int result; // r0
  int v16; // r0
  int v17; // r4
  bool v18; // cc
  double v19; // d5
  int v20; // r0
  int v21; // r0

  if ( !byte_166368 )
  {
    clock_gettime(1, &stru_16636C);
    byte_166368 = 1;
    v2 = dword_1633EC;
    *(_QWORD *)&dword_166380 = 0;
    v3 = dword_1633EC != 0;
    if ( dword_1633EC != 1 )
      goto LABEL_3;
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_166374);
  v13 = *(_QWORD *)&dword_166380;
  v14 = 1000LL * (dword_166374 - stru_16636C.tv_sec) + (dword_166378 - stru_16636C.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_166380 >= 20 )
  {
    result = dword_16340C;
    if ( v14 >= dword_16340C )
    {
LABEL_18:
      clock_gettime(1, &stru_16636C);
      *(_QWORD *)&dword_166380 = v13 + 1;
      v2 = dword_1633EC;
      v3 = dword_1633EC != 0;
      if ( dword_1633EC != 1 )
      {
LABEL_3:
        if ( !v3 )
        {
          v21 = sub_4BAE0();
          if ( v21 <= 18 )
          {
            v17 = 40;
            goto LABEL_27;
          }
          if ( (unsigned int)(v21 - 19) <= 0xE )
          {
            v20 = v21 - 18;
            v19 = 0.666666667;
            v1 = 40.0;
          }
          else
          {
            if ( (unsigned int)(v21 - 34) <= 4 )
            {
              v17 = 50;
              goto LABEL_27;
            }
            if ( (unsigned int)(v21 - 39) <= 9 )
            {
              v17 = (int)((double)(v21 - 38) + 50.0);
              goto LABEL_27;
            }
            if ( (unsigned int)(v21 - 49) > 6 )
            {
              v17 = 100;
              goto LABEL_27;
            }
            v20 = v21 - 48;
            v19 = 5.71428571;
            v1 = 60.0;
          }
          goto LABEL_26;
        }
        if ( v2 == 2 )
        {
          v4 = *(_QWORD *)&dword_166380;
          flt_166394 = (float)get_temp(dword_163400);
          v5 = fan_pwm_get();
          v6 = flt_1663AC;
          v7 = v5;
          if ( v4 < 21 )
            v0 = flt_166398;
          v8 = flt_166390 - flt_166394;
          if ( v4 >= 21 )
            v0 = flt_16639C;
          flt_1663A8 = flt_166390 - flt_166394;
          v9 = (float)(v8 - (float)(flt_1663AC + flt_1663AC)) + flt_1663B0;
          flt_1663B0 = flt_1663AC;
          flt_1663AC = flt_166390 - flt_166394;
          v10 = (float)((float)(v8 * flt_1663A0) + (float)((float)(v8 - v6) * v0)) + (float)(v9 * flt_1663A4);
          if ( get_temp(dword_1633F8) < dword_1633FC )
            v11 = (float)((int)v10 + v7);
          else
            v11 = 100.0;
          if ( v11 < flt_16638C )
          {
            if ( flt_16638C <= flt_166388 )
            {
              v12 = (int)flt_16638C;
              return fan_pwm_set(v12);
            }
          }
          else if ( v11 <= flt_166388 )
          {
            v12 = (int)v11;
            return fan_pwm_set(v12);
          }
          v12 = (int)flt_166388;
          return fan_pwm_set(v12);
        }
        v12 = 100;
        return fan_pwm_set(v12);
      }
LABEL_19:
      v16 = sub_4BAE0();
      if ( v16 <= 13 )
      {
        v17 = 20;
LABEL_27:
        if ( get_temp(dword_1633F8) >= dword_1633FC )
          v17 = 100;
        if ( v17 < dword_1633F0 )
          v12 = dword_1633F0;
        else
          v12 = v17;
        if ( v12 >= dword_1633F4 )
          v12 = dword_1633F4;
        return fan_pwm_set(v12);
      }
      v18 = (unsigned int)(v16 - 14) > 0x12;
      if ( (unsigned int)(v16 - 14) > 0x12 )
      {
        v19 = 1.42857143;
        v20 = v16 - 32;
        v1 = 60.0;
      }
      else
      {
        v19 = 2.10526316;
        v20 = v16 - 13;
      }
      if ( !v18 )
        v1 = 20.0;
LABEL_26:
      v17 = (int)(v1 + (double)v20 * v19);
      goto LABEL_27;
    }
  }
  else
  {
    result = dword_163408;
    if ( v14 >= dword_163408 )
      goto LABEL_18;
  }
  return result;
}
