json_t *__fastcall json_load_file(const char *a1, unsigned int a2, json_error_t *a3)
{
  int *v4; // r0
  char *v5; // r0
  json_t *v10; // [sp+18h] [bp-Ch]
  FILE *stream; // [sp+1Ch] [bp-8h]

  jsonp_error_init(a3, a1);
  if ( a1 )
  {
    stream = fopen(a1, "rb");
    if ( stream )
    {
      v10 = json_loadf((int)stream, a2, a3);
      fclose(stream);
      return v10;
    }
    else
    {
      v4 = _errno_location();
      v5 = strerror(*v4);
      sub_4ED28((int)a3, 0, 3, "unable to open %s: %s", a1, v5);
      return 0;
    }
  }
  else
  {
    sub_4ED28((int)a3, 0, 4, "wrong arguments");
    return 0;
  }
}
