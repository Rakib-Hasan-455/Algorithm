 # i n c l u d e   < i o s t r e a m >  
  
 u s i n g   n a m e s p a c e   s t d ;  
  
 i n t   f a c t o r i a l ( i n t   n ) {  
 	 i f ( n   = =   0 ) {  
 	 	 r e t u r n   1 ;  
 	 }   e l s e   {  
 	 	 r e t u r n   ( n * f a c t o r i a l ( n - 1 ) ) ;  
 	 }  
 }  
  
 i n t   m a i n ( i n t   a r g c ,   c h a r   c o n s t   * a r g v [ ] )  
 {  
 	 i n t   n ;  
 	 c i n   > >   n ;  
 	 c o u t   < <   " f a c t o r i a l   =   "   < <   f a c t o r i a l ( n )   < <   e n d l ;  
 	 r e t u r n   0 ;  
 }