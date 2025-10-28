json_t *__fastcall sub_5098C(unsigned int a1, unsigned int a2, int a3)
{
  json_t *v8; // [sp+14h] [bp-8h]

  *(_DWORD *)(a1 + 56) = 0;
  lex_scan((lex_t *)a1, (json_error_t *)a3);
  if ( (a2 & 4) != 0 || *(_DWORD *)(a1 + 60) == 91 || *(_DWORD *)(a1 + 60) == 123 )
  {
    v8 = sub_50720(COERCE_DOUBLE(__PAIR64__(a2, a1)), (json_error_t *)a3);
    if ( v8 )
    {
      if ( (a2 & 2) != 0 || (lex_scan((lex_t *)a1, (json_error_t *)a3), !*(_DWORD *)(a1 + 60)) )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 36);
        return v8;
      }
      else
      {
        sub_4ED28(a3, a1, 7, "end of file expected");
        sub_4ECC0((int)v8);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_4ED28(a3, a1, 8, "'[' or '{' expected");
    return 0;
  }
}
