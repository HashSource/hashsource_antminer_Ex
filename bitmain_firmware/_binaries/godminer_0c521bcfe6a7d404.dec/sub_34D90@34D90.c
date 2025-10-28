int __fastcall sub_34D90(_DWORD *a1, int a2, int a3, int a4, int (__fastcall *a5)(__int16 *, int, int), int a6)
{
  int v7; // r5
  int v8; // r9
  unsigned int v9; // r8
  char v11; // r10
  char *v12; // r3
  int v13; // r3
  int v14; // r7
  int v16; // r5
  int v17; // r0
  __int64 v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r11
  int v22; // r6
  int v23; // r10
  const char *v24; // r9
  size_t v25; // r0
  bool v26; // zf
  int v27; // r0
  int v28; // r0
  unsigned int v29; // r10
  int v30; // r6
  int v31; // r0
  bool v32; // cc
  int v33; // r0
  int v34; // r5
  int v35; // r10
  int v36; // r9
  unsigned int v37; // r7
  const char *v38; // t1
  int v39; // r10
  size_t v40; // r0
  char *v41; // [sp+8h] [bp-94h]
  int v42; // [sp+8h] [bp-94h]
  int v43; // [sp+Ch] [bp-90h]
  int v44; // [sp+Ch] [bp-90h]
  int v45; // [sp+Ch] [bp-90h]
  int v46; // [sp+10h] [bp-8Ch]
  int nmemb; // [sp+14h] [bp-88h]
  int v48; // [sp+18h] [bp-84h]
  void *base; // [sp+1Ch] [bp-80h]
  void *basea; // [sp+1Ch] [bp-80h]
  int v51; // [sp+20h] [bp-7Ch]
  int v52; // [sp+24h] [bp-78h]
  int v53; // [sp+28h] [bp-74h]
  __int16 s[52]; // [sp+34h] [bp-68h] BYREF

  if ( !a1 )
    return -1;
  v7 = a4;
  v8 = a2 & 0x10000;
  v9 = a2 & 0xFFFEFFFF;
  v11 = a2;
  switch ( *a1 )
  {
    case 0:
      v12 = ":";
      if ( (a2 & 0x20) == 0 )
        v12 = ": ";
      v41 = v12;
      if ( (a2 & 0x20) != 0 )
        v13 = 1;
      else
        v13 = 2;
      v43 = v13;
      v14 = sub_34D38(v7, a1, (char *)s);
      if ( v14 )
        return -1;
      v46 = json_object_iter(a1);
      if ( v8 )
      {
        if ( !v46 )
          goto LABEL_47;
      }
      else
      {
        if ( a5((__int16 *)"{", 1, a6) )
          return -1;
        if ( !v46 )
        {
          hashtable_del(v7, (char *)s);
          return a5((__int16 *)"}", 1, a6);
        }
      }
      v48 = a3 + 1;
      v14 = sub_34C88(v9, a3 + 1, 0, a5, a6);
      if ( v14 )
        return -1;
      if ( (v11 & 0x80) == 0 )
      {
        v21 = v43;
        v44 = a3;
        v22 = v46;
        base = (void *)v8;
        while ( 1 )
        {
          v23 = json_object_iter_next(a1, v22);
          v24 = (const char *)json_object_iter_key(v22);
          v25 = strlen(v24);
          sub_34A00((int)v24, v25, (int (__fastcall *)(const char *, int, int))a5, a6, v9);
          v26 = a5((__int16 *)v41, v21, a6) == 0;
          v27 = v22;
          v22 = v23;
          if ( !v26 )
            return -1;
          v28 = json_object_iter_value(v27);
          if ( sub_34D90(v28, v9, v48, v7, a5, a6) )
            return -1;
          if ( !v23 )
          {
            v8 = (int)base;
            v14 = 0;
            if ( !sub_34C88(v9, v44, 0, a5, a6) )
              goto LABEL_65;
            return -1;
          }
          if ( a5(&word_12FDB4, 1, a6) || sub_34C88(v9, v48, 1, a5, a6) )
            return -1;
        }
      }
      nmemb = json_object_size(a1);
      v33 = jsonp_malloc(4 * nmemb);
      basea = (void *)v33;
      if ( !v33 )
        return -1;
      v51 = v7;
      v34 = v46;
      v35 = v33 - 4;
      v52 = v33 - 4;
      do
      {
        *(_DWORD *)(v35 + 4) = json_object_iter_key(v34);
        v35 += 4;
        v34 = json_object_iter_next(a1, v34);
      }
      while ( v34 );
      v7 = v51;
      qsort(basea, nmemb, 4u, (__compar_fn_t)sub_349F4);
      if ( nmemb )
      {
        v53 = v8;
        v36 = v52;
        v37 = 0;
        do
        {
          v38 = *(const char **)(v36 + 4);
          v36 += 4;
          v39 = json_object_get(a1, v38);
          v40 = strlen(v38);
          sub_34A00((int)v38, v40, (int (__fastcall *)(const char *, int, int))a5, a6, v9);
          if ( a5((__int16 *)v41, v43, a6) || sub_34D90(v39, v9, v48, v51, a5, a6) )
          {
LABEL_70:
            v14 = -1;
            jsonp_free(basea);
            return v14;
          }
          v32 = nmemb - 1 > v37++;
          if ( v32 )
          {
            if ( a5(&word_12FDB4, 1, a6) || sub_34C88(v9, v48, 1, a5, a6) )
              goto LABEL_70;
          }
          else if ( sub_34C88(v9, a3, 0, a5, a6) )
          {
            goto LABEL_70;
          }
        }
        while ( nmemb != v37 );
        v14 = 0;
        v8 = v53;
      }
      jsonp_free(basea);
LABEL_65:
      hashtable_del(v7, (char *)s);
      if ( !v8 )
        return a5((__int16 *)"}", 1, a6);
      return v14;
    case 1:
      v14 = sub_34D38(a4, a1, (char *)s);
      if ( v14 )
        return -1;
      v42 = json_array_size(a1);
      if ( v8 )
      {
        if ( !v42 )
        {
LABEL_47:
          hashtable_del(v7, (char *)s);
          return v14;
        }
      }
      else
      {
        if ( a5((__int16 *)"[", 1, a6) )
          return -1;
        if ( !v42 )
        {
          hashtable_del(v7, (char *)s);
          return a5((__int16 *)"]", 1, a6);
        }
      }
      v29 = sub_34C88(v9, a3 + 1, 0, a5, a6);
      if ( v29 )
        return -1;
      v45 = a3;
      v30 = a3 + 1;
      break;
    case 2:
      v16 = json_string_value(a1);
      v17 = json_string_length(a1);
      return sub_34A00(v16, v17, (int (__fastcall *)(const char *, int, int))a5, a6, v9);
    case 3:
      v18 = json_integer_value(a1);
      v19 = snprintf((char *)s, 0x64u, "%lld", v18);
      return a5(s, v19, a6);
    case 4:
      json_real_value(a1);
      v20 = jsonp_dtostr(s, 100, (unsigned __int16)v9 >> 11);
      if ( v20 < 0 )
        return -1;
      return a5(s, v20, a6);
    case 5:
      return a5((__int16 *)"true", 4, a6);
    case 6:
      return a5((__int16 *)"false", 5, a6);
    case 7:
      return a5((__int16 *)"null", 4, a6);
    default:
      return -1;
  }
  do
  {
    v31 = json_array_get(a1, v29);
    v14 = sub_34D90(v31, v9, v30, v7, a5, a6);
    if ( v14 )
      return -1;
    v32 = v42 - 1 > v29++;
    if ( v32 )
    {
      if ( a5(&word_12FDB4, 1, a6) || sub_34C88(v9, v30, 1, a5, a6) )
        return -1;
    }
    else if ( sub_34C88(v9, v45, 0, a5, a6) )
    {
      return -1;
    }
  }
  while ( v42 != v29 );
  hashtable_del(v7, (char *)s);
  if ( !v8 )
    return a5((__int16 *)"]", 1, a6);
  return v14;
}
