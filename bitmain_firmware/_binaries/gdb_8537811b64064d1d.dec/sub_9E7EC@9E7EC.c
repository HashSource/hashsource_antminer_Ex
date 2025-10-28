int __fastcall sub_9E7EC(int result)
{
  if ( *(_DWORD *)(result + 20) > (unsigned int)dword_477C84 )
    sub_94708("object size is larger than varsize-limit");
  return result;
}
