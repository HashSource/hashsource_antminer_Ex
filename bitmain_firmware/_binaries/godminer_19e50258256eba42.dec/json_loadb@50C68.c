json_t *__fastcall json_loadb(int a1, int a2, unsigned int a3, json_error_t *a4)
{
  _DWORD v10[3]; // [sp+14h] [bp-60h] BYREF
  _BYTE v11[76]; // [sp+20h] [bp-54h] BYREF
  json_t *v12; // [sp+6Ch] [bp-8h]

  jsonp_error_init(a4, "<buffer>");
  if ( a1 )
  {
    v10[0] = a1;
    v10[2] = 0;
    v10[1] = a2;
    if ( lex_init((int)v11, 330732, a3, (int)v10) )
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
