json_t *__fastcall json_load_callback(int a1, int a2, unsigned int a3, json_error_t *a4)
{
  _DWORD v10[260]; // [sp+10h] [bp-464h] BYREF
  _BYTE v11[76]; // [sp+420h] [bp-54h] BYREF
  json_t *v12; // [sp+46Ch] [bp-8h]

  memset(v10, 0, sizeof(v10));
  v10[258] = a1;
  v10[259] = a2;
  jsonp_error_init(a4, "<callback>");
  if ( a1 )
  {
    if ( lex_init((int)v11, 331808, a3, (int)v10) )
    {
      return 0;
    }
    else
    {
      v12 = sub_5098C((unsigned int)v11, a3, (int)a4);
      lex_close((lex_t *)v11);
      return v12;
    }
  }
  else
  {
    sub_4ED28((int)a4, 0, 4, "wrong arguments");
    return 0;
  }
}
