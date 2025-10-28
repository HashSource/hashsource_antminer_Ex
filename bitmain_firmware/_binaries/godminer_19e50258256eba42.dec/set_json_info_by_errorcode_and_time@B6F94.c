int __fastcall set_json_info_by_errorcode_and_time(json_t *a1, const char *a2, time_t a3)
{
  int result; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  time_t timer; // [sp+1Ch] [bp-348h] BYREF
  const char *v9; // [sp+20h] [bp-344h]
  json_t *v10; // [sp+24h] [bp-340h]
  struct tm tp; // [sp+28h] [bp-33Ch] BYREF
  char s[256]; // [sp+54h] [bp-310h] BYREF
  char v13[256]; // [sp+154h] [bp-210h] BYREF
  char v14[256]; // [sp+254h] [bp-110h] BYREF
  json_t *v15; // [sp+354h] [bp-10h]

  v10 = a1;
  v9 = a2;
  timer = a3;
  v15 = 0;
  if ( byte_5AD6D4 == 1 || (result = miner_6060info_errorcode_init(), (unsigned __int8)result == 1) )
  {
    result = get_reason_suggestion_from_json_by_errorcode(v9, v14, v13, 0x100u);
    if ( result )
    {
      v15 = (json_t *)json_object();
      v4 = (json_t *)json_string(v9);
      json_object_set_new(v15, "code", v4);
      v5 = (json_t *)json_string(v14);
      json_object_set_new(v15, "cause", v5);
      v6 = (json_t *)json_string(v13);
      json_object_set_new(v15, "suggestion", v6);
      localtime_r(&timer, &tp);
      snprintf(
        s,
        0x100u,
        "%d%02d%02d%02d%02d%02d",
        tp.tm_year + 1900,
        tp.tm_mon + 1,
        tp.tm_mday,
        tp.tm_hour,
        tp.tm_min,
        tp.tm_sec);
      v7 = (json_t *)json_string(s);
      json_object_set_new(v15, "timestamp", v7);
      return json_array_append_new(v10, v15);
    }
  }
  return result;
}
