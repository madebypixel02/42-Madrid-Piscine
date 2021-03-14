#ifndef RUSH02_H

# define RUSH02_H

struct	s_kv
{
	unsigned int	key;
	char			*value;
};

int			ft_key_atoi(char *str);
int			ft_max_len(char *str);
int			ft_isspace(char *str);
int			ft_power_10(int exp);
int			ft_key_strlen(char *str);
int			ft_strlen(char *str);
void		ft_find(int digit, struct s_kv *dict);
void		ft_to_str(char *nbr, struct s_kv *dict);
void		millar(char *str, int i, int m, struct s_kv *dict);
void		cent(char *str, int i, int m, struct s_kv *dict);
void		dec(char *str, int i, int m, struct s_kv *dict);
int			ft_nbrlen(int nbr);
int			ft_input_atoi(char *str);
int			ft_count_lines(char *str);
int			ft_check_args(int argc, char **str, char *file);
struct s_kv	*ft_add_values(char *str, struct s_kv	*dictionary, int max_len);
struct s_kv	*ft_create_dict(char *str, int size);
void		ft_print_error(void);
#endif
