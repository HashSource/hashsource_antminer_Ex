void __fastcall sub_1F7DFC(_DWORD *a1)
{
  ((void (__fastcall *)(_DWORD))loc_1F7B20)(*a1);
  if ( a1[1] )
    sub_1532FC(a1 + 1);
  sub_1F7D80((void (**)(void))a1[2]);
  free(a1);
}
