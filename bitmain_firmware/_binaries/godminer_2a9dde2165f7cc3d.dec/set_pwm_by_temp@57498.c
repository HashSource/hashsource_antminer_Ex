int set_pwm_by_temp()
{
  double v0; // d7
  int v1; // r3
  bool v2; // cf
  __int64 v3; // r8
  int v4; // r7
  float v5; // s14
  float v6; // s11
  float v7; // s13
  int v8; // r6
  int temp; // r0
  signed int v10; // r0
  __int64 v11; // r6
  __int64 v12; // r2
  int result; // r0
  int v14; // r0
  int v15; // r4
  bool v16; // cc
  double v17; // d5
  int v18; // r0
  int v19; // r0

  if ( !byte_174370 )
  {
    clock_gettime(1, &stru_174374);
    byte_174370 = 1;
    v1 = dword_1716D8;
    *(_QWORD *)&dword_174388 = 0;
    v2 = dword_1716D8 != 0;
    if ( dword_1716D8 != 1 )
      goto LABEL_3;
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_17437C);
  v11 = *(_QWORD *)&dword_174388;
  v12 = 1000LL * (dword_17437C - stru_174374.tv_sec) + (dword_174380 - stru_174374.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_174388 < 20 )
  {
    result = dword_1716F4;
    if ( v12 < dword_1716F4 )
      return result;
LABEL_18:
    clock_gettime(1, &stru_174374);
    *(_QWORD *)&dword_174388 = v11 + 1;
    v1 = dword_1716D8;
    v2 = dword_1716D8 != 0;
    if ( dword_1716D8 != 1 )
    {
LABEL_3:
      if ( !v2 )
      {
        v19 = sub_56D98();
        if ( v19 <= 18 )
        {
          v15 = 40;
          goto LABEL_27;
        }
        if ( (unsigned int)(v19 - 19) <= 0xE )
        {
          v18 = v19 - 18;
          v17 = 0.666666667;
          v0 = 40.0;
        }
        else
        {
          if ( (unsigned int)(v19 - 34) <= 4 )
          {
            v15 = 50;
            goto LABEL_27;
          }
          if ( (unsigned int)(v19 - 39) <= 9 )
          {
            v15 = (int)((double)(v19 - 38) + 50.0);
            goto LABEL_27;
          }
          if ( (unsigned int)(v19 - 49) > 6 )
          {
            v15 = 100;
            goto LABEL_27;
          }
          v18 = v19 - 48;
          v17 = 5.71428571;
          v0 = 60.0;
        }
        goto LABEL_26;
      }
      if ( v1 == 2 )
      {
        v3 = *(_QWORD *)&dword_174388;
        flt_17439C = (float)get_temp(dword_1716EC);
        v4 = fan_pwm_get();
        v5 = flt_174398 - flt_17439C;
        flt_1743B0 = flt_174398 - flt_17439C;
        v6 = (float)(flt_174398 - flt_17439C) - flt_1743B4;
        v7 = (float)((float)(flt_174398 - flt_17439C) - (float)(flt_1743B4 + flt_1743B4)) + flt_1743B8;
        if ( v3 < 21 )
        {
          flt_1743B8 = flt_1743B4;
          flt_1743B4 = flt_174398 - flt_17439C;
          v8 = (int)(float)((float)((float)(v5 * flt_1743A8) + (float)(v6 * flt_1743A0)) + (float)(v7 * flt_1743AC));
          if ( v8 < -20 )
            v8 = -20;
        }
        else
        {
          flt_1743B8 = flt_1743B4;
          flt_1743B4 = flt_174398 - flt_17439C;
          v8 = (int)(float)((float)((float)(v5 * flt_1743A8) + (float)(v6 * flt_1743A4)) + (float)(v7 * flt_1743AC));
        }
        temp = get_temp(dword_1716E4);
        if ( temp >= dword_1716E8 )
          v5 = 100.0;
        else
          v8 += v4;
        if ( temp < dword_1716E8 )
          v5 = (float)v8;
        if ( v5 < flt_174394 )
        {
          if ( flt_174390 >= flt_174394 )
          {
            v10 = (int)flt_174394;
            return fan_pwm_set(v10);
          }
        }
        else if ( v5 <= flt_174390 )
        {
          v10 = (int)v5;
          return fan_pwm_set(v10);
        }
        v10 = (int)flt_174390;
        return fan_pwm_set(v10);
      }
      v10 = 100;
      return fan_pwm_set(v10);
    }
LABEL_19:
    v14 = sub_56D98();
    if ( v14 <= 13 )
    {
      v15 = 20;
LABEL_27:
      if ( get_temp(dword_1716E4) >= dword_1716E8 )
        v15 = 100;
      if ( v15 < dword_1716DC )
        v10 = dword_1716DC;
      else
        v10 = v15;
      if ( v10 >= dword_1716E0 )
        v10 = dword_1716E0;
      return fan_pwm_set(v10);
    }
    v16 = (unsigned int)(v14 - 14) > 0x12;
    if ( (unsigned int)(v14 - 14) > 0x12 )
    {
      v17 = 1.42857143;
      v18 = v14 - 32;
      v0 = 60.0;
    }
    else
    {
      v17 = 2.10526316;
      v18 = v14 - 13;
    }
    if ( !v16 )
      v0 = 20.0;
LABEL_26:
    v15 = (int)(v0 + (double)v18 * v17);
    goto LABEL_27;
  }
  result = dword_1716F8;
  if ( v12 >= dword_1716F8 )
    goto LABEL_18;
  return result;
}
