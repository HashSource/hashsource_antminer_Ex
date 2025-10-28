int check_fan_valiad()
{
  int v0; // r4
  _DWORD *v1; // r12
  int v2; // r3
  _DWORD *v3; // r5
  int v4; // r1
  unsigned int v5; // r6
  int max_num; // r4
  unsigned int v7; // r11
  int v8; // r5
  int i; // r7
  int v10; // r0
  int realtime_speed; // r10
  char *v12; // r1
  int v13; // r10
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v18; // [sp+38h] [bp-102Ch]
  _DWORD *v19; // [sp+3Ch] [bp-1028h]
  _DWORD v20[7]; // [sp+40h] [bp-1024h] BYREF
  int v21; // [sp+5Ch] [bp-1008h]
  char v22[4100]; // [sp+60h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  LOWORD(v0) = 17604;
  HIWORD(v0) = (unsigned int)"ux_CKB2" >> 16;
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  LOWORD(v1) = -14512;
  LOWORD(v2) = 17644;
  HIWORD(v1) = (unsigned int)&unk_16E68C >> 16;
  HIWORD(v2) = (unsigned int)&unk_136D58 >> 16;
  v3 = v1;
  v19 = v1;
  logfmt_raw(v22, 0x1000u, 0, v2, v0);
  V_UNLOCK();
  LOWORD(v4) = 17656;
  HIWORD(v4) = (unsigned int)&unk_136D64 >> 16;
  v18 = v0 + 20;
  zlog(*v3, v4, 143, v0 + 20, 16, 34, 60, v22);
  v5 = 0;
  max_num = fan_get_max_num();
  while ( 1 )
  {
    v7 = ++v5 % 0x14;
    if ( max_num <= 0 )
      break;
    v8 = 0;
    for ( i = 0; i != max_num; ++i )
    {
      v10 = i;
      realtime_speed = fan_get_realtime_speed(v10);
      if ( realtime_speed != -1 && fan_get_check_fan_speed() <= realtime_speed )
        ++v8;
    }
    usleep((__useconds_t)&loc_7A120);
    if ( v7 )
    {
      if ( max_num <= v8 )
        goto LABEL_16;
      goto LABEL_12;
    }
LABEL_15:
    fan_pwm_set_max();
    if ( max_num <= v8 )
      goto LABEL_16;
LABEL_12:
    if ( v5 == 120 * (v5 / 0x78) )
    {
      V_LOCK();
      LOWORD(v12) = -22980;
      HIWORD(v12) = (unsigned int)&unk_13CFAC >> 16;
      V_STR(v20, v12, "fan lost");
      LOWORD(v13) = 17800;
      HIWORD(v13) = (unsigned int)"release/build/godminer-origin_master/backend/backend_ckb2/backend_ckb2.c" >> 16;
      logfmt_raw(
        v22,
        0x1000u,
        v5 % 0x78,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        v13,
        v18,
        v8);
      V_UNLOCK();
      LOWORD(v14) = 17656;
      HIWORD(v14) = (unsigned int)&unk_136D64 >> 16;
      zlog(*v19, v14, 143, "check_fan_valiad", 16, 52, 100, v22);
      power_off();
    }
  }
  usleep((__useconds_t)&loc_7A120);
  if ( !v7 )
  {
    v8 = 0;
    goto LABEL_15;
  }
  v8 = 0;
LABEL_16:
  V_LOCK();
  LOWORD(v15) = 17816;
  HIWORD(v15) = (unsigned int)"dminer-origin_master/backend/backend_ckb2/backend_ckb2.c" >> 16;
  logfmt_raw(v22, 0x1000u, 0, v15, v18, v8);
  V_UNLOCK();
  LOWORD(v16) = 17656;
  HIWORD(v16) = (unsigned int)&unk_136D64 >> 16;
  zlog(*v19, v16, 143, "check_fan_valiad", 16, 57, 60, v22);
  return fan_pwm_set(0x3Cu);
}
