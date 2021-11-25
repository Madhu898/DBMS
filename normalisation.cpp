// Refer geeks for geeks better understanding 

to overcome the problems of anomlaies
   a.insertion anolamy
   b.deletion anolamy 
   c.updation anolamy
 and to reduce data redundancy we perform normalisation in data base management system 
 
 steps involved are :
 1.First Normal Form (1NF):  (no multivalued values in single attribute /atomic values should be present )
   If a relation contains a composite or multi-valued attribute, it violates the first normal form
   
   
   
   
 2. 2nd normal form (no partial dependency i.e. (ab -> c) valid bu (a ->c ) its invalid )
     Partial Dependency – If the proper subset of candidate key determines non-prime attribute, it is called partial dependency.

                                                Example 1 – Consider table-3 as following below.
                                               
                                              STUD_NO            COURSE_NO        COURSE_FEE
                                                1                     C1                  1000
                                                2                     C2                  1500
                                                1                     C4                  2000
                                                4                     C3                  1000
                                                4                     C1                  1000
                                                2                     C5                  2000
     
                                  the above table can be made to 2nd normal form in the fallowing ways
     
                                                Table 1                                    Table 2
                                    STUD_NO            COURSE_NO          COURSE_NO                COURSE_FEE     
                                    1                 C1                  C1                        1000
                                    2                 C2                  C2                        1500
                                    1                 C4                  C3                        1000
                                    4                 C3                  C4                        2000
                                    4                 C1                  C5                        2000 

 3. 3rd normal form (no transitive depedency (non prime attribute should not point the non prime attribute )
                     
                     
                     
                     
                     
                     
                     
 4.boyce codd normal form( LHS should be always prime attributes in a dependecy functio )
                     
                     
                     
         
