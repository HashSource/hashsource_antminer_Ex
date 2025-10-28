char *__fastcall json_dumps(_DWORD *a1, int a2)
{
  const char *v3; // r0
  _BYTE v7[12]; // [sp+8h] [bp-14h] BYREF
  char *v8; // [sp+14h] [bp-8h]

  if ( strbuffer_init((strbuffer_t *)v7) )
    return 0;
  if ( json_dump_callback(a1, (int (__fastcall *)(const char *, int, int))dump_to_strbuffer, (int)v7, a2) )
  {
    v8 = 0;
  }
  else
  {
    v3 = strbuffer_value((const strbuffer_t *)v7);
    v8 = jsonp_strdup(v3);
  }
  strbuffer_close((strbuffer_t *)v7);
  return v8;
}
