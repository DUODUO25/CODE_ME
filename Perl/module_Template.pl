use Template;
 
my $tt = Template->new;
 		
my %vars = (invoice => {
              number => '101',
              date   => '1st April 2004',
              client => 'Example Inc.',
              addr   => '1000 Example Road, Exampleton',
              lines  => [
                         {
                          desc  => 'Reversing polarity',
                          price => '1000'
                         },
                         {
                          desc  => 'Regeneration care',
                          price => '2000'
                         }
                        ]
                       });
 
$tt->process('template.tt', \%vars) or die $tt->error;