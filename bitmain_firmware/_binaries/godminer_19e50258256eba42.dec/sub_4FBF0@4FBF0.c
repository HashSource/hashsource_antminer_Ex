int __fastcall sub_4FBF0(int a1, int a2, json_error_t *a3)
{
  int save; // [sp+8h] [bp-24h]
  int v7; // [sp+8h] [bp-24h]
  double v9; // [sp+10h] [bp-1Ch] BYREF
  char *endptr; // [sp+18h] [bp-14h] BYREF
  char *nptr; // [sp+1Ch] [bp-10h]
  signed __int64 v12; // [sp+20h] [bp-Ch]

  save = a2;
  *(_DWORD *)(a1 + 60) = -1;
  if ( a2 == 45 )
    save = lex_get_save((lex_t *)a1, a3);
  if ( save == 48 )
  {
    save = lex_get_save((lex_t *)a1, a3);
    if ( save > 47 && save <= 57 )
    {
LABEL_6:
      sub_4F3A8((_DWORD *)a1, save);
      return -1;
    }
  }
  else
  {
    if ( save <= 47 || save > 57 )
      goto LABEL_6;
    do
      save = lex_get_save((lex_t *)a1, a3);
    while ( save > 47 && save <= 57 );
  }
  if ( (*(_DWORD *)(a1 + 52) & 8) != 0 || save == 46 || save == 69 || save == 101 )
  {
    if ( save == 46 )
    {
      v7 = lex_get((lex_t *)a1, a3);
      if ( v7 <= 47 || v7 > 57 )
      {
        lex_unget((lex_t *)a1, v7);
        return -1;
      }
      lex_save((lex_t *)a1, v7);
      do
        save = lex_get_save((lex_t *)a1, a3);
      while ( save > 47 && save <= 57 );
    }
    if ( save == 69 || save == 101 )
    {
      save = lex_get_save((lex_t *)a1, a3);
      if ( save == 43 || save == 45 )
        save = lex_get_save((lex_t *)a1, a3);
      if ( save <= 47 || save > 57 )
        goto LABEL_6;
      do
        save = lex_get_save((lex_t *)a1, a3);
      while ( save > 47 && save <= 57 );
    }
    sub_4F3A8((_DWORD *)a1, save);
    if ( jsonp_strtod((strbuffer_t *)(a1 + 40), &v9) )
    {
      sub_4ED28((int)a3, a1, 15, "real number overflow");
      return -1;
    }
    *(_DWORD *)(a1 + 60) = 258;
    *(double *)(a1 + 64) = v9;
    return 0;
  }
  else
  {
    sub_4F3A8((_DWORD *)a1, save);
    nptr = (char *)strbuffer_value((const strbuffer_t *)(a1 + 40));
    *_errno_location() = 0;
    v12 = strtoll(nptr, &endptr, 10);
    if ( *_errno_location() == 34 )
    {
      if ( v12 >= 0 )
      {
        *_errno_location() = 0;
        v12 = strtoull(nptr, &endptr, 10);
        if ( *_errno_location() == 34 )
        {
          sub_4ED28((int)a3, a1, 15, "too big integer");
          return -1;
        }
      }
      else
      {
        sub_4ED28((int)a3, a1, 15, "too big negative integer");
      }
    }
    *(_DWORD *)(a1 + 60) = 257;
    *(_QWORD *)(a1 + 64) = v12;
    return 0;
  }
}
