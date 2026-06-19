Select player_id , MIN(event_date) as first_login
from Activity group by player_id;

-- Min of the dates will be considererd and selected and group by will ensure no repeation occurs